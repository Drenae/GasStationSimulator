#ifndef UE4SS_SDK_WBP_PressForTutorial_HPP
#define UE4SS_SDK_WBP_PressForTutorial_HPP

class UWBP_PressForTutorial_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_1358;                                                         // 0x0268 (size: 0x8)
    class UImage* Image_1534;                                                         // 0x0270 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction;                                // 0x0278 (size: 0x8)

    void Construct();
    void Destruct();
    void KeyBindChanged(const FName ActionName);
    void KeyBindReset();
    void ExecuteUbergraph_WBP_PressForTutorial(int32 EntryPoint);
}; // Size: 0x280

#endif
