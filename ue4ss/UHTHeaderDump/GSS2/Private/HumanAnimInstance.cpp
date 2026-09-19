#include "HumanAnimInstance.h"

UHumanAnimInstance::UHumanAnimInstance() {
    this->bRagdoll = false;
    this->bLookAt = true;
    this->bCheckNPCLookAtDistance = true;
    this->BlinkOffset = 0.00f;
    this->Turn = 0.00f;
    this->bTurning = false;
    this->bWaitingTooLong = false;
    this->WaitingAnimType = 0;
    this->bInCar = false;
    this->bTalkingOnPhone = false;
    this->PhoneAlpha = 0.00f;
    this->bMotorbike = false;
    this->LArmLayerPose = NULL;
    this->UpperBodyLayerPose = NULL;
    this->LeftArmLayerAlpha = 0.00f;
    this->UpperBodyLayerAlpha = 0.00f;
    this->LeftArmLayerActive = false;
    this->RightArmLayerActive = false;
    this->LayerPose = NULL;
    this->HandsLayerBlendTime = 0.50f;
    this->CurrentLayerIndex = 0;
    this->CurrentHandSocketSpawnTimer = 0.00f;
    this->SpawnInHandSocketTimeTreshold = 0.50f;
    this->CurrentHandSocketDestroyTime = 0.00f;
    this->DestroyInHandSocketTimeTreshold = 0.50f;
    this->bLayerSpawnActorTimerOn = false;
    this->bAnyLayerActive = false;
    this->bWasAnyLayerActiveWhenMontagePlayed = false;
    this->HandLayerActorToSpawn = NULL;
    this->bBenchPressing = false;
    this->BenchPressUp = 0.00f;
    this->BenchPressTilt = 0.00f;
    this->LayerSocketName = TEXT("hand_r_socket");
    this->bDestroyLayerSpawnedActors = false;
    this->CurrentIdlePoseID = 0;
    this->bVariantIdle = false;
    this->bNoShotGunIdle = false;
    this->bSleeping = false;
    this->bRLegForward = false;
    this->bLLegForward = false;
    this->bRLegForwardArms = false;
    this->bSaunaSitting = false;
    this->bMegaphone = false;
}



void UHumanAnimInstance::SetRagdoll(bool NewValue) {
}

void UHumanAnimInstance::SetNPCLookAt(bool Active) {
}







