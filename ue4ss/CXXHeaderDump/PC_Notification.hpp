#ifndef UE4SS_SDK_PC_Notification_HPP
#define UE4SS_SDK_PC_Notification_HPP

class UPC_Notification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)
    class UImage* BottomImg;                                                          // 0x0270 (size: 0x8)
    class UImage* TopImg;                                                             // 0x0278 (size: 0x8)
    bool IsGreen;                                                                     // 0x0280 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_PC_Notification(int32 EntryPoint);
}; // Size: 0x281

#endif
