#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ObjectiveBase.generated.h"

class AActor;
class AObjectiveMarker;
class UGameAction;
class UWorld;

UCLASS(Blueprintable)
class GSS2_API UObjectiveBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGameAction*> StartActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGameAction*> FinishActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjectiveMarker*> ObjectiveMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreMarkersVisible;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BaseRedDotsTag;
    
public:
    UObjectiveBase();

    UFUNCTION(BlueprintCallable)
    void ToggleRedDotsVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDynamicObjectiveMarkersVisibility_Implementation(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleDynamicObjectiveMarkersVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void StartObjective_Implementation(UWorld* World, bool bWasLoadedFromSave);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartObjective(UWorld* World, bool bWasLoadedFromSave);
    
    UFUNCTION(BlueprintCallable)
    void SetWorld(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void FinishObjective_Implementation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExternallyTriggeredEvent();
    
    UFUNCTION(BlueprintCallable)
    void DestroyMarker(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void Debug_FinishObjective();
    
};

