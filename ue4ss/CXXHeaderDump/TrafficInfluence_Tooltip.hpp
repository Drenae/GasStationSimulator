#ifndef UE4SS_SDK_TrafficInfluence_Tooltip_HPP
#define UE4SS_SDK_TrafficInfluence_Tooltip_HPP

class UTrafficInfluence_Tooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image;                                                              // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_Title;                                                // 0x0270 (size: 0x8)
    class UTextBlock* Tooltip_Text;                                                   // 0x0278 (size: 0x8)

    void SetCustomText(FText Title, FText Description);
    void ExecuteUbergraph_TrafficInfluence_Tooltip(int32 EntryPoint);
}; // Size: 0x280

#endif
