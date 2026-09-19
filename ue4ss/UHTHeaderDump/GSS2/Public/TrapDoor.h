#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OnTriedToTeleportDelegate.h"
#include "TrapDoor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ATrapDoor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TeleportTransform;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTriedToTeleport OnTriedToTeleport;
    
    ATrapDoor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryTeleport();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayParticle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCantTeleport();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanTeleport() const;
    
};

