#include "RigUnit_SetBoneTranslation.h"

FRigUnit_SetBoneTranslation::FRigUnit_SetBoneTranslation() {
    this->SPACE = EBoneGetterSetterMode::LocalSpace;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

