#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CameraUnlockBase.h"
#include "DecorationMap.h"
#include "EDLCName.h"
#include "EventMaps.h"
#include "OnDeactivationActionsCompletedDelegate.h"
#include "OnUnloadFinishedDelegate.h"
#include "DecorationCamera.generated.h"

class ADecorationCamera;

UCLASS(Blueprintable)
class GSS2_API ADecorationCamera : public ACameraUnlockBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDecorationMap> DecorationMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DependingMapsLevelNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventMaps> EventsMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpecialSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADecorationCamera*> SameLocationLandmarkCameras;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnloadFinished OnUnloadFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeactivationActionsCompleted OnDeactivationActionsCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SameLocationLandmarkLevelsToRemember;
    
public:
    ADecorationCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadEventDecorationLevel(FName LevelName, int32 UUID);
    
    UFUNCTION(BlueprintCallable)
    void UnloadDecorationLevel(FName LevelName, int32 UUID);
    
    UFUNCTION(BlueprintCallable)
    void UnloadCollidingLevels();
    
    UFUNCTION(BlueprintCallable)
    void ShowPreviouslyHiddenActors();
    
    UFUNCTION(BlueprintCallable)
    void ShowAllActorsOnSameSpotLandmarks(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void ShowActorsOnLevelVisible(bool bShow, ADecorationCamera* Camera);
    
    UFUNCTION(BlueprintCallable)
    void LoadEventDecorationLevel(FName LevelName, int32 UUID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadDecorationLevel(FName LevelName, int32 UUID);
    
    UFUNCTION(BlueprintCallable)
    bool IsDecorationShown(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    bool IsDecorationHidden(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    bool IsDecorationAcquired(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    FDecorationMap GetNextDecorationMapToUnlock(bool& bIsMaxUpgraded, int32& MinGasStationLvLToUnblock, EDLCName& RequiredDLCName, FName& MapDisplayName, FGameplayTag& RequiredTag);
    
    UFUNCTION(BlueprintCallable)
    TArray<FDecorationMap> GetAcquiredDecorations();
    
    UFUNCTION(BlueprintCallable)
    void CallDispatcherOnUnload();
    
};

