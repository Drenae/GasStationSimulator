#ifndef UE4SS_SDK_KantanChartsSlate_HPP
#define UE4SS_SDK_KantanChartsSlate_HPP

#include "KantanChartsSlate_enums.hpp"

struct FCartesianAxisConfig
{
    FText Title;                                                                      // 0x0000 (size: 0x18)
    FText Unit;                                                                       // 0x0018 (size: 0x18)
    float MarkerSpacing;                                                              // 0x0030 (size: 0x4)
    int32 MaxValueDigits;                                                             // 0x0034 (size: 0x4)
    FCartesianAxisInstanceConfig LeftBottomAxis;                                      // 0x0038 (size: 0x4)
    FCartesianAxisInstanceConfig RightTopAxis;                                        // 0x003C (size: 0x4)
    FCartesianAxisInstanceConfig FloatingAxis;                                        // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FCartesianAxisInstanceConfig
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    bool bShowTitle;                                                                  // 0x0001 (size: 0x1)
    bool bShowMarkers;                                                                // 0x0002 (size: 0x1)
    bool bShowLabels;                                                                 // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FCartesianAxisRange
{
    float Min;                                                                        // 0x0000 (size: 0x4)
    float Max;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FCartesianRangeBound
{
    ECartesianRangeBoundType Type;                                                    // 0x0000 (size: 0x1)
    float FixedBoundValue;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FKantanBarChartStyle : public FKantanChartStyle
{
    float BarOpacity;                                                                 // 0x0120 (size: 0x4)
    float BarOutlineOpacity;                                                          // 0x0124 (size: 0x4)
    float BarOutlineThickness;                                                        // 0x0128 (size: 0x4)

}; // Size: 0x130

struct FKantanCartesianChartStyle : public FKantanChartStyle
{
    float DataOpacity;                                                                // 0x0120 (size: 0x4)
    float DataLineThickness;                                                          // 0x0124 (size: 0x4)

}; // Size: 0x128

struct FKantanCartesianPlotScale
{
    ECartesianScalingType Type;                                                       // 0x0000 (size: 0x1)
    FVector2D Scale;                                                                  // 0x0004 (size: 0x8)
    FVector2D FocalCoordinates;                                                       // 0x000C (size: 0x8)
    FCartesianAxisRange RangeX;                                                       // 0x0014 (size: 0x8)
    FCartesianAxisRange RangeY;                                                       // 0x001C (size: 0x8)

}; // Size: 0x24

struct FKantanCategoryStyle
{
    FName CategoryStyleId;                                                            // 0x0000 (size: 0x8)
    FLinearColor Color;                                                               // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FKantanChartStyle : public FSlateWidgetStyle
{
    FSlateBrush background;                                                           // 0x0008 (size: 0x88)
    FLinearColor ChartLineColor;                                                      // 0x0090 (size: 0x10)
    float ChartLineThickness;                                                         // 0x00A0 (size: 0x4)
    FSlateFontInfo BaseFont;                                                          // 0x00A8 (size: 0x58)
    int32 TitleFontSize;                                                              // 0x0100 (size: 0x4)
    int32 AxisDescriptionFontSize;                                                    // 0x0104 (size: 0x4)
    int32 AxisValueFontSize;                                                          // 0x0108 (size: 0x4)
    FLinearColor FontColor;                                                           // 0x010C (size: 0x10)

}; // Size: 0x120

struct FKantanSeriesStyle
{
    FName StyleId;                                                                    // 0x0000 (size: 0x8)
    class UKantanPointStyle* PointStyle;                                              // 0x0008 (size: 0x8)
    FLinearColor Color;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

class UKantanBarChartWidgetStyle : public USlateWidgetStyleContainerBase
{
    FKantanBarChartStyle ChartStyle;                                                  // 0x0030 (size: 0x130)

}; // Size: 0x160

class UKantanCartesianChartWidgetStyle : public USlateWidgetStyleContainerBase
{
    FKantanCartesianChartStyle ChartStyle;                                            // 0x0030 (size: 0x128)

}; // Size: 0x158

class UKantanCategoryStyleSet : public UDataAsset
{
    TArray<FKantanCategoryStyle> Styles;                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

class UKantanPointStyle : public UDataAsset
{
    class UTexture2D* DataPointTexture;                                               // 0x0030 (size: 0x8)
    FIntPoint PointSizeTextureOffsets;                                                // 0x0038 (size: 0x18)

}; // Size: 0x50

class UKantanSeriesStyleSet : public UDataAsset
{
    TArray<FKantanSeriesStyle> Styles;                                                // 0x0030 (size: 0x10)

}; // Size: 0x40

#endif
