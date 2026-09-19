#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=KantanChartsSlate -ObjectName=CartesianAxisConfig -FallbackName=CartesianAxisConfig
//CROSS-MODULE INCLUDE V2: -ModuleName=KantanChartsSlate -ObjectName=EKantanBarChartOrientation -FallbackName=EKantanBarChartOrientation
//CROSS-MODULE INCLUDE V2: -ModuleName=KantanChartsSlate -ObjectName=EKantanBarLabelPosition -FallbackName=EKantanBarLabelPosition
//CROSS-MODULE INCLUDE V2: -ModuleName=KantanChartsSlate -ObjectName=EKantanBarValueExtents -FallbackName=EKantanBarValueExtents
//CROSS-MODULE INCLUDE V2: -ModuleName=KantanChartsSlate -ObjectName=KantanBarChartStyle -FallbackName=KantanBarChartStyle
#include "KantanCategoryChart.h"
#include "KantanBarChartBase.generated.h"

UCLASS(Abstract, Blueprintable)
class KANTANCHARTSUMG_API UKantanBarChartBase : public UKantanCategoryChart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKantanBarChartStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKantanBarChartOrientation Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBarValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKantanBarLabelPosition LabelPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarToGapRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKantanBarValueExtents ValueExtentsDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCartesianAxisConfig ValueAxisCfg;
    
    UKantanBarChartBase();

    UFUNCTION(BlueprintCallable)
    void SetValueAxisConfig(const FCartesianAxisConfig& InCfg);
    
    UFUNCTION(BlueprintCallable)
    void SetOrientation(EKantanBarChartOrientation InOrientation);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxBarValue(float InMaxValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLabelPosition(EKantanBarLabelPosition InPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetExtentsDisplay(EKantanBarValueExtents InExtents);
    
    UFUNCTION(BlueprintCallable)
    void SetBarToGapRatio(float InRatio);
    
};

