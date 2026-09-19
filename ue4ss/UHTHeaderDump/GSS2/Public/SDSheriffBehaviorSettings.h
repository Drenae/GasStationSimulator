#pragma once
#include "CoreMinimal.h"
#include "SDSheriffBehaviorSettings.generated.h"

class USDSheriffActionBase;

USTRUCT(BlueprintType)
struct FSDSheriffBehaviorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfVisitsPerDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfObjectsToVisit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCombineActionsFromPreviousLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USDSheriffActionBase*> CatchedActions;
    
    GSS2_API FSDSheriffBehaviorSettings();
};

