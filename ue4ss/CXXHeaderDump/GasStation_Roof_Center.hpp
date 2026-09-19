#ifndef UE4SS_SDK_GasStation_Roof_Center_HPP
#define UE4SS_SDK_GasStation_Roof_Center_HPP

class AGasStation_Roof_Center_C : public ACustomizationHousePart_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    FTransform GetInteractiveTransform_0(class AActor* Actor);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GasStation_Roof_Center(int32 EntryPoint);
}; // Size: 0x3D0

#endif
