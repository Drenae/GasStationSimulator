#ifndef UE4SS_SDK_ElectrocityEvent_HPP
#define UE4SS_SDK_ElectrocityEvent_HPP

class UElectrocityEvent_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    bool Elecricity;                                                                  // 0x00B0 (size: 0x1)
    class UMiniGames_Tutorial_C* IntroductionTutorialRef;                             // 0x00B8 (size: 0x8)

    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void OnEnergy(bool bOn);
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void ActivateEvent(bool bEventEnabled);
    void IntroductionClosed();
    void OnInputEnabled(const bool Enable);
    void ExecuteUbergraph_ElectrocityEvent(int32 EntryPoint);
}; // Size: 0xC0

#endif
