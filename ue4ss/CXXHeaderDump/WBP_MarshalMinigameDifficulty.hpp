#ifndef UE4SS_SDK_WBP_MarshalMinigameDifficulty_HPP
#define UE4SS_SDK_WBP_MarshalMinigameDifficulty_HPP

class UWBP_MarshalMinigameDifficulty_C : public UMarshalDifficultyWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0270 (size: 0x8)
    class UDifficulty_Level_Button_C* Difficulty_Level_Button_EASY;                   // 0x0278 (size: 0x8)
    class UDifficulty_Level_Button_C* Difficulty_Level_Button_HARD;                   // 0x0280 (size: 0x8)
    class UDifficulty_Level_Button_C* Difficulty_Level_Button_MEDIUM;                 // 0x0288 (size: 0x8)
    class UImage* Image_bg;                                                           // 0x0290 (size: 0x8)
    bool bAnyButtonPressed;                                                           // 0x0298 (size: 0x1)
    int32 CurrentDifficultyButtonIndex;                                               // 0x029C (size: 0x4)
    TArray<UDifficulty_Level_Button_C*> Difficulties;                                 // 0x02A0 (size: 0x10)
    bool IsUsingGamepad;                                                              // 0x02B0 (size: 0x1)

    void UnhooverCurrentButton();
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ChangeInputDevice(bool IsGamepad);
    void HooverCurrentButton();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Finished_9EB6A00E4029744E4F7DA59FF9B6BF38();
    void Finished_19F7AC424573F556EFE267A9B51C3BE8();
    void Finished_1B400E624AD9A3AAA3F84B944BCC322A();
    void Construct();
    void Destruct();
    void BndEvt__WBP_MarshalMinigameDifficulty_Difficulty_Level_Button_HARD_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
    void BndEvt__WBP_MarshalMinigameDifficulty_Difficulty_Level_Button_EASY_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
    void BndEvt__WBP_MarshalMinigameDifficulty_Difficulty_Level_Button_MEDIUM_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
    void ExecuteUbergraph_WBP_MarshalMinigameDifficulty(int32 EntryPoint);
}; // Size: 0x2B1

#endif
