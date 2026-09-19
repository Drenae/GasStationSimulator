#ifndef UE4SS_SDK_PartySpot_BP_HPP
#define UE4SS_SDK_PartySpot_BP_HPP

class APartySpot_BP_C : public APartySpot
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0790 (size: 0x8)
    class UUserWidget* PartyWidgetREF;                                                // 0x0798 (size: 0x8)
    class UWBP_Confirmation_C* Confirm;                                               // 0x07A0 (size: 0x8)
    class AAICharacterBase* AICharacterBase;                                          // 0x07A8 (size: 0x8)
    bool IsMusicMuted;                                                                // 0x07B0 (size: 0x1)
    class USoundMix* FadeSoundtrack;                                                  // 0x07B8 (size: 0x8)
    FTimerHandle CheckIfDanceTimeTimer;                                               // 0x07C0 (size: 0x8)

    void ReceiveBeginPlay();
    void UpdateMesh(const int32 ActorLevel, bool bLoadedFromSaveGame, bool bNewVersion);
    void SetActorLevel(int32 Level, bool bLoadedFromSaveGame, bool bNewVersion);
    void ShowConfirm(class APartySpotTable* PartySpotTable);
    void SpecialOpenCloseEvent();
    void SetNPC(const class AAICharacterBase* Customer);
    void OnCustomerDestroyed(class AActor* DestroyedActor);
    void FindOtherPartyCustomers();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnPartySpotEnteredEvent();
    void OnPartySpotLeftEvent();
    void BindPartyVolumeEvents();
    void CheckIfDanceTime();
    void ExecuteUbergraph_PartySpot_BP(int32 EntryPoint);
}; // Size: 0x7C8

#endif
