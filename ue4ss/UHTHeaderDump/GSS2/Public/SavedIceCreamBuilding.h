#pragma once
#include "CoreMinimal.h"
#include "SavedIceCreamContainer.h"
#include "SavedIceCreamBuilding.generated.h"

USTRUCT(BlueprintType)
struct FSavedIceCreamBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IceCreamStandLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedIceCreamContainer> SavedIceCreamContainers;
    
    GSS2_API FSavedIceCreamBuilding();
};

