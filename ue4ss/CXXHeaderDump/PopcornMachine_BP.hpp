#ifndef UE4SS_SDK_PopcornMachine_BP_HPP
#define UE4SS_SDK_PopcornMachine_BP_HPP

class APopcornMachine_BP_C : public APopcornMachine
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F0 (size: 0x8)
    class UBoxComponent* BoundsBox;                                                   // 0x05F8 (size: 0x8)
    class UStaticMeshComponent* Ring;                                                 // 0x0600 (size: 0x8)
    class UAudioComponent* AudioPopcornLoop;                                          // 0x0608 (size: 0x8)
    class UStaticMeshComponent* popcorn_machine_asddon;                               // 0x0610 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0618 (size: 0x8)
    class UNiagaraComponent* NS_PopcornMachine;                                       // 0x0620 (size: 0x8)
    class UStaticMeshComponent* PopcornHolder;                                        // 0x0628 (size: 0x8)
    class UStaticMeshComponent* PopcornMesh;                                          // 0x0630 (size: 0x8)
    class UChildActorComponent* ButtonChildActor;                                     // 0x0638 (size: 0x8)
    float ProductionTimeline_NewTrack_0_6296F083480AA7C52545BFB79AE150CE;             // 0x0640 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ProductionTimeline__Direction_6296F083480AA7C52545BFB79AE150CE; // 0x0644 (size: 0x1)
    class UTimelineComponent* ProductionTimeline;                                     // 0x0648 (size: 0x8)
    class UNotification_C* PopcornNotification;                                       // 0x0650 (size: 0x8)
    bool DestroyHandleActor;                                                          // 0x0658 (size: 0x1)
    class UWBP_PopcornCombo_C* ComboWidget;                                           // 0x0660 (size: 0x8)
    float StartAnimRate;                                                              // 0x0668 (size: 0x4)
    float FinishAnimRate;                                                             // 0x066C (size: 0x4)
    FPopcornMachine_BP_COnPopcornMinigameStart OnPopcornMinigameStart;                // 0x0670 (size: 0x10)
    void OnPopcornMinigameStart();
    FPopcornMachine_BP_COnPopcornMinigameEnd OnPopcornMinigameEnd;                    // 0x0680 (size: 0x10)
    void OnPopcornMinigameEnd();
    bool bMinigameActive;                                                             // 0x0690 (size: 0x1)
    class AMissionArea_C* PopcornArea;                                                // 0x0698 (size: 0x8)
    class UNotification_C* QuestPopup;                                                // 0x06A0 (size: 0x8)

    void GetRefillCost(float& Cost);
    void EndMinigame();
    void StartMiniGame();
    void UpdatePopcornMesh();
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void UpdateMachineStateAfterLoad(bool GameLoaded);
    void ProductionTimeline__FinishedFunc();
    void ProductionTimeline__UpdateFunc();
    void Finished_05A6AF41494D7F561DF3EF8041A45D2B();
    void Finished_59C965934B03A528D9477DAC7275FF24();
    void ReceiveBeginPlay();
    void RegisterPopcornMachine();
    void ResetDestroyDoOnce();
    void CapacityUpdateAction(int32 NewCapacity);
    void TimeUpdateAction(float NewTime);
    void CheckForPopcornSpawn();
    void DisplayNotification();
    void BoxDestroyOnSpecialAction();
    void StartProductionAnimation();
    void FinishProductionAnimation();
    void DisableInteractionInfo(class APawn* Pawn);
    void ShowQuestPopup();
    void ResetNotification();
    void BndEvt__PopcornMachine_BP_BoundsBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BoxDestroy();
    void ExecuteUbergraph_PopcornMachine_BP(int32 EntryPoint);
    void OnPopcornMinigameEnd__DelegateSignature();
    void OnPopcornMinigameStart__DelegateSignature();
}; // Size: 0x6A8

#endif
