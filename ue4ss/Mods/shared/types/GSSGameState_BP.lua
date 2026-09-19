---@meta

---@class AGSSGameState_BP_C : AGSSGameState
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field Current_Interface_State EUIState
---@field bPushedHonksSoundModifier boolean
---@field CodeMainPlayerOrderList FAllPlayerOrders
---@field ['DTAll Items'] UDataTable
---@field DialogueWidget UDialogue_WBP_C
---@field ScheduleEmployeeWidgetClass TSubclassOf<UWBP_ScheduleEmployee_C>
---@field LocalScalabilityValue int32
local AGSSGameState_BP_C = {}

---@param WatervehicleClass TSubclassOf<AWaterVehicle>
---@param bDelivery boolean
---@param bIsComingIn boolean
function AGSSGameState_BP_C:WaterDeliveryStatus(WatervehicleClass, bDelivery, bIsComingIn) end
---@param VehicleClass TSubclassOf<AGSSWheeledVehicle>
---@param bDelivery boolean
---@param TaskClass TSubclassOf<UTaskBase>
function AGSSGameState_BP_C:DeliveryStatus(VehicleClass, bDelivery, TaskClass) end
---@param VehicleClass TSubclassOf<AGSSWheeledVehicle>
---@param VehicleTransform FTransform
---@param Home AActor
---@param AIBaseClass TSubclassOf<AAICharacterBase>
---@param CharacterTransform FTransform
---@param OutVehicle AGSSWheeledVehicle
---@param OutCharacter AAICharacterBase
function AGSSGameState_BP_C:SpawnNPC(VehicleClass, VehicleTransform, Home, AIBaseClass, CharacterTransform, OutVehicle, OutCharacter) end
function AGSSGameState_BP_C:CheckEvents() end
---@param ClassToCheck TSubclassOf<APlaceableActor>
---@param bCanDo boolean
function AGSSGameState_BP_C:CanNPCDoTheTask_Vehicle(ClassToCheck, bCanDo) end
---@param NewParam TSubclassOf<AGSSWheeledVehicle>
---@param Task TSubclassOf<UTaskBase>
---@return boolean
AGSSGameState_BP_C['Delivery Status Old'] = function(self, NewParam, Task) end
---@param TaskClassRef TSubclassOf<UGSSTask>
---@param NPC AAICharacterBase
function AGSSGameState_BP_C:AddTaskToTaskList(TaskClassRef, NPC) end
---@param New_Widget UUserWidget
---@param New_Active_State EUIState
AGSSGameState_BP_C['Set Active Widget Old'] = function(self, New_Widget, New_Active_State) end
function AGSSGameState_BP_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function AGSSGameState_BP_C:ReceiveTick(DeltaSeconds) end
---@param HappyAngryPopularityLevel int32
function AGSSGameState_BP_C:OnHappyAngryPopularityLevelUp_Event_0(HappyAngryPopularityLevel) end
function AGSSGameState_BP_C:StartGame() end
---@param NewActiveWidget UUserWidget
---@param UIState EUIState
function AGSSGameState_BP_C:SetActiveWidget(NewActiveWidget, UIState) end
---@param bRemoveModifier boolean
function AGSSGameState_BP_C:EventHonksSoundModifiver(bRemoveModifier) end
---@param GameplayGraph UDialogueGraph
---@param DialogueNode UDialogueNode
function AGSSGameState_BP_C:OnDialogueStarted_Event_0(GameplayGraph, DialogueNode) end
---@param GameplayGraph UDialogueGraph
function AGSSGameState_BP_C:OnDialogueEnded_Event_0(GameplayGraph) end
---@param QualityIndex int32
function AGSSGameState_BP_C:SetAdditionalScalability(QualityIndex) end
---@param GameLoaded boolean
function AGSSGameState_BP_C:OnLoaded(GameLoaded) end
---@param EntryPoint int32
function AGSSGameState_BP_C:ExecuteUbergraph_GSSGameState_BP(EntryPoint) end


