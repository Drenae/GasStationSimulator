---@meta

---@class AMagazineShelf_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh UStaticMeshComponent
---@field Inventory UInventoryComponent
local AMagazineShelf_C = {}

---@return FName
function AMagazineShelf_C:GetInteractionName() end
function AMagazineShelf_C:ReceiveBeginPlay() end
function AMagazineShelf_C:RefreshShelvs() end
---@param Inventory UInventoryComponent
function AMagazineShelf_C:OnInventoryUpdated_Event_0(Inventory) end
---@param GameLoaded boolean
function AMagazineShelf_C:OnFinishGameLoaded_Event_0(GameLoaded) end
---@param EntryPoint int32
function AMagazineShelf_C:ExecuteUbergraph_MagazineShelf(EntryPoint) end


