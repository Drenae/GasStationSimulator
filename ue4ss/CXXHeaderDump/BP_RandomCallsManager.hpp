#ifndef UE4SS_SDK_BP_RandomCallsManager_HPP
#define UE4SS_SDK_BP_RandomCallsManager_HPP

class ABP_RandomCallsManager_C : public AAirstripRandomDialoguesManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C8 (size: 0x8)
    float TimeToTalk;                                                                 // 0x02D0 (size: 0x4)
    EJoeAirplaneState PreviousJoePlaneState;                                          // 0x02D4 (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void OnAirstipActivated(EDLCName DLCName, bool bActivated);
    void ExecuteUbergraph_BP_RandomCallsManager(int32 EntryPoint);
}; // Size: 0x2D5

#endif
