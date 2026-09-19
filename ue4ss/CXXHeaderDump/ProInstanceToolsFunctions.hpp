#ifndef UE4SS_SDK_ProInstanceToolsFunctions_HPP
#define UE4SS_SDK_ProInstanceToolsFunctions_HPP

class UProInstanceToolsFunctions_C : public UBlueprintFunctionLibrary
{

    void SetCurrentInstance(TEnumAsByte<EProInstanceInstanceType> InstanceType, FProInstanceCurrentInstanceArrayContainer& CurrentInstanceArrayContainer, FProInstanceCurrentInstanceContainer& CurrentInstanceContainer, TArray<FProInstanceInstance>& Instances, FProInstanceInstance& CurrentInstance, const FRandomStream& Stream, class UObject* __WorldContext);
    void GetRandomChance(FRandomStream RandomStream, FProInstanceInstance CurrentInstance, class UObject* __WorldContext, bool& Success);
    void GetRotationOffset(FRotator RotationIn, const FProInstanceInstance& CurrentInstance, class UObject* __WorldContext, FRotator& RotationOut);
    void GetLocationZOffset(FVector LocationIn, FProInstanceInstance CurrentInstance, class UObject* __WorldContext, FVector& LocationOut);
    void GetLocationXYOffset(FVector LocationIn, FProInstanceInstance CurrentInstance, class UObject* __WorldContext, FVector& LocationOut);
    void GetRandomScale(FRandomStream RandomStream, const FProInstanceInstance& CurrentInstance, class UObject* __WorldContext, FVector& ScaleOutput);
    void GetRandomRotation(FRotator RotationIn, FRandomStream RandomStream, FProInstanceInstance CurrentInstance, class UObject* __WorldContext, FRotator& RotationOut);
    void GetRandomLocation(FVector LocationIn, FRandomStream RandomStream, FProInstanceInstance CurrentInstance, class UObject* __WorldContext, FVector& LocationOut);
    void GetRandomObject(FProInstanceCurrentInstanceArrayContainer CurrentInstanceArray, const FRandomStream& Stream, class UObject* __WorldContext, FProInstanceCurrentInstanceContainer& RandomInstance);
    void GetCurrentInstance(FProInstanceCurrentInstanceArrayContainer CurrentInstanceArrayContainer, FProInstanceCurrentInstanceContainer CurrentInstanceContainer, TArray<FProInstanceInstance>& Instances, TEnumAsByte<EProInstanceInstanceType> InstanceType, class UObject* __WorldContext, FProInstanceInstance& Instance);
    void GetRandomInstance(FProInstanceCurrentInstanceArrayContainer CurrentInstanceArray, const FRandomStream& Stream, TEnumAsByte<EProInstanceInstanceType> InstanceType, class UObject* __WorldContext, FProInstanceCurrentInstanceContainer& RandomInstance, int32& Index);
    void SetCurrentInstanceValues(FRandomStream RandomStream, FVector& CurrentInstanceScale, FVector& CurrentInstanceBoxExtent, uint8 ObjectType, class UObject* __WorldContext);
    void PlacementLineTracing(class AActor* Target, FVector StartTracing, float LineTracingDepth, bool SurfaceSnapping, bool SurfaceAligning, const TArray<AActor*>& ActorsToIgnore, bool IgnoreSelfCollision, class UObject* __WorldContext, FVector& Location, FRotator& Rotation, bool& CanSpawn);
}; // Size: 0x28

#endif
