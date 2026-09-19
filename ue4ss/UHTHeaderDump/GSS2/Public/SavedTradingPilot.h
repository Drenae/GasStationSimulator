#pragma once
#include "CoreMinimal.h"
#include "EMontagePilotState.h"
#include "ENPCAccent.h"
#include "ENPCGender.h"
#include "SavedTradingPilot.generated.h"

class APilotCharacter;
class UMaterialInstance;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSavedTradingPilot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APilotCharacter> SavedTradingPilotCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SavedHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SavedBeard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCGender SavedGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCAccent SavedLanguageAccent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> SavedFlagMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMontagePilotState SavedPilotState;
    
    GSS2_API FSavedTradingPilot();
};

