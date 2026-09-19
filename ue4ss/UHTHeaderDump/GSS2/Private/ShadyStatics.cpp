#include "ShadyStatics.h"

UShadyStatics::UShadyStatics() {
}

void UShadyStatics::SetCutscenesEnabled(bool bEnabled) {
}

void UShadyStatics::RemoveShadynessModifierInstance(const UObject* WorldContextObject, USDShadynessModifierBase* InModifierInstance) {
}

bool UShadyStatics::IsWithEditor() {
    return false;
}

bool UShadyStatics::IsFighterValid(const FSDFighterStats& Fighter) {
    return false;
}

USDShadynessManager* UShadyStatics::GetShadynessManager(const UObject* WorldContextObject) {
    return NULL;
}

UDLCShadyDealsManager* UShadyStatics::GetShadyDealsManager(const UObject* WorldContextObject) {
    return NULL;
}

float UShadyStatics::GetGangMultiplier(const UObject* WorldContextObject) {
    return 0.0f;
}

USDGangActivityManager* UShadyStatics::GetGangActivityManager(const UObject* WorldContextObject) {
    return NULL;
}

USDGameplayEvents* UShadyStatics::GetGameplayEvents(const UObject* WorldContextObject) {
    return NULL;
}

TSoftObjectPtr<UDataTable> UShadyStatics::GetFightersPoolDataTable() {
    return NULL;
}

float UShadyStatics::GetFighterQuality(const FSDFighterStats& Fighter) {
    return 0.0f;
}

USDDirtyMoneyComponent* UShadyStatics::GetDirtyMoneyComponent(UObject* WorldContextObject) {
    return NULL;
}

float UShadyStatics::GetDirtyMoneyBagCapacity() {
    return 0.0f;
}

TArray<USDSheriffActionBase*> UShadyStatics::GetCurrentSheriffCatchActions(const UObject* WorldContextObject) {
    return TArray<USDSheriffActionBase*>();
}

FSDSheriffBehaviorSettings UShadyStatics::GetCurrentSheriffBehaviorSettings(const UObject* WorldContextObject) {
    return FSDSheriffBehaviorSettings{};
}

UActorComponent* UShadyStatics::GetComponentFromCDO(const UClass* InObjectClass, const UClass* ComponentClass) {
    return NULL;
}

UObject* UShadyStatics::GetClassDefaultObject(UClass* InClass) {
    return NULL;
}

void UShadyStatics::FinishCurrentAITask(AAICharacterBase* InCharacter, ETaskResult Result) {
}

bool UShadyStatics::FighterEquals(const FSDFighterStats& A, const FSDFighterStats& B) {
    return false;
}

FTaskStruct UShadyStatics::CreateAITaskStruct(const EInteractableTaskType TaskType) {
    return FTaskStruct{};
}

FSDFighterAttributes UShadyStatics::CompareFighterAttributes(const FSDFighterAttributes& A, const FSDFighterAttributes& B) {
    return FSDFighterAttributes{};
}

bool UShadyStatics::AreCutscenesEnabled() {
    return false;
}

USDShadynessModifierBase* UShadyStatics::ApplyShadynessModifierInstance(const UObject* WorldContextObject, USDShadynessModifierBase* InModifierInstance) {
    return NULL;
}

USDShadynessModifierBase* UShadyStatics::ApplyShadynessModifier(const UObject* WorldContextObject, const FSDShadynessModifierSettings& ModifierSettings) {
    return NULL;
}


