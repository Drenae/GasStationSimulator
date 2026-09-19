#ifndef UE4SS_SDK_Ruins_6_HPP
#define UE4SS_SDK_Ruins_6_HPP

class ARuins_6_C : public ARuins_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)

    void ReceiveBeginPlay();
    void UpdateRuins(int32 CurrentStage);
    void ExecuteUbergraph_Ruins_6(int32 EntryPoint);
}; // Size: 0x250

#endif
