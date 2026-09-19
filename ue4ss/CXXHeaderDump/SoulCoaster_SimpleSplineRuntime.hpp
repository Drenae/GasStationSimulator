#ifndef UE4SS_SDK_SoulCoaster_SimpleSplineRuntime_HPP
#define UE4SS_SDK_SoulCoaster_SimpleSplineRuntime_HPP

class ASoulCoaster_SimpleSplineRuntime_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* End;                                                  // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Start;                                                // 0x0230 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x0238 (size: 0x8)
    class UStaticMesh* Static Mesh;                                                   // 0x0240 (size: 0x8)
    TEnumAsByte<ESplineMeshAxis::Type> ForwardAxis;                                   // 0x0248 (size: 0x1)
    TArray<USplineMeshComponent*> Meshes;                                             // 0x0250 (size: 0x10)
    float SectionLenght;                                                              // 0x0260 (size: 0x4)
    FVector2D Spline Scale;                                                           // 0x0264 (size: 0x8)

    void UpdateMesh();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SoulCoaster_SimpleSplineRuntime(int32 EntryPoint);
}; // Size: 0x26C

#endif
