#ifndef UE4SS_SDK_SmallStandNewspaper_lvl1_HPP
#define UE4SS_SDK_SmallStandNewspaper_lvl1_HPP

class ASmallStandNewspaper_lvl1_C : public A00_Stand_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class USplineComponent* Spline33;                                                 // 0x06E8 (size: 0x8)
    class USplineComponent* Spline32;                                                 // 0x06F0 (size: 0x8)
    class USplineComponent* Spline31;                                                 // 0x06F8 (size: 0x8)
    class USplineComponent* Spline30;                                                 // 0x0700 (size: 0x8)
    class USplineComponent* Spline29;                                                 // 0x0708 (size: 0x8)
    class USplineComponent* Spline28;                                                 // 0x0710 (size: 0x8)
    class USplineComponent* Spline26;                                                 // 0x0718 (size: 0x8)
    class USplineComponent* Spline25;                                                 // 0x0720 (size: 0x8)
    class USplineComponent* Spline27;                                                 // 0x0728 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SmallStandNewspaper_lvl1(int32 EntryPoint);
}; // Size: 0x730

#endif
