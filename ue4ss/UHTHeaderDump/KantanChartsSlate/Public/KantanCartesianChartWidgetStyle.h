#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "KantanCartesianChartStyle.h"
#include "KantanCartesianChartWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKantanCartesianChartWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKantanCartesianChartStyle ChartStyle;
    
    UKantanCartesianChartWidgetStyle();

};

