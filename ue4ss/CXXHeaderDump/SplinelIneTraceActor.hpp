#ifndef UE4SS_SDK_SplinelIneTraceActor_HPP
#define UE4SS_SDK_SplinelIneTraceActor_HPP

class ASplinelIneTraceActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void DestroySelf(class AGSSWheeledVehicle* GSSWheeledVehicle);
    void ExecuteUbergraph_SplinelIneTraceActor(int32 EntryPoint);
}; // Size: 0x230

#endif
