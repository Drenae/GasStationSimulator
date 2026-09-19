#include "GenericGraph.h"
#include "GenericGraphEdge.h"
#include "GenericGraphNode.h"

UGenericGraph::UGenericGraph() {
    this->UniqueNodeCounter = 0;
    this->NodeType = UGenericGraphNode::StaticClass();
    this->EdgeType = UGenericGraphEdge::StaticClass();
    this->bEdgeEnabled = true;
}

void UGenericGraph::Print(bool ToConsole, bool ToScreen) {
}

int32 UGenericGraph::GetUniqueNodeID() {
    return 0;
}

void UGenericGraph::GetNodesByLevel(int32 Level, TArray<UGenericGraphNode*>& Nodes) {
}

int32 UGenericGraph::GetLevelNum() const {
    return 0;
}


