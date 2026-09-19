#pragma once
#include "CoreMinimal.h"
#include "GSSBaseWidget.h"
#include "RVServiceExperienceData.h"
#include "RvGuestServiceEndedPopUp.generated.h"

class ARvGuestServiceSpot;
class URvGuestServiceResult;
class URvMinigameWidget;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API URvGuestServiceEndedPopUp : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URvGuestServiceResult> ResultWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URvMinigameWidget* MinigameWidgetRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARvGuestServiceSpot* ServiceSpotRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVServiceExperienceData ExperienceData;
    
    URvGuestServiceEndedPopUp();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
};

