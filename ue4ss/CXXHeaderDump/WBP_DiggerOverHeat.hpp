#ifndef UE4SS_SDK_WBP_DiggerOverHeat_HPP
#define UE4SS_SDK_WBP_DiggerOverHeat_HPP

class UWBP_DiggerOverHeat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)
    class UImage* Image_115;                                                          // 0x0270 (size: 0x8)
    class UImage* Image_233;                                                          // 0x0278 (size: 0x8)
    class UOverlay* PressKeyOverlay;                                                  // 0x0280 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction;                                // 0x0288 (size: 0x8)

    void Construct();
    void Destruct();
    void KeyBindChanged(const FName ActionName);
    void KeyBindReset();
    void ExecuteUbergraph_WBP_DiggerOverHeat(int32 EntryPoint);
}; // Size: 0x290

#endif
