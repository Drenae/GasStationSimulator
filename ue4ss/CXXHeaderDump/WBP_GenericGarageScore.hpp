#ifndef UE4SS_SDK_WBP_GenericGarageScore_HPP
#define UE4SS_SDK_WBP_GenericGarageScore_HPP

class UWBP_GenericGarageScore_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0268 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_117;                                                          // 0x0278 (size: 0x8)
    class UImage* Image_163;                                                          // 0x0280 (size: 0x8)
    class UTextBlock* RepairedNumber_TXT;                                             // 0x0288 (size: 0x8)
    class UTextBlock* ToRepair_TXT;                                                   // 0x0290 (size: 0x8)
    int32 RepairedPartsUpdate;                                                        // 0x0298 (size: 0x4)
    int32 BrokenPartsUpdat;                                                           // 0x029C (size: 0x4)

    void Construct();
    void UpdateValues(int32 FixedPartsAmount, int32 BrokenPartsAmount);
    void ExecuteUbergraph_WBP_GenericGarageScore(int32 EntryPoint);
}; // Size: 0x2A0

#endif
