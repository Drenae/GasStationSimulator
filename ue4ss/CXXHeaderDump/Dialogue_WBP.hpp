#ifndef UE4SS_SDK_Dialogue_WBP_HPP
#define UE4SS_SDK_Dialogue_WBP_HPP

class UDialogue_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0268 (size: 0x8)
    FText DialogueText;                                                               // 0x0270 (size: 0x18)

    void Construct();
    void ExecuteUbergraph_Dialogue_WBP(int32 EntryPoint);
}; // Size: 0x288

#endif
