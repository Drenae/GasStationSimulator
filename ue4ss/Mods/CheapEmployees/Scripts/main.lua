-- CheapEmployees - Gas Station Simulator / UE4SS
-- Forces every employee job cost to $0/h.
-- Applies continuously so currently hired and subsequently spawned employees are covered.

local function zero_employee_costs()
    local employees = FindAllOf("AICharacterBase")
    if employees then
        for _, e in ipairs(employees) do
            if e:IsValid() then
                local name = e:GetFullName()
                if name and string.find(name, "Employee_Base", 1, true) then
                    e.CleaningMoneyModify = 0.0
                    e.FuelingMoneyModify = 0.0
                    e.CashMoneyModify = 0.0
                    e.GarageMoneyModify = 0.0
                    e.IceCreamVendingMoneyModify = 0.0
                    e.CarWashMoneyModify = 0.0
                    e.CinemaMoneyModify = 0.0
                end
            end
        end
    end

    -- Also zero the base cost on every currently instantiated EmployeeTask.
    local tasks = FindAllOf("EmployeeTask")
    if tasks then
        for _, task in ipairs(tasks) do
            if task:IsValid() then
                task.MoneyPerMinute = 0.0
            end
        end
    end
end

-- Run once after loading, then keep applying it so future employees/tasks are covered.
ExecuteWithDelay(5000, zero_employee_costs)

LoopAsync(1000, function()
    zero_employee_costs()
    return false
end)
