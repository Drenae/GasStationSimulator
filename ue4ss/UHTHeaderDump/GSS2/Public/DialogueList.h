#pragma once
#include "CoreMinimal.h"
#include "DialogueList.generated.h"

USTRUCT(BlueprintType)
struct FDialogueList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IDs;
    
    GSS2_API FDialogueList();
};

