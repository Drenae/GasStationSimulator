-- MaxTraffic
-- Force le trafic au maximum prévu par le jeu.
-- 25 correspond au MaxTrafficImpact du TrafficSettings de Gas Station Simulator.

local MAX_TRAFFIC_IMPACT = 25

-- 1) Force le score total affiché/calculé à 25.
RegisterHook(
    "/Script/GSS2.TrafficManagerSubsystem:GetCurrentTotalTrafficImpact",
    function(Context)
        return nil
    end,
    function(Context)
        return MAX_TRAFFIC_IMPACT
    end
)

-- 2) Force directement le système de spawn à utiliser l'impact maximal.
-- À 25, le jeu retourne des temps de spawn voitures de 1 à 5 secondes.
RegisterHook(
    "/Script/GSS2.TrafficSettings:GetSpawnTimeByTrafficImpact",
    function(Context, CurrentTrafficImpact)
        CurrentTrafficImpact:set(MAX_TRAFFIC_IMPACT)
    end,
    function(Context, CurrentTrafficImpact)
        return nil
    end
)
