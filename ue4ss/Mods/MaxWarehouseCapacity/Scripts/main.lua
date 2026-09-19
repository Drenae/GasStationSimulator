local MAX_CAPACITY = 999999

local function apply_max_capacity()
    local inventories = FindAllOf("InventoryComponent")
    if not inventories then
        return
    end

    for _, inventory in ipairs(inventories) do
        if inventory:IsValid() then
            local name = inventory:GetFullName()
            if name
                and string.find(name, "GSSPlayerState_BP_C", 1, true)
                and string.find(name, ".ItemInventory", 1, true)
            then
                inventory.MaxCapacity = MAX_CAPACITY
            end
        end
    end
end

ExecuteWithDelay(3000, apply_max_capacity)

LoopAsync(1000, function()
    apply_max_capacity()
    return false
end)
