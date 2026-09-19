#include "GSSNPAICharacterBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AGSSNPAICharacterBase::AGSSNPAICharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Head_SMC = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head_SMC"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->Sound = CreateDefaultSubobject<UAudioComponent>(TEXT("Sound"));
    this->Gender = ENPCGender::MALE;
    this->LanguageAccent = ENPCAccent::AMERICAN;
    this->bDialogNeverLookAt = false;
    this->Head_SMC->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Sound->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

ENPCGender AGSSNPAICharacterBase::GetGender() {
    return ENPCGender::MALE;
}

ENPCAccent AGSSNPAICharacterBase::GetAccent() {
    return ENPCAccent::AMERICAN;
}


