#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "TaskInformation.generated.h"

UINTERFACE(Blueprintable)
class GSS2_API UTaskInformation : public UInterface {
    GENERATED_BODY()
};

class GSS2_API ITaskInformation : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetTaskInfoTransform();
    
};

