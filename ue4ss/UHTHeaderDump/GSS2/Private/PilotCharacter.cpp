#include "PilotCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

APilotCharacter::APilotCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Hair_SMC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hair_SMC"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->Beard_SMC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Beard_SMC"));
    this->Beard_SMC->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Hair_SMC->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void APilotCharacter::TriggerTradingPilotDialogue(ENPCConversationType ConversationType) {
}

void APilotCharacter::TradingDialogueFinished(AGSSNPAICharacterBase* HumanBase) {
}

void APilotCharacter::SetPilotComponents(TSoftObjectPtr<USkeletalMesh> RandomHair, TSoftObjectPtr<USkeletalMesh> RandomBeard, TSoftObjectPtr<UMaterialInstance> FlagMaterial) {
}

void APilotCharacter::SetPilot(FName Country, ENPCGender GenderToSet) {
}

void APilotCharacter::SetFlag(TSoftObjectPtr<UMaterialInstance> flag) {
}

void APilotCharacter::SetCurrentPilotMontageState(EMontagePilotState NewValue) {
}

void APilotCharacter::LoadSetPilot(const FSavedTradingPilot& SavedTradingPilot) {
}

EMontagePilotState APilotCharacter::GetCurrentPilotMontageState() {
    return EMontagePilotState::Mounted;
}


