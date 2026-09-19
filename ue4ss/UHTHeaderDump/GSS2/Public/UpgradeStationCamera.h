#pragma once
#include "CoreMinimal.h"
#include "CameraUnlockBase.h"
#include "EDLCName.h"
#include "UpgradingMap.h"
#include "UpgradingProcessFinishedDelegate.h"
#include "UpgradeStationCamera.generated.h"

class AActor;

UCLASS(Blueprintable)
class GSS2_API AUpgradeStationCamera : public ACameraUnlockBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUpgradingMap> UpgradingMaps;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpgradingProcessFinished OnUpgradingProcessFinished;
    
    AUpgradeStationCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnblockMap(FName MapName, bool EnablePostprocess);
    
    UFUNCTION(BlueprintCallable)
    void TryUnlockPathPoints(FName MapName);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockMapInfo(FName MapName, bool& bIsExtraFeature, bool& bIsUnlocked, int32& MinGasStationLvLToUnblock);
    
    UFUNCTION(BlueprintCallable)
    FUpgradingMap GetNextUpgradedMapToUnlock(bool& bIsMaxUpgraded, int32& MinGasStationLvLToUnblock, EDLCName& RequiredDLCName, FName UpgradeActorTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUpgradingMap GetMapToUpgrade(FName MapName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FUpgradingMap> GetMapsToUnblock();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRuin(AActor* DestroyedActor);
    
};

