#ifndef UE4SS_SDK_PC_Delivery_HPP
#define UE4SS_SDK_PC_Delivery_HPP

class UPC_Delivery_C : public UPC_Selectable_Base_Tab_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_PC_Delivery(int32 EntryPoint);
}; // Size: 0x2E0

#endif
