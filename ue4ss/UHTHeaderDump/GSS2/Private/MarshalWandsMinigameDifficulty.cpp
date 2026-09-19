#include "MarshalWandsMinigameDifficulty.h"

FMarshalWandsMinigameDifficulty::FMarshalWandsMinigameDifficulty() {
    this->DifficultyType = EMarshalWandsMinigameDifficulty::EASY;
    this->MaxAllowedPlaneRotation = 0.00f;
    this->MinMinigameDuration = 0.00f;
    this->MaxMinigameDuration = 0.00f;
    this->TryChangeDirectionInterval = 0.00f;
    this->WandsStrength = 0.00f;
    this->PlaneWiggleSpeed = 0.00f;
    this->HappyStatForSuccessfullyFinishing = 0;
}

