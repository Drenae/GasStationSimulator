#include "SaveDataNPAICharacter.h"

FSaveDataNPAICharacter::FSaveDataNPAICharacter() {
    this->bIsValid = false;
    this->bIsLoadedByDistance = false;
    this->DistanceToLoad = 0.00f;
    this->PercentDistanceToUnload = 0.00f;
    this->bCollisionEnabled = false;
    this->MovementMode = 0;
    this->bBlockLoadAnimationsOnGameLoad = false;
    this->bIsWalkingToPoint = false;
    this->WalkToPointTargetCanRotateToPoint = false;
    this->WalkToPointTargetAIMovementSpeed = ENPAIMovementSpeed::Walk;
    this->WalkToPointTargetAcceptableRadius = 0.00f;
}

