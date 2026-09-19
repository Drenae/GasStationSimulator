#ifndef UE4SS_SDK_BP_TapeTool_HPP
#define UE4SS_SDK_BP_TapeTool_HPP

class ABP_TapeTool_C : public ATapeTool
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)

    void ReceiveBeginPlay();
    void OnAllTapeUsedEvent();
    void ExecuteUbergraph_BP_TapeTool(int32 EntryPoint);
}; // Size: 0x498

#endif
