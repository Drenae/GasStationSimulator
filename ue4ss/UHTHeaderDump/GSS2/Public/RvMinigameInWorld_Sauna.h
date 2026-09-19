#pragma once
#include "CoreMinimal.h"
#include "RvMinigameInWorld.h"
#include "SaunaMistakeModeEnabledDelegate.h"
#include "SaunaMistakesCountChangedDelegate.h"
#include "SaunaTargetDotCollectedDelegate.h"
#include "Templates/SubclassOf.h"
#include "RvMinigameInWorld_Sauna.generated.h"

class ASaunaCollectibleDot;
class ASaunaObstacleDot;
class ASaunaPlayerDot;
class ASaunaTargetDot;
class ASaunaTrack;
class USaunaSettings;
class USceneComponent;

UCLASS(Blueprintable)
class GSS2_API ARvMinigameInWorld_Sauna : public ARvMinigameInWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaunaMistakesCountChanged OnMistakesCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaunaTargetDotCollected OnSaunaTargetDotCollected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaunaMistakeModeEnabled OnMistakeModeEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASaunaTrack* Track;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASaunaCollectibleDot*> CollectibleDots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASaunaPlayerDot* PlayerDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASaunaPlayerDot> PlayerDotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASaunaTargetDot> TargetDotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASaunaObstacleDot> ObstacleDotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASaunaTrack> TrackClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TrackSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaunaSettings* SaunaSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetsToCollect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectedTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedMistakes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Mistakes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMistakeMode;
    
public:
    ARvMinigameInWorld_Sauna(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetMistakeMode(bool bNewEnabled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectedDot(ASaunaCollectibleDot* CollectedDot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMistakeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASaunaPlayerDot* GetPlayerDot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetMistakeModeProgress() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<ASaunaCollectibleDot*> GetCollectibleDots();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DelayedSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSpawnCollectibleDots() const;
    
};

