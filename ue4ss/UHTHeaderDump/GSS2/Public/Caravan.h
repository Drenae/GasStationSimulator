#pragma once
#include "CoreMinimal.h"
#include "InteractableBuilding.h"
#include "Caravan.generated.h"

class AAICharacterBase;
class AActor;

UCLASS(Blueprintable)
class GSS2_API ACaravan : public AInteractableBuilding {
    GENERATED_BODY()
public:
    ACaravan(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AAICharacterBase*> GetOwnerCharacters();
    
    UFUNCTION(BlueprintCallable)
    void DestroyCharacter(AActor* Character);
    
    UFUNCTION(BlueprintCallable)
    bool AddOwnerCharacter(AAICharacterBase* Character);
    
};

