#ifndef UE4SS_SDK_AIHuman_NBM_Male_BP_HPP
#define UE4SS_SDK_AIHuman_NBM_Male_BP_HPP

class AAIHuman_NBM_Male_BP_C : public AAIHumanBase_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class UNPC_MontageManager_BP_C* NPC_MontageManager_BP;                            // 0x0A18 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIHuman_NBM_Male_BP(int32 EntryPoint);
}; // Size: 0xA20

#endif
