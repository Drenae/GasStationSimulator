#include "CommunicationDevice.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

ACommunicationDevice::ACommunicationDevice(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponent>(TEXT("MainSkeletalMesh"))) {
    this->MainSkeletalMesh = (USkeletalMeshComponent*)RootComponent;
}


