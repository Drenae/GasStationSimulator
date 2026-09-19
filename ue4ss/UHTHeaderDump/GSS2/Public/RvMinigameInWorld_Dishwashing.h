#pragma once
#include "CoreMinimal.h"
#include "DishStainClearAttemptDelegate.h"
#include "DishStainsCountChangeDelegate.h"
#include "DishWetStateChangedDelegate.h"
#include "EDishwashingEfficiency.h"
#include "RvMinigameInWorld.h"
#include "WaterFlowDurationUpdatedDelegate.h"
#include "RvMinigameInWorld_Dishwashing.generated.h"

class ADishItem;
class ADishesStack;
class ADishwashingWaterStream;
class UBoxComponent;
class UDishwashingSettings;

UCLASS(Blueprintable)
class GSS2_API ARvMinigameInWorld_Dishwashing : public ARvMinigameInWorld {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* GamepadMovementArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDishwashingEfficiency CurrentEfficiency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaterFlowDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentWaterFlowDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDishWetStateChanged OnDishWetStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDishStainsCountChange OnDishStainsCountChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDishStainClearAttempt OnDishStainClearAttempt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterFlowDurationUpdated OnWaterFlowDurationUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDishwashingSettings* DishwashingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADishesStack*> DishesStacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADishwashingWaterStream* DishwashingWaterStream;
    
public:
    ARvMinigameInWorld_Dishwashing(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UseWater(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnDishPlacedOnDishesStack(ADishesStack* DishesStack, ADishItem* Dish);
    
    UFUNCTION(BlueprintCallable)
    ADishItem* GetTopDishFromPriorityDirtyDishesStack();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnDishWetStateChanged(ADishItem* Dish, bool bWet);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnDishStainsCountChange(ADishItem* Dish, int32 Change);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnClearStainAttempt(ADishItem* Dish, int32 Amount);
    
};

