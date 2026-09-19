#pragma once
#include "CoreMinimal.h"
#include "EMontagePilotState.h"
#include "ENPCConversationType.h"
#include "ENPCGender.h"
#include "GSSNPAICharacterBase.h"
#include "SavedTradingPilot.h"
#include "TradingPilotBackInPlaneDelegate.h"
#include "TradingPilotLeftPlaneDelegate.h"
#include "PilotCharacter.generated.h"

class UMaterialInstance;
class UPoseAsset;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class GSS2_API APilotCharacter : public AGSSNPAICharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Hair_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Beard_SMC;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTradingPilotBackInPlane OnTradingPilotBackInPlane;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTradingPilotLeftPlane OnTradingPilotLeftPlane;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPoseAsset> PoseAsset;
    
public:
    APilotCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerTradingPilotDialogue(ENPCConversationType ConversationType);
    
    UFUNCTION(BlueprintCallable)
    void TradingDialogueFinished(AGSSNPAICharacterBase* HumanBase);
    
    UFUNCTION(BlueprintCallable)
    void SetPilotComponents(TSoftObjectPtr<USkeletalMesh> RandomHair, TSoftObjectPtr<USkeletalMesh> RandomBeard, TSoftObjectPtr<UMaterialInstance> FlagMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetPilot(FName Country, ENPCGender GenderToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetFlag(TSoftObjectPtr<UMaterialInstance> flag);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPilotMontageState(EMontagePilotState NewValue);
    
    UFUNCTION(BlueprintCallable)
    void LoadSetPilot(const FSavedTradingPilot& SavedTradingPilot);
    
    UFUNCTION(BlueprintCallable)
    EMontagePilotState GetCurrentPilotMontageState();
    
};

