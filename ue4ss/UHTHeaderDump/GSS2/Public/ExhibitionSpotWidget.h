#pragma once
#include "CoreMinimal.h"
#include "BackButtonClickedDelegate.h"
#include "GSSBaseWidget.h"
#include "NextExhibitionSpotDelegate.h"
#include "SellButtonClickedDelegate.h"
#include "SellConfirmedDelegate.h"
#include "ExhibitionSpotWidget.generated.h"

class AJunkyardCarWreckCustomizable;
class UButton;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UExhibitionSpotWidget : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSellButtonClicked SellButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSellConfirmed OnSellConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNextExhibitionSpot OnNextExhibitionSpot;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackButtonClicked OnBackButtonClicked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* SellButton;
    
public:
    UExhibitionSpotWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHideCarCloseView(bool bShow, AJunkyardCarWreckCustomizable* PickedCar);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCarPrice(AJunkyardCarWreckCustomizable* InCarWreck);
    
    UFUNCTION(BlueprintCallable)
    UButton* GetSellButton();
    
};

