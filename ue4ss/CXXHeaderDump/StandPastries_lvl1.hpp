#ifndef UE4SS_SDK_StandPastries_lvl1_HPP
#define UE4SS_SDK_StandPastries_lvl1_HPP

class AStandPastries_lvl1_C : public A00_Stand_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class USplineComponent* Spline38;                                                 // 0x06E8 (size: 0x8)
    class USplineComponent* Spline26;                                                 // 0x06F0 (size: 0x8)
    class USplineComponent* Spline37;                                                 // 0x06F8 (size: 0x8)
    class USplineComponent* Spline36;                                                 // 0x0700 (size: 0x8)
    class USplineComponent* Spline35;                                                 // 0x0708 (size: 0x8)
    class USplineComponent* Spline25;                                                 // 0x0710 (size: 0x8)
    class USplineComponent* Spline34;                                                 // 0x0718 (size: 0x8)
    class USplineComponent* Spline33;                                                 // 0x0720 (size: 0x8)
    class USplineComponent* Spline32;                                                 // 0x0728 (size: 0x8)
    class USplineComponent* Spline24;                                                 // 0x0730 (size: 0x8)
    class USplineComponent* Spline31;                                                 // 0x0738 (size: 0x8)
    class USplineComponent* Spline30;                                                 // 0x0740 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0748 (size: 0x8)
    class UStaticMeshComponent* SM_CeilingLamp_01;                                    // 0x0750 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_StandPastries_lvl1(int32 EntryPoint);
}; // Size: 0x758

#endif
