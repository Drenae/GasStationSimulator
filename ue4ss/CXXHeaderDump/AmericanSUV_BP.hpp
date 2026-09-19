#ifndef UE4SS_SDK_AmericanSUV_BP_HPP
#define UE4SS_SDK_AmericanSUV_BP_HPP

class AAmericanSUV_BP_C : public A00_Vehicle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* cccc_0;                                               // 0x05E0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AmericanSUV_BP(int32 EntryPoint);
}; // Size: 0x5E8

#endif
