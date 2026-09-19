#ifndef UE4SS_SDK_COmputerRacing_HPP
#define UE4SS_SDK_COmputerRacing_HPP

class AComputerRacing_C : public ARacingComputer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UAudioComponent* CheckpointSound;                                           // 0x0238 (size: 0x8)
    class UAudioComponent* arcademachine_HP_Cue;                                      // 0x0240 (size: 0x8)
    class UAudioComponent* MachineHum;                                                // 0x0248 (size: 0x8)
    class ACarTrace_Meta_C* MetaCarTrace;                                             // 0x0250 (size: 0x8)
    class ADesertCar_C* DesertCar;                                                    // 0x0258 (size: 0x8)
    TArray<ACarTrace_C*> CarTrace;                                                    // 0x0260 (size: 0x10)
    TArray<TEnumAsByte<EObjectTypeQuery>> NewVar_0;                                   // 0x0270 (size: 0x10)
    class ACarTrace_C* VehicleTargetCar;                                              // 0x0280 (size: 0x8)
    FTransform CarStartTransform;                                                     // 0x0290 (size: 0x30)
    bool StartGame;                                                                   // 0x02C0 (size: 0x1)
    class UDesertCarWidget* VehicleWidgetREF;                                         // 0x02C8 (size: 0x8)
    class UAudioComponent* NewVar_2;                                                  // 0x02D0 (size: 0x8)
    class ACarTrace_C* NewVar_3;                                                      // 0x02D8 (size: 0x8)
    bool Electrocity;                                                                 // 0x02E0 (size: 0x1)
    bool bLeaderboardFound;                                                           // 0x02E1 (size: 0x1)
    float SavedTime;                                                                  // 0x02E4 (size: 0x4)
    class UWBP_KeyBindedAction_C* KeyWidget;                                          // 0x02E8 (size: 0x8)
    float TargetTime;                                                                 // 0x02F0 (size: 0x4)
    float MoneyReward;                                                                // 0x02F4 (size: 0x4)
    FName TrackName;                                                                  // 0x02F8 (size: 0x8)
    float AchievementTime;                                                            // 0x0300 (size: 0x4)
    EMinigame LeaderboardMinigame;                                                    // 0x0304 (size: 0x1)
    TSoftObjectPtr<class AGenerator> Generator;                                       // 0x0308 (size: 0x28)

    FName GetInteractionName();
    bool GetElectrocity();
    bool AlternativeInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool ShowTooltip(class APawn* Pawn, FHitResult Hit);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    void CheckAchievementTime(FName Track);
    void TeleportCarToStart();
    void UploadLeaderboardScore(float NewTime);
    void CountPoints();
    void ShowInteractionAlertMessage();
    void ReceiveBeginPlay();
    void CustomEvent_0(class ACarTrace_C* NewParam);
    void ReceiveTick(float DeltaSeconds);
    void CustomEvent_1(bool InCar);
    void EnableElectrocity(const bool On);
    void UnpossesAfterFinish();
    void DisableInteractionInfo(class APawn* Pawn);
    void ExecuteUbergraph_ComputerRacing(int32 EntryPoint);
}; // Size: 0x330

#endif
