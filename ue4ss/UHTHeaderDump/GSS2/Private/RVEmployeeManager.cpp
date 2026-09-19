#include "RVEmployeeManager.h"

URVEmployeeManager::URVEmployeeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RVCampManager = NULL;
    this->ServiceUpgrader = NULL;
}

bool URVEmployeeManager::WasLastPerformedServiceAutomated(FGameplayTag Service) {
    return false;
}

ARVCampEmployee* URVEmployeeManager::SpawnRVEmployee() {
    return NULL;
}

void URVEmployeeManager::SetPerformedServiceAutomationStatus(FGameplayTag Service, bool AutomationStatus) {
}

void URVEmployeeManager::RemoveRVEmployee(ARVCampEmployee* Employee) {
}

void URVEmployeeManager::PopulateNotAutomatedServices() {
}

void URVEmployeeManager::OnEmployeeAssignmentUpdated(const ARVCampEmployee* Employee, const FRVEmployeeAssignment NewAssignment, const FRVEmployeeAssignment PreviousAssignment, const int32 SlotIndex) {
}

bool URVEmployeeManager::IsServiceAutomated(FGameplayTag Service) {
    return false;
}

bool URVEmployeeManager::IsAssignmentActive(FRVEmployeeAssignment Assignment) {
    return false;
}

TArray<ARVCampEmployee*> URVEmployeeManager::GetSortedRVEmployees() {
    return TArray<ARVCampEmployee*>();
}

void URVEmployeeManager::GetServiceAutomationStatus(FGameplayTag Service, bool& IsAutomated, bool& IsPaid) {
}

TArray<ARVCampEmployee*> URVEmployeeManager::GetRVEmployees() {
    return TArray<ARVCampEmployee*>();
}

TArray<FGameplayTag> URVEmployeeManager::GetNotAutomatedServices() {
    return TArray<FGameplayTag>();
}

FTransform URVEmployeeManager::GetEmployeeSpawnTransform() {
    return FTransform{};
}

float URVEmployeeManager::GetEmployeeServiceCost(FGameplayTag Service) {
    return 0.0f;
}

TArray<FGameplayTag> URVEmployeeManager::GetAutomatedServices() {
    return TArray<FGameplayTag>();
}

ARvGuestServiceSpot* URVEmployeeManager::FindTargetServiceSpot(FGameplayTag Service, bool RequireActiveCustomer) {
    return NULL;
}

void URVEmployeeManager::AddRVEmployee(ARVCampEmployee* Employee) {
}


