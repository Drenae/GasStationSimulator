---@meta

---@class APoliceCar_BP_C : A00_Vehicle_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_VintageCar_STATIC_shadowcaster UStaticMeshComponent
---@field SM_ORV_FlashingLight UStaticMeshComponent
---@field cccc UStaticMeshComponent
---@field BrakeDiscs_0 TArray<ABrakeDisc_BP_C>
---@field ['Flashing Light Emissive str'] float
---@field ['Flashing Light Var'] int32
---@field ['Add Flashing Light'] boolean
---@field ['Glass material'] UMaterialInstanceDynamic
---@field ['FlashLight ON'] boolean
---@field ['Siren Texture'] UMaterialInstanceDynamic
---@field ['Flashing Light Blinking Speed'] float
---@field SirenLoc boolean
local APoliceCar_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function APoliceCar_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
function APoliceCar_BP_C:UserConstructionScript() end
function APoliceCar_BP_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function APoliceCar_BP_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function APoliceCar_BP_C:ExecuteUbergraph_PoliceCar_BP(EntryPoint) end


