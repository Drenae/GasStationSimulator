#ifndef UE4SS_SDK_BP_ExhibitionSpot_HPP
#define UE4SS_SDK_BP_ExhibitionSpot_HPP

class ABP_ExhibitionSpot_C : public AExhibitionSpot
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D0 (size: 0x8)
    class UWBP_ExhibitionPanel_C* WBP_Exhibition;                                     // 0x05D8 (size: 0x8)
    FVector EndLocation;                                                              // 0x05E0 (size: 0xC)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ExhibitionSpot(int32 EntryPoint);
}; // Size: 0x5EC

#endif
