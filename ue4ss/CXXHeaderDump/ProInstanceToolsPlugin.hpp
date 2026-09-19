#ifndef UE4SS_SDK_ProInstanceToolsPlugin_HPP
#define UE4SS_SDK_ProInstanceToolsPlugin_HPP

#include "ProInstanceToolsPlugin_enums.hpp"

struct FProInstanceCurrentInstanceArrayContainer
{
    TArray<UStaticMesh*> StaticMeshArray;                                             // 0x0000 (size: 0x10)
    TArray<UInstancedStaticMeshComponent*> ISMArray;                                  // 0x0010 (size: 0x10)
    TArray<UHierarchicalInstancedStaticMeshComponent*> HISMArray;                     // 0x0020 (size: 0x10)
    TArray<TSubclassOf<class AActor>> ActorClassArray;                                // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FProInstanceCurrentInstanceContainer
{
    class UStaticMesh* StaticMesh;                                                    // 0x0000 (size: 0x8)
    class UInstancedStaticMeshComponent* ISM;                                         // 0x0008 (size: 0x8)
    class UHierarchicalInstancedStaticMeshComponent* HISM;                            // 0x0010 (size: 0x8)
    TSubclassOf<class AActor> ActorClass;                                             // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FProInstanceInstance
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    TSubclassOf<class AActor> ActorClass;                                             // 0x0008 (size: 0x8)
    FProInstanceInstanceSettings InstanceSettings;                                    // 0x0010 (size: 0x78)

}; // Size: 0x88

struct FProInstanceInstanceSettings
{
    FProInstanceLocation Location;                                                    // 0x0000 (size: 0x24)
    FProInstanceRotation Rotation;                                                    // 0x0024 (size: 0x24)
    FProInstanceScale Scale;                                                          // 0x0048 (size: 0x24)
    bool bCastShadows;                                                                // 0x006C (size: 0x1)
    int32 SpawnChance;                                                                // 0x0070 (size: 0x4)
    float InstanceLength;                                                             // 0x0074 (size: 0x4)

}; // Size: 0x78

struct FProInstanceLocation
{
    FVector LocationOffset;                                                           // 0x0000 (size: 0xC)
    FVector LocationRangeMin;                                                         // 0x000C (size: 0xC)
    FVector LocationRangeMax;                                                         // 0x0018 (size: 0xC)

}; // Size: 0x24

struct FProInstanceRotation
{
    FRotator RotationOffset;                                                          // 0x0000 (size: 0xC)
    FRotator RotationRangeMin;                                                        // 0x000C (size: 0xC)
    FRotator RotationRangeMax;                                                        // 0x0018 (size: 0xC)

}; // Size: 0x24

struct FProInstanceScale
{
    bool bUniformScale;                                                               // 0x0000 (size: 0x1)
    float MinUniformScale;                                                            // 0x0004 (size: 0x4)
    float MaxUniformScale;                                                            // 0x0008 (size: 0x4)
    FVector MinScale;                                                                 // 0x000C (size: 0xC)
    FVector MaxScale;                                                                 // 0x0018 (size: 0xC)

}; // Size: 0x24

class AProInstanceToolsCircle : public AProInstanceToolsParent
{
    int32 NumInstances;                                                               // 0x0370 (size: 0x4)
    float Angle;                                                                      // 0x0374 (size: 0x4)
    float Radius;                                                                     // 0x0378 (size: 0x4)
    TEnumAsByte<EProInstanceToolsCircleInstanceRotationType> RotationType;            // 0x037C (size: 0x1)

}; // Size: 0x380

class AProInstanceToolsGrid : public AProInstanceToolsParent
{
    FIntVector NumInstances;                                                          // 0x0370 (size: 0xC)
    FVector Spacing;                                                                  // 0x037C (size: 0xC)

}; // Size: 0x388

class AProInstanceToolsParent : public AActor
{
    class USceneComponent* Root;                                                      // 0x0220 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0228 (size: 0x8)
    FProInstanceCurrentInstanceContainer CurrentInstanceContainer;                    // 0x0230 (size: 0x20)
    FProInstanceCurrentInstanceArrayContainer CurrentInstanceArrayContainer;          // 0x0250 (size: 0x40)
    FProInstanceInstance CurrentInstance;                                             // 0x0290 (size: 0x88)
    TEnumAsByte<EProInstanceInstanceType> InstanceType;                               // 0x0318 (size: 0x1)
    TArray<FProInstanceInstance> Instances;                                           // 0x0320 (size: 0x10)
    bool bEnableCollision;                                                            // 0x0330 (size: 0x1)
    TEnumAsByte<EProInstanceOnOverlap> OnOverlap;                                     // 0x0331 (size: 0x1)
    int32 Index;                                                                      // 0x0334 (size: 0x4)
    FIntVector IndexVector;                                                           // 0x0338 (size: 0xC)
    int32 StartCullDistance;                                                          // 0x0344 (size: 0x4)
    int32 EndCullDistance;                                                            // 0x0348 (size: 0x4)
    int32 Seed;                                                                       // 0x034C (size: 0x4)
    FRandomStream RandomStream;                                                       // 0x0350 (size: 0x8)
    bool bSurfaceSnapping;                                                            // 0x0358 (size: 0x1)
    bool bSurfaceAligning;                                                            // 0x0359 (size: 0x1)
    bool bIgnoreSelfCollision;                                                        // 0x035A (size: 0x1)
    float LineTracingDepth;                                                           // 0x035C (size: 0x4)
    TArray<AActor*> ActorsToIgnore;                                                   // 0x0360 (size: 0x10)

    void SetupInstances();
    void Randomize();
    void DestroyComponents();
    void CreateInstance(FTransform Transform, FProInstanceCurrentInstanceContainer Instance);
}; // Size: 0x370

class AProInstanceToolsPath : public AProInstanceToolsParent
{
    class USplineComponent* SplineComponent;                                          // 0x0370 (size: 0x8)
    TEnumAsByte<EProInstanceToolsPathPlacementType> PlacementType;                    // 0x0378 (size: 0x1)
    float Spacing;                                                                    // 0x037C (size: 0x4)
    int32 MaxInstances;                                                               // 0x0380 (size: 0x4)
    bool bUseInstanceLength;                                                          // 0x0384 (size: 0x1)
    bool bFollowSplineRotation;                                                       // 0x0385 (size: 0x1)
    bool bClosedSpline;                                                               // 0x0386 (size: 0x1)
    float CurrentDistance;                                                            // 0x0388 (size: 0x4)
    float CurrentInstanceLength;                                                      // 0x038C (size: 0x4)

}; // Size: 0x390

class AProInstanceToolsPathScatter : public AProInstanceToolsParent
{
    class USplineComponent* SplineComponent;                                          // 0x0370 (size: 0x8)
    int32 NumInstances;                                                               // 0x0378 (size: 0x4)
    bool bUseSplineScale;                                                             // 0x037C (size: 0x1)
    bool bFollowSplineRotation;                                                       // 0x037D (size: 0x1)
    bool bClosedSpline;                                                               // 0x037E (size: 0x1)
    float CurrentDistance;                                                            // 0x0380 (size: 0x4)

}; // Size: 0x388

class AProInstanceToolsScatter : public AProInstanceToolsParent
{
    int32 NumInstances;                                                               // 0x0370 (size: 0x4)
    TEnumAsByte<EProInstanceScatterPlacementType> PlacementType;                      // 0x0374 (size: 0x1)
    FVector BoxSize;                                                                  // 0x0378 (size: 0xC)
    FVector BoxExtent;                                                                // 0x0384 (size: 0xC)
    TEnumAsByte<EProInstanceScatterBoxPivotPoint> BoxPivotPoint;                      // 0x0390 (size: 0x1)
    float SphereRadius;                                                               // 0x0394 (size: 0x4)

}; // Size: 0x398

#endif
