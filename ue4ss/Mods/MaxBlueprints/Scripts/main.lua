-- MaxBlueprints
-- Maintient au moins 999 Plans Air Strip dans l'inventaire du joueur.

local TARGET_PLANS = 50

local function keepBlueprintsHigh()
    local managers = FindAllOf("AirstripRandomDialoguesManager")
    local states = FindAllOf("GSSPlayerState_BP_C")

    if not managers or #managers == 0 then
        return
    end

    if not states or #states == 0 then
        return
    end

    local manager = nil
    local state = nil

    for _, m in ipairs(managers) do
        if m:IsValid() then
            manager = m
            break
        end
    end

    for _, s in ipairs(states) do
        if s:IsValid() then
            state = s
            break
        end
    end

    if not manager or not state then
        return
    end

    local inventory = state.ItemInventory
    local blueprint = manager.BuildingBlueprintClassItem

    if not inventory or not inventory:IsValid() then
        return
    end

    local current = inventory:GetAmountOfItemSoftClass(blueprint)

    if current < TARGET_PLANS then
        local missing = TARGET_PLANS - current

        for i = 1, missing do
            manager:AddBlueprintToInventory(inventory, blueprint)
        end
    end
end

LoopAsync(1000, keepBlueprintsHigh)
