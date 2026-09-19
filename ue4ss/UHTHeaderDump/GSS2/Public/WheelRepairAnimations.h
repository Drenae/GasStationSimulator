#pragma once
#include "CoreMinimal.h"
#include "WheelRepairAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FWheelRepairAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FrontLeftRepair_AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FrontRightRepair_AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BackLeftRepair_AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BackRightRepair_AnimMontage;
    
    GSS2_API FWheelRepairAnimations();
};

