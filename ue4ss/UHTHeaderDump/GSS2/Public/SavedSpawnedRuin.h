#pragma once
#include "CoreMinimal.h"
#include "SavedSpawnedRuin.generated.h"

USTRUCT(BlueprintType)
struct FSavedSpawnedRuin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValidRuin;
    
    GSS2_API FSavedSpawnedRuin();
};

