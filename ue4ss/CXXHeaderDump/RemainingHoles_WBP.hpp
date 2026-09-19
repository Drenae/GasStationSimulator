#ifndef UE4SS_SDK_RemainingHoles_WBP_HPP
#define UE4SS_SDK_RemainingHoles_WBP_HPP

class URemainingHoles_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* CreateAnim;                                               // 0x0268 (size: 0x8)
    class UTextBlock* all_holes;                                                      // 0x0270 (size: 0x8)
    class UTextBlock* fixed_holes;                                                    // 0x0278 (size: 0x8)
    int32 Fixed;                                                                      // 0x0280 (size: 0x4)
    int32 All;                                                                        // 0x0284 (size: 0x4)

    void Finished_355957444E4AE13EF7EE6E931F947B4B();
    void Construct();
    void ExecuteUbergraph_RemainingHoles_WBP(int32 EntryPoint);
}; // Size: 0x288

#endif
