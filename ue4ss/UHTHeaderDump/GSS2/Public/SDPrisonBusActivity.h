#pragma once
#include "CoreMinimal.h"
#include "SDGangActivityObjBase.h"
#include "SDPrisonBusActivity.generated.h"

class AGSSWheeledVehicle;

UCLASS(Blueprintable)
class GSS2_API USDPrisonBusActivity : public USDGangActivityObjBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrisonersNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGSSWheeledVehicle> PrisonBusSoftClass;
    
public:
    USDPrisonBusActivity();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrisonersNum() const;
    
};

