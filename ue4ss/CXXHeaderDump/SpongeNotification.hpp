#ifndef UE4SS_SDK_SpongeNotification_HPP
#define UE4SS_SDK_SpongeNotification_HPP

class USpongeNotification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ShapeAnim;                                                // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x0270 (size: 0x8)
    class UImage* Image_49;                                                           // 0x0278 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction;                                // 0x0280 (size: 0x8)

    void Finished_1B396D2347F00F0E5BCC70BDF9E0B0B0();
    void Construct();
    void ExecuteUbergraph_SpongeNotification(int32 EntryPoint);
}; // Size: 0x288

#endif
