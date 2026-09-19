#include "RigUnit_SetTranslation.h"

FRigUnit_SetTranslation::FRigUnit_SetTranslation() {
    this->SPACE = EBoneGetterSetterMode::LocalSpace;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

