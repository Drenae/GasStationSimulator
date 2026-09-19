#pragma once
#include "CoreMinimal.h"
#include "EWheelSide_FourWheel.h"
#include "MinigameBaseCamera_Staged.h"
#include "Templates/SubclassOf.h"
#include "WheelRepairAnimations.h"
#include "Minigame_WheelChange.generated.h"

class ATrashItemBase;
class UAnimMontage;
class UGarageStaticMeshComponent;
class USceneComponent;

UCLASS(Blueprintable)
class GSS2_API AMinigame_WheelChange : public AMinigameBaseCamera_Staged {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWheelSide_FourWheel WheelSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWheelRepairAnimations WheelRepairAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageStaticMeshComponent* BrokenWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageStaticMeshComponent* GhostWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageStaticMeshComponent* WorkingWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageStaticMeshComponent* Screw1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageStaticMeshComponent* Screw2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageStaticMeshComponent* Screw3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageStaticMeshComponent* Screw4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageStaticMeshComponent* Screw5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageStaticMeshComponent* Screw1Ghost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageStaticMeshComponent* Screw2Ghost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageStaticMeshComponent* Screw3Ghost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageStaticMeshComponent* Screw4Ghost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGarageStaticMeshComponent* Screw5Ghost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATrashItemBase> TrashWheelClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGarageStaticMeshComponent*> Screws;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamePadDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 indexItem;
    
public:
    AMinigame_WheelChange(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SelectScrew(int32 StageIndex, int32 Selected);
    
protected:
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetProperRepairAnimation();
    
private:
    UFUNCTION(BlueprintCallable)
    int32 GetNum(int32 StageIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextIndex(int32 StageIndex, int32 Index, bool Next);
    
};

