#ifndef UE4SS_SDK_SmallStandIceCream_lvl1_HPP
#define UE4SS_SDK_SmallStandIceCream_lvl1_HPP

class ASmallStandIceCream_lvl1_C : public A00_Stand_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class USplineComponent* Spline25;                                                 // 0x06E8 (size: 0x8)
    class USplineComponent* Spline24;                                                 // 0x06F0 (size: 0x8)
    class USplineComponent* Spline23;                                                 // 0x06F8 (size: 0x8)
    class USpotLightComponent* spot1;                                                 // 0x0700 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SmallStandIceCream_lvl1(int32 EntryPoint);
}; // Size: 0x708

#endif
