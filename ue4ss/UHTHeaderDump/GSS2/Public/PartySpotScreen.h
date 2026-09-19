#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DrawnProduct.h"
#include "PartySpotScreen.generated.h"

class UStaticMeshComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class GSS2_API APartySpotScreen : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ScreenMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* ConfirmationWidgetComponent;
    
    APartySpotScreen(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScreen(const FDrawnProduct DrawnProduct);
    
};

