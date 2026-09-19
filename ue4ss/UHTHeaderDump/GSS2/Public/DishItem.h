#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClearStainAttemptDelegate.h"
#include "EDishType.h"
#include "Item.h"
#include "StainsCountChangeDelegate.h"
#include "WetStateChangedDelegate.h"
#include "DishItem.generated.h"

class ADishesStack;

UCLASS(Blueprintable)
class GSS2_API ADishItem : public AItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStainsCountChange OnStainsCountChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWetStateChanged OnWetStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClearStainAttempt OnClearStainAttempt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDishType DishType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlacingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlacingMovementHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADishesStack* DishesStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADishesStack* PreviousDishesStack;
    
public:
    ADishItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDishesStack(ADishesStack* NewDishesStack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDirtHighlight(bool bNewHighlight);
    
    UFUNCTION(BlueprintCallable)
    void PlaceInPosition(FVector WorldLocation, bool bInitialPlacement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStains() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADishesStack* GetPreviousDishesStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDishType GetDishType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADishesStack* GetDishesStack() const;
    
};

