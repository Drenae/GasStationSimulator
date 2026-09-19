#include "DumbbellsSettingsPerDifficulty.h"

FDumbbellsSettingsPerDifficulty::FDumbbellsSettingsPerDifficulty() {
    this->Difficulty = EGuestServiceDifficulty::EASY;
    this->bUseDifferentWeightsForGriffins = false;
    this->SolutionsToGenerate = 0;
    this->SolutionsComplexity = 0.00f;
    this->bForbideBiggerDumbbellsOnGriffin = false;
    this->TimeLimit = 0.00f;
}

