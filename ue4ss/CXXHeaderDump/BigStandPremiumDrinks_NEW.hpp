#ifndef UE4SS_SDK_BigStandPremiumDrinks_NEW_HPP
#define UE4SS_SDK_BigStandPremiumDrinks_NEW_HPP

class ABigStandPremiumDrinks_NEW_C : public A00_Stand_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class USplineComponent* Spline50;                                                 // 0x06E8 (size: 0x8)
    class USplineComponent* Spline49;                                                 // 0x06F0 (size: 0x8)
    class USplineComponent* Spline48;                                                 // 0x06F8 (size: 0x8)
    class USplineComponent* Spline47;                                                 // 0x0700 (size: 0x8)
    class USplineComponent* Spline46;                                                 // 0x0708 (size: 0x8)
    class USplineComponent* Spline45;                                                 // 0x0710 (size: 0x8)
    class USplineComponent* Spline44;                                                 // 0x0718 (size: 0x8)
    class USplineComponent* Spline43;                                                 // 0x0720 (size: 0x8)
    class USplineComponent* Spline42;                                                 // 0x0728 (size: 0x8)
    class USplineComponent* Spline41;                                                 // 0x0730 (size: 0x8)
    class USplineComponent* Spline40;                                                 // 0x0738 (size: 0x8)
    class USplineComponent* Spline39;                                                 // 0x0740 (size: 0x8)
    class USplineComponent* Spline38;                                                 // 0x0748 (size: 0x8)
    class USplineComponent* Spline37;                                                 // 0x0750 (size: 0x8)
    class USplineComponent* Spline33;                                                 // 0x0758 (size: 0x8)
    class USplineComponent* Spline36;                                                 // 0x0760 (size: 0x8)
    class USplineComponent* Spline35;                                                 // 0x0768 (size: 0x8)
    class USplineComponent* Spline34;                                                 // 0x0770 (size: 0x8)
    class USplineComponent* Spline32;                                                 // 0x0778 (size: 0x8)
    class USplineComponent* Spline31;                                                 // 0x0780 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BigStandPremiumDrinks_NEW(int32 EntryPoint);
}; // Size: 0x788

#endif
