#pragma once
#include "CoreMinimal.h"
#include "DumbbellSetup.h"
#include "DumbbellsMoveModeEnabledDelegate.h"
#include "DumbbellsSolution.h"
#include "EGuestServiceDifficulty.h"
#include "RvMinigameInWorld.h"
#include "RvMinigameInWorld_Dumbbells.generated.h"

class ADumbbellItem;
class ADumbbellsContainer;
class AGriffin;
class UDumbbellsSettings;

UCLASS(Blueprintable)
class GSS2_API ARvMinigameInWorld_Dumbbells : public ARvMinigameInWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDumbbellsMoveModeEnabled OnMoveModeEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetTotalWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDumbbellsSettings* DumbbellsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADumbbellsContainer*> DumbbellsContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGriffin*> Griffins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADumbbellItem*> SpawnedDumbbells;
    
public:
    ARvMinigameInWorld_Dumbbells(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnDumbbell(const FDumbbellSetup& Setup);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetDumbbells();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDumbbellItemPlacedInContainer(ADumbbellItem* Item, ADumbbellsContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    FDumbbellsSolution MergeSolutions(TArray<FDumbbellsSolution> Solutions);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalWeightForDifficulty(EGuestServiceDifficulty Diff, int32 SlotsAmount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetTotalWeight() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetSetupsForSolutions(TArray<FDumbbellSetup>& OutSetups, const TArray<FDumbbellsSolution>& Solutions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDumbbellSetup> GetSetups(bool bSort) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateSolutions(float TargetWeight, const TArray<FDumbbellSetup>& Setups, TArray<FDumbbellsSolution>& OutSolutions, int32 MaxDumbbellsAmount);
    
    UFUNCTION(BlueprintCallable)
    void GenerateSimplestSolution(float TargetWeight, const TArray<FDumbbellSetup>& Setups, FDumbbellsSolution& OutSolution, int32 MaxDumbbellsAmount);
    
};

