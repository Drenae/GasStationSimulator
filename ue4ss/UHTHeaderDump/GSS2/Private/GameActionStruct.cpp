#include "GameActionStruct.h"

FGameActionStruct::FGameActionStruct() {
    this->ActionType = EGameAction::END_CONVERSATION;
    this->DialogueTreeObject = NULL;
    this->DialogueID = 0;
    this->ConversationType = ENPCConversationType::GREETING;
    this->QuestStateToSet = EQuestState::QuestSuccess;
    this->OverrideNPCSoundSource = false;
}

