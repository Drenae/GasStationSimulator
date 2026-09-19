#pragma once
#include "CoreMinimal.h"
#include "GSSInnerWidget.h"
#include "TimeStruct.h"
#include "PC_DeliveryStatus.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_DeliveryStatus : public UGSSInnerWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> Vehicle;
    
public:
    UPC_DeliveryStatus();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartDeliveryAnimation(bool IsDeliveryOnTheRoad, bool bRoadBack);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleLoaded(TSoftClassPtr<AActor> InVehicle);
    
    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
    UFUNCTION(BlueprintCallable)
    void InitializeDeliveryStatus(FName VehicleName);
    
    UFUNCTION(BlueprintCallable)
    void CheckForDeliveryStatus(const FTimeStruct Time);
    
};

