---@meta

---@class ABP_PhoneBooth_01_C : APhoneBooth
---@field UberGraphFrame FPointerToUberGraphFrame
---@field UncleVoice8th UAudioComponent
---@field UncleVoice7th UAudioComponent
---@field UncleVoice6th UAudioComponent
---@field UncleVoice5th UAudioComponent
---@field UncleVoice4th UAudioComponent
---@field UncleVoice3rd UAudioComponent
---@field PhonePickup UAudioComponent
---@field UncleVoice2nd UAudioComponent
---@field UncleVoice1st UAudioComponent
---@field PhoneRing UAudioComponent
---@field StaticMesh4 UStaticMeshComponent
---@field StaticMesh3 UStaticMeshComponent
---@field StaticMesh2 UStaticMeshComponent
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field SM_Coins_01_A UStaticMeshComponent
---@field SM_Can_01_A UStaticMeshComponent
---@field SM_Phone_01 UStaticMeshComponent
---@field SM_PhoneBoothGlass_01 UStaticMeshComponent
---@field SM_WallLamp_01_LightShaft UStaticMeshComponent
local ABP_PhoneBooth_01_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_PhoneBooth_01_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_PhoneBooth_01_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
function ABP_PhoneBooth_01_C:ReceiveBeginPlay() end
function ABP_PhoneBooth_01_C:ReceiveDestroyed() end
---@param Pawn APawn
function ABP_PhoneBooth_01_C:DisableInteractionInfo(Pawn) end
---@param EntryPoint int32
function ABP_PhoneBooth_01_C:ExecuteUbergraph_BP_PhoneBooth_01(EntryPoint) end


