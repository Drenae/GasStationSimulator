#ifndef UE4SS_SDK_DemoMapka_HPP
#define UE4SS_SDK_DemoMapka_HPP

class ADemoMapka_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UInventoryComponent* ItemInventory;                                         // 0x0230 (size: 0x8)
    class UArrowComponent* HandlePoint;                                               // 0x0238 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0240 (size: 0x8)
    FRequiredItems NewVar_0;                                                          // 0x0248 (size: 0x30)
    FSuccessfulTradesLevel Current Successful Trades Level;                           // 0x0278 (size: 0x18)
    UClass* Class;                                                                    // 0x0290 (size: 0x8)
    TSoftClassPtr<UObject> NewVar_1;                                                  // 0x0298 (size: 0x28)
    TSoftClassPtr<UUserWidget> ScheduleMain;                                          // 0x02C0 (size: 0x28)
    EJunkyardPartRarity Part to Add Part Data Part Rarity;                            // 0x02E8 (size: 0x1)
    class ADecorationCamera_BP_C* Camera_Front_Sector_2_ExecuteUbergraph_DemoMapka_RefProperty; // 0x02F0 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Billboard_Sector_ExecuteUbergraph_DemoMapka_RefProperty; // 0x02F8 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Back_Palms_Sector_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0300 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Side_Palms_Sector_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0308 (size: 0x8)
    class ALevelSequenceActor* Intro_sequence_2_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0310 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Car_Needle_Sector_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0318 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Picnic_Sector_0_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0320 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Wagon_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0328 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Teepee_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0330 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Basketball_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0338 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Garage_LVL1_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0340 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_AsphaltRoad_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0348 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_RCTrack2_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0350 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Whale_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0358 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Gorilla_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0360 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Golden_Driller_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0368 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Employee_Spot_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0370 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Carwash_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0378 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Busstop_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0380 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Vacuum_Cleaner_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0388 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Rocket_Motel_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0390 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Guitar_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0398 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_FoodTruck_ExecuteUbergraph_DemoMapka_RefProperty; // 0x03A0 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Vintage_Car_ExecuteUbergraph_DemoMapka_RefProperty; // 0x03A8 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_HalloweenGraveYard_ExecuteUbergraph_DemoMapka_RefProperty; // 0x03B0 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Christmas_ExecuteUbergraph_DemoMapka_RefProperty; // 0x03B8 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Valentines_ExecuteUbergraph_DemoMapka_RefProperty; // 0x03C0 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_FerrisWheel_ExecuteUbergraph_DemoMapka_RefProperty; // 0x03C8 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Dachshund_ExecuteUbergraph_DemoMapka_RefProperty; // 0x03D0 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Dino_ExecuteUbergraph_DemoMapka_RefProperty; // 0x03D8 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_RedRockerChair_ExecuteUbergraph_DemoMapka_RefProperty; // 0x03E0 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Windmill_ExecuteUbergraph_DemoMapka_RefProperty; // 0x03E8 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Uluru_ExecuteUbergraph_DemoMapka_RefProperty; // 0x03F0 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_BritishOmnibus_ExecuteUbergraph_DemoMapka_RefProperty; // 0x03F8 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_SmokWawelski_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0400 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Canada_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0408 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Cuba_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0410 (size: 0x8)
    class ADecorationCamera_BP_C* Camera_Bolivia_ExecuteUbergraph_DemoMapka_RefProperty; // 0x0418 (size: 0x8)

    void AddPartWithRandomSettings(class UDataTable* DataTable, FName RowName, class AJunkyardStorage* InputPin);
    void Value Fixer for UDS Format(float New Time, class AUltra_Dynamic_Sky_BP_C* UDS, float& New Time Of day adjusted);
    void ChangeTimeOfDay_Visuals(float Change Interval, bool Function will add time);
    void InpActEvt_J_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Zero_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Add_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Subtract_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_K_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void StartQuestLogicLevelBp();
    void CreateUI();
    void ExecuteUbergraph_DemoMapka(int32 EntryPoint);
}; // Size: 0x420

#endif
