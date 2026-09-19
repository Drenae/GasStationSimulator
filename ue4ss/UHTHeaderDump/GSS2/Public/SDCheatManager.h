#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManager -FallbackName=CheatManager
#include "SDCheatManager.generated.h"

UCLASS(Blueprintable)
class GSS2_API USDCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShadynessModifierDebugEnabled;
    
public:
    USDCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllDeliveryProducts();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShadynessModifiersDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartGangActivity(uint8 GangActivityTypeEnumAsByte);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetShadynessPercent(int32 Percent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintShadynessModifierState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUnlockAllGangActivities();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPrintGangActivitiesState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPrintGangActivitiesLockState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugForceEnableShadyDealsDLC();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAddMoney(float money);
    
};

