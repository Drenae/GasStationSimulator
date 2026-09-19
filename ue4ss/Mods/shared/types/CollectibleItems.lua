---@meta

---@class ACollectible : AActor
---@field StaticMeshComp UStaticMeshComponent
local ACollectible = {}



---@class ACollectibleCard : ACollectible
---@field CollectibleCardStruct FCollectibleCardStruct
local ACollectibleCard = {}

function ACollectibleCard:CollectCard() end
function ACollectibleCard:CardFound() end


---@class FCollectibleCardAccessibility
---@field CollectibleCard TSoftClassPtr<ACollectibleCard>
---@field bIsUnlocked boolean
local FCollectibleCardAccessibility = {}



---@class FCollectibleCardStruct
---@field CollectibleStruct FCollectibleStruct
---@field CollectibleCardsValuesStruct FCollectibleCardsValueStruct
local FCollectibleCardStruct = {}



---@class FCollectibleCardsValueStruct
---@field Strength int32
local FCollectibleCardsValueStruct = {}



---@class FCollectibleStruct
---@field Texture TSoftObjectPtr<UTexture2D>
---@field Price float
---@field Name FText
---@field Description FText
---@field CollectibleCard TSoftClassPtr<ACollectibleCard>
---@field isOwned boolean
---@field WhenCollected int32
local FCollectibleStruct = {}



---@class FCollectiblesSlotStruct
---@field CollectibleCardStruct FCollectibleCardStruct
---@field QuantityItem int32
---@field LastAdded int32
local FCollectiblesSlotStruct = {}



---@class ICollectibleItemsInteraction : IInterface
local ICollectibleItemsInteraction = {}

---@return UCollectibleItemsManager
function ICollectibleItemsInteraction:GetCollectibleItemsManager() end


---@class UCollectibleItemsManager : UActorComponent
---@field OnCollectibleCardAdded FCollectibleItemsManagerOnCollectibleCardAdded
---@field OnColllectibleCardRemoved FCollectibleItemsManagerOnColllectibleCardRemoved
---@field OnCollectibleCardsFound FCollectibleItemsManagerOnCollectibleCardsFound
---@field AllCollectibleCards TArray<FCollectibleCardAccessibility>
---@field SpawnedCards TArray<ACollectibleCard>
---@field RemovedCards TArray<TSoftObjectPtr<ACollectibleCard>>
local UCollectibleItemsManager = {}

---@param NewArray TArray<TSoftObjectPtr<ACollectibleCard>>
function UCollectibleItemsManager:SetRemovedCard(NewArray) end
---@param CollectibleCard TSoftClassPtr<ACollectibleCard>
---@param NewIsUnlocked boolean
function UCollectibleItemsManager:SetCardAccessibility(CollectibleCard, NewIsUnlocked) end
---@param MinRandomAmount int32
---@param MaxRandomAmount int32
---@param ChanceToGet int32
---@param CollectiblesInventoryComponent UCollectiblesInventoryComponent
---@param DrawnCards TArray<FCollectibleCardAccessibility>
---@param RandomOnlyUnlockedCards boolean
---@param RandomOnlyNotOwnedCards boolean
function UCollectibleItemsManager:RandomCards(MinRandomAmount, MaxRandomAmount, ChanceToGet, CollectiblesInventoryComponent, DrawnCards, RandomOnlyUnlockedCards, RandomOnlyNotOwnedCards) end
---@return TArray<ACollectibleCard>
function UCollectibleItemsManager:GetSpawnedCards() end
---@return TArray<TSoftObjectPtr<ACollectibleCard>>
function UCollectibleItemsManager:GetRemovedCards() end


---@class UCollectiblesInventoryComponent : UActorComponent
---@field InventoryName FName
---@field CurrentCapacity int32
---@field MaxCapacity int32
---@field CollectibleSlots TArray<FCollectiblesSlotStruct>
---@field CollectibleItemsManager UCollectibleItemsManager
local UCollectiblesInventoryComponent = {}

function UCollectiblesInventoryComponent:SortCardsByStrength() end
function UCollectiblesInventoryComponent:SortCardsByLastAdded() end
---@param CollectibleCardStruct FCollectibleCardStruct
---@param Amount int32
---@return int32
function UCollectiblesInventoryComponent:RemoveCollectibleCard(CollectibleCardStruct, Amount) end
---@param CardToCheck TSoftClassPtr<ACollectibleCard>
---@return boolean
function UCollectiblesInventoryComponent:IsCardOwned(CardToCheck) end
---@param CardsClasses TArray<FCollectibleCardStruct>
function UCollectiblesInventoryComponent:GetAllCardStructs(CardsClasses) end
---@param FoundCards TArray<FCollectibleCardStruct>
function UCollectiblesInventoryComponent:AddFoundCards(FoundCards) end
---@param CollectibleCardStruct FCollectibleCardStruct
---@param Amount int32
---@return int32
function UCollectiblesInventoryComponent:AddCollectibleCard(CollectibleCardStruct, Amount) end


---@class UCollectiblesLibrary : UBlueprintFunctionLibrary
local UCollectiblesLibrary = {}

---@param WorldContextObject UObject
---@return UCollectibleItemsManager
function UCollectiblesLibrary:GetCollectibleItemsManager(WorldContextObject) end


