---@meta

---@class ABP_BBQItemBase_C : ABBQItem
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ['Info Widget'] UWidgetComponent
---@field ['Burned Particle System'] UParticleSystemComponent
---@field Timeline_Cooked_Scale_D92B87F54806A2BA2F7DCA956028F51B FVector
---@field Timeline_Cooked_Rotation_D92B87F54806A2BA2F7DCA956028F51B float
---@field Timeline_Cooked__Direction_D92B87F54806A2BA2F7DCA956028F51B ETimelineDirection::Type
---@field ['Timeline Cooked'] UTimelineComponent
---@field Timeline_Flip_Rotation_DAD2C3F74C9EA94CB013C48D2A015903 float
---@field Timeline_Flip_Height_DAD2C3F74C9EA94CB013C48D2A015903 float
---@field Timeline_Flip__Direction_DAD2C3F74C9EA94CB013C48D2A015903 ETimelineDirection::Type
---@field ['Timeline Flip'] UTimelineComponent
---@field ['Cached Transform On Front Flip'] FTransform
---@field ['Pivot Mesh Offset'] float
---@field ['Default Scale'] FVector
---@field ['Burned Material'] UMaterialInterface
---@field ['Medium Material'] UMaterialInterface
---@field ['Perfect Material'] UMaterialInterface
---@field ['Tutorial Tip'] UWBP_BBQTip_C
---@field ['Tutorial Lock'] boolean
local ABP_BBQItemBase_C = {}

---@param Value float
ABP_BBQItemBase_C['Get Movement Duration'] = function(self, Value) end
---@param bReverseSide boolean
ABP_BBQItemBase_C['On Perfect'] = function(self, bReverseSide) end
---@param bReverseSide boolean
ABP_BBQItemBase_C['On Medium'] = function(self, bReverseSide) end
---@param bReverseSide boolean
ABP_BBQItemBase_C['On Burned'] = function(self, bReverseSide) end
---@param Transform FTransform
ABP_BBQItemBase_C['Get Actor Transform With Default Scale'] = function(self, Transform) end
ABP_BBQItemBase_C['Cache And Restore Transform if Needed'] = function(self, ) end
ABP_BBQItemBase_C['Timeline Flip__FinishedFunc'] = function(self, ) end
ABP_BBQItemBase_C['Timeline Flip__UpdateFunc'] = function(self, ) end
ABP_BBQItemBase_C['Timeline Cooked__FinishedFunc'] = function(self, ) end
ABP_BBQItemBase_C['Timeline Cooked__UpdateFunc'] = function(self, ) end
function ABP_BBQItemBase_C:ReceiveBeginPlay() end
function ABP_BBQItemBase_C:Flip() end
---@param Item ABBQItem
---@param CookingProgress float
---@param CurrentStateProgress float
ABP_BBQItemBase_C['On Cooking Progress Updated'] = function(self, Item, CookingProgress, CurrentStateProgress) end
ABP_BBQItemBase_C['Play Cooked Animation'] = function(self, ) end
---@param DeltaSeconds float
function ABP_BBQItemBase_C:ReceiveTick(DeltaSeconds) end
---@param NewSlot UBBQSlotComponent
ABP_BBQItemBase_C['On Slot Changed'] = function(self, NewSlot) end
---@param Item ABBQItem
---@param State EBBQItemState
ABP_BBQItemBase_C['On State Changed'] = function(self, Item, State) end
ABP_BBQItemBase_C['On Item Rated'] = function(self, ) end
ABP_BBQItemBase_C['Try To Create Tutorial Tip'] = function(self, ) end
---@param EntryPoint int32
function ABP_BBQItemBase_C:ExecuteUbergraph_BP_BBQItemBase(EntryPoint) end


