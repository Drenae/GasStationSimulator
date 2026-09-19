#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysXVehicles -ObjectName=WheeledVehicle -FallbackName=WheeledVehicle
#include "DesertCar.generated.h"

class ACharacter;
class UKeyItemWidget;

UCLASS(Blueprintable)
class GSS2_API ADesertCar : public AWheeledVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKeyItemWidget* BindWidget;
    
    ADesertCar(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ACharacter* GetBPOriginalCharacter();
    
};

