#ifndef UE4SS_SDK_WBP_CarDecalSlot_HPP
#define UE4SS_SDK_WBP_CarDecalSlot_HPP

class UWBP_CarDecalSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0268 (size: 0x8)
    class UDragoButton* Action_Button;                                                // 0x0270 (size: 0x8)
    class UImage* Decal_IMG;                                                          // 0x0278 (size: 0x8)
    class UImage* Image_44;                                                           // 0x0280 (size: 0x8)
    class UImage* Lock_IMG;                                                           // 0x0288 (size: 0x8)
    class UOverlay* Overlay_main;                                                     // 0x0290 (size: 0x8)
    FDecalDataRow DecalDataRow;                                                       // 0x0298 (size: 0x80)
    FWBP_CarDecalSlot_CDecalSelected DecalSelected;                                   // 0x0318 (size: 0x10)
    void DecalSelected(TSubclassOf<class ADecalToPaint> DecalSelected, EDecalColor DecalType);

    void OnLoaded_966AB59D47FC48D11E7FC3AA86C66A53(class UObject* Loaded);
    void OnLoaded_DE3C0E63445D4B370739299BEF2EF14D(UClass* Loaded);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__DragoButton_38_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_CarDecalSlot_Action_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_CarDecalSlot_Action_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void GamePadHover(bool Hover);
    void GamePadClickAction();
    void ExecuteUbergraph_WBP_CarDecalSlot(int32 EntryPoint);
    void DecalSelected__DelegateSignature(TSubclassOf<class ADecalToPaint> DecalSelected, EDecalColor DecalType);
}; // Size: 0x328

#endif
