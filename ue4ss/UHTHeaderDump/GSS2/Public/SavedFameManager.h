#pragma once
#include "CoreMinimal.h"
#include "UnlockableByFameData.h"
#include "SavedFameManager.generated.h"

USTRUCT(BlueprintType)
struct FSavedFameManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavedExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockableByFameData> SavedUnlockedRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReceivedLevelsFromLastOpeningFameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReceivedExperienceFromLastOpeningFameWidget;
    
    GSS2_API FSavedFameManager();
};

