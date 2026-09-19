#ifndef UE4SS_SDK_WBP_CarPartUnderMask_HPP
#define UE4SS_SDK_WBP_CarPartUnderMask_HPP

class UWBP_CarPartUnderMask_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_Interact;                                                   // 0x0268 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_Acceleration_Value;                                   // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_Handling_Value;                                       // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock_Rarity_Value;                                         // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock_Rust_Value;                                           // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_Speed_Value;                                          // 0x02A0 (size: 0x8)
    class UTextBlock* TextBlock_Strength_Value;                                       // 0x02A8 (size: 0x8)
    class UVerticalBox* VerticalBox_Stats;                                            // 0x02B0 (size: 0x8)
    class UJunkyardCarPartHidden* CarPart;                                            // 0x02B8 (size: 0x8)
    EJunkyardCarPartType CarPartSlot;                                                 // 0x02C0 (size: 0x1)
    class AJunkyardCarWreckCustomizable* CarWreck;                                    // 0x02C8 (size: 0x8)

    void OnLoaded_8D3D5F4A40AAE6DEDFA34FB5C6CC82DE(class UObject* Loaded);
    void Construct();
    void BndEvt__WBP_CarPartUnderMask_Button_Interact_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_CarPartUnderMask(int32 EntryPoint);
}; // Size: 0x2D0

#endif
