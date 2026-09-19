#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "TaskInterface.generated.h"

UINTERFACE(Blueprintable)
class GSS2_API UTaskInterface : public UInterface {
    GENERATED_BODY()
};

class GSS2_API ITaskInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetTaskDescription();
    
};

