#include "RigUnit_GetTransform.h"

FRigUnit_GetTransform::FRigUnit_GetTransform() {
    this->SPACE = EBoneGetterSetterMode::LocalSpace;
    this->bInitial = false;
}

