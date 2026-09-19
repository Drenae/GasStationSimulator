#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=KantanChartsSlate -ObjectName=CartesianAxisConfig -FallbackName=CartesianAxisConfig
//CROSS-MODULE INCLUDE V2: -ModuleName=KantanChartsSlate -ObjectName=CartesianAxisRange -FallbackName=CartesianAxisRange
//CROSS-MODULE INCLUDE V2: -ModuleName=KantanChartsSlate -ObjectName=EKantanDataPointSize -FallbackName=EKantanDataPointSize
//CROSS-MODULE INCLUDE V2: -ModuleName=KantanChartsSlate -ObjectName=KantanCartesianChartStyle -FallbackName=KantanCartesianChartStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=KantanChartsSlate -ObjectName=KantanCartesianPlotScale -FallbackName=KantanCartesianPlotScale
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "KantanChart.h"
#include "SeriesStyleManualMapping.h"
#include "KantanCartesianChartBase.generated.h"

class UKantanPointStyle;
class UKantanSeriesStyleSet;

UCLASS(Abstract, Blueprintable)
class KANTANCHARTSUMG_API UKantanCartesianChartBase : public UKantanChart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKantanCartesianChartStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKantanCartesianPlotScale PlotScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EKantanDataPointSize::Type> DataPointSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCartesianAxisConfig XAxisCfg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCartesianAxisConfig YAxisCfg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin AxisTitlePadding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKantanSeriesStyleSet* SeriesStyleSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeriesStyleManualMapping> ManualStyleMappings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAntiAlias;
    
    UKantanCartesianChartBase();

    UFUNCTION(BlueprintCallable)
    void SetYAxisConfig(const FCartesianAxisConfig& InCfg);
    
    UFUNCTION(BlueprintCallable)
    void SetXAxisConfig(const FCartesianAxisConfig& InCfg);
    
    UFUNCTION(BlueprintCallable)
    void SetPlotScaleByRange(const FCartesianAxisRange& InRangeX, const FCartesianAxisRange& InRangeY);
    
    UFUNCTION(BlueprintCallable)
    void SetPlotScale(const FVector2D& InScale, const FVector2D& InFocalCoords);
    
    UFUNCTION(BlueprintCallable)
    void SetDataPointSize(TEnumAsByte<EKantanDataPointSize::Type> InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetAxisTitlePadding(const FMargin& InPadding);
    
    UFUNCTION(BlueprintCallable)
    void EnableSeries(FName ID, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ConfigureSeries(FName ID, bool bDrawPoints, bool bDrawLines);
    
    UFUNCTION(BlueprintCallable)
    void AddSeriesStyleOverride(FName SeriesId, UKantanPointStyle* PointStyle, FLinearColor Color);
    
};

