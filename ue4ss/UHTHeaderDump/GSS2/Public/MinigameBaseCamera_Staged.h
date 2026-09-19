#pragma once
#include "CoreMinimal.h"
#include "MinigameBaseCamera.h"
#include "MinigameStage.h"
#include "MinigameBaseCamera_Staged.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class GSS2_API AMinigameBaseCamera_Staged : public AMinigameBaseCamera {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinigameStage> Stages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMinigameStage> GameplayStages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameplayStageIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* ComponentSelected;
    
public:
    AMinigameBaseCamera_Staged(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetStage(int32 NewStageIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void SetPartVisibility(UPrimitiveComponent* ComponentRef, bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void PartAnimationFinished(UPrimitiveComponent* ComponentAnimated);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsValidForStage(UPrimitiveComponent* ComponentToCheck);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleStageComponent(UPrimitiveComponent* ComponentHit);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPartIndexOfCurrentStage(UPrimitiveComponent* ComponentRef, int32& StageIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinigameStage();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool AreAllPartsOfActiveStageComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void AdvanceToNextStage();
    
};

