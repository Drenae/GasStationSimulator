#ifndef UE4SS_SDK_PC_CollectedStuff_WBP_HPP
#define UE4SS_SDK_PC_CollectedStuff_WBP_HPP

class UPC_CollectedStuff_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_all;                                                  // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_owned;                                                // 0x0270 (size: 0x8)
    TSoftClassPtr<UPC_DecorationBase_WBP_C> Interactive;                              // 0x0278 (size: 0x28)
    int32 AllDecorationsCount;                                                        // 0x02A0 (size: 0x4)
    int32 OwnedDecorationCount;                                                       // 0x02A4 (size: 0x4)

    void SetValues(TSoftClassPtr<UPcBaseTab> WidgetToCreate);
    void SetData();
    void ExecuteUbergraph_PC_CollectedStuff_WBP(int32 EntryPoint);
}; // Size: 0x2A8

#endif
