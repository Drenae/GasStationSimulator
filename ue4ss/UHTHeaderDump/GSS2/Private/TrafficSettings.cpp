#include "TrafficSettings.h"

UTrafficSettings::UTrafficSettings() {
    this->TrafficImpact2ArrowsTreshold = 0;
    this->TrafficImpact3ArrowsTreshold = 0;
    this->FuelPriceDataTable = NULL;
    this->HourImpact = NULL;
    this->PopularityImpact = NULL;
    this->LandmarkImpact = NULL;
    this->DecorationImpact = NULL;
    this->TrafficEventData = NULL;
    this->MinDaysBetweenEvents = 0;
    this->MaxDaysBetweenEvents = 0;
    this->HoursBeforeUpcomingEventIsSeen = 0;
    this->TrafficImpactToSpawnTime = NULL;
}

FTimeStruct UTrafficSettings::SubtractTime(FTimeStruct StartTime, FTimeStruct MinusTime, bool& ReachedZero) {
    return FTimeStruct{};
}

int32 UTrafficSettings::GetTrafficImpactByIntegerValue(UDataTable* DataTable, int32 Value, bool IsLooping) {
    return 0;
}

void UTrafficSettings::GetTafficImpactLimitsInDataTable(UDataTable* DataTable, int32& MinTafficImpact, int32& MaxTafficImpact) {
}

void UTrafficSettings::GetTafficImpactLimits(int32& MinTafficImpact, int32& MaxTafficImpact, bool InlcudeEvents) {
}

void UTrafficSettings::GetSpawnTimes(int32 CurrentTrafficImpact, float& MinSpawnTime, float& MaxSpawnTime, EVehicleSpawnType SpawnType) {
}

FTrafficImpactToSpawnTime UTrafficSettings::GetSpawnTimeByTrafficImpact(int32 CurrentTrafficImpact) {
    return FTrafficImpactToSpawnTime{};
}

void UTrafficSettings::GetFuelTrafficImpactLimitsInDataTable(int32& MinTafficImpact, int32& MaxTafficImpact) {
}

int32 UTrafficSettings::GetFuelPriceTrafficImpact(UObject* WorldContextObject, float CurrentFuelPrice) {
    return 0;
}

void UTrafficSettings::GetEventsImpactLimits(int32& MinTafficImpact, int32& MaxTafficImpact) {
}

FTrafficEventData UTrafficSettings::GetEventDataByID(int32 EventId, bool& EventFound) {
    return FTrafficEventData{};
}

int32 UTrafficSettings::GetDisplayArrowAmount(int32 TrafficImpact) {
    return 0;
}


