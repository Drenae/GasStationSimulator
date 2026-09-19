---@meta

---@class FTechNodeLink
---@field ParentTechnology UTechnologyAsset
---@field ChildTechnology UTechnologyAsset
---@field LinkFromPostion FVector2D
---@field LinkToPostion FVector2D
local FTechNodeLink = {}



---@class FUnlockedTechnologiesData
---@field UnlockedTechnologies TArray<UTechnologyAsset>
local FUnlockedTechnologiesData = {}



---@class UTTBaseNode : UObject
---@field NodePosX int32
---@field NodePosY int32
---@field ParentNodes TArray<UTTBaseNode>
---@field ChildNodes TArray<UTTBaseNode>
---@field UniqueID uint32
local UTTBaseNode = {}



---@class UTTTechNode : UTTBaseNode
---@field TechnologyAsset UTechnologyAsset
---@field IsUnlockedByDefault boolean
---@field bFlipPinsOrientation boolean
---@field NavigationMoveLeft TSoftObjectPtr<UTechnologyAsset>
---@field NavigationMoveRight TSoftObjectPtr<UTechnologyAsset>
---@field NavigationMoveUp TSoftObjectPtr<UTechnologyAsset>
---@field NavigationMoveDown TSoftObjectPtr<UTechnologyAsset>
local UTTTechNode = {}



---@class UTechNodeArrowWidget : UUserWidget
---@field PinType ETechNodePinType
---@field ConnectionAngle float
---@field ParentTechnology UTechnologyAsset
---@field ChildTechnology UTechnologyAsset
local UTechNodeArrowWidget = {}

function UTechNodeArrowWidget:OnNodeArrowInitialized() end


---@class UTechNodeWidget : UUserWidget
---@field TechnologyAsset UTechnologyAsset
local UTechNodeWidget = {}

function UTechNodeWidget:OnTechNodeInitialized() end


---@class UTechTreeManager : UActorComponent
---@field OnTechTreeSelected FTechTreeManagerOnTechTreeSelected
---@field AssignedTechTrees TMap<UTechnologyTree, UTechnologyTree>
---@field OnTechnologyUnlockStateChanged FTechTreeManagerOnTechnologyUnlockStateChanged
---@field OnTechTreeAssigned FTechTreeManagerOnTechTreeAssigned
---@field SaveGameTemplate TSubclassOf<UTechnologySaveGame>
---@field OnTechTreeRecovered FTechTreeManagerOnTechTreeRecovered
---@field TechnologyTree UTechnologyTree
---@field TechTreeWidget UTechTreeWidget
local UTechTreeManager = {}

---@param Technology UTechnologyAsset
function UTechTreeManager:UnlockTechnology(Technology) end
---@param Technology UTechnologyAsset
function UTechTreeManager:TryToUnlockTechnology(Technology) end
---@param TechTree UTechnologyTree
function UTechTreeManager:SelectTechTree(TechTree) end
---@param SaveGameObject USaveGame
function UTechTreeManager:SaveTechToObject(SaveGameObject) end
---@param SlotName FString
---@param UserIndex int32
function UTechTreeManager:SaveTechStateFromSlot(SlotName, UserIndex) end
function UTechTreeManager:Reset() end
---@param TechTree UTechnologyTree
function UTechTreeManager:OnTechTreeRecovered__DelegateSignature(TechTree) end
---@param TechTree UTechnologyTree
function UTechTreeManager:OnTechTreeAssigned__DelegateSignature(TechTree) end
---@param TechTree UTechnologyTree
---@param TechNode UTTTechNode
---@param IsUnLocked boolean
function UTechTreeManager:OnTechnologyUnlockStateChanged__DelegateSignature(TechTree, TechNode, IsUnLocked) end
---@param Technology UTechnologyAsset
function UTechTreeManager:LockTechnology(Technology) end
---@param SlotName FString
---@param UserIndex int32
function UTechTreeManager:LoadTechStateFromSlot(SlotName, UserIndex) end
---@param SaveGameObject USaveGame
function UTechTreeManager:LoadTechFromObject(SaveGameObject) end
---@param Technology UTechnologyAsset
---@return boolean
function UTechTreeManager:IsTechnologyUnlocked(Technology) end
---@param ParentNode UTTTechNode
---@param ChildNodeTechnology UTechnologyAsset
---@return boolean
function UTechTreeManager:IsChildTechnology(ParentNode, ChildNodeTechnology) end
---@param Technology UTechnologyAsset
---@return boolean
function UTechTreeManager:HasUnlockedParents(Technology) end
---@param TechNode UTTTechNode
---@param IsUnLocked boolean
function UTechTreeManager:HandleTechnologyStateChanged(TechNode, IsUnLocked) end
---@return UTechTreeWidget
function UTechTreeManager:GetTechTreeWidget() end
---@return USaveGame
function UTechTreeManager:GetSavegameTechObject() end
---@return int32
function UTechTreeManager:GetNumberTreesAssigned() end
---@param Technology UTechnologyAsset
---@return UTTTechNode
function UTechTreeManager:GetNodeFromTechAsset(Technology) end
---@return UTechnologyTree
function UTechTreeManager:GetAssignedTechTree() end
---@param TechnologyAssetToCheck UTechnologyAsset
---@param TechTreeToCheck UTechnologyTree
---@return boolean
function UTechTreeManager:CheckIsTechnologyInTreeUnlock(TechnologyAssetToCheck, TechTreeToCheck) end
---@param TechTree UTechnologyTree
---@param TechTreeWidget UTechTreeWidget
function UTechTreeManager:AssignTechTree(TechTree, TechTreeWidget) end


---@class UTechTreeWidget : UWidget
---@field TechTree UTechnologyTree
---@field SlotWidgetsCached TArray<TWeakObjectPtr<UTechNodeWidget>>
---@field ArrowWidgetsCached TArray<TWeakObjectPtr<UTechNodeArrowWidget>>
local UTechTreeWidget = {}

---@return TArray<UTechNodeWidget>
function UTechTreeWidget:GetTechNodeWidgets() end
---@param TechnologyAsset UTechnologyAsset
---@return UTechNodeWidget
function UTechTreeWidget:GetTechNode(TechnologyAsset) end
---@return TArray<UTechNodeArrowWidget>
function UTechTreeWidget:GetArrowWidgets() end
function UTechTreeWidget:CustomRebuildWidget() end


---@class UTechnologyAsset : UPrimaryDataAsset
---@field TechIcon FSlateBrush
local UTechnologyAsset = {}



---@class UTechnologySaveGame : USaveGame
---@field UnlockedTechnologies TArray<UTechnologyAsset>
---@field MultipleTreesUnlockedTechnologies TMap<UTechnologyTree, FUnlockedTechnologiesData>
local UTechnologySaveGame = {}



---@class UTechnologyTree : UObject
---@field TreeSize FVector2D
---@field Orientation ETechTreeOrientation
---@field BackgroundImage FSlateBrush
---@field ConnectionLineThickness float
---@field ConnectionLineColor FLinearColor
---@field SlotTemplate TSubclassOf<UTechNodeWidget>
---@field SlotSize FVector2D
---@field ArrowTemplate TSubclassOf<UTechNodeArrowWidget>
---@field ArrowSize FVector2D
---@field GridSnapSize int32
---@field ShowBoundaries boolean
---@field BoundariesColor FLinearColor
---@field BoundariesThickness float
---@field ShowPinArrows boolean
---@field ShowAlignmentGrid boolean
---@field AlignmentGridSize FVector2D
---@field AlignmentGridOffset FVector2D
---@field AlignmentGridColor FLinearColor
---@field AlignmentGridThickness float
---@field TechNodes TArray<UTTTechNode>
---@field TechnologiesMap TMap<UTechnologyAsset, UTTTechNode>
---@field UpdateGraph UEdGraph
---@field UniqueID int32
---@field OnTechnologyUnlockStateChanged FTechnologyTreeOnTechnologyUnlockStateChanged
---@field UnlockedTechnologies TMap<UTechnologyAsset, UTTTechNode>
---@field CurrentlyActiveNodes TArray<UTTTechNode>
---@field TechTreeTemplate UTechnologyTree
---@field PreviousTechnologyToUnlock UTechnologyAsset
---@field PreviousTechnologyTree UTechnologyTree
---@field EmptyTechToUnlock UTechnologyAsset
local UTechnologyTree = {}

---@param TechNode UTTTechNode
---@param IsUnLocked boolean
function UTechnologyTree:OnTechnologyUnlockStateChanged__DelegateSignature(TechNode, IsUnLocked) end
---@param Technology UTechnologyAsset
---@return boolean
function UTechnologyTree:IsTechnologyUnlocked(Technology) end
---@param Technology UTechnologyAsset
---@return boolean
function UTechnologyTree:HasUnlockedParents(Technology) end
---@return FString
function UTechnologyTree:GetTechAssetName() end
---@return TArray<FTechNodeLink>
function UTechnologyTree:GetConnections() end
---@param ConnectionsIn TArray<FTechNodeLink>
---@param IgnoredParentTechnologies TArray<UTechnologyAsset>
---@param IgnoredChildTechnologies TArray<UTechnologyAsset>
---@return TArray<FTechNodeLink>
function UTechnologyTree:FilterConnections(ConnectionsIn, IgnoredParentTechnologies, IgnoredChildTechnologies) end


