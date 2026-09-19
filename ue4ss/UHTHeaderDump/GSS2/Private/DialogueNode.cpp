#include "DialogueNode.h"

UDialogueNode::UDialogueNode() {
    this->CopiedInternalID = -1;
    this->DialogueNodeType = eDialogueType::GREETING;
    this->VoiceoverLine = NULL;
    this->bHideAfterUse = false;
    this->DialogueDuration = 2.00f;
    this->DialogueDelayStart = 0.00f;
    this->DialogueDelayEnd = 0.00f;
    this->bOverrideDialogueDuration = false;
    this->DialogueOverrideTime = 1.00f;
    this->DialogueClass = EDialogueClass::STORY;
    this->bIsHidden = false;
    this->TimesPlayed = 0;
    this->bAllowPlayerToMove = true;
}

bool UDialogueNode::IsVoicelinePresent() {
    return false;
}

void UDialogueNode::GetAllDialogueChainFromThisNodeOnwards(TArray<UDialogueNode*>& Nodes, bool bIncludeSelf) {
}

UDialogueNode* UDialogueNode::FindNextDialogue() {
    return NULL;
}


