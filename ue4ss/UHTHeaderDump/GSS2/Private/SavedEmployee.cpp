#include "SavedEmployee.h"

FSavedEmployee::FSavedEmployee() {
    this->AssignedShift = EShiftType::DAY;
    this->bAutopay = false;
    this->CurrentTaskPriority = 0;
}

