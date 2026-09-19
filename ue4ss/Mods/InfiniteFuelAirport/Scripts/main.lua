local function keepAirportFuelFull()
    local players = FindAllOf("PlayerCharacter_BP_C")
    if players then
        for _, player in ipairs(players) do
            if player:IsValid() then
                local inv = player.AirplaneItemInventory
                if inv and inv:IsValid() then
                    inv.CurrentFuelCapacity = inv.MaxFuelCapacity
                end
            end
        end
    end
end

LoopAsync(500, keepAirportFuelFull)
