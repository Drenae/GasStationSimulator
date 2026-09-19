#ifndef UE4SS_SDK_BP_Concrete_Door_HPP
#define UE4SS_SDK_BP_Concrete_Door_HPP

class ABP_Concrete_Door_C : public ACustomizationHousePart_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Concrete_Door(int32 EntryPoint);
}; // Size: 0x3D0

#endif
