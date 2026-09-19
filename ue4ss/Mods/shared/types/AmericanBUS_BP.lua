---@meta

---@class AAmericanBUS_BP_C : A00_Vehicle_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field cccc UStaticMeshComponent
---@field BusMusicAttached UAudioComponent
---@field FadeSoundtrack USoundMix
local AAmericanBUS_BP_C = {}

---@return boolean
function AAmericanBUS_BP_C:IsTouristBus() end
function AAmericanBUS_BP_C:ReceiveDestroyed() end
---@param EndPlayReason EEndPlayReason::Type
function AAmericanBUS_BP_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function AAmericanBUS_BP_C:ExecuteUbergraph_AmericanBUS_BP(EntryPoint) end


