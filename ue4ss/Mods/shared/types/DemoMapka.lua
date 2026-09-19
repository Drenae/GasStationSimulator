---@meta

---@class ADemoMapka_C : ALevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ItemInventory UInventoryComponent
---@field HandlePoint UArrowComponent
---@field MediaPlayer UMediaPlayer
---@field NewVar_0 FRequiredItems
---@field ['Current Successful Trades Level'] FSuccessfulTradesLevel
---@field Class UClass
---@field NewVar_1 TSoftClassPtr<UObject>
---@field ScheduleMain TSoftClassPtr<UUserWidget>
---@field ['Part to Add Part Data Part Rarity'] EJunkyardPartRarity
---@field Camera_Front_Sector_2_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Billboard_Sector_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Back_Palms_Sector_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Side_Palms_Sector_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Intro_sequence_2_ExecuteUbergraph_DemoMapka_RefProperty ALevelSequenceActor
---@field Camera_Car_Needle_Sector_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Picnic_Sector_0_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Wagon_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Teepee_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Basketball_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Garage_LVL1_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_AsphaltRoad_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_RCTrack2_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Whale_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Gorilla_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Golden_Driller_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Employee_Spot_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Carwash_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Busstop_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Vacuum_Cleaner_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Rocket_Motel_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Guitar_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_FoodTruck_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Vintage_Car_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_HalloweenGraveYard_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Christmas_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Valentines_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_FerrisWheel_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Dachshund_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Dino_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_RedRockerChair_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Windmill_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Uluru_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_BritishOmnibus_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_SmokWawelski_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Canada_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Cuba_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
---@field Camera_Bolivia_ExecuteUbergraph_DemoMapka_RefProperty ADecorationCamera_BP_C
local ADemoMapka_C = {}

---@param DataTable UDataTable
---@param RowName FName
---@param InputPin AJunkyardStorage
function ADemoMapka_C:AddPartWithRandomSettings(DataTable, RowName, InputPin) end
---@param New_Time float
---@param UDS AUltra_Dynamic_Sky_BP_C
---@param New_Time_Of_day_adjusted float
ADemoMapka_C['Value Fixer for UDS Format'] = function(self, New_Time, UDS, New_Time_Of_day_adjusted) end
---@param Change_Interval float
---@param Function_will_add_time boolean
function ADemoMapka_C:ChangeTimeOfDay_Visuals(Change_Interval, Function_will_add_time) end
---@param Key FKey
function ADemoMapka_C:InpActEvt_J_K2Node_InputKeyEvent_4(Key) end
---@param Key FKey
function ADemoMapka_C:InpActEvt_Zero_K2Node_InputKeyEvent_3(Key) end
---@param Key FKey
function ADemoMapka_C:InpActEvt_Add_K2Node_InputKeyEvent_2(Key) end
---@param Key FKey
function ADemoMapka_C:InpActEvt_Subtract_K2Node_InputKeyEvent_1(Key) end
---@param Key FKey
function ADemoMapka_C:InpActEvt_K_K2Node_InputKeyEvent_0(Key) end
function ADemoMapka_C:ReceiveBeginPlay() end
function ADemoMapka_C:StartQuestLogicLevelBp() end
function ADemoMapka_C:CreateUI() end
---@param EntryPoint int32
function ADemoMapka_C:ExecuteUbergraph_DemoMapka(EntryPoint) end


