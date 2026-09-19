#ifndef UE4SS_SDK_WBP_SequenceSkip_HPP
#define UE4SS_SDK_WBP_SequenceSkip_HPP

class UWBP_SequenceSkip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction;                                // 0x0268 (size: 0x8)
    FWBP_SequenceSkip_COnSkipPressed OnSkipPressed;                                   // 0x0270 (size: 0x10)
    void OnSkipPressed();

    void Construct();
    void SkipCutscene();
    void Destruct();
    void ExecuteUbergraph_WBP_SequenceSkip(int32 EntryPoint);
    void OnSkipPressed__DelegateSignature();
}; // Size: 0x280

#endif
