#ifndef UE4SS_SDK_WBP_PlatformEvaluationPosition_HPP
#define UE4SS_SDK_WBP_PlatformEvaluationPosition_HPP

class UWBP_PlatformEvaluationPosition_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* PositionName_TXT;                                               // 0x0268 (size: 0x8)
    class UTextBlock* ValueNeeded_TXT;                                                // 0x0270 (size: 0x8)
    FText Info;                                                                       // 0x0278 (size: 0x18)
    float Value;                                                                      // 0x0290 (size: 0x4)
    bool bHeader;                                                                     // 0x0294 (size: 0x1)
    FText ValueFormatting;                                                            // 0x0298 (size: 0x18)

    void Construct();
    void ExecuteUbergraph_WBP_PlatformEvaluationPosition(int32 EntryPoint);
}; // Size: 0x2B0

#endif
