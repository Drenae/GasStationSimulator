#ifndef UE4SS_SDK_StatDebug_Line_WBP_HPP
#define UE4SS_SDK_StatDebug_Line_WBP_HPP

class UStatDebug_Line_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* Amount;                                                         // 0x0268 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x0270 (size: 0x8)
    FString NameText;                                                                 // 0x0278 (size: 0x10)
    float AmountText;                                                                 // 0x0288 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_StatDebug_Line_WBP(int32 EntryPoint);
}; // Size: 0x28C

#endif
