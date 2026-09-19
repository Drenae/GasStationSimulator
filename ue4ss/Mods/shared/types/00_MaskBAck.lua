---@meta

---@class A00_MaskBack_C : ABackMask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BP_LockComponent UBP_LockComponent_C
---@field LootPanel UWBP_LootPanel_C
local A00_MaskBack_C = {}

---@return FName
function A00_MaskBack_C:GetInteractionName() end
function A00_MaskBack_C:RandomAwards() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function A00_MaskBack_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Loaded UClass
function A00_MaskBack_C:OnLoaded_99454E9643924972C0B692834FCCCC68(Loaded) end
---@param Broken boolean
---@param WasFixedSuccessfully boolean
function A00_MaskBack_C:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
---@param Opened boolean
function A00_MaskBack_C:OpenMask(Opened) end
function A00_MaskBack_C:ReceiveBeginPlay() end
function A00_MaskBack_C:RandomCards() end
function A00_MaskBack_C:AfterLoadSetSettings() end
---@param EntryPoint int32
function A00_MaskBack_C:ExecuteUbergraph_00_MaskBack(EntryPoint) end


