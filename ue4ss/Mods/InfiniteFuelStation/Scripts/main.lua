local function keepStationFuelFull()
    local states = FindAllOf("GSSPlayerState_BP_C")
    if states then
        for _, state in ipairs(states) do
            if state:IsValid() then
                local inv = state.ItemInventory
                if inv and inv:IsValid() then
                    inv.CurrentFuelCapacity = inv.MaxFuelCapacity
                end
            end
        end
    end
end

LoopAsync(500, keepStationFuelFull)
