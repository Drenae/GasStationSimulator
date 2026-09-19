#ifndef UE4SS_SDK_GSSPlayerController_BP_HPP
#define UE4SS_SDK_GSSPlayerController_BP_HPP

class AGSSPlayerController_BP_C : public AGSSPlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0608 (size: 0x8)
    class UWBP_ExitMapStart_C* ExitMap;                                               // 0x0610 (size: 0x8)
    float Time;                                                                       // 0x0618 (size: 0x4)
    bool ExitMapWidgetClass;                                                          // 0x061C (size: 0x1)
    int32 CheatNumberOfQuestsSkipped;                                                 // 0x0620 (size: 0x4)
    int32 CheatNumberOfQuestsToSkip;                                                  // 0x0624 (size: 0x4)
    float TimeSinceInWater;                                                           // 0x0628 (size: 0x4)

    void GetJoystickDirection(TEnumAsByte<EJoystickTypes::Type> Stick, FVector2D& StickInput);
    void InpActEvt_L_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Cheat_AddFuel(float Amount);
    void Cheat_AddHappyAngry(float Amount);
    void Cheat_AddMoney(float Amount);
    void Cheat_SkipQuest();
    void Reset();
    void Cheat_RemoveAllRuins();
    void OnObjectiveStarted_Event_0(class UObjectiveBase* ObjectiveStarted);
    void Cheat_SkipObjectives(int32 NumberOfObjectivesToSkip);
    void Cheat_SpawnPartyBus();
    void Cheat_SpawnTowTruck();
    void Cheat_SpawnVIPCustomer();
    void OnPlayerLoaded_1();
    void ReceiveDestroyed();
    void UnlockJunkyardStuff();
    void Cheat_UnlockCinemaStuff();
    void Cheat_SpawnCinemaEvents();
    void Cheat_Teleport(int32 DestinationIndex);
    void UnlockRVGuestBook();
    void UnlockRVUpgrades();
    void ExecuteUbergraph_GSSPlayerController_BP(int32 EntryPoint);
}; // Size: 0x62C

#endif
