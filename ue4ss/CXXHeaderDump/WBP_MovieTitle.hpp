#ifndef UE4SS_SDK_WBP_MovieTitle_HPP
#define UE4SS_SDK_WBP_MovieTitle_HPP

class UWBP_MovieTitle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_Time;                                                 // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_Title;                                                // 0x0270 (size: 0x8)
    FText Title;                                                                      // 0x0278 (size: 0x18)
    FTimeStruct Time;                                                                 // 0x0290 (size: 0x10)

    void GetHourText(FText& Result);
    void Construct();
    void ExecuteUbergraph_WBP_MovieTitle(int32 EntryPoint);
}; // Size: 0x2A0

#endif
