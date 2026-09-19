#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EViewTargetBlendFunction -FallbackName=EViewTargetBlendFunction
#include "InteractableBuilding.h"
#include "ExhibitionSpot.generated.h"

class AExhibitionSpotSlot;
class AJunkyardCarWreckCustomizable;
class UExhibitionSpotWidget;
class UGSSBaseWidget;

UCLASS(Blueprintable)
class GSS2_API AExhibitionSpot : public AInteractableBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewTargetBlendFunction> BlendFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LockOutgoing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJunkyardCarWreckCustomizable* OutlinedCar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExhibitionSpotSlot* CurrentExhibitionSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExhibitionSpotWidget* ExhibitionSpotWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UExhibitionSpotWidget> ExhibitionSpotWidget_SoftPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSBaseWidget* BoardWidget;
    
public:
    AExhibitionSpot(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetupBindings(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SecondaryAction();
    
    UFUNCTION(BlueprintCallable)
    void PutOnSale(AJunkyardCarWreckCustomizable* PickedCar, AExhibitionSpotSlot* PickedCarExhibitionSpot, float CarSellPrice);
    
    UFUNCTION(BlueprintCallable)
    void PrimaryAction();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishGameLoaded(bool bGameLoaded);
    
    UFUNCTION(BlueprintCallable)
    void OnBackButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void MoveToExhibition(UGSSBaseWidget* InBoardWidget, AJunkyardCarWreckCustomizable* PickedCar, AExhibitionSpotSlot* PickedCarExhibitionSpot);
    
    UFUNCTION(BlueprintCallable)
    void MoveToCarWreckExhibitionSpot(AJunkyardCarWreckCustomizable* PickedCar, AExhibitionSpotSlot* PickedCarExhibitionSpot);
    
    UFUNCTION(BlueprintCallable)
    void LeaveExhibition();
    
};

