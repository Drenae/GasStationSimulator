#ifndef UE4SS_SDK_Ruins_3_HPP
#define UE4SS_SDK_Ruins_3_HPP

class ARuins_3_C : public ARuins_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)

    void ReceiveBeginPlay();
    void UpdateRuins(int32 CurrentStage);
    void ExecuteUbergraph_Ruins_3(int32 EntryPoint);
}; // Size: 0x250

#endif
