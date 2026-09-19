#pragma once
#include "CoreMinimal.h"
#include "MapsInfo.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FMapsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EventMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DependingEventMapsLevelName;
    
    FMapsInfo();
};

