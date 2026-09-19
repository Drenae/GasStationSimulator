#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "AirplaneBase.h"
#include "EJoeAirplaneState.h"
#include "MagnetForce.h"
#include "OnJoePlaneFixedSignatureDelegate.h"
#include "OnJoePlaneHoleFixedSignatureDelegate.h"
#include "OnJoePlaneStateChangedSignatureDelegate.h"
#include "PartStruct.h"
#include "PartStructForAsyncLoad.h"
#include "SavedBrokenPartTapes.h"
#include "Airplane_TapingMinigame.generated.h"

class AFixingTape;
class UBoxComponent;
class UChildActorComponent;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMeshComponent;
class UUserWidget;

UCLASS(Blueprintable)
class GSS2_API AAirplane_TapingMinigame : public AAirplaneBase, public IMagnetForce {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJoeAirplaneState PlaneState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoePlaneStateChangedSignature OnJoePlaneStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfBrokenPartsSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartStruct> AirplaneParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PlanePartsSequance;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoePlaneHoleFixedSignature OnJoePlaneHoleFixed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoePlaneFixedSignature OnJoePlaneFixed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PossitionLight_Green;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PossitionLight_Red;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PossitionLight_Red_Beacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PropellerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFixingTape> FixingTapeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> AllertWidgetClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SpawnedPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanMagnetActivatePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanActorBeAttracted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TowySnapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MetalFrame;
    
    AAirplane_TapingMinigame(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TurnOnHighlight(bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TurnOnAirplaneHighlight(bool bShouldHighlight);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAirplanePart(const FPartStructForAsyncLoad& PartToSpawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldActorRotate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPropellerVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetPossitionLightVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaneState(EJoeAirplaneState NewPlaneState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayEventOnDeattached();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOneOfTheHolesFixed(UStaticMeshComponent* HoleMesh);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectDeattachedFromMagnet();
    
    UFUNCTION(BlueprintCallable)
    void InitializePlanePartsAfterLoad(TArray<int32> LoadedPlanePartsSequance, TArray<FSavedBrokenPartTapes> SavedBrokenPartsTapes);
    
    UFUNCTION(BlueprintCallable)
    void InitializeForFirstSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetPrimitiveToApplyFore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EJoeAirplaneState GetPlaneState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetPlanePartSequance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPartStruct> GetPlaneParts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetAttractedPrimitive();
    
    UFUNCTION(BlueprintCallable)
    void GenerateRandomPlaneParts();
    
    UFUNCTION(BlueprintCallable)
    void GeneratePlanePartsFromSequance(TArray<int32> PartsSequance, TArray<FSavedBrokenPartTapes> SavedBrokenPartsTapes);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanMagnetActivatePhysics();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActorGetAttracted();
    
    UFUNCTION(BlueprintCallable)
    void CalculateRemainingHoles();
    
    UFUNCTION(BlueprintCallable)
    bool AreAllBrokenPlanePartsCovered();
    

    // Fix for true pure virtual functions not being implemented
};

