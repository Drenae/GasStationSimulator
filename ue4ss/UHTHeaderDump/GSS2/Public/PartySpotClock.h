#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PartySpotClock.generated.h"

class UStaticMeshComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class GSS2_API APartySpotClock : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ClockMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* ClockWidgetComponent;
    
    APartySpotClock(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartPreparingToParty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PartyOn();
    
};

