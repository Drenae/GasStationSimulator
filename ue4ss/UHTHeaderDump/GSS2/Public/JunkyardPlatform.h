#pragma once
#include "CoreMinimal.h"
#include "CarWreckPlaceableArea.h"
#include "JunkyardPlatform.generated.h"

class UArrowComponent;
class UChildActorComponent;

UCLASS(Blueprintable)
class GSS2_API AJunkyardPlatform : public ACarWreckPlaceableArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* JunkyardMonitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* QuestMarkerLocation;
    
    AJunkyardPlatform(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TogglePlatformSign(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleMultitoolLights(bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlatformWithCarLoaded();
    
};

