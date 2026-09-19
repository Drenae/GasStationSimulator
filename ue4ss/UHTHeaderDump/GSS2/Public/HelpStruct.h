#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "HelpStruct.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GSS2_API FHelpStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAction> Actions;
    
    FHelpStruct();
};

