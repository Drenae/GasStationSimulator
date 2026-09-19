#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "KantanSeriesStyle.h"
#include "KantanSeriesStyleSet.generated.h"

UCLASS(Blueprintable)
class KANTANCHARTSSLATE_API UKantanSeriesStyleSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKantanSeriesStyle> Styles;
    
    UKantanSeriesStyleSet();

};

