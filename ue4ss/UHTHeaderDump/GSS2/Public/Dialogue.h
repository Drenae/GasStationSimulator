#pragma once
#include "CoreMinimal.h"
#include "Dialogue.generated.h"

USTRUCT(BlueprintType)
struct FDialogue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueDialogueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHidden;
    
    GSS2_API FDialogue();
};

