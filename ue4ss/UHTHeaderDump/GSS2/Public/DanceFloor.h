#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "InteractableBuilding.h"
#include "PartySoundCue.h"
#include "SpotToDance.h"
#include "DanceFloor.generated.h"

class AAICharacterBase;
class APartySpot;
class UArrowComponent;
class UAudioComponent;
class USoundCue;

UCLASS(Blueprintable)
class GSS2_API ADanceFloor : public AInteractableBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartySoundCue> PartyNPCSoundCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartySoundCue> PartyEndNPCSoundCues;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* Music;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* NPCSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APartySpot* PartySpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfDancingNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartyNPCAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpotToDance> SpotsToDance;
    
    ADanceFloor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StopAllSounds();
    
    UFUNCTION(BlueprintCallable)
    void StartDancing();
    
    UFUNCTION(BlueprintCallable)
    void SortSpotsToDance(TArray<FSpotToDance>& OutSpotsToDance);
    
    UFUNCTION(BlueprintCallable)
    void ResetNumberOfDancingNPC();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PartyEndNPCSounds();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnUfoUsed();
    
    UFUNCTION(BlueprintCallable)
    void OnPartyUfoLoaded(FTransform Transform);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCloseOpenGasStation(bool bIsGasStationOpen);
    
    UFUNCTION(BlueprintCallable)
    void MusicStopped();
    
    UFUNCTION(BlueprintCallable)
    bool LeaveSpot(AAICharacterBase* AICharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<USoundCue> GetSoundCue(int32 NumberOfFullBaskets, bool PartyFinished);
    
    UFUNCTION(BlueprintCallable)
    void FinishParty();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfDancingTime();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfAllNPCStoppedDancing();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfAllNPCOnDanceFloor();
    
    UFUNCTION(BlueprintCallable)
    int32 AddToSpot(AAICharacterBase* Character, UArrowComponent*& Spot);
    
};

