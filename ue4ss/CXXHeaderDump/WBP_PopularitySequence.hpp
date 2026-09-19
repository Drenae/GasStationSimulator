#ifndef UE4SS_SDK_WBP_PopularitySequence_HPP
#define UE4SS_SDK_WBP_PopularitySequence_HPP

class UWBP_PopularitySequence_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)
    class UTextBlock* StationLevelTXT;                                                // 0x0270 (size: 0x8)

    void Construct();
    void EndAnimation();
    void Remove();
    void ExecuteUbergraph_WBP_PopularitySequence(int32 EntryPoint);
}; // Size: 0x278

#endif
