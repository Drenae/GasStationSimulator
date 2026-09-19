#pragma once
#include "CoreMinimal.h"
#include "GSSTask.h"
#include "DenisTask.generated.h"

class ACustomizationHousePart;

UCLASS(Blueprintable)
class GSS2_API UDenisTask : public UGSSTask {
    GENERATED_BODY()
public:
    UDenisTask();

    UFUNCTION(BlueprintCallable)
    ACustomizationHousePart* FindWallToPaint();
    
};

