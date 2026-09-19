#ifndef UE4SS_SDK_SharkNotification_HPP
#define UE4SS_SDK_SharkNotification_HPP

class USharkNotification_C : public USharkNotification
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UWidgetAnimation* CloseWidget;                                              // 0x0298 (size: 0x8)
    class UImage* BG_Image;                                                           // 0x02A0 (size: 0x8)
    class UImage* Shark_Image;                                                        // 0x02A8 (size: 0x8)
    class UImage* Sign_Image;                                                         // 0x02B0 (size: 0x8)
    class UImage* SignFirst;                                                          // 0x02B8 (size: 0x8)
    class UWBP_SharkMarker_C* WBP_SharkMarker;                                        // 0x02C0 (size: 0x8)

    void Finished_0D36F5D444C36B640833F69FA8A39D5B();
    void Construct();
    void ExecuteUbergraph_SharkNotification(int32 EntryPoint);
}; // Size: 0x2C8

#endif
