#pragma once
#include "CoreMinimal.h"
#include "SaunaDot.h"
#include "SaunaPlayerDot.generated.h"

UCLASS(Blueprintable)
class GSS2_API ASaunaPlayerDot : public ASaunaDot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveForward;
    
public:
    ASaunaPlayerDot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ReverseDirection();
    
};

