---@meta

---@class AOpenGasStation_Logo_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh1 UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field Timeline_0_NewTrack_0_A91F14B0473ECE18E191F6A88FC3D41D float
---@field Timeline_0__Direction_A91F14B0473ECE18E191F6A88FC3D41D ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field logo1 UMaterialInstanceDynamic
---@field Logo2 UMaterialInstanceDynamic
---@field emmisive boolean
---@field CustomFlickerHandle FTimerHandle
local AOpenGasStation_Logo_C = {}

function AOpenGasStation_Logo_C:Timeline_0__FinishedFunc() end
function AOpenGasStation_Logo_C:Timeline_0__UpdateFunc() end
function AOpenGasStation_Logo_C:OpenLogo() end
function AOpenGasStation_Logo_C:CloseLogo() end
function AOpenGasStation_Logo_C:ReceiveBeginPlay() end
---@param NewParam boolean
function AOpenGasStation_Logo_C:Light_OpenClose(NewParam) end
function AOpenGasStation_Logo_C:StartFlickering() end
function AOpenGasStation_Logo_C:ChangeEmmisive() end
function AOpenGasStation_Logo_C:StopFlickering() end
---@param EntryPoint int32
function AOpenGasStation_Logo_C:ExecuteUbergraph_OpenGasStation_Logo(EntryPoint) end


