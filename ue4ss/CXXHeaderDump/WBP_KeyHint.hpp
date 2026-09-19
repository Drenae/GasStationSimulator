#ifndef UE4SS_SDK_WBP_KeyHint_HPP
#define UE4SS_SDK_WBP_KeyHint_HPP

class UWBP_KeyHint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Key_IMG;                                                            // 0x0268 (size: 0x8)
    FKey Key;                                                                         // 0x0270 (size: 0x18)
    FVector2D IconSize;                                                               // 0x0288 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Refresh();
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_KeyHint(int32 EntryPoint);
}; // Size: 0x290

#endif
