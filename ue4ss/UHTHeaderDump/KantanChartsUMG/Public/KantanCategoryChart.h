#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "CategoryStyleManualMapping.h"
#include "KantanChart.h"
#include "KantanCategoryChart.generated.h"

class UKantanCategoryStyleSet;

UCLASS(Abstract, Blueprintable)
class KANTANCHARTSUMG_API UKantanCategoryChart : public UKantanChart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPerCategoryStyles;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKantanCategoryStyleSet* CategoryStyleSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCategoryStyleManualMapping> ManualStyleMappings;
    
    UKantanCategoryChart();

    UFUNCTION(BlueprintCallable)
    void AddCategoryStyleOverride(FName CategoryId, FLinearColor Color);
    
};

