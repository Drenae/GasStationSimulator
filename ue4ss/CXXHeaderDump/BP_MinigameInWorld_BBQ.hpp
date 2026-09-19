#ifndef UE4SS_SDK_BP_MinigameInWorld_BBQ_HPP
#define UE4SS_SDK_BP_MinigameInWorld_BBQ_HPP

class ABP_MinigameInWorld_BBQ_C : public ARvMinigameInWorld_BBQ
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UPointLightComponent* HeatLight;                                            // 0x03C8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* SteakMesh;                                            // 0x03D8 (size: 0x8)
    class UAudioComponent* BBQ Loop;                                                  // 0x03E0 (size: 0x8)
    class UNiagaraComponent* NS_Campfire_BBQ;                                         // 0x03E8 (size: 0x8)
    class UArrowComponent* Guest Montage Warp;                                        // 0x03F0 (size: 0x8)
    class UNiagaraComponent* NS_Heat;                                                 // 0x03F8 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0400 (size: 0x8)
    float HeatUp_HeatUp_28DFA4B346AE15275B8865AD5F01D841;                             // 0x0408 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> HeatUp__Direction_28DFA4B346AE15275B8865AD5F01D841; // 0x040C (size: 0x1)
    class UTimelineComponent* HeatUp;                                                 // 0x0410 (size: 0x8)
    class ABP_BBQSelectedSlotIndicator_C* Selected Slot Indicator;                    // 0x0418 (size: 0x8)
    TArray<ABP_BBQSlotIndicator_C*> Slots Indicators;                                 // 0x0420 (size: 0x10)
    class UMaterialInstanceDynamic* Coal_DMI;                                         // 0x0430 (size: 0x8)
    class ABP_BBQTongs_C* Tongs;                                                      // 0x0438 (size: 0x8)
    float Intensity_ON;                                                               // 0x0440 (size: 0x4)

    void On Selected Slot Changed(class UBBQSlotComponent* Slot);
    void HeatUp__FinishedFunc();
    void HeatUp__UpdateFunc();
    void ReceiveBeginPlay();
    void OnJumpAction(bool bIsPressed);
    void OnPlayerPrimaryAction(bool bIsPressed);
    void StartMiniGame(class ARvGuestServiceSpot* Service, EGuestServiceDifficulty ChosenDifficulty);
    void EndMinigame(bool bSuccess);
    void On Slot Spawned(class UBBQSlotComponent* Slot);
    void On BBQ Item Rated(class ABBQItem* Item);
    void ExecuteUbergraph_BP_MinigameInWorld_BBQ(int32 EntryPoint);
}; // Size: 0x444

#endif
