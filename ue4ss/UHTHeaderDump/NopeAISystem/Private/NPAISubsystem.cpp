#include "NPAISubsystem.h"
#include "Templates/SubclassOf.h"

UNPAISubsystem::UNPAISubsystem() {
    this->NPAIManager = NULL;
}

void UNPAISubsystem::TimeToSpawnCharacter_Implementation(ANPAISpawner* InitSpawner, ANPAISpawner* TargetSpawner) {
}

TArray<UNPSmartObjectComponent*> UNPAISubsystem::GetSmartObjectComponents() {
    return TArray<UNPSmartObjectComponent*>();
}

void UNPAISubsystem::GetAICharacters(TArray<ANPAICharacterBase*>& OutAICharacters, TSubclassOf<ANPAICharacterBase> FindClass) {
}


