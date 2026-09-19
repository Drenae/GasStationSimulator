#include "JunkyardPlatformPanel.h"
#include "Templates/SubclassOf.h"

UJunkyardPlatformPanel::UJunkyardPlatformPanel() {
    this->SelectedDecal = NULL;
}


void UJunkyardPlatformPanel::SelectDecal(TSubclassOf<ADecalToPaint> DecalClass, AJunkyardCarWreckCustomizable* TargetWreck) {
}

void UJunkyardPlatformPanel::ChangeDecalColor(FLinearColor NewColor, int32 Index) {
}


