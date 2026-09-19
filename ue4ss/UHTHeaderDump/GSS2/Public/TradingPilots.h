#pragma once
#include "CoreMinimal.h"
#include "TradingPilots.generated.h"

class APilotCharacter;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FTradingPilots {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APilotCharacter>> TradingPilotCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> AvailableHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> AvailableBeard;
    
    GSS2_API FTradingPilots();
};

