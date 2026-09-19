---@meta

---@class ACinemaScreen_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MediaSound UMediaSoundComponent
---@field Plane UStaticMeshComponent
local ACinemaScreen_BP_C = {}

function ACinemaScreen_BP_C:ReceiveBeginPlay() end
function ACinemaScreen_BP_C:RegisterCinemaScreen() end
function ACinemaScreen_BP_C:SetUpMuteCinema() end
---@param IsMuted boolean
function ACinemaScreen_BP_C:OnCinemaMutedUpdated(IsMuted) end
---@param EndPlayReason EEndPlayReason::Type
function ACinemaScreen_BP_C:ReceiveEndPlay(EndPlayReason) end
---@param EntryPoint int32
function ACinemaScreen_BP_C:ExecuteUbergraph_CinemaScreen_BP(EntryPoint) end


