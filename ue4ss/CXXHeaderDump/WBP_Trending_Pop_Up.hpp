#ifndef UE4SS_SDK_WBP_Trending_Pop_Up_HPP
#define UE4SS_SDK_WBP_Trending_Pop_Up_HPP

class UWBP_Trending_Pop_Up_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_Value;                                                // 0x0268 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_Trending_Pop_Up(int32 EntryPoint);
}; // Size: 0x270

#endif
