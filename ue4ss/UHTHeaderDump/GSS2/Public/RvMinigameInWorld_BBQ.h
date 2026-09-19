#pragma once
#include "CoreMinimal.h"
#include "BBQItemRatedDelegate.h"
#include "BBQMistakesCountChangedDelegate.h"
#include "BBQScore.h"
#include "BBQSelectedSlotChangedDelegate.h"
#include "BBQSpawnedSlotDelegate.h"
#include "EBBQItemState.h"
#include "RvMinigameInWorld.h"
#include "RvMinigameInWorld_BBQ.generated.h"

class ABBQItem;
class UBBQSettings;
class UBBQSlotComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class GSS2_API ARvMinigameInWorld_BBQ : public ARvMinigameInWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBBQSelectedSlotChanged OnSelectedSlotChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBBQSpawnedSlot OnSlotSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBBQMistakesCountChanged OnMistakesCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBBQItemRated OnBBQItemRated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBBQSlotComponent*> SlotComponents;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBBQSettings* BBQSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBBQScore> ScoresList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Mistakes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedMistakes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlacingCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CookingSpeedOnGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RawSlotsAreaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CookingSlotsAreaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ReadySlotsAreaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UBBQSlotComponent> SelectedSlot;
    
public:
    ARvMinigameInWorld_BBQ(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TryToMoveAnyItemToCookingSlot(UBBQSlotComponent* CookingSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnSetBBQItemInside(UBBQSlotComponent* Slot, ABBQItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemStateChanged(ABBQItem* Item, EBBQItemState State);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialLock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMistakes() const;
    
};

