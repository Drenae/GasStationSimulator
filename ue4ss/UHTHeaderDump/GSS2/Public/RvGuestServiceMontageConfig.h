#pragma once
#include "CoreMinimal.h"
#include "RvGuestServiceMontageConfig.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FRvGuestServiceMontageConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WarpComponentTag;
    
    GSS2_API FRvGuestServiceMontageConfig();
};

