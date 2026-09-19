#pragma once
#include "CoreMinimal.h"
#include "EPhoneCallType.h"
#include "PhoneCallInfo.generated.h"

class USoundWave;
class UTexture2D;

USTRUCT(BlueprintType)
struct FPhoneCallInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhoneCallType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundWave> CallCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    GSS2_API FPhoneCallInfo();
};

