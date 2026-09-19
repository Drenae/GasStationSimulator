#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "Interaction.generated.h"

class AActor;
class AGSSWheeledVehicle;
class APathPoint;
class APawn;
class UPrimitiveComponent;
class UStaticMeshComponent;

UINTERFACE(Blueprintable)
class GSS2_API UInteraction : public UInterface {
    GENERATED_BODY()
};

class GSS2_API IInteraction : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UseItem(APawn* Pawn, bool Throw, float AimingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SimpleInteraction(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShowTooltip(APawn* Pawn, FHitResult Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowInteractionAlertMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    APathPoint* GetPathPoint(AGSSWheeledVehicle* GSSWheeledVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetInteractiveTransform(AActor* Actor, bool& RotateToTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DisplayInteractionInfo(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableInteractionInfo(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanBeInteractable(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AlternativeInteraction(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    
};

