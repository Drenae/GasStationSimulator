#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AwaitWoodenLogPlacedDelegate.h"
#include "CalculateFinalScoreEndGameDelegate.h"
#include "DisplaySuccessFailDelegate.h"
#include "OnCuttingRatioUpdatedDelegate.h"
#include "OnIncorrectCuttingPointDelegate.h"
#include "OnLogSlicedDelegate.h"
#include "RvMinigameInWorld.h"
#include "SpawnWoodenLogDelayedDelegate.h"
#include "Templates/SubclassOf.h"
#include "UpdateLogsCounterDelegate.h"
#include "RvMinigameInWorldWoodChopping.generated.h"

class AWoodenLogForCutting;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UProceduralMeshComponent;
class USplineComponent;
class USplineMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UWoodChoppingSettings;

UCLASS(Blueprintable)
class GSS2_API ARvMinigameInWorldWoodChopping : public ARvMinigameInWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CuttingAreaPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FirstPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StartIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SecondPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* CuttingIndicator_Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CapMaterialRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CutedLogsCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MinigameEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClickerBlocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClickCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ScoreList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalOfFirstRatios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalOfSecondRatios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SetFixedZForPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLogsToCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccessTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CutDistanceFromCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWoodChoppingSettings* WoodChoppingSettingsREF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWoodenLogForCutting> WoodenLogClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWoodenLogForCutting* WoodenLogForCuttingREF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMeshComponentREF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* StartIndicatorDMIRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CuttingIndicatorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CuttingIndicatorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProceduralMeshComponent* SlicedProceduralMeshREF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectingEndPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndPointLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCuttingRatioUpdated OnCuttingRatioUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateLogsCounter UpdateLogsCounter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnWoodenLogDelayed SpawnWoodenLogDelayed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAwaitWoodenLogPlaced AwaitWoodenLogPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCalculateFinalScoreEndGame CalculateFinalScoreEndGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplaySuccessFail DisplaySuccessFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIncorrectCuttingPoint OnIncorrectCuttingPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLogSliced OnLogSliced;
    
    ARvMinigameInWorldWoodChopping(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCuttingPoints(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCuttingLine(bool bVisible, FVector StartLocationWorld, FVector EndLocationWorld, bool bPointingEnd);
    
    UFUNCTION(BlueprintCallable)
    void TryToStartCutting();
    
    UFUNCTION(BlueprintCallable)
    void TryToEndCutting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartCutting();
    
    UFUNCTION(BlueprintCallable)
    void SpawnWoodenLog();
    
    UFUNCTION(BlueprintCallable)
    void SimulatePhysicsDestroyIndicatorDelayed();
    
    UFUNCTION(BlueprintCallable)
    void SetupStartingValues();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupCuttingIndicator();
    
    UFUNCTION(BlueprintCallable)
    void EndWoodenLogsCutting();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndCutting();
    
    UFUNCTION(BlueprintCallable)
    void DestroyWoodenLogDelayed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanMakeCut() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelCutting();
    
    UFUNCTION(BlueprintCallable)
    void CancelClickingBlocker();
    
};

