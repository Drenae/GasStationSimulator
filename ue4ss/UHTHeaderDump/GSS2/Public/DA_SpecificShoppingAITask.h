#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SpecificShoppingTypeTask.h"
#include "DA_SpecificShoppingAITask.generated.h"

UCLASS(Blueprintable)
class GSS2_API UDA_SpecificShoppingAITask : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecificShoppingTypeTask> SpecificShoppingTypeTasks;
    
    UDA_SpecificShoppingAITask();

};

