#ifndef UE4SS_SDK_WBP_BBQItemInfo_HPP
#define UE4SS_SDK_WBP_BBQItemInfo_HPP

class UWBP_BBQItemInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* DoneAnimation;                                            // 0x0268 (size: 0x8)
    class UImage* Image_Check;                                                        // 0x0270 (size: 0x8)
    class UTextBlock* T_Percent;                                                      // 0x0278 (size: 0x8)
    class UTextBlock* T_Progress;                                                     // 0x0280 (size: 0x8)
    class UTextBlock* T_State;                                                        // 0x0288 (size: 0x8)
    class ABBQItem* Item;                                                             // 0x0290 (size: 0x8)

    void Set Progress(float Progress);
    void Init(class ABBQItem* BBQ Item);
    void On State Changed(class ABBQItem* Item, EBBQItemState State);
    void On Cooking Progress Updated(class ABBQItem* Item, float CookingProgress, float CurrentStateProgress);
    void On Slot Changed(class UBBQSlotComponent* NewSlot);
    void ExecuteUbergraph_WBP_BBQItemInfo(int32 EntryPoint);
}; // Size: 0x298

#endif
