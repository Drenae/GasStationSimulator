#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VehicleSystemFunctions.generated.h"

class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UVehicleSystemFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVehicleSystemFunctions();

    UFUNCTION(BlueprintCallable)
    static void SetLinearDamping(UPrimitiveComponent* Target, float InDamping, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static void SetAngularDamping(UPrimitiveComponent* Target, float InDamping, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool RunningInPIE_World(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool RunningInGame_World(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool RunningInEditor_World(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void PrintToScreenWithTag(const FString& inString, FLinearColor TextColor, float Duration, int32 Tag);
    
    UFUNCTION(BlueprintCallable)
    static FString GetPluginVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMeshRadius(UPrimitiveComponent* Target, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMeshDiameter(UPrimitiveComponent* Target, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetMeshCenterOfMass(UPrimitiveComponent* Target, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetBoneBounds(UPrimitiveComponent* Target, FName BoneName, FVector& Origin);
    
};

