#include "VehicleSystemFunctions.h"

UVehicleSystemFunctions::UVehicleSystemFunctions() {
}

void UVehicleSystemFunctions::SetLinearDamping(UPrimitiveComponent* Target, float InDamping, FName BoneName) {
}

void UVehicleSystemFunctions::SetAngularDamping(UPrimitiveComponent* Target, float InDamping, FName BoneName) {
}

bool UVehicleSystemFunctions::RunningInPIE_World(UObject* WorldContextObject) {
    return false;
}

bool UVehicleSystemFunctions::RunningInGame_World(UObject* WorldContextObject) {
    return false;
}

bool UVehicleSystemFunctions::RunningInEditor_World(UObject* WorldContextObject) {
    return false;
}

void UVehicleSystemFunctions::PrintToScreenWithTag(const FString& inString, FLinearColor TextColor, float Duration, int32 Tag) {
}

FString UVehicleSystemFunctions::GetPluginVersion() {
    return TEXT("");
}

float UVehicleSystemFunctions::GetMeshRadius(UPrimitiveComponent* Target, FName BoneName) {
    return 0.0f;
}

float UVehicleSystemFunctions::GetMeshDiameter(UPrimitiveComponent* Target, FName BoneName) {
    return 0.0f;
}

FVector UVehicleSystemFunctions::GetMeshCenterOfMass(UPrimitiveComponent* Target, FName BoneName) {
    return FVector{};
}

FVector UVehicleSystemFunctions::GetBoneBounds(UPrimitiveComponent* Target, FName BoneName, FVector& Origin) {
    return FVector{};
}


