#ifndef UE4SS_SDK_CinemaScreen_BP_HPP
#define UE4SS_SDK_CinemaScreen_BP_HPP

class ACinemaScreen_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void RegisterCinemaScreen();
    void SetUpMuteCinema();
    void OnCinemaMutedUpdated(bool IsMuted);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_CinemaScreen_BP(int32 EntryPoint);
}; // Size: 0x238

#endif
