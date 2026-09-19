#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EDLCName.h"
#include "AdditionalUpgrades.generated.h"

class UFeatureUpgrade;

USTRUCT(BlueprintType)
struct FAdditionalUpgrades : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeatureUpgrade* FeatureUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDLCName> DlcRequired;
    
    GSS2_API FAdditionalUpgrades();
};

