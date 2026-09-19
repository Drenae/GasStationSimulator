#include "RVResourceManager.h"

URVResourceManager::URVResourceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanRegenerateResources = true;
    this->RVCampManager = NULL;
    this->ResourceSettings = NULL;
}

void URVResourceManager::UpdateCurrentResourceState(ERVResource Resource, FRVResourceState NewState) {
}

void URVResourceManager::TryRefillResources(bool& Success) {
}

void URVResourceManager::RemoveResources(TMap<ERVResource, int32> Amounts) {
}

void URVResourceManager::RemoveResource(ERVResource Resource, int32 Amount) {
}

void URVResourceManager::OnTimeUpdated(const FTimeStruct UpdatedTime) {
}

void URVResourceManager::InitResources() {
}

FRVResourceState URVResourceManager::GetCurrentResourceState(ERVResource Resource) {
    return FRVResourceState{};
}

TMap<ERVResource, FRVResourceState> URVResourceManager::GetCurrentResourcesState() {
    return TMap<ERVResource, FRVResourceState>();
}

int32 URVResourceManager::GetCurrentResourceAmount(ERVResource Resource) {
    return 0;
}

bool URVResourceManager::CanAffordResources(TMap<ERVResource, int32> Amounts) {
    return false;
}

bool URVResourceManager::CanAffordResource(ERVResource Resource, int32 Amount) {
    return false;
}

void URVResourceManager::AddResources(TMap<ERVResource, int32> Amounts) {
}

void URVResourceManager::AddResource(ERVResource Resource, int32 Amount) {
}

void URVResourceManager::AddRemoveResources(TMap<ERVResource, int32> AddRemoveAmounts) {
}

void URVResourceManager::AddRemoveResource(ERVResource Resource, int32 AddRemoveAmount) {
}


