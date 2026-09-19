#pragma once
#include "CoreMinimal.h"
#include "VehicleDriverMatchup.generated.h"

class AAICharacterBase;
class AGSSWheeledVehicle;

USTRUCT(BlueprintType)
struct FVehicleDriverMatchup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGSSWheeledVehicle> VehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAICharacterBase> CustomerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAICharacterBase>> NBM_CustomerClasses;
    
    GSS2_API FVehicleDriverMatchup();
};

