#ifndef UE4SS_SDK_PC_open_close_switcher_simple_HPP
#define UE4SS_SDK_PC_open_close_switcher_simple_HPP

class UPC_open_close_switcher_simple_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Switch;                                                   // 0x0268 (size: 0x8)
    class UButton* Button_53;                                                         // 0x0270 (size: 0x8)
    class UImage* Image_border;                                                       // 0x0278 (size: 0x8)
    class UImage* Image_button;                                                       // 0x0280 (size: 0x8)
    bool Open;                                                                        // 0x0288 (size: 0x1)
    bool Close;                                                                       // 0x0289 (size: 0x1)
    FPC_open_close_switcher_simple_COnSwitchingFinished OnSwitchingFinished;          // 0x0290 (size: 0x10)
    void OnSwitchingFinished(bool IsON);

    void Finished_AE719D634A48368D9E1C249EE3172765();
    void Finished_05DAA72B43609AE03FECAC9DA73E68CC();
    void ClickSwitcher(bool bIsOn);
    void ExecuteUbergraph_PC_open_close_switcher_simple(int32 EntryPoint);
    void OnSwitchingFinished__DelegateSignature(bool IsON);
}; // Size: 0x2A0

#endif
