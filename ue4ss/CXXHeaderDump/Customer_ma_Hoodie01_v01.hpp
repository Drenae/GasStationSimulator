#ifndef UE4SS_SDK_Customer_ma_Hoodie01_v01_HPP
#define UE4SS_SDK_Customer_ma_Hoodie01_v01_HPP

class ACustomer_ma_Hoodie01_v01_C : public AAIHumanBase_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Customer_ma_Hoodie01_v01(int32 EntryPoint);
}; // Size: 0xA18

#endif
