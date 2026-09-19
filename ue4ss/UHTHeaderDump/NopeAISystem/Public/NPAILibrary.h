#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "NPAITaskStruct.h"
#include "NPAILibrary.generated.h"

class AActor;
class ACharacter;
class ANPAICharacterBase;
class UNPAITaskBase;
class UNPSmartObjectComponent;
class UObject;

UCLASS(Blueprintable)
class NOPEAISYSTEM_API UNPAILibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNPAILibrary();

    UFUNCTION(BlueprintCallable)
    static UNPAITaskBase* SpawnAITask(ANPAICharacterBase* AICharacter);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SpawnAICharacterAsync(UObject* WorldContextObject, TSoftClassPtr<ANPAICharacterBase> InAICharacterBaseClass, FTransform InSpawnTransform, const TArray<FNPAITaskStruct>& InTasksList, bool bEditableModeActive, FLatentActionInfo LatentInfo, ANPAICharacterBase*& OutAICharacterBase);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetClosestActorInRange(FVector InstigatorLocation, const TArray<AActor*>& InActors, const float SearchRange);
    
    UFUNCTION(BlueprintCallable)
    static UNPSmartObjectComponent* FindSmartObjectsByClass(ACharacter* AICharacterBase, TArray<AActor*>& OutActors, AActor*& ClosestOutActor, TSoftClassPtr<AActor> SearchActorClass, const float SearchRange);
    
};

