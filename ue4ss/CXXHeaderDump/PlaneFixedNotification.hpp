#ifndef UE4SS_SDK_PlaneFixedNotification_HPP
#define UE4SS_SDK_PlaneFixedNotification_HPP

class UPlaneFixedNotification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* RemoveAnim;                                               // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0270 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0280 (size: 0x8)

    void Finished_A21343944A7939B75417C1B200E356C4();
    void Finished_48CAC1994EAD8C6D4BB3AD943B328CF0();
    void Construct();
    void ExecuteUbergraph_PlaneFixedNotification(int32 EntryPoint);
}; // Size: 0x288

#endif
