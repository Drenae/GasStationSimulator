#ifndef UE4SS_SDK_WBP_ClosedDLCText_HPP
#define UE4SS_SDK_WBP_ClosedDLCText_HPP

class UWBP_ClosedDLCText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* DLCClosed;                                                      // 0x0268 (size: 0x8)
    FText In Text;                                                                    // 0x0270 (size: 0x18)
    int32 FontSize;                                                                   // 0x0288 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ClosedDLCText(int32 EntryPoint);
}; // Size: 0x28C

#endif
