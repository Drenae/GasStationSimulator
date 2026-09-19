#pragma once
#include "CoreMinimal.h"
#include "SDMinigameBasedGangActivity.h"
#include "SDParkingDealActivity.generated.h"

UCLASS(Blueprintable)
class GSS2_API USDParkingDealActivity : public USDMinigameBasedGangActivity {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoneyBagNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoneyBagNumMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoneyBagNumMax;
    
public:
    USDParkingDealActivity();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 InitializeMoneyBugNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMoneyBagNum() const;
    
};

