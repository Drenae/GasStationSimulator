#ifndef UE4SS_SDK_GSSGameState_BP_HPP
#define UE4SS_SDK_GSSGameState_BP_HPP

class AGSSGameState_BP_C : public AGSSGameState
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0C90 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0C98 (size: 0x8)
    EUIState Current_Interface_State;                                                 // 0x0CA0 (size: 0x1)
    bool bPushedHonksSoundModifier;                                                   // 0x0CA1 (size: 0x1)
    FAllPlayerOrders CodeMainPlayerOrderList;                                         // 0x0CA8 (size: 0x78)
    class UDataTable* DTAll Items;                                                    // 0x0D20 (size: 0x8)
    class UDialogue_WBP_C* DialogueWidget;                                            // 0x0D28 (size: 0x8)
    TSubclassOf<class UWBP_ScheduleEmployee_C> ScheduleEmployeeWidgetClass;           // 0x0D30 (size: 0x8)
    int32 LocalScalabilityValue;                                                      // 0x0D38 (size: 0x4)

    void WaterDeliveryStatus(TSubclassOf<class AWaterVehicle> WatervehicleClass, bool& bDelivery, bool& bIsComingIn);
    void DeliveryStatus(TSubclassOf<class AGSSWheeledVehicle> VehicleClass, bool& bDelivery, TSubclassOf<class UTaskBase>& TaskClass);
    void SpawnNPC(TSubclassOf<class AGSSWheeledVehicle> VehicleClass, FTransform VehicleTransform, class AActor* Home, TSubclassOf<class AAICharacterBase> AIBaseClass, FTransform CharacterTransform, class AGSSWheeledVehicle*& OutVehicle, class AAICharacterBase*& OutCharacter);
    void CheckEvents();
    void CanNPCDoTheTask_Vehicle(TSubclassOf<class APlaceableActor> ClassToCheck, bool& bCanDo);
    bool Delivery Status Old(TSubclassOf<class AGSSWheeledVehicle> NewParam, TSubclassOf<class UTaskBase>& Task);
    void AddTaskToTaskList(TSubclassOf<class UGSSTask> TaskClassRef, class AAICharacterBase* NPC);
    void Set Active Widget Old(class UUserWidget* New_Widget, EUIState New_Active_State);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnHappyAngryPopularityLevelUp_Event_0(const int32 HappyAngryPopularityLevel);
    void StartGame();
    void SetActiveWidget(class UUserWidget* NewActiveWidget, EUIState UIState);
    void EventHonksSoundModifiver(bool bRemoveModifier);
    void OnDialogueStarted_Event_0(class UDialogueGraph* GameplayGraph, class UDialogueNode* DialogueNode);
    void OnDialogueEnded_Event_0(class UDialogueGraph* GameplayGraph);
    void SetAdditionalScalability(int32 QualityIndex);
    void OnLoaded(const bool GameLoaded);
    void ExecuteUbergraph_GSSGameState_BP(int32 EntryPoint);
}; // Size: 0xD3C

#endif
