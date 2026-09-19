#ifndef UE4SS_SDK_KantanChartsDatasource_HPP
#define UE4SS_SDK_KantanChartsDatasource_HPP

struct FKantanCartesianDatapoint
{
    FVector2D Coords;                                                                 // 0x0000 (size: 0x8)

}; // Size: 0x8

class IKantanCartesianDatasourceInterface : public IInterface
{

    FText GetSeriesName(int32 SeriesIdx);
    FName GetSeriesId(int32 CatIdx);
    TArray<FKantanCartesianDatapoint> GetSeriesDatapoints(int32 SeriesIdx);
    int32 GetNumSeries();
}; // Size: 0x28

class IKantanCategoryDatasourceInterface : public IInterface
{

    int32 GetNumCategories();
    float GetCategoryValue(int32 CatIdx);
    FText GetCategoryName(int32 CatIdx);
    FName GetCategoryId(int32 CatIdx);
}; // Size: 0x28

class UKantanSimpleCartesianDatasource : public UObject
{

    class UKantanSimpleCartesianDatasource* NewSimpleCartesianDatasource(int32 MaxDatapoints);
    void BP_SetDatapointLimit(int32 Limit);
    void BP_RemoveSeries(FName ID, bool& bSuccess);
    void BP_RemoveAllSeries();
    void BP_AddSeriesWithId(FName ID, FText Name, bool& bSuccess);
    void BP_AddSeries(FText Name, FName& SeriesId);
    void BP_AddDatapoint(FName SeriesId, const FVector2D& Point, bool& bSuccess);
}; // Size: 0x48

class UKantanSimpleCategoryDatasource : public UObject
{

    class UKantanSimpleCategoryDatasource* NewSimpleCategoryDatasource();
    void BP_UpdateCategoryValue(FName ID, float Value, bool& bSuccess);
    void BP_RemoveCategory(FName ID, bool& bSuccess);
    void BP_RemoveAllCategories();
    void BP_AddCategoryWithId(FName ID, FText Name, bool& bSuccess);
    void BP_AddCategory(FText Name, FName& CatId);
}; // Size: 0x40

#endif
