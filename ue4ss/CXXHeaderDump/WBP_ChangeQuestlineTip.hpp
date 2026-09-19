#ifndef UE4SS_SDK_WBP_ChangeQuestlineTip_HPP
#define UE4SS_SDK_WBP_ChangeQuestlineTip_HPP

class UWBP_ChangeQuestlineTip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UHorizontalBox* FollowNextQuestLineTip;                                     // 0x0268 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction;                                // 0x0270 (size: 0x8)

    void ShowMultipleQuestlinesInput();
    void KeyBindChanged(const FName ActionName);
    void KeyBindReset();
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_ChangeQuestlineTip(int32 EntryPoint);
}; // Size: 0x278

#endif
