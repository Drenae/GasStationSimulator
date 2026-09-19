#ifndef UE4SS_SDK_WBP_PressInTutorial_HPP
#define UE4SS_SDK_WBP_PressInTutorial_HPP

class UWBP_PressInTutorial_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction;                                // 0x0268 (size: 0x8)

    void Construct();
    void Destruct();
    void KeyBindChanged(const FName ActionName);
    void KeyBindReset();
    void ExecuteUbergraph_WBP_PressInTutorial(int32 EntryPoint);
}; // Size: 0x270

#endif
