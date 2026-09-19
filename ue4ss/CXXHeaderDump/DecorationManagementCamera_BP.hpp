#ifndef UE4SS_SDK_DecorationManagementCamera_BP_HPP
#define UE4SS_SDK_DecorationManagementCamera_BP_HPP

class ADecorationManagementCamera_BP_C : public ADecorationCamera_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_DecorationManagementCamera_BP(int32 EntryPoint);
}; // Size: 0x2E0

#endif
