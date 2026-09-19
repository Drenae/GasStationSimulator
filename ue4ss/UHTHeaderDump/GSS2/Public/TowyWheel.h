#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysXVehicles -ObjectName=VehicleWheel -FallbackName=VehicleWheel
#include "TowyWheel.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API UTowyWheel : public UVehicleWheel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMesh;
    
    UTowyWheel();

};

