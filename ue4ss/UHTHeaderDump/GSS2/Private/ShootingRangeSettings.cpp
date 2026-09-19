#include "ShootingRangeSettings.h"

UShootingRangeSettings::UShootingRangeSettings() {
    this->PlayerAmmo = 6;
    this->ReloadSpeed = 3.00f;
    this->GameTimeSeconds = 30.00f;
    this->InitialTargetSpawnDelay = 1.00f;
    this->ScoreNormalTargets = 5.00f;
    this->ScoreMoveingTargets = 10.00f;
    this->ScoreZigZagTargets = 25.00f;
    this->ScoreUfoTarget = 50.00f;
    this->ScoreCoyotTarget = 30.00f;
    this->LowDifferenceThresholdMin = 1;
    this->LowDifferenceThresholdMax = 2;
    this->MidDifferenceThresholdMin = 3;
    this->MidDifferenceThresholdMax = 5;
    this->BestDifferenceThresholdMin = 6;
    this->BestDifferenceThresholdMax = 6;
    this->CoyotOffset = 100.00f;
    this->CoyotSpeed = 600.00f;
    this->RespawnBlockerTime = 3.00f;
    this->OponentShootingTimeMinEasy = 3.00f;
    this->OponentShootingTimeMaxEasy = 6.00f;
    this->TargetSpeedEasy = 2.00f;
    this->TargetFoldRateMinEasy = 3.00f;
    this->TargetFoldRateMaxEasy = 6.00f;
    this->TargetRespawnRateEasy = 6.00f;
    this->RandomizeRailsTypeEasy = false;
    this->RedTeamSpawnPercentEasy = 40.00f;
    this->BlueTeamSpawnPercentEasy = 40.00f;
    this->NeutralUfoPercentEasy = 50.00f;
    this->OponentShootingTimeMinNormal = 3.00f;
    this->OponentShootingTimeMaxNormal = 6.00f;
    this->TargetSpeedNormal = 2.00f;
    this->TargetFoldRateMinNormal = 3.00f;
    this->TargetFoldRateMaxNormal = 6.00f;
    this->TargetRespawnRateNormal = 6.00f;
    this->RandomizeRailsTypeNormal = false;
    this->RedTeamSpawnPercentNormal = 40.00f;
    this->BlueTeamSpawnPercentNormal = 40.00f;
    this->NeutralUfoPercentNormal = 50.00f;
    this->OponentShootingTimeMinHard = 3.00f;
    this->OponentShootingTimeMaxHard = 6.00f;
    this->TargetSpeedHard = 2.00f;
    this->TargetFoldRateMinHard = 3.00f;
    this->TargetFoldRateMaxHard = 6.00f;
    this->TargetRespawnRateHard = 6.00f;
    this->RandomizeRailsTypeHard = false;
    this->RedTeamSpawnPercentHard = 40.00f;
    this->BlueTeamSpawnPercentHard = 40.00f;
    this->NeutralUfoPercentHard = 50.00f;
}


