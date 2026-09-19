#include "TechTreeManager.h"

UTechTreeManager::UTechTreeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaveGameTemplate = NULL;
    this->TechnologyTree = NULL;
    this->TechTreeWidget = NULL;
}

void UTechTreeManager::UnlockTechnology(UTechnologyAsset* Technology) {
}


void UTechTreeManager::SelectTechTree(UTechnologyTree* TechTree) {
}

void UTechTreeManager::SaveTechToObject(USaveGame* SaveGameObject) {
}

void UTechTreeManager::SaveTechStateFromSlot(const FString& SlotName, const int32 UserIndex) {
}

void UTechTreeManager::Reset() {
}

void UTechTreeManager::LockTechnology(UTechnologyAsset* Technology) {
}

void UTechTreeManager::LoadTechStateFromSlot(const FString& SlotName, const int32 UserIndex) {
}

void UTechTreeManager::LoadTechFromObject(USaveGame* SaveGameObject) {
}

bool UTechTreeManager::IsTechnologyUnlocked(UTechnologyAsset* Technology) {
    return false;
}

bool UTechTreeManager::IsChildTechnology(UTTTechNode* ParentNode, UTechnologyAsset* ChildNodeTechnology) {
    return false;
}

bool UTechTreeManager::HasUnlockedParents(UTechnologyAsset* Technology) {
    return false;
}

void UTechTreeManager::HandleTechnologyStateChanged(UTTTechNode* TechNode, bool IsUnLocked) {
}

UTechTreeWidget* UTechTreeManager::GetTechTreeWidget() {
    return NULL;
}

USaveGame* UTechTreeManager::GetSavegameTechObject() {
    return NULL;
}

int32 UTechTreeManager::GetNumberTreesAssigned() {
    return 0;
}

UTTTechNode* UTechTreeManager::GetNodeFromTechAsset(UTechnologyAsset* Technology) {
    return NULL;
}

UTechnologyTree* UTechTreeManager::GetAssignedTechTree() {
    return NULL;
}

bool UTechTreeManager::CheckIsTechnologyInTreeUnlock(UTechnologyAsset* TechnologyAssetToCheck, UTechnologyTree* TechTreeToCheck) {
    return false;
}

void UTechTreeManager::AssignTechTree(UTechnologyTree* TechTree, UTechTreeWidget* NewTechTreeWidget) {
}


