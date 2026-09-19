#ifndef UE4SS_SDK_BP_ConcertBuilding_HPP
#define UE4SS_SDK_BP_ConcertBuilding_HPP

class ABP_ConcertBuilding_C : public ARvConcertBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class USphereComponent* Concert Range Sphere;                                     // 0x0588 (size: 0x8)
    class UArrowComponent* Arrow25;                                                   // 0x0590 (size: 0x8)
    class UArrowComponent* Arrow24;                                                   // 0x0598 (size: 0x8)
    class UArrowComponent* Arrow23;                                                   // 0x05A0 (size: 0x8)
    class UArrowComponent* Arrow22;                                                   // 0x05A8 (size: 0x8)
    class UArrowComponent* Arrow21;                                                   // 0x05B0 (size: 0x8)
    class UArrowComponent* Arrow20;                                                   // 0x05B8 (size: 0x8)
    class UArrowComponent* Arrow19;                                                   // 0x05C0 (size: 0x8)
    class UArrowComponent* Arrow18;                                                   // 0x05C8 (size: 0x8)
    class UArrowComponent* Arrow17;                                                   // 0x05D0 (size: 0x8)
    class UArrowComponent* Arrow16;                                                   // 0x05D8 (size: 0x8)
    class UArrowComponent* Arrow15;                                                   // 0x05E0 (size: 0x8)
    class UArrowComponent* Arrow14;                                                   // 0x05E8 (size: 0x8)
    class UArrowComponent* Arrow13;                                                   // 0x05F0 (size: 0x8)
    class UArrowComponent* Arrow12;                                                   // 0x05F8 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0600 (size: 0x8)
    class UArrowComponent* Arrow10;                                                   // 0x0608 (size: 0x8)
    class UArrowComponent* Arrow9;                                                    // 0x0610 (size: 0x8)
    class UArrowComponent* Arrow8;                                                    // 0x0618 (size: 0x8)
    class UArrowComponent* Arrow7;                                                    // 0x0620 (size: 0x8)
    class UArrowComponent* Arrow6;                                                    // 0x0628 (size: 0x8)
    class UArrowComponent* Arrow5;                                                    // 0x0630 (size: 0x8)
    class UArrowComponent* Arrow4;                                                    // 0x0638 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0640 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x0648 (size: 0x8)
    class UArrowComponent* Arrow11;                                                   // 0x0650 (size: 0x8)
    TSoftObjectPtr<class ABP_DeathStarBall_C> DiscoBall;                              // 0x0658 (size: 0x28)
    class UAudioComponent* ConcertMusicPlaying;                                       // 0x0680 (size: 0x8)
    bool Player Inside Concert Range;                                                 // 0x0688 (size: 0x1)

    void Can Pop Sound Mix Modifier(bool& Return Value);
    void TryToAddLeaveConcertTask(class AAICharacterBase* InputPin);
    void SpawnRandomNumberOfCustomers(class ARVCampSpot* self2);
    void DoesCustomerWantService(class AActor* NPCHome, FGameplayTag ServiceTag, bool& bValue);
    void OnLoaded_B226DD524D3D450FF841FBABA04999DB(class UObject* Loaded);
    void ReceiveBeginPlay();
    void StartConcert();
    void LoadConcert();
    void StopConcert();
    void PlayConcertMusic();
    void StopConcertMusic();
    void On Gameplay Settings Applied(bool bAppliedSetting);
    void Handle Streamer Mode();
    void BndEvt__BP_ConcertBuilding_Music Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_ConcertBuilding_Music Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void On Player Left Concert Range();
    void On Player Entered Concert Range();
    void Update Player Entered Left Concert Range();
    void ExecuteUbergraph_BP_ConcertBuilding(int32 EntryPoint);
}; // Size: 0x689

#endif
