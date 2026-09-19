#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "SpoonAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class GSS2_API USpoonAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressSpaceBarSpoon;
    
    USpoonAnimInstance();

};

