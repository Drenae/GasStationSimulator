#ifndef UE4SS_SDK_ChangeTradeChanceArrow_HPP
#define UE4SS_SDK_ChangeTradeChanceArrow_HPP

class UChangeTradeChanceArrow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0268 (size: 0x8)
    FLinearColor Color;                                                               // 0x0270 (size: 0x10)
    float Scale Y;                                                                    // 0x0280 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void Refresh();
    void ExecuteUbergraph_ChangeTradeChanceArrow(int32 EntryPoint);
}; // Size: 0x284

#endif
