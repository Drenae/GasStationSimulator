#pragma once
#include "CoreMinimal.h"
#include "CarWreckPlaceableArea.h"
#include "ExhibitionSpotSlot.generated.h"

class UChildActorComponent;

UCLASS(Blueprintable)
class GSS2_API AExhibitionSpotSlot : public ACarWreckPlaceableArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ExhibitionCamera;
    
    AExhibitionSpotSlot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DEBUG_PutCarOnSale();
    
};

