#pragma once
#include "CoreMinimal.h"
#include "EPhoneCallType.h"
#include "InteractionObjective.h"
#include "Templates/SubclassOf.h"
#include "PhoneCallObjective.generated.h"

class APhoneBooth;
class UPhoneCallInfoDataAsset;
class UPhoneNotificationWidget;
class USoundWave;

UCLASS(Blueprintable)
class GSS2_API UPhoneCallObjective : public UInteractionObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhoneCallType CallType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APhoneBooth> PhoneBooth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhoneCallInfoDataAsset* PhoneCallInfoDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUncleShelfeAnimation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* CachedSoundWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPhoneNotificationWidget> CashedCallWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSpawnWidget;
    
public:
    UPhoneCallObjective();

protected:
    UFUNCTION(BlueprintCallable)
    void StartRinging();
    
    UFUNCTION(BlueprintCallable)
    void CasheLoadedAssets(TSoftObjectPtr<USoundWave> SoundWaveSoft, TSoftClassPtr<UPhoneNotificationWidget> CallWidgetSoft);
    
};

