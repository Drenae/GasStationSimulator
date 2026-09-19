#ifndef UE4SS_SDK_TradeSkill_HPP
#define UE4SS_SDK_TradeSkill_HPP

class UTradeSkill_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* TutorialAnim;                                             // 0x0268 (size: 0x8)
    class UWidgetAnimation* CogencyClick;                                             // 0x0270 (size: 0x8)
    class UWidgetAnimation* TimeClick;                                                // 0x0278 (size: 0x8)
    class UWidgetAnimation* CalmClick;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* GratitudeClick;                                           // 0x0288 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0290 (size: 0x8)
    class UButton* Button_42;                                                         // 0x0298 (size: 0x8)
    class UHorizontalBox* HorizontalBox_93;                                           // 0x02A0 (size: 0x8)
    class UImage* Image;                                                              // 0x02A8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02D0 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_6;                                                            // 0x02E0 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_84;                                                           // 0x02F0 (size: 0x8)
    class UImage* Image_92;                                                           // 0x02F8 (size: 0x8)
    class UImage* Image_171;                                                          // 0x0300 (size: 0x8)
    class UImage* Image_246;                                                          // 0x0308 (size: 0x8)
    class UImage* Image_baseball;                                                     // 0x0310 (size: 0x8)
    class UImage* Image_time;                                                         // 0x0318 (size: 0x8)
    class UNiagaraSystemWidget* NiagaraSystemWidget;                                  // 0x0320 (size: 0x8)
    class UNiagaraSystemWidget* NiagaraSystemWidget_1;                                // 0x0328 (size: 0x8)
    class UNiagaraSystemWidget* NiagaraSystemWidget_2;                                // 0x0330 (size: 0x8)
    class UNiagaraSystemWidget* NiagaraSystemWidget_67;                               // 0x0338 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0340 (size: 0x8)
    class URetainerBox* RetainerBox_0;                                                // 0x0348 (size: 0x8)
    class URichTextBlock* RichText_desc;                                              // 0x0350 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0358 (size: 0x8)
    class UTextBlock* TextBlock_Timer;                                                // 0x0360 (size: 0x8)
    class UTextBlock* TextBlock_Timer_2;                                              // 0x0368 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_LeftShoulder;                                   // 0x0370 (size: 0x8)
    class UAirStripTrade_Test_C* TradeWidgetREF;                                      // 0x0378 (size: 0x8)
    FTradeSkill_CHoverSkill HoverSkill;                                               // 0x0380 (size: 0x10)
    void HoverSkill();
    FTradeSkill_CUnhoverSkill UnhoverSkill;                                           // 0x0390 (size: 0x10)
    void UnhoverSkill();
    class UTexture2D* Texture;                                                        // 0x03A0 (size: 0x8)
    FText Name;                                                                       // 0x03A8 (size: 0x18)
    bool bIsCooldown;                                                                 // 0x03C0 (size: 0x1)
    ETradingSkill SkillTypeEnum;                                                      // 0x03C1 (size: 0x1)
    bool IsTutorial;                                                                  // 0x03C2 (size: 0x1)
    FText Desc;                                                                       // 0x03C8 (size: 0x18)

    void SequenceEvent__ENTRYPOINTTradeSkill_3(class UNiagaraSystemWidget* NiagaraSystemWidget_2);
    void SequenceEvent__ENTRYPOINTTradeSkill_2(class UNiagaraSystemWidget* NiagaraSystemWidget_1);
    void SequenceEvent__ENTRYPOINTTradeSkill_1(class UNiagaraSystemWidget* NiagaraSystemWidget);
    void SequenceEvent__ENTRYPOINTTradeSkill_0(class UNiagaraSystemWidget* NiagaraSystemWidget_67);
    void Finished_A9301CDA4E1BBADF95931E9F9E497613();
    void Finished_56EAA9B645CCDA914258EE99A31E1CEC();
    void Finished_E66C220C4D702C595C152C98216C8BEC();
    void Finished_646FAD8443C35B533C3CB5AA5E276B3A();
    void NiagaraSystemWidget_67_Event_0(class UNiagaraSystemWidget* NiagaraSystemWidget_67, bool Reset);
    void NiagaraSystemWidget_Event_0(class UNiagaraSystemWidget* NiagaraSystemWidget, bool Reset);
    void NiagaraSystemWidget_1_Event_0(class UNiagaraSystemWidget* NiagaraSystemWidget_1, bool Reset);
    void NiagaraSystemWidget_2_Event_0(class UNiagaraSystemWidget* NiagaraSystemWidget_2, bool Reset);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__TradeSkill_Button_42_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TradeSkill_Button_42_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TradeSkill_Button_42_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void NotyficationOfSkillused(ETradingSkill Skill);
    void UpdateSkillTimeToEnable(ETradingSkill Skill, int32 CooldownTime);
    void EnableDisable();
    void GamePadHover(bool Hover);
    void GamePadClick();
    void ExecuteUbergraph_TradeSkill(int32 EntryPoint);
    void UnhoverSkill__DelegateSignature();
    void HoverSkill__DelegateSignature();
}; // Size: 0x3E0

#endif
