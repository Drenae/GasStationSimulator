#include "JunkyardCarMaskBox.h"

UJunkyardCarMaskBox::UJunkyardCarMaskBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOpen = false;
    this->MaskOpenDuration = 1.00f;
    this->MaskMeshWithoutTurbo = NULL;
    this->MaskMeshWithTurbo = NULL;
}

void UJunkyardCarMaskBox::OnOwningWreckModified() {
}



