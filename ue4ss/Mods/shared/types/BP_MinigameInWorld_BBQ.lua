---@meta

---@class ABP_MinigameInWorld_BBQ_C : ARvMinigameInWorld_BBQ
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HeatLight UPointLightComponent
---@field Box UBoxComponent
---@field SteakMesh UStaticMeshComponent
---@field ['BBQ Loop'] UAudioComponent
---@field NS_Campfire_BBQ UNiagaraComponent
---@field ['Guest Montage Warp'] UArrowComponent
---@field NS_Heat UNiagaraComponent
---@field Decal UDecalComponent
---@field HeatUp_HeatUp_28DFA4B346AE15275B8865AD5F01D841 float
---@field HeatUp__Direction_28DFA4B346AE15275B8865AD5F01D841 ETimelineDirection::Type
---@field HeatUp UTimelineComponent
---@field ['Selected Slot Indicator'] ABP_BBQSelectedSlotIndicator_C
---@field ['Slots Indicators'] TArray<ABP_BBQSlotIndicator_C>
---@field Coal_DMI UMaterialInstanceDynamic
---@field Tongs ABP_BBQTongs_C
---@field Intensity_ON float
local ABP_MinigameInWorld_BBQ_C = {}

---@param Slot UBBQSlotComponent
ABP_MinigameInWorld_BBQ_C['On Selected Slot Changed'] = function(self, Slot) end
function ABP_MinigameInWorld_BBQ_C:HeatUp__FinishedFunc() end
function ABP_MinigameInWorld_BBQ_C:HeatUp__UpdateFunc() end
function ABP_MinigameInWorld_BBQ_C:ReceiveBeginPlay() end
---@param bIsPressed boolean
function ABP_MinigameInWorld_BBQ_C:OnJumpAction(bIsPressed) end
---@param bIsPressed boolean
function ABP_MinigameInWorld_BBQ_C:OnPlayerPrimaryAction(bIsPressed) end
---@param Service ARvGuestServiceSpot
---@param ChosenDifficulty EGuestServiceDifficulty
function ABP_MinigameInWorld_BBQ_C:StartMiniGame(Service, ChosenDifficulty) end
---@param bSuccess boolean
function ABP_MinigameInWorld_BBQ_C:EndMinigame(bSuccess) end
---@param Slot UBBQSlotComponent
ABP_MinigameInWorld_BBQ_C['On Slot Spawned'] = function(self, Slot) end
---@param Item ABBQItem
ABP_MinigameInWorld_BBQ_C['On BBQ Item Rated'] = function(self, Item) end
---@param EntryPoint int32
function ABP_MinigameInWorld_BBQ_C:ExecuteUbergraph_BP_MinigameInWorld_BBQ(EntryPoint) end


