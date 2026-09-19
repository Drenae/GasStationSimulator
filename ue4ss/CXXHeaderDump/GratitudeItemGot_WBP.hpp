#ifndef UE4SS_SDK_GratitudeItemGot_WBP_HPP
#define UE4SS_SDK_GratitudeItemGot_WBP_HPP

class UGratitudeItemGot_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim_Joe;                                        // 0x0268 (size: 0x8)
    class UWidgetAnimation* GlowAnim_Red;                                             // 0x0270 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0278 (size: 0x8)
    class UWidgetAnimation* GlowAnim_Orange;                                          // 0x0280 (size: 0x8)
    class UButton* Button_52;                                                         // 0x0288 (size: 0x8)
    class UImage* Image;                                                              // 0x0290 (size: 0x8)
    class UImage* Image_118;                                                          // 0x0298 (size: 0x8)
    class UImage* Image_cogency;                                                      // 0x02A0 (size: 0x8)
    class UTextBlock* ItemAmount_TXT;                                                 // 0x02A8 (size: 0x8)
    class UImage* ItemIcon_IMG;                                                       // 0x02B0 (size: 0x8)
    class UTextBlock* ItemName_TXT;                                                   // 0x02B8 (size: 0x8)
    class UNiagaraSystemWidget* NiagaraSystemWidget_67;                               // 0x02C0 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x02C8 (size: 0x8)
    FText Name;                                                                       // 0x02D0 (size: 0x18)
    int32 Amount;                                                                     // 0x02E8 (size: 0x4)
    bool bIsJoeTrade;                                                                 // 0x02EC (size: 0x1)
    FTimerHandle Timer;                                                               // 0x02F0 (size: 0x8)

    void SequenceEvent__ENTRYPOINTGratitudeItemGot_WBP_3(class UButton* Button_52);
    void SequenceEvent__ENTRYPOINTGratitudeItemGot_WBP_2(class UNiagaraSystemWidget* NiagaraSystemWidget_67);
    void SequenceEvent__ENTRYPOINTGratitudeItemGot_WBP_1(class UNiagaraSystemWidget* NiagaraSystemWidget_67);
    void SequenceEvent__ENTRYPOINTGratitudeItemGot_WBP_0(class UButton* Button_52);
    void Finished_5AD32FED4AC6DBA09CE8CB99E944F906();
    void Finished_A2ECF637422E1E756649A0B8A5B4D215();
    void Button_52_Event_0(class UButton* Button_52, bool bInIsEnabled);
    void BndEvt__GratitudeItemGot_WBP_Button_52_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void NiagaraSystemWidget_67_Event_0(class UNiagaraSystemWidget* NiagaraSystemWidget_67, bool Reset);
    void RemoveFromTimer();
    void Construct();
    void SelfClose();
    void ExecuteUbergraph_GratitudeItemGot_WBP(int32 EntryPoint);
}; // Size: 0x2F8

#endif
