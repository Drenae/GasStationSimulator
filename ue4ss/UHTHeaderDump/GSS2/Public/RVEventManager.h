#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "RVEventManager.generated.h"

class ARVCampManager;
class URVEventSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API URVEventManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventCooldownInHours;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVCampManager* RVCampManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVEventSettings* EventSettings;
    
public:
    URVEventManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateEventCooldown();
    
    UFUNCTION(BlueprintCallable)
    void TryStartNewEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnHourUpdated(int32 Hour);
    
};

