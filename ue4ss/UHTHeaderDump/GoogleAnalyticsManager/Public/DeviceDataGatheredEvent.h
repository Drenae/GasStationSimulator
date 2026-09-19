#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=JsonUtilities -ObjectName=JsonObjectWrapper -FallbackName=JsonObjectWrapper
#include "DeviceDataGatheredEvent.generated.h"

USTRUCT(BlueprintType)
struct GOOGLEANALYTICSMANAGER_API FDeviceDataGatheredEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper params;
    
    FDeviceDataGatheredEvent();
};

