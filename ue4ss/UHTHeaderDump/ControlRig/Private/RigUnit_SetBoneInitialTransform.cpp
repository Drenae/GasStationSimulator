#include "RigUnit_SetBoneInitialTransform.h"

FRigUnit_SetBoneInitialTransform::FRigUnit_SetBoneInitialTransform() {
    this->SPACE = EBoneGetterSetterMode::LocalSpace;
    this->bPropagateToChildren = false;
}

