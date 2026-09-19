#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CameraUnlockBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API ACameraUnlockBase : public AActor {
    GENERATED_BODY()
public:
    ACameraUnlockBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeActivateCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateCamera();
    
};

