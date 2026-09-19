#ifndef UE4SS_SDK_WBP_BBQTip_HPP
#define UE4SS_SDK_WBP_BBQTip_HPP

class UWBP_BBQTip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* LoopAnimation;                                            // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Click;                                            // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Wait;                                             // 0x0278 (size: 0x8)
    class UImage* HandClosed;                                                         // 0x0280 (size: 0x8)
    class UImage* HandOpened;                                                         // 0x0288 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction;                                // 0x0290 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_89;                                         // 0x0298 (size: 0x8)
    class ABBQItem* BBQ Item;                                                         // 0x02A0 (size: 0x8)

    void Construct();
    void On Item State Changed(class ABBQItem* Item, EBBQItemState State);
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_BBQTip(int32 EntryPoint);
}; // Size: 0x2A8

#endif
