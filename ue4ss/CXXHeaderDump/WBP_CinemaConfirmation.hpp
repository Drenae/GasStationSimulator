#ifndef UE4SS_SDK_WBP_CinemaConfirmation_HPP
#define UE4SS_SDK_WBP_CinemaConfirmation_HPP

class UWBP_CinemaConfirmation_C : public UGSSInnerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UImage* Image_773;                                                          // 0x0290 (size: 0x8)
    class UOverlay* Tab_Info;                                                         // 0x0298 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction_1;                              // 0x02A0 (size: 0x8)

    void Construct();
    void Destruct();
    void KeyBindChanged(const FName ActionName);
    void KeyBindReset();
    void ExecuteUbergraph_WBP_CinemaConfirmation(int32 EntryPoint);
}; // Size: 0x2A8

#endif
