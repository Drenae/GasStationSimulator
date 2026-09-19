#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "ECountryRegion.h"
#include "TradingPlanesInfo.generated.h"

class UTradingPlaneInfo;

USTRUCT(BlueprintType)
struct FTradingPlanesInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECountryRegion CountryRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTradingPlaneInfo* TradingPlaneInfo;
    
    GSS2_API FTradingPlanesInfo();
};

