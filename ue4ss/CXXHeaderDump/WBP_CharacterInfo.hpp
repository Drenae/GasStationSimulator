#ifndef UE4SS_SDK_WBP_CharacterInfo_HPP
#define UE4SS_SDK_WBP_CharacterInfo_HPP

class UWBP_CharacterInfo_C : public UNPUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0270 (size: 0x8)
    class UTextBlock* State;                                                          // 0x0278 (size: 0x8)
    class UTextBlock* Task;                                                           // 0x0280 (size: 0x8)
    class UTextBlock* Time;                                                           // 0x0288 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_CharacterInfo(int32 EntryPoint);
}; // Size: 0x290

#endif
