#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EPhoneCallType.h"
#include "PhoneCallInfo.h"
#include "PhoneNotificationWidget.generated.h"

class UImage;
class UPhoneCallInfoDataAsset;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPhoneNotificationWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhoneCallType CallType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhoneCallInfoDataAsset* PhoneCallInfoDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUncleShelfeAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PhoneCall_IMG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PhoneCallDescription_TXT;
    
public:
    UPhoneNotificationWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeWidget(EPhoneCallType PhoneCallType, bool _bShowUncleShelfeAnimation);
    
    UFUNCTION(BlueprintCallable)
    void FillWidgets(FPhoneCallInfo PhoneCallData);
    
    UFUNCTION(BlueprintCallable)
    void FillPhoneCallInfo(EPhoneCallType PhoneCallType);
    
};

