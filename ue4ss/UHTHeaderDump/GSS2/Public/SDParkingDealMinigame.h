#pragma once
#include "CoreMinimal.h"
#include "SDShadyDealsMinigameBase.h"
#include "SDParkingDealMinigame.generated.h"

class USDMinigameParticipantComponent;

UCLASS(Blueprintable)
class GSS2_API ASDParkingDealMinigame : public ASDShadyDealsMinigameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDMinigameParticipantComponent* MinigameParticipantsComponent;
    
    ASDParkingDealMinigame(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReadyToDeal(USDMinigameParticipantComponent* MinigameParticipantComponent);
    
};

