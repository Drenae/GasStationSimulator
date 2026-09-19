#ifndef UE4SS_SDK_WBP_PopcornPrice_HPP
#define UE4SS_SDK_WBP_PopcornPrice_HPP

class UWBP_PopcornPrice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_Cost;                                                 // 0x0268 (size: 0x8)

    void RefreshPrice();
    void Construct();
    void RegisterCinemaManager(bool bGameLoaded);
    void OnPopcornCapacityUpdated(int32 NewCapacity);
    void ExecuteUbergraph_WBP_PopcornPrice(int32 EntryPoint);
}; // Size: 0x270

#endif
