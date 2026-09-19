---@meta

---@class AGSSPlayerController_BP_C : AGSSPlayerController
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ExitMap UWBP_ExitMapStart_C
---@field Time float
---@field ExitMapWidgetClass boolean
---@field CheatNumberOfQuestsSkipped int32
---@field CheatNumberOfQuestsToSkip int32
---@field TimeSinceInWater float
local AGSSPlayerController_BP_C = {}

---@param Stick EJoystickTypes::Type
---@param StickInput FVector2D
function AGSSPlayerController_BP_C:GetJoystickDirection(Stick, StickInput) end
---@param Key FKey
function AGSSPlayerController_BP_C:InpActEvt_L_K2Node_InputKeyEvent_0(Key) end
---@param DeltaSeconds float
function AGSSPlayerController_BP_C:ReceiveTick(DeltaSeconds) end
function AGSSPlayerController_BP_C:ReceiveBeginPlay() end
---@param Amount float
function AGSSPlayerController_BP_C:Cheat_AddFuel(Amount) end
---@param Amount float
function AGSSPlayerController_BP_C:Cheat_AddHappyAngry(Amount) end
---@param Amount float
function AGSSPlayerController_BP_C:Cheat_AddMoney(Amount) end
function AGSSPlayerController_BP_C:Cheat_SkipQuest() end
function AGSSPlayerController_BP_C:Reset() end
function AGSSPlayerController_BP_C:Cheat_RemoveAllRuins() end
---@param ObjectiveStarted UObjectiveBase
function AGSSPlayerController_BP_C:OnObjectiveStarted_Event_0(ObjectiveStarted) end
---@param NumberOfObjectivesToSkip int32
function AGSSPlayerController_BP_C:Cheat_SkipObjectives(NumberOfObjectivesToSkip) end
function AGSSPlayerController_BP_C:Cheat_SpawnPartyBus() end
function AGSSPlayerController_BP_C:Cheat_SpawnTowTruck() end
function AGSSPlayerController_BP_C:Cheat_SpawnVIPCustomer() end
function AGSSPlayerController_BP_C:OnPlayerLoaded_1() end
function AGSSPlayerController_BP_C:ReceiveDestroyed() end
function AGSSPlayerController_BP_C:UnlockJunkyardStuff() end
function AGSSPlayerController_BP_C:Cheat_UnlockCinemaStuff() end
function AGSSPlayerController_BP_C:Cheat_SpawnCinemaEvents() end
---@param DestinationIndex int32
function AGSSPlayerController_BP_C:Cheat_Teleport(DestinationIndex) end
function AGSSPlayerController_BP_C:UnlockRVGuestBook() end
function AGSSPlayerController_BP_C:UnlockRVUpgrades() end
---@param EntryPoint int32
function AGSSPlayerController_BP_C:ExecuteUbergraph_GSSPlayerController_BP(EntryPoint) end


