#pragma once
#include "CoreMinimal.h"
#include "EContractDifficulty.h"
#include "EState.h"
#include "SavedCustomizationContract.h"
#include "SavedDeliveryContract.h"
#include "SavedState.generated.h"

USTRUCT(BlueprintType)
struct FSavedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EState SavedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContractDifficulty SavedDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedStateLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedCompletedContractsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SavedCompletedDeliveriesNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedDeliveryContract> SavedDeliveries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedCustomizationContract> SavedContracts;
    
    GSS2_API FSavedState();
};

