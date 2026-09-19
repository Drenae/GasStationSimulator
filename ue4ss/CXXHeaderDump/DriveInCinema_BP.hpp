#ifndef UE4SS_SDK_DriveInCinema_BP_HPP
#define UE4SS_SDK_DriveInCinema_BP_HPP

class ADriveInCinema_BP_C : public ADriveInCinema
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UMiniGames_Tutorial_C* TutorialRef;                                         // 0x0588 (size: 0x8)

    void PostLoadMapsBlueprintEvent();
    void SpecialOpenCloseEvent();
    void ReceiveBeginPlay();
    void OnGasStationOpen(const bool bIsOpen);
    void On DLC Activation State Changed(EDLCName DLCName, bool bActivated);
    void Cancel All Movies();
    void ExecuteUbergraph_DriveInCinema_BP(int32 EntryPoint);
}; // Size: 0x590

#endif
