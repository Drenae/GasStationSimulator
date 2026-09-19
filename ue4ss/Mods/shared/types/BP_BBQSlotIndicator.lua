---@meta

---@class ABP_BBQSlotIndicator_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Plane UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field Show_Timeline_Scale_29C1BF4F4382EA202DC96AB97CEA6CAA float
---@field Show_Timeline__Direction_29C1BF4F4382EA202DC96AB97CEA6CAA ETimelineDirection::Type
---@field ['Show Timeline'] UTimelineComponent
---@field ['BBQ Slot'] UBBQSlotComponent
---@field ['Binded BBQ Item'] ABBQItem
---@field Mid UMaterialInstanceDynamic
---@field ['Empty Color'] FLinearColor
---@field ['Cooking Color'] FLinearColor
---@field ['Perfect Color'] FLinearColor
---@field ['Burning Color'] FLinearColor
local ABP_BBQSlotIndicator_C = {}

ABP_BBQSlotIndicator_C['Show Timeline__FinishedFunc'] = function(self, ) end
ABP_BBQSlotIndicator_C['Show Timeline__UpdateFunc'] = function(self, ) end
ABP_BBQSlotIndicator_C['Destroy Slot'] = function(self, ) end
---@param Slot UBBQSlotComponent
---@param BBQItem ABBQItem
function ABP_BBQSlotIndicator_C:OnSetBBQItemInside_Event_0(Slot, BBQItem) end
---@param Item ABBQItem
---@param CookingProgress float
---@param CurrentStateProgress float
ABP_BBQSlotIndicator_C['On Cooking Progress Updated'] = function(self, Item, CookingProgress, CurrentStateProgress) end
function ABP_BBQSlotIndicator_C:ReceiveBeginPlay() end
---@param Progress float
---@param Cooked boolean
ABP_BBQSlotIndicator_C['Set Progress'] = function(self, Progress, Cooked) end
---@param EntryPoint int32
function ABP_BBQSlotIndicator_C:ExecuteUbergraph_BP_BBQSlotIndicator(EntryPoint) end


