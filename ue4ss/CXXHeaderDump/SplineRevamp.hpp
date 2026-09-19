#ifndef UE4SS_SDK_SplineRevamp_HPP
#define UE4SS_SDK_SplineRevamp_HPP

class ASplineRevamp_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    float Section Lenght;                                                             // 0x0230 (size: 0x4)
    float SectionLenghtCoef;                                                          // 0x0234 (size: 0x4)
    int32 Curent Index;                                                               // 0x0238 (size: 0x4)
    class UStaticMesh* SplineMesh;                                                    // 0x0240 (size: 0x8)
    class USplineMeshComponent* Spline Mesh Comp;                                     // 0x0248 (size: 0x8)
    bool CastShadow?;                                                                 // 0x0250 (size: 0x1)
    FVector2D MeshScale;                                                              // 0x0254 (size: 0x8)
    TEnumAsByte<ECollisionEnabled::Type> Collision;                                   // 0x025C (size: 0x1)
    float Cull Distance;                                                              // 0x0260 (size: 0x4)
    bool DeformLandscape;                                                             // 0x0264 (size: 0x1)
    class ALandscape* Landscape;                                                      // 0x0268 (size: 0x8)
    class ALandscape* Landscape_0;                                                    // 0x0270 (size: 0x8)
    float LandscapeDeformWidth;                                                       // 0x0278 (size: 0x4)
    float LandscapeDeformWidthFalloff;                                                // 0x027C (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x280

#endif
