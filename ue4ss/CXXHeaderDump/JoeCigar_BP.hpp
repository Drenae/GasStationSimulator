#ifndef UE4SS_SDK_JoeCigar_BP_HPP
#define UE4SS_SDK_JoeCigar_BP_HPP

class AJoeCigar_BP_C : public AJoeAccesories_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0258 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_JoeCigar_BP(int32 EntryPoint);
}; // Size: 0x260

#endif
