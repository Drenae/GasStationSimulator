#ifndef UE4SS_SDK_WBP_PhotoBinding_HPP
#define UE4SS_SDK_WBP_PhotoBinding_HPP

class UWBP_PhotoBinding_C : public UGSSInnerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UImage* Image_773;                                                          // 0x0290 (size: 0x8)
    class UOverlay* Tab_Info;                                                         // 0x0298 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction;                                // 0x02A0 (size: 0x8)

    void AtKeybindingsReset();
    void Construct();
    void AtChangedKey(const FName ActionName);
    void Destruct();
    void ExecuteUbergraph_WBP_PhotoBinding(int32 EntryPoint);
}; // Size: 0x2A8

#endif
