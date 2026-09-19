#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "KantanCartesianDatasourceInterface.h"
#include "KantanSimpleCartesianDatasource.generated.h"

class UKantanSimpleCartesianDatasource;

UCLASS(Blueprintable, EditInlineNew)
class KANTANCHARTSDATASOURCE_API UKantanSimpleCartesianDatasource : public UObject, public IKantanCartesianDatasourceInterface {
    GENERATED_BODY()
public:
    UKantanSimpleCartesianDatasource();

    UFUNCTION(BlueprintCallable)
    static UKantanSimpleCartesianDatasource* NewSimpleCartesianDatasource(int32 MaxDatapoints);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetDatapointLimit(int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveSeries(FName ID, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveAllSeries();
    
    UFUNCTION(BlueprintCallable)
    void BP_AddSeriesWithId(FName ID, FText Name, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddSeries(FText Name, FName& SeriesId);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddDatapoint(FName SeriesId, const FVector2D& Point, bool& bSuccess);
    

    // Fix for true pure virtual functions not being implemented
};

