---@meta

---@class APostapoMainMenuGameMode : AGameModeBase
local APostapoMainMenuGameMode = {}


---@class UGenericGraph : UObject
---@field UniqueNodeCounter int32
---@field Name FString
---@field NodeType TSubclassOf<UGenericGraphNode>
---@field EdgeType TSubclassOf<UGenericGraphEdge>
---@field GraphTags FGameplayTagContainer
---@field RootNodes TArray<UGenericGraphNode>
---@field AllNodes TArray<UGenericGraphNode>
---@field bEdgeEnabled boolean
local UGenericGraph = {}

---@param ToConsole boolean
---@param ToScreen boolean
function UGenericGraph:Print(ToConsole, ToScreen) end
---@return int32
function UGenericGraph:GetUniqueNodeID() end
---@param Level int32
---@param Nodes TArray<UGenericGraphNode>
function UGenericGraph:GetNodesByLevel(Level, Nodes) end
---@return int32
function UGenericGraph:GetLevelNum() end


---@class UGenericGraphEdge : UObject
---@field Graph UGenericGraph
---@field StartNode UGenericGraphNode
---@field EndNode UGenericGraphNode
local UGenericGraphEdge = {}

---@return UGenericGraph
function UGenericGraphEdge:GetGraph() end


---@class UGenericGraphNode : UObject
---@field UniqueNodeID int32
---@field Graph UGenericGraph
---@field ParentNodes TArray<UGenericGraphNode>
---@field ChildrenNodes TArray<UGenericGraphNode>
---@field Edges TMap<UGenericGraphNode, UGenericGraphEdge>
local UGenericGraphNode = {}

---@return boolean
function UGenericGraphNode:IsLeafNode() end
---@return UGenericGraph
function UGenericGraphNode:GetGraph() end
---@param ChildNode UGenericGraphNode
---@return UGenericGraphEdge
function UGenericGraphNode:GetEdge(ChildNode) end
---@return FText
function UGenericGraphNode:GetDescription() end


