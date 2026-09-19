#include "GameManagerLibrary.h"

UGameManagerLibrary::UGameManagerLibrary() {
}

UTutorialManager* UGameManagerLibrary::GetTutorialManager(UObject* WorldContextObject) {
    return NULL;
}

AGlobalGameEventManager* UGameManagerLibrary::GetGGEM(UObject* WorldContextObject) {
    return NULL;
}

ADialogueManager* UGameManagerLibrary::GetDialogueManager(UObject* WorldContextObject) {
    return NULL;
}

UAIManager* UGameManagerLibrary::GetAIManager(UObject* WorldContextObject) {
    return NULL;
}

AActionManager* UGameManagerLibrary::GetActionManager(UObject* WorldContextObject) {
    return NULL;
}

void UGameManagerLibrary::AutoSave(UObject* WorldContextObject, UGSSQuest* Quest, bool ForceSave) {
}


