#ifndef UE4SS_SDK_SplineMesh_BP_HPP
#define UE4SS_SDK_SplineMesh_BP_HPP

class ASplineMesh_BP_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    class UStaticMesh* StaticMesh;                                                    // 0x0230 (size: 0x8)
    TEnumAsByte<ECollisionEnabled::Type> Collision;                                   // 0x0238 (size: 0x1)
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;                                   // 0x0239 (size: 0x1)
    bool FlipMesh;                                                                    // 0x023A (size: 0x1)
    bool AddFlipSide;                                                                 // 0x023B (size: 0x1)
    int32 SplinePoint;                                                                // 0x023C (size: 0x4)
    class USplineMeshComponent* SplineMesh;                                           // 0x0240 (size: 0x8)
    class USplineMeshComponent* SplineMesh2;                                          // 0x0248 (size: 0x8)
    bool disable Cast shadow;                                                         // 0x0250 (size: 0x1)

    void ResetVectorArray(const TArray<FVector>& Array1, TArray<FVector>& Array2, TArray<FVector>& Array3, int32 Size);
    void ReplaceVectorArrayValues(TArray<FVector>& From, const TArray<FVector>& To);
    void AddRemoveSegments(int32& Value);
    void AddSplineMeshComponents(int32 SegmentCount, const TArray<USplineMeshComponent*>& TargetArray, float Offset, bool Collision);
    void UserConstructionScript();
}; // Size: 0x251

#endif
