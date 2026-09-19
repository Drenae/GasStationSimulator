#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "EVehicleMoveState.h"
#include "EVehicleState.h"
#include "AIVehicleController.generated.h"

class AGSSCharacterBase;
class UBehaviorTree;

UCLASS(Blueprintable)
class GSS2_API AAIVehicleController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSCharacterBase* CharacterBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleState VehicleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleMoveState VehicleMoveState;
    
    AAIVehicleController(const FObjectInitializer& ObjectInitializer);

};

