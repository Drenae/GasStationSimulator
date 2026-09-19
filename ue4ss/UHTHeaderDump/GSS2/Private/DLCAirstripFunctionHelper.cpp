#include "DLCAirstripFunctionHelper.h"

UDLCAirstripFunctionHelper::UDLCAirstripFunctionHelper() {
}

bool UDLCAirstripFunctionHelper::IsNoAirplaneInAir(UObject* WorldContextObject) {
    return false;
}

ADLCTradingSystemManager* UDLCAirstripFunctionHelper::GetDLCTradingSystemManager(UObject* WorldContextObject) {
    return NULL;
}

ADLCAirstripManager* UDLCAirstripFunctionHelper::GetDLCAirstripManager(UObject* WorldContextObject) {
    return NULL;
}

UAirportScheduleManager* UDLCAirstripFunctionHelper::GetAirportScheduleManager(UObject* WorldContextObject) {
    return NULL;
}


