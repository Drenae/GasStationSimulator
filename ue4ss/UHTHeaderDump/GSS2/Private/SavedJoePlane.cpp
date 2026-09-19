#include "SavedJoePlane.h"

FSavedJoePlane::FSavedJoePlane() {
    this->bIsJoePlaneSaved = false;
    this->bIsPhysicsActive = false;
    this->bCanMagnetActivatePhysics = false;
    this->bCanActorGetAttracted = false;
    this->SavedPlaneState = EJoeAirplaneState::CRASHED;
}

