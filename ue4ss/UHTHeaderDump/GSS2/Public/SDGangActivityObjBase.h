#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESDGangActivityResult.h"
#include "ESDGangActivityType.h"
#include "SDShadynessModifierSettings.h"
#include "SDGangActivityObjBase.generated.h"

class AGSSWheeledVehicle;

UCLASS(Blueprintable)
class GSS2_API USDGangActivityObjBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDGangActivityType ActivityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGSSWheeledVehicle*> ActivityVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESDGangActivityResult, FSDShadynessModifierSettings> ShadynessOutcome;
    
public:
    USDGangActivityObjBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterVehicle(AGSSWheeledVehicle* InVehicle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessShadynessOutcome(ESDGangActivityResult ActivityResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStart(bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnd(ESDGangActivityResult Result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeActivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGSSWheeledVehicle*> GetActivityVehicles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDGangActivityType GetActivityType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndActivity(ESDGangActivityResult InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeCaughtBySheriff();
    
};

