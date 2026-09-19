#include "RigUnit_SetScale.h"

FRigUnit_SetScale::FRigUnit_SetScale() {
    this->SPACE = EBoneGetterSetterMode::LocalSpace;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

