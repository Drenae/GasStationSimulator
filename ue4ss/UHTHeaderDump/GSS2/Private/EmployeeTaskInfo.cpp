#include "EmployeeTaskInfo.h"

FEmployeeTaskInfo::FEmployeeTaskInfo() {
    this->TaskEnum = EEmployeeTask::CLEANING;
    this->TaskSkillType = EEmployeeSkill::Cleaning;
    this->RegenerateEnergyPerMinute = 0.00f;
    this->MoneyPerMinute = 0.00f;
}

