#include "DialogueGraph.h"
#include "DialogueNode.h"

UDialogueGraph::UDialogueGraph() {
    this->Name = TEXT("DialogueGraph");
    this->NodeType = UDialogueNode::StaticClass();
    this->RelatedDLC = EDLCName::NONE;
}

int32 UDialogueGraph::GetRandomDialogueIDByType(ENPCConversationType InConversationType) {
    return 0;
}

UDialogueNode* UDialogueGraph::FindDialogueNodeByID(int32 UniqueNodeID) {
    return NULL;
}

UDialogueNode* UDialogueGraph::FindDialogueNode(const FString& DialogueTag) {
    return NULL;
}


