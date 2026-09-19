#pragma once
#include "CoreMinimal.h"
#include "RenownLevelingType.h"
#include "RenownPopularity.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class GSS2_API URenownPopularity : public URenownLevelingType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DTHappyAngryThreshold;
    
    URenownPopularity();

};

