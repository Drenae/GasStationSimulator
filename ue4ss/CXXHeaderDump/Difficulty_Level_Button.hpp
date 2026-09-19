#ifndef UE4SS_SDK_Difficulty_Level_Button_HPP
#define UE4SS_SDK_Difficulty_Level_Button_HPP

class UDifficulty_Level_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ChooseAnim;                                               // 0x0268 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0270 (size: 0x8)
    class UButton* Button_103;                                                        // 0x0278 (size: 0x8)
    class UImage* Image;                                                              // 0x0280 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0288 (size: 0x8)
    class UNiagaraSystemWidget* NiagaraSystemWidget_131;                              // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock_68;                                                   // 0x0298 (size: 0x8)
    class UTexture2D* bg;                                                             // 0x02A0 (size: 0x8)
    FText Text;                                                                       // 0x02A8 (size: 0x18)
    FLinearColor Color;                                                               // 0x02C0 (size: 0x10)
    FDifficulty_Level_Button_CClicked Clicked;                                        // 0x02D0 (size: 0x10)
    void Clicked();
    class UWBP_MarshalMinigameDifficulty_C* MarshallDifficultyPARENT_REF;             // 0x02E0 (size: 0x8)
    FLinearColor BGColor;                                                             // 0x02E8 (size: 0x10)

    void SequenceEvent__ENTRYPOINTDifficulty_Level_Button_0(class UNiagaraSystemWidget* NiagaraSystemWidget_131);
    void NiagaraSystemWidget_131_Event_0(class UNiagaraSystemWidget* NiagaraSystemWidget_131, bool Reset);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Difficulty_Level_Button_Button_103_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Difficulty_Level_Button_Button_103_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Difficulty_Level_Button_Button_103_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Hoover();
    void Unhoover();
    void ExecuteUbergraph_Difficulty_Level_Button(int32 EntryPoint);
    void Clicked__DelegateSignature();
}; // Size: 0x2F8

#endif
