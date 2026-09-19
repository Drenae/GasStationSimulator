---@meta

---@class AFuelPistolMagazine_C : AFuelPistolMagazineBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FuelCapSound UAudioComponent
---@field FuelPourSound UAudioComponent
---@field ChildActor UChildActorComponent
---@field StaticMesh UStaticMeshComponent
---@field LimpTimerHandle FTimerHandle
local AFuelPistolMagazine_C = {}

---@param Enable boolean
function AFuelPistolMagazine_C:EnablePistolLine(Enable) end
---@param UserActor AActor
function AFuelPistolMagazine_C:UsePistol(UserActor) end
---@param EntryPoint int32
function AFuelPistolMagazine_C:ExecuteUbergraph_FuelPistolMagazine(EntryPoint) end


