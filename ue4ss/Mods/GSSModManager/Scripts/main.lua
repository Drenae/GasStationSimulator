-- GSSModManager - live control bridge
-- Reads ../config.ini every 500 ms. No game assets are modified.

local defaults = {
    station_fuel = true,
    airport_fuel = true,
    max_traffic = true,
    max_contract_points = true,
    max_blueprints = true,
    cheap_employees = true,
    max_warehouse = true,
}

local cfg = {}
for k,v in pairs(defaults) do cfg[k]=v end

local originalWarehouse = {}
local originalEmployee = {}
local originalTaskCost = {}

local function read_config()
    local f = io.open("../config.ini", "r")
    if not f then return end
    for line in f:lines() do
        local k,v = line:match("^%s*([%w_]+)%s*=%s*([%w]+)%s*$")
        if k and cfg[k] ~= nil then
            v = v:lower()
            cfg[k] = (v == "1" or v == "true" or v == "on" or v == "yes")
        end
    end
    f:close()
end

local function station_fuel()
    if not cfg.station_fuel then return end
    for _,state in ipairs(FindAllOf("GSSPlayerState_BP_C") or {}) do
        if state:IsValid() then
            local inv=state.ItemInventory
            if inv and inv:IsValid() then inv.CurrentFuelCapacity=inv.MaxFuelCapacity end
        end
    end
end

local function airport_fuel()
    if not cfg.airport_fuel then return end
    for _,player in ipairs(FindAllOf("PlayerCharacter_BP_C") or {}) do
        if player:IsValid() then
            local inv=player.AirplaneItemInventory
            if inv and inv:IsValid() then inv.CurrentFuelCapacity=inv.MaxFuelCapacity end
        end
    end
end

local function contract_points()
    if not cfg.max_contract_points then return end
    for _,state in ipairs(FindAllOf("GSSPlayerState_BP_C") or {}) do
        if state:IsValid() then
            local current=state:GetContractPoints()
            local delta=999-current
            if delta~=0 then state:AddContractPoints(delta) end
        end
    end
end

local function blueprints()
    if not cfg.max_blueprints then return end
    local managers=FindAllOf("AirstripRandomDialoguesManager") or {}
    local states=FindAllOf("GSSPlayerState_BP_C") or {}
    local manager,state
    for _,m in ipairs(managers) do if m:IsValid() then manager=m break end end
    for _,s in ipairs(states) do if s:IsValid() then state=s break end end
    if not manager or not state then return end
    local inv=state.ItemInventory
    local bp=manager.BuildingBlueprintClassItem
    if not inv or not inv:IsValid() then return end
    local current=inv:GetAmountOfItemSoftClass(bp)
    for i=1,math.max(0,50-current) do manager:AddBlueprintToInventory(inv,bp) end
end

local function warehouse()
    for _,inv in ipairs(FindAllOf("InventoryComponent") or {}) do
        if inv:IsValid() then
            local name=inv:GetFullName()
            if name and name:find("GSSPlayerState_BP_C",1,true) and name:find(".ItemInventory",1,true) then
                if originalWarehouse[name]==nil then originalWarehouse[name]=inv.MaxCapacity end
                if cfg.max_warehouse then
                    inv.MaxCapacity=999999
                elseif originalWarehouse[name] then
                    inv.MaxCapacity=originalWarehouse[name]
                end
            end
        end
    end
end

local employeeFields={
    "CleaningMoneyModify","FuelingMoneyModify","CashMoneyModify","GarageMoneyModify",
    "IceCreamVendingMoneyModify","CarWashMoneyModify","CinemaMoneyModify"
}

local function employees()
    for _,e in ipairs(FindAllOf("AICharacterBase") or {}) do
        if e:IsValid() then
            local name=e:GetFullName()
            if name and name:find("Employee_Base",1,true) then
                originalEmployee[name]=originalEmployee[name] or {}
                for _,field in ipairs(employeeFields) do
                    if originalEmployee[name][field]==nil then originalEmployee[name][field]=e[field] end
                    if cfg.cheap_employees then e[field]=0.0
                    elseif originalEmployee[name][field]~=nil then e[field]=originalEmployee[name][field] end
                end
            end
        end
    end
    for _,task in ipairs(FindAllOf("EmployeeTask") or {}) do
        if task:IsValid() then
            local name=task:GetFullName()
            if originalTaskCost[name]==nil then originalTaskCost[name]=task.MoneyPerMinute end
            if cfg.cheap_employees then task.MoneyPerMinute=0.0
            elseif originalTaskCost[name]~=nil then task.MoneyPerMinute=originalTaskCost[name] end
        end
    end
end

RegisterHook("/Script/GSS2.TrafficManagerSubsystem:GetCurrentTotalTrafficImpact",
    function(Context) return nil end,
    function(Context)
        if cfg.max_traffic then return 25 end
        return nil
    end)

RegisterHook("/Script/GSS2.TrafficSettings:GetSpawnTimeByTrafficImpact",
    function(Context, CurrentTrafficImpact)
        if cfg.max_traffic then CurrentTrafficImpact:set(25) end
    end,
    function(Context, CurrentTrafficImpact) return nil end)

LoopAsync(500,function()
    read_config()
    station_fuel()
    airport_fuel()
    contract_points()
    blueprints()
    warehouse()
    employees()
    return false
end)
