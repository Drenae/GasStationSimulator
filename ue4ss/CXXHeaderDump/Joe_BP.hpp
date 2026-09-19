#ifndef UE4SS_SDK_Joe_BP_HPP
#define UE4SS_SDK_Joe_BP_HPP

class AJoe_BP_C : public AJoeCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class UStaticMeshComponent* JoePilot_hat_SM;                                      // 0x06E8 (size: 0x8)
    class AActor* Goal Actor;                                                         // 0x06F0 (size: 0x8)

    bool IsTapingQuestActive();
    void OnNotifyEnd_5E39011A444D76C084CD8983D260E2F4(FName NotifyName);
    void OnNotifyBegin_5E39011A444D76C084CD8983D260E2F4(FName NotifyName);
    void OnInterrupted_5E39011A444D76C084CD8983D260E2F4(FName NotifyName);
    void OnBlendOut_5E39011A444D76C084CD8983D260E2F4(FName NotifyName);
    void OnCompleted_5E39011A444D76C084CD8983D260E2F4(FName NotifyName);
    void ReceiveBeginPlay();
    void OnGameFinishLoaded(const bool GameLoaded);
    void DestroyJoe();
    void SetJoePosition_Plane();
    void SetJoePosition_PlaneNoRange();
    void SetJoePosition_Bench();
    void ForceToMountPlane();
    void ExecuteUbergraph_Joe_BP(int32 EntryPoint);
}; // Size: 0x6F8

#endif
