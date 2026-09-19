#include "DecalSprayingTool.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputComponent -FallbackName=InputComponent

ADecalSprayingTool::ADecalSprayingTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputComponent = CreateDefaultSubobject<UInputComponent>(TEXT("Input Component"));
    this->DecalSprayingState = EDecalSprayingState::PLACING;
    this->DMIDecalTool = NULL;
    this->PreviewDecal = NULL;
    this->SpawnedDecal = NULL;
    this->TargetedDecal = NULL;
    this->GotLastDecal = NULL;
    this->TraceDistance = 500.00f;
    this->DecalsHolderWidget = NULL;
    this->DecalAmountLimit = 200;
}

void ADecalSprayingTool::UptadePreviewDecalType(TSoftClassPtr<ADecalToPaint> PickedDecal, const FString& NewDecalText, ECustomizationPaintType PaintType) {
}

EDecalSprayingState ADecalSprayingTool::SetNewDecalSprayingState(EDecalSprayingState NewState) {
    return EDecalSprayingState::PLACING;
}

void ADecalSprayingTool::ResetCarPainting() {
}











