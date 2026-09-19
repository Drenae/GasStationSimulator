#pragma once
#include "CoreMinimal.h"
#include "CustomizationRequirementsSettings.h"
#include "EContractType.h"
#include "ECustomizationContractType.h"
#include "EState.h"
#include "TimeStruct.h"
#include "QuestContract.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FQuestContract {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContractType ContractType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomizationContractType CustomizationContractType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EState ContractState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationRequirementsSettings CustomizationRequirementsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct Duration;
    
    FQuestContract();
};

