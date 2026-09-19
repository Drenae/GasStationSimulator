#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RootMotionMovementLibrary.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class GSS2_API URootMotionMovementLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URootMotionMovementLibrary();

    UFUNCTION(BlueprintCallable)
    static FTransform GetRootMotionTransform(USkeletalMeshComponent* SkeletalMeshComponent, bool& bIsPlayingRootMotion);
    
};

