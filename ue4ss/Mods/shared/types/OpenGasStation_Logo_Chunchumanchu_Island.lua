---@meta

---@class AOpenGasStation_Logo_Chunchumanchu_Island_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SM_Totem_06_pole_02 UStaticMeshComponent
---@field SM_Totem_06_pole_03 UStaticMeshComponent
---@field LogoClosedMesh UStaticMeshComponent
---@field LogoOpenMesh UStaticMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field LogoOpenMaterial UMaterialInstanceDynamic
---@field LogoClosedMaterial UMaterialInstanceDynamic
local AOpenGasStation_Logo_Chunchumanchu_Island_C = {}

function AOpenGasStation_Logo_Chunchumanchu_Island_C:OpenLogo() end
function AOpenGasStation_Logo_Chunchumanchu_Island_C:CloseLogo() end
function AOpenGasStation_Logo_Chunchumanchu_Island_C:ReceiveBeginPlay() end
---@param NewParam boolean
function AOpenGasStation_Logo_Chunchumanchu_Island_C:Light(NewParam) end
---@param CurrentProgress float
---@param MaxProgress float
---@param LoadedMap FName
---@param LoadGameCompleted boolean
function AOpenGasStation_Logo_Chunchumanchu_Island_C:OnGameLoaded(CurrentProgress, MaxProgress, LoadedMap, LoadGameCompleted) end
---@param EntryPoint int32
function AOpenGasStation_Logo_Chunchumanchu_Island_C:ExecuteUbergraph_OpenGasStation_Logo_Chunchumanchu_Island(EntryPoint) end


