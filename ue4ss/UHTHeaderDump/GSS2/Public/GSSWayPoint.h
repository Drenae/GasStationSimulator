#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "GSSWayPoint.generated.h"

class AAICharacterBase;
class UArrowComponent;

UCLASS(Blueprintable)
class GSS2_API AGSSWayPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotateToPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAICharacterBase* OwnerAICharacter;
    
public:
    AGSSWayPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWayPoint(FTransform GoalTransform, bool InRotateToPoint);
    
private:
    UFUNCTION(BlueprintCallable)
    void EndPlayAITargetPoint(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

