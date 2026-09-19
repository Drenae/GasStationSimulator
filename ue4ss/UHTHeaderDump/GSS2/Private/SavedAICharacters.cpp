#include "SavedAICharacters.h"

FSavedAICharacters::FSavedAICharacters() {
    this->AICharacterBase = NULL;
    this->CollisionEnabledType = ECollisionEnabled::NoCollision;
    this->MovementType = EMovementType::Walking;
    this->LeftCooldown = 0;
    this->TotalWorkTime = 0;
    this->TotalBreakTime = 0;
    this->TotalMoneyEarnedForSelf = 0.00f;
    this->TotalMoneyEarnedForPlayer = 0.00f;
    this->CurrentMoneyEarned = 0.00f;
    this->TotalHappy = 0;
    this->TotalAngry = 0;
    this->LeftEnergy = 0;
    this->MovementGroundType = EMovementGroundType::Walk;
    this->CurrentTicketState = eTicketState::UNDEFINED;
    this->CurrentPopcornCooldownTime = 0.00f;
    this->CurrentCinemaPathPointIndex = 0;
    this->CinemaTrashToDrop = 0;
    this->bIsCinemaCustomer = false;
    this->bIsRVCustomer = false;
    this->WalkSpeedMultiplier = 0.00f;
}

