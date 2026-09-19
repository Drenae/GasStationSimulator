#pragma once
#include "CoreMinimal.h"
#include "SaveDataNPAICharacter.h"
#include "NPAIData.generated.h"

USTRUCT(BlueprintType)
struct FNPAIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveDataNPAICharacter> SpawnedAICharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveDataNPAICharacter> PlacedAICharacters;
    
    NOPEAISYSTEM_API FNPAIData();
};

