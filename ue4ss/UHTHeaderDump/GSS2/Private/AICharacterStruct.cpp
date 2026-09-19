#include "AICharacterStruct.h"

FAICharacterStruct::FAICharacterStruct() {
    this->CharacterGender = ECharacterGender::Male;
    this->MovementGroundType = EMovementGroundType::Walk;
    this->Texture = NULL;
    this->SpecialCharacterType = ESpecialCharacterType::DEFAULT;
}

