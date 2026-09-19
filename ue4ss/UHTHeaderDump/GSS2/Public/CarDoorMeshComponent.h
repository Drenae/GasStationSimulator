#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Templates/SubclassOf.h"
#include "CarDoorMeshComponent.generated.h"

class ACarDoor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UCarDoorMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACarDoor> VehiclePartToSpawnIfBroken;
    
    UCarDoorMeshComponent(const FObjectInitializer& ObjectInitializer);

};

