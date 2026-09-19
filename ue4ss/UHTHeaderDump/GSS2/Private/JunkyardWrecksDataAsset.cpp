#include "JunkyardWrecksDataAsset.h"

UJunkyardWrecksDataAsset::UJunkyardWrecksDataAsset() {
    this->WreckTooltipZOffset = 200.00f;
    this->PlayerRustClearingDuration = 3.00f;
    this->SeanRustClearingDuration = 8.00f;
    this->UniversalCarPartsTable = NULL;
    this->EmptyCarParts = NULL;
    this->EmptyCarPartCustomDepthStencilValue = 8;
    this->InspectedCustomDepthStencilValue = 8;
    this->InstalledCustomDepthStencilValue = 3;
    this->CustomizableWreckPartSpawnChance = 0.20f;
    this->NonCustomizableWreckPartSpawnChance = 0.25f;
    this->SpawnedPartIsRustyChance = 0.75f;
    this->CustomizableMetalMaterial = NULL;
    this->PlatformCameraRotateLength = 2.00f;
    this->ProjectCreatedRequiredPartsForEffect = 1;
    this->bProjectCreatedEffectShowOnce = true;
    this->ProjectFinishedRequiredPartsForEffect = 5;
    this->bProjectFinishedEffectShowOnce = false;
    this->PartPaintEffectDuration = 1.50f;
    this->PartAddEffectDuration = 0.50f;
    this->PartRemoveEffectDuration = 0.50f;
    this->BodyPaintEffectDuration = 3.00f;
    this->DecalAddEffectDuration = 1.50f;
    this->DecalDitherStartDuration = 0.65f;
    this->DecalDitherEndDuration = 1.00f;
    this->EmissiveEffectDuration = 2.00f;
    this->PaintingEffectRequiredAddingPartProgress = 1.00f;
    this->DecalEffectRequiredPaintingProgress = 1.00f;
    this->DecalInterpolateFunction = EFunctionType::LINEAR;
    this->AddingPartInterpolateFunction = EFunctionType::LINEAR;
    this->RemovePartInterpolateFunction = EFunctionType::LINEAR;
    this->PaintInterpolateFunction = EFunctionType::LINEAR;
    this->EmissiveInterpolateFunction = EFunctionType::LINEAR;
    this->CarPaintParticle = NULL;
    this->PartAddParticle = NULL;
    this->GhostMaterial = NULL;
    this->GearScoreFractionValue = 0.50f;
    this->MaxGearScoreValue = 3.00f;
    this->MoneyPerDecal = 100.00f;
    this->MoneyPerPartPainted = 50.00f;
    this->MaxUncleTributeValue = 0.75f;
    this->MinUncleTributeValue = 0.40f;
    this->UncleTributeReductionValue = 0.02f;
    this->PartSellPercentage = 0.25f;
    this->CarColors = NULL;
}

bool UJunkyardWrecksDataAsset::IsWreckCustomizable(EJunkyardCarWreckType WreckType) const {
    return false;
}

bool UJunkyardWrecksDataAsset::IsPerfomancePart(EJunkyardCarPartType PartType) const {
    return false;
}

bool UJunkyardWrecksDataAsset::IsPartUniversal(EJunkyardCarPartType PartType) const {
    return false;
}

bool UJunkyardWrecksDataAsset::IsPartUiOnly(EJunkyardCarPartType PartType) const {
    return false;
}

TSoftClassPtr<UJunkyardCarPartBase> UJunkyardWrecksDataAsset::GetEmptyCarPartForWreckType(EJunkyardCarPartType PartType, EJunkyardCarWreckType WreckType) {
    return NULL;
}

FText UJunkyardWrecksDataAsset::GetCarColorName(const FLinearColor& Color) {
    return FText::GetEmpty();
}

bool UJunkyardWrecksDataAsset::FindWreckDataFromClass(TSoftClassPtr<AJunkyardCarWreck> CarWreckClass, FCarWreckType& CarWreck) {
    return false;
}

bool UJunkyardWrecksDataAsset::CheckPartMatchWreckType(TSoftClassPtr<UActorComponent> PartClass, EJunkyardCarWreckType JunkyardWreckType) {
    return false;
}

bool UJunkyardWrecksDataAsset::CanDecal(EJunkyardCarPartType PartType) const {
    return false;
}


