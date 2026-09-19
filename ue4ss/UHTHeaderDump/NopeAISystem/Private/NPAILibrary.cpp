#include "NPAILibrary.h"

UNPAILibrary::UNPAILibrary() {
}

UNPAITaskBase* UNPAILibrary::SpawnAITask(ANPAICharacterBase* AICharacter) {
    return NULL;
}

void UNPAILibrary::SpawnAICharacterAsync(UObject* WorldContextObject, TSoftClassPtr<ANPAICharacterBase> InAICharacterBaseClass, FTransform InSpawnTransform, const TArray<FNPAITaskStruct>& InTasksList, bool bEditableModeActive, FLatentActionInfo LatentInfo, ANPAICharacterBase*& OutAICharacterBase) {
}

AActor* UNPAILibrary::GetClosestActorInRange(FVector InstigatorLocation, const TArray<AActor*>& InActors, const float SearchRange) {
    return NULL;
}

UNPSmartObjectComponent* UNPAILibrary::FindSmartObjectsByClass(ACharacter* AICharacterBase, TArray<AActor*>& OutActors, AActor*& ClosestOutActor, TSoftClassPtr<AActor> SearchActorClass, const float SearchRange) {
    return NULL;
}


