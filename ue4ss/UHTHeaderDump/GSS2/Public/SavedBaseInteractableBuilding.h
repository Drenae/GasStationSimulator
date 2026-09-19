#pragma once
#include "CoreMinimal.h"
#include "SavedBaseInteractableBuilding.generated.h"

USTRUCT(BlueprintType)
struct FSavedBaseInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpened;
    
    GSS2_API FSavedBaseInteractableBuilding();
};

