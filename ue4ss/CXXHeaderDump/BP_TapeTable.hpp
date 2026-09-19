#ifndef UE4SS_SDK_BP_TapeTable_HPP
#define UE4SS_SDK_BP_TapeTable_HPP

class ABP_TapeTable_C : public A00_Stand_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x06E8 (size: 0x8)
    class USplineComponent* Spline3;                                                  // 0x06F0 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x06F8 (size: 0x8)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void ReFillShelfes();
    void ExecuteUbergraph_BP_TapeTable(int32 EntryPoint);
}; // Size: 0x700

#endif
