#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "HumanSharedAnimInstance.h"
#include "NopeAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class NOPEAISYSTEM_API UNopeAnimInstance : public UHumanSharedAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StartCharacterTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform EndCharacterTransform;
    
    UNopeAnimInstance();

};

