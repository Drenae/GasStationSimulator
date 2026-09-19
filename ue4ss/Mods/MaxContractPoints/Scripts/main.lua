local TARGET_POINTS = 999

local function keepContractPointsAtMax()
    local states = FindAllOf("GSSPlayerState_BP_C")
    if not states then return end

    for _, state in ipairs(states) do
        if state:IsValid() then
            local current = state:GetContractPoints()
            local delta = TARGET_POINTS - current

            if delta ~= 0 then
                state:AddContractPoints(delta)
            end
        end
    end
end

LoopAsync(1000, keepContractPointsAtMax)
