#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PhoneCallInfo.h"
#include "PhoneCallInfoDataAsset.generated.h"

class UPhoneNotificationWidget;

UCLASS(Blueprintable)
class GSS2_API UPhoneCallInfoDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPhoneNotificationWidget> CallWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhoneCallInfo> PhoneCalls;
    
    UPhoneCallInfoDataAsset();

};

