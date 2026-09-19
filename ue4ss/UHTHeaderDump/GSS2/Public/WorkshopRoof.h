#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WorkshopRoof.generated.h"

class ACarWreckPlaceableArea;
class AJunkyardManager;
class UArrowComponent;
class UCurveFloat;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AWorkshopRoof : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* OpenedMeshPositionArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACarWreckPlaceableArea> AssignedPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACarWreckPlaceableArea* AssignedPlatformResolved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromMagnetToOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OpeningSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClosedMeshPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OpenedMeshPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsClosingOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJunkyardManager* JunkyardManager;
    
public:
    AWorkshopRoof(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateRoofPosition();
    
    UFUNCTION(BlueprintCallable)
    void OpenRoof();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoofStartedMoving();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoofFinishedMoving();
    
    UFUNCTION(BlueprintCallable)
    void OnCraneExited(bool ExitedyPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnCraneEntered(bool EnteredByPlayer);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsOpen();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseRoof();
    
};

