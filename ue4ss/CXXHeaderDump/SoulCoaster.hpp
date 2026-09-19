#ifndef UE4SS_SDK_SoulCoaster_HPP
#define UE4SS_SDK_SoulCoaster_HPP

class ASoulCoaster_C : public AActor
{
    class UStaticMeshComponent* End;                                                  // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Start;                                                // 0x0228 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x0230 (size: 0x8)
    class UStaticMesh* Static Mesh;                                                   // 0x0238 (size: 0x8)
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;                                   // 0x0240 (size: 0x1)
    TArray<USplineMeshComponent*> Meshes;                                             // 0x0248 (size: 0x10)
    float SectionLenght;                                                              // 0x0258 (size: 0x4)

    void UpdateMesh();
    void UserConstructionScript();
}; // Size: 0x25C

#endif
