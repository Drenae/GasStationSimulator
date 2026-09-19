#include "SDShadynessManager.h"

USDShadynessManager::USDShadynessManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShadynessMax = 100.00f;
    this->ShadynessStaticDrop = 1.00f;
    this->ShadynessStaticDropRate = 1.00f;
    this->ShadynessModifiersTickRate = 0.01f;
    this->ShadynessLevelsAmount = 5;
    this->Shadyness = 0.00f;
    this->CachedShadynesLevel = 0;
    this->bShadynessDropEnabled = true;
    this->bShadynessLocked = false;
}

void USDShadynessManager::TickShadynessModifiers() {
}

void USDShadynessManager::ShadynessStaticDropTick() {
}

void USDShadynessManager::SetShadynessValue(const float InNewValue, bool bForce) {
}

void USDShadynessManager::SetShadynessPercent(const int32 InNewPercent, bool bForce) {
}

void USDShadynessManager::SetShadynessLocked(bool bInLocked) {
}

void USDShadynessManager::SetShadynessDropEnabled(bool bEnabled) {
}

void USDShadynessManager::SetLevelsAmount(int32 InAmount) {
}

void USDShadynessManager::SetLevel(int32 InLevel, float InStartPercent, float InEndPercent) {
}

void USDShadynessManager::RemoveShadynessModifier(USDShadynessModifierBase* InModifier) {
}

void USDShadynessManager::ModifyShadynessValue(const float InNewPercent) {
}

void USDShadynessManager::ModifyShadynessPercent(const int32 InNewPercent) {
}

bool USDShadynessManager::IsShadynessLocked() const {
    return false;
}

float USDShadynessManager::GetShadynessValue() const {
    return 0.0f;
}

int32 USDShadynessManager::GetShadynessPercent() const {
    return 0;
}

TArray<USDShadynessModifierBase*> USDShadynessManager::GetShadynessModifiers() const {
    return TArray<USDShadynessModifierBase*>();
}

FSDShadynessLevel USDShadynessManager::GetShadynessLevelStruct(int32 InLevel) const {
    return FSDShadynessLevel{};
}

int32 USDShadynessManager::GetShadynessLevelsAmount() const {
    return 0;
}

TArray<FSDShadynessLevel> USDShadynessManager::GetShadynessLevels() const {
    return TArray<FSDShadynessLevel>();
}

int32 USDShadynessManager::GetShadynessLevel() const {
    return 0;
}

float USDShadynessManager::GetMaxShadynessValue() const {
    return 0.0f;
}

void USDShadynessManager::ClearLevelsArray() {
}

bool USDShadynessManager::ApplyShadynessModifier(USDShadynessModifierBase* InModifier) {
    return false;
}

void USDShadynessManager::AddLevel(int32 InLevel, float InStartPercent, float InEndPercent) {
}


