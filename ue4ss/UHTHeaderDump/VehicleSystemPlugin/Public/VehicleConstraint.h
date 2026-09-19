#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicsConstraintComponent -FallbackName=PhysicsConstraintComponent
#include "VehicleConstraint.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VEHICLESYSTEMPLUGIN_API UVehicleConstraint : public UPhysicsConstraintComponent {
    GENERATED_BODY()
public:
    UVehicleConstraint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLinearSoftConstraint(bool SoftConstraint, float Stiffness, float Damping);
    
};

