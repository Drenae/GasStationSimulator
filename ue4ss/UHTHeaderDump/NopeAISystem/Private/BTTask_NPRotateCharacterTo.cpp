#include "BTTask_NPRotateCharacterTo.h"

UBTTask_NPRotateCharacterTo::UBTTask_NPRotateCharacterTo() {
    this->NodeName = TEXT("NPRotateCharacterTo");
    this->LimitRotation = 10.00f;
    this->Precision = 5.00f;
    this->MinSpeed = 0.10f;
    this->MaxSpeed = 1.00f;
}


