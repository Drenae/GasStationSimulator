#include "NPCText_DialogueNode.h"
#include "eDialogueType.h"

UNPCText_DialogueNode::UNPCText_DialogueNode() {
    this->DialogueNodeType = eDialogueType::NPC_TEXT;
    this->ForceToPlayOnPlayerAudioComponent = false;
    this->NPCHeadMontage = NULL;
    this->NPCBodyMontage = NULL;
}

UAnimMontage* UNPCText_DialogueNode::GetNPCHeadMontage() const {
    return NULL;
}

UAnimMontage* UNPCText_DialogueNode::GetNPCBodyMontage() const {
    return NULL;
}


