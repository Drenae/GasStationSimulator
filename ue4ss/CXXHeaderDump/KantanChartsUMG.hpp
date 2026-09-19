#ifndef UE4SS_SDK_KantanChartsUMG_HPP
#define UE4SS_SDK_KantanChartsUMG_HPP

struct FCategoryStyleManualMapping
{
    FName CategoryId;                                                                 // 0x0000 (size: 0x8)
    FKantanCategoryStyle Style;                                                       // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FSeriesStyleManualMapping
{
    FName SeriesId;                                                                   // 0x0000 (size: 0x8)
    FKantanSeriesStyle Style;                                                         // 0x0008 (size: 0x20)

}; // Size: 0x28

class UBarChart : public UKantanBarChartBase
{
    class UObject* DataSource;                                                        // 0x0308 (size: 0x8)

    bool SetDatasource(class UObject* InDatasource);
}; // Size: 0x310

class UCartesianPlot : public UKantanCartesianPlotBase
{
    class UObject* DataSource;                                                        // 0x0368 (size: 0x8)

    bool SetDatasource(class UObject* InDatasource);
}; // Size: 0x370

class UKantanBarChartBase : public UKantanCategoryChart
{
    FKantanBarChartStyle WidgetStyle;                                                 // 0x0178 (size: 0x130)
    EKantanBarChartOrientation Orientation;                                           // 0x02A8 (size: 0x1)
    float MaxBarValue;                                                                // 0x02AC (size: 0x4)
    EKantanBarLabelPosition LabelPosition;                                            // 0x02B0 (size: 0x1)
    float BarToGapRatio;                                                              // 0x02B4 (size: 0x4)
    EKantanBarValueExtents ValueExtentsDisplay;                                       // 0x02B8 (size: 0x1)
    FCartesianAxisConfig ValueAxisCfg;                                                // 0x02C0 (size: 0x48)

    void SetValueAxisConfig(const FCartesianAxisConfig& InCfg);
    void SetOrientation(EKantanBarChartOrientation InOrientation);
    void SetMaxBarValue(float InMaxValue);
    void SetLabelPosition(EKantanBarLabelPosition InPosition);
    void SetExtentsDisplay(EKantanBarValueExtents InExtents);
    void SetBarToGapRatio(float InRatio);
}; // Size: 0x308

class UKantanCartesianChartBase : public UKantanChart
{
    FKantanCartesianChartStyle WidgetStyle;                                           // 0x0158 (size: 0x128)
    FKantanCartesianPlotScale PlotScale;                                              // 0x0280 (size: 0x24)
    TEnumAsByte<EKantanDataPointSize::Type> DataPointSize;                            // 0x02A4 (size: 0x1)
    FCartesianAxisConfig XAxisCfg;                                                    // 0x02A8 (size: 0x48)
    FCartesianAxisConfig YAxisCfg;                                                    // 0x02F0 (size: 0x48)
    FMargin AxisTitlePadding;                                                         // 0x0338 (size: 0x10)
    class UKantanSeriesStyleSet* SeriesStyleSet;                                      // 0x0348 (size: 0x8)
    TArray<FSeriesStyleManualMapping> ManualStyleMappings;                            // 0x0350 (size: 0x10)
    bool bAntiAlias;                                                                  // 0x0360 (size: 0x1)

    void SetYAxisConfig(const FCartesianAxisConfig& InCfg);
    void SetXAxisConfig(const FCartesianAxisConfig& InCfg);
    void SetPlotScaleByRange(const FCartesianAxisRange& InRangeX, const FCartesianAxisRange& InRangeY);
    void SetPlotScale(const FVector2D& InScale, const FVector2D& InFocalCoords);
    void SetDataPointSize(TEnumAsByte<EKantanDataPointSize::Type> InSize);
    void SetAxisTitlePadding(const FMargin& InPadding);
    void EnableSeries(FName ID, bool bEnable);
    void ConfigureSeries(FName ID, bool bDrawPoints, bool bDrawLines);
    void AddSeriesStyleOverride(FName SeriesId, class UKantanPointStyle* PointStyle, FLinearColor Color);
}; // Size: 0x368

class UKantanCartesianPlotBase : public UKantanCartesianChartBase
{
}; // Size: 0x368

class UKantanCategoryChart : public UKantanChart
{
    bool bAutoPerCategoryStyles;                                                      // 0x0158 (size: 0x1)
    class UKantanCategoryStyleSet* CategoryStyleSet;                                  // 0x0160 (size: 0x8)
    TArray<FCategoryStyleManualMapping> ManualStyleMappings;                          // 0x0168 (size: 0x10)

    void AddCategoryStyleOverride(FName CategoryId, FLinearColor Color);
}; // Size: 0x178

class UKantanChart : public UWidget
{
    FMargin Margins;                                                                  // 0x0108 (size: 0x10)
    FText ChartTitle;                                                                 // 0x0118 (size: 0x18)
    FMargin TitlePadding;                                                             // 0x0130 (size: 0x10)
    float UpdateTickRate;                                                             // 0x0140 (size: 0x4)

    void SetUpdateTickRate(float InRate);
    void SetMargins(const FMargin& InMargins);
    void SetChartTitlePadding(const FMargin& InPadding);
    void SetChartTitle(const FText& InTitle);
}; // Size: 0x158

class UKantanChartLegend : public UWidget
{
    FMargin Margins;                                                                  // 0x0108 (size: 0x10)
    FMargin SeriesPadding;                                                            // 0x0118 (size: 0x10)
    FSlateBrush background;                                                           // 0x0128 (size: 0x88)
    int32 FontSize;                                                                   // 0x01B0 (size: 0x4)
    TWeakObjectPtr<class UKantanCartesianChartBase> Chart;                            // 0x01B4 (size: 0x8)

    void SetSeriesPadding(const FMargin& InPadding);
    void SetMargins(const FMargin& InMargins);
    void SetFontSize(int32 InFontSize);
    void SetChart(class UKantanCartesianChartBase* InChart);
    void SetBackground(const FSlateBrush& InBrush);
}; // Size: 0x1D0

class UKantanTimeSeriesPlotBase : public UKantanCartesianChartBase
{
    bool bUseFixedTimeRange;                                                          // 0x0368 (size: 0x1)
    float DisplayTimeRange;                                                           // 0x036C (size: 0x4)
    FCartesianRangeBound LowerTimeBound;                                              // 0x0370 (size: 0x8)
    FCartesianRangeBound UpperTimeBound;                                              // 0x0378 (size: 0x8)
    FCartesianRangeBound LowerValueBound;                                             // 0x0380 (size: 0x8)
    FCartesianRangeBound UpperValueBound;                                             // 0x0388 (size: 0x8)
    bool bExtendValueRangeToZero;                                                     // 0x0390 (size: 0x1)

    void SetUpperValueBound(FCartesianRangeBound InUpperBound);
    void SetUpperTimeBound(FCartesianRangeBound InUpperBound);
    void SetLowerValueBound(FCartesianRangeBound InLowerBound);
    void SetLowerTimeBound(FCartesianRangeBound InLowerBound);
}; // Size: 0x398

class USimpleBarChart : public UKantanBarChartBase
{

    void BP_UpdateCategoryValue(FName ID, float Value, bool& bSuccess);
    void BP_RemoveCategory(FName ID, bool& bSuccess);
    void BP_RemoveAllCategories();
    void BP_AddCategoryWithId(FName ID, FText Name, bool& bSuccess);
    void BP_AddCategory(FText Name, FName& CatId);
}; // Size: 0x320

class USimpleCartesianPlot : public UKantanCartesianPlotBase
{

    void BP_RemoveSeries(FName ID, bool& bSuccess);
    void BP_RemoveAllSeries();
    void BP_AddSeriesWithId(bool& bSuccess, FName ID, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines);
    void BP_AddSeries(FName& SeriesId, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines);
    void BP_AddDatapoint(FName SeriesId, const FVector2D& Point, bool& bSuccess);
}; // Size: 0x388

class USimpleTimeSeriesPlot : public UKantanTimeSeriesPlotBase
{

    void BP_RemoveSeries(FName ID, bool& bSuccess);
    void BP_RemoveAllSeries();
    void BP_AddSeriesWithId(bool& bSuccess, FName ID, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines);
    void BP_AddSeries(FName& SeriesId, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines);
    void BP_AddDatapointNow(FName SeriesId, float Value, bool& bSuccess);
    void BP_AddDatapoint(FName SeriesId, const FVector2D& Point, bool& bSuccess);
}; // Size: 0x3B8

class UTimeSeriesPlot : public UKantanTimeSeriesPlotBase
{
    class UObject* DataSource;                                                        // 0x0398 (size: 0x8)

    bool SetDatasource(class UObject* InDatasource);
}; // Size: 0x3A0

#endif
