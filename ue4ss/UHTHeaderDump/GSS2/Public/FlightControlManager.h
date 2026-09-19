#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ERunway.h"
#include "SavedCurrentStripSequence.h"
#include "FlightControlManager.generated.h"

class ALevelSequenceActor;
class ATradingAirplane;
class ULevelSequence;

UCLASS(Blueprintable)
class GSS2_API AFlightControlManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALevelSequenceActor*> MiddleStrip_Sequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> MS_Sequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALevelSequenceActor*> ThirdStrip_Sequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> TS_Sequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCurrentStripSequence CurrentMSSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedCurrentStripSequence CurrentTSSequenceActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATradingAirplane*> AvailableAirplanes;
    
    AFlightControlManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopPlane(ATradingAirplane* Airplane);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentTSSequenceActor(FSavedCurrentStripSequence SequenceActorToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSequenceLoadedFromSave(ERunway Runway, bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMSSequenceActor(FSavedCurrentStripSequence SequenceActorToSet);
    
    UFUNCTION(BlueprintCallable)
    void ResetSequenceRemoveBinding(ATradingAirplane* Plane);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 RandomSequence(int32 NumbersOfElementsInArray);
    
public:
    UFUNCTION(BlueprintCallable)
    void PauseSequence(ATradingAirplane* Airplane, bool bLoadedFromSave);
    
    UFUNCTION(BlueprintCallable)
    void OnPlaneTakeOff(ERunway Runway);
    
    UFUNCTION(BlueprintCallable)
    void OnPlaneSpawned(ERunway Runway);
    
    UFUNCTION(BlueprintCallable)
    void OnAirportSet(bool bLoadedFromSave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ALevelSequenceActor*> GetThirdStrip_Sequences();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ALevelSequenceActor*> GetMiddleStrip_Sequences();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSavedCurrentStripSequence GetCurrentTSSequenceActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSavedCurrentStripSequence GetCurrentMSSequenceActor();
    
    UFUNCTION(BlueprintCallable)
    void CreateThirdStripSequences(bool bLoadedFromSave);
    
    UFUNCTION(BlueprintCallable)
    void CreateMSTSSequences(bool bLoadedFromSave);
    
    UFUNCTION(BlueprintCallable)
    void CreateMiddleStripSequences(bool bLoadedFromSave);
    
    UFUNCTION(BlueprintCallable)
    void BindOnSequenceFinished(ATradingAirplane* Plane);
    
};

