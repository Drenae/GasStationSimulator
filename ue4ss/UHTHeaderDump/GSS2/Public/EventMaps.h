#pragma once
#include "CoreMinimal.h"
#include "MapsInfo.h"
#include "EventMaps.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FEventMaps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapsInfo MapsInfo;
    
    FEventMaps();
};

