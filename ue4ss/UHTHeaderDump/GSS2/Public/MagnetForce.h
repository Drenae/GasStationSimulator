#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MagnetForce.generated.h"

class AActor;
class UPrimitiveComponent;

UINTERFACE(Blueprintable)
class GSS2_API UMagnetForce : public UInterface {
    GENERATED_BODY()
};

class GSS2_API IMagnetForce : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SnapPulledActor(UPrimitiveComponent* AttractedPrimitive, UPrimitiveComponent* PrimitiveToApplyForce, AActor* AttractingActor, FVector AttractingPrimitiveLocation, int32 MinRequiredDistanceToSnap, FName BoneName, bool IgnoreDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldActorRotate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsHeldByMagnet(bool NewIsHeldByMagnet);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayEventOnDeattached();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttractedToMagnetEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasCustomSetPhysicsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetPrimitiveToApplyFore();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsHeldByMagnet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetAttractedPrimitive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CustomSetPhysicsEnabled(bool IsPhysicsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanMagnetActivatePhysics();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActorGetAttracted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AttractToMagnet(FVector PoleLocation, UPrimitiveComponent* AttractedPrimitive, UPrimitiveComponent* PrimitiveToApplyForce, int32 MaxDistance, int32 MaxForce, bool DrawDebugLines);
    
};

