#include "Caravan.h"

ACaravan::ACaravan(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TArray<AAICharacterBase*> ACaravan::GetOwnerCharacters() {
    return TArray<AAICharacterBase*>();
}

void ACaravan::DestroyCharacter(AActor* Character) {
}

bool ACaravan::AddOwnerCharacter(AAICharacterBase* Character) {
    return false;
}


