#include "NPC_MontageManager.h"

UNPC_MontageManager::UNPC_MontageManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentPositioningStep = NULL;
    this->CurrentActionMontage = NULL;
    this->CurrentSittingStartMontage = NULL;
    this->CurrentSittingEndMontage = NULL;
    this->CurrentExtraObject = NULL;
    this->CurrentExtraObjectMontage = NULL;
    this->CurrentObjectToAttach = NULL;
    this->CurrentExtraObjectSkelMeshComp = NULL;
}



















