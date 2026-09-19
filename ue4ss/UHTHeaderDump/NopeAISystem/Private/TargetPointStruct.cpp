#include "TargetPointStruct.h"

FTargetPointStruct::FTargetPointStruct() {
    this->bCanRotateToPoint = false;
    this->AIMovementSpeed = ENPAIMovementSpeed::Walk;
    this->AcceptableRadius = 0.00f;
}

