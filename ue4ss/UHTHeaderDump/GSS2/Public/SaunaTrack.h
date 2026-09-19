#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SaunaTrack.generated.h"

class ARvMinigameInWorld_Sauna;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class GSS2_API ASaunaTrack : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARvMinigameInWorld_Sauna* MinigameInWorldSauna;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ArcCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcRadius;
    
public:
    ASaunaTrack(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float NormalizeSplineTime(float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransformForTime(float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetSplineComponent() const;
    
};

