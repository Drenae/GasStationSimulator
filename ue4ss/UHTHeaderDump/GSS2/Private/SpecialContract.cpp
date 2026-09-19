#include "SpecialContract.h"
#include "EContractType.h"

USpecialContract::USpecialContract() {
    this->ContractType = EContractType::SPECIAL_CONTRACT;
    this->CustomizationContractType = ECustomizationContractType::REGULAR;
    this->RequiredCarWreckType = EJunkyardCarWreckType::CAR1;
    this->RequiredCarWreckTier = EJunkyardPartRarity::FAKE;
    this->RequiredDecalsNumber = 0;
    this->RequiredDecalsCategory = EDecalUnlockType::All;
    this->MoneyRewardBonus = 0.00f;
    this->PickedCarWreck = NULL;
}

void USpecialContract::SetRequiredPaintData(FSavedCarPaint InRequiredPaintData) {
}

void USpecialContract::SetRequiredDecalsNumber(int32 InRequiredDecalsNumber) {
}

void USpecialContract::SetRequiredDecalsCategory(EDecalUnlockType InRequiredDecalsCategory) {
}

void USpecialContract::SetRequiredCarWreckType(EJunkyardCarWreckType InRequiredCarWreckType) {
}

void USpecialContract::SetRequiredCarWreckTier(EJunkyardPartRarity InRequiredCarWreckTier) {
}

void USpecialContract::SetRequiredCarWreckStats(FCarPartData InRequiredCarWreckStats) {
}

void USpecialContract::SetRequiredCarWreck(TSoftClassPtr<AJunkyardCarWreck> InRequiredCarWreck) {
}

void USpecialContract::SetRequiredCarParts(TMap<EJunkyardCarPartType, FSavedCarPart> InRequiredCarParts) {
}

void USpecialContract::SetMoneyRewardBonus(float InMoneyRewardBonus) {
}

void USpecialContract::SetIsTopSpeedStatRequired(bool bRequired) {
}

void USpecialContract::SetIsStrengthStatRequired(bool bRequired) {
}

void USpecialContract::SetIsPaintTypeRequired(bool bRequired) {
}

void USpecialContract::SetIsPaintMaskRequired(bool bRequired) {
}

void USpecialContract::SetIsPaintColorRequired(bool bRequired) {
}

void USpecialContract::SetIsHandlingStatRequired(bool bRequired) {
}

void USpecialContract::SetIsDecalsRequired(bool bRequired) {
}

void USpecialContract::SetIsCarWreckTierRequired(bool bRequired) {
}

void USpecialContract::SetIsCarWreckClassRequired(bool bRequired) {
}

void USpecialContract::SetIsCarPartsTierRequired(bool bRequired) {
}

void USpecialContract::SetIsCarPartsClassRequired(bool bRequired) {
}

void USpecialContract::SetIsAccelerationStatRequired(bool bRequired) {
}

void USpecialContract::SetDifferentColorCarParts(TArray<EJunkyardCarPartType> InDifferentColorCarParts) {
}

void USpecialContract::SetDecalsOfRequiredCategory(TArray<TSoftClassPtr<ADecalToPaint>> InDecalsOfRequiredCategory) {
}

void USpecialContract::SetCustomizationContractType(ECustomizationContractType InCustomizationContractType) {
}

void USpecialContract::SetContractRequirements(TArray<EContractRequirement> InContractRequirements) {
}

void USpecialContract::SetContractCode(FName InContractCode) {
}

void USpecialContract::RandomTier(const TArray<EJunkyardPartRarity> Tiers, EJunkyardPartRarity& OutPartRarity) {
}

void USpecialContract::RandomPerformanceStats(const TArray<ECarPartStat>& RequiredStats, const FFloatRange GearsNumber, const float GearScoreFractionValue) {
}

void USpecialContract::RandomPaintData(const bool bInRequiresPaintType, const TArray<ECustomizationPaintType> PossiblePaintTypes, const bool bInRequiresColor, const TArray<FName> PossibleColors, const bool bInRequiresPaintFinish, const TArray<EFinishMaskType> PossiblePaintMasks) {
}

float USpecialContract::RandomGearsNumber(const FFloatRange GearsNumberRange, const float GearsFraction) {
    return 0.0f;
}

void USpecialContract::RandomDecals(const int32 DecalsNumber, const TArray<FName>& PossibleDecals) {
}

void USpecialContract::RandomContractCode(FName StateCode) {
}

void USpecialContract::RandomCarParts(const bool bDrawTiers, const TArray<EJunkyardPartRarity> Tiers, const FFloatRange GearsNumberRange, const float GearsFraction) {
}

void USpecialContract::RandomCarPart(const bool bDrawTiers, const TArray<EJunkyardPartRarity> Tiers, const EJunkyardCarPartType CarPartType, FSavedCarPart& CarPart) {
}

void USpecialContract::PrepareRequirements(const FCustomizationRequirementsSettings& InContractRequirements) {
}

bool USpecialContract::IsTopSpeedStatRequired() const {
    return false;
}

bool USpecialContract::IsStrengthStatRequired() const {
    return false;
}

bool USpecialContract::IsPaintTypeRequired() const {
    return false;
}

bool USpecialContract::IsPaintMaskRequired() const {
    return false;
}

bool USpecialContract::IsPaintColorRequired() const {
    return false;
}

bool USpecialContract::IsHandlingStatRequired() const {
    return false;
}

bool USpecialContract::IsDecalsRequired() const {
    return false;
}

bool USpecialContract::IsDecalOfCorrectCategory(TSoftClassPtr<ADecalToPaint> TargetDecal) {
    return false;
}

bool USpecialContract::IsCorrectWreckType(AJunkyardCarWreck* CarWreck) const {
    return false;
}

bool USpecialContract::IsCorrectWreckClass(AJunkyardCarWreck* CarWreck) const {
    return false;
}

bool USpecialContract::IsCorrectPartTopSpeed(AJunkyardCarWreck* CarWreck) const {
    return false;
}

bool USpecialContract::IsCorrectPartStrength(AJunkyardCarWreck* CarWreck) const {
    return false;
}

bool USpecialContract::IsCorrectPartRarity(UJunkyardCarPartCustomizable* CarPart) const {
    return false;
}

bool USpecialContract::IsCorrectPartHandling(AJunkyardCarWreck* CarWreck) const {
    return false;
}

bool USpecialContract::IsCorrectPartClass(UJunkyardCarPartCustomizable* CarPart) const {
    return false;
}

bool USpecialContract::IsCorrectPartAcceleration(AJunkyardCarWreck* CarWreck) const {
    return false;
}

bool USpecialContract::IsCorrectCarWreckTier(AJunkyardCarWreck* CarWreck) const {
    return false;
}

bool USpecialContract::IsCarWreckTierRequired() const {
    return false;
}

bool USpecialContract::IsCarWreckClassRequired() const {
    return false;
}

bool USpecialContract::IsCarPartsTierRequired() const {
    return false;
}

bool USpecialContract::IsCarPartsClassRequired() const {
    return false;
}

bool USpecialContract::IsAccelerationStatRequired() const {
    return false;
}

bool USpecialContract::HasRequiredPaintType(AJunkyardCarWreckCustomizable* CarWreck) {
    return false;
}

bool USpecialContract::HasRequiredPaintMask(AJunkyardCarWreckCustomizable* CarWreck) {
    return false;
}

bool USpecialContract::HasRequiredPaintColor(AJunkyardCarWreckCustomizable* CarWreck) {
    return false;
}

bool USpecialContract::HasRequiredDecals(AJunkyardCarWreckCustomizable* CarWreck, int32& MatchingDecalsNumber) {
    return false;
}

bool USpecialContract::HasRequiredDecal(TSoftClassPtr<ADecalToPaint> RequiredDecal, AJunkyardCarWreckCustomizable* CarWreck) {
    return false;
}

FSavedCarPaint USpecialContract::GetRequiredPaintData() {
    return FSavedCarPaint{};
}

int32 USpecialContract::GetRequiredDecalsNumber() {
    return 0;
}

EDecalUnlockType USpecialContract::GetRequiredDecalsCategory() {
    return EDecalUnlockType::All;
}

EJunkyardCarWreckType USpecialContract::GetRequiredCarWreckType() {
    return EJunkyardCarWreckType::CAR1;
}

EJunkyardPartRarity USpecialContract::GetRequiredCarWreckTier() {
    return EJunkyardPartRarity::FAKE;
}

FCarPartData USpecialContract::GetRequiredCarWreckStats() {
    return FCarPartData{};
}

TSoftClassPtr<AJunkyardCarWreck> USpecialContract::GetRequiredCarWreck() {
    return NULL;
}

TMap<EJunkyardCarPartType, FSavedCarPart> USpecialContract::GetRequiredCarParts() {
    return TMap<EJunkyardCarPartType, FSavedCarPart>();
}

float USpecialContract::GetMoneyRewardBonus() {
    return 0.0f;
}

float USpecialContract::GetFinalCarPrice(AJunkyardCarWreck* CarWreck) {
    return 0.0f;
}

TArray<EJunkyardCarPartType> USpecialContract::GetDifferentColorCarParts() {
    return TArray<EJunkyardCarPartType>();
}

TArray<TSoftClassPtr<ADecalToPaint>> USpecialContract::GetDecalsOfRequiredCategory() {
    return TArray<TSoftClassPtr<ADecalToPaint>>();
}

ECustomizationContractType USpecialContract::GetCustomizationContractType() {
    return ECustomizationContractType::REGULAR;
}

TArray<EContractRequirement> USpecialContract::GetContractRequirements() const {
    return TArray<EContractRequirement>();
}

float USpecialContract::GetContractCompletionPercentage(AJunkyardCarWreck* CarWreck) const {
    return 0.0f;
}

FName USpecialContract::GetContractCode() {
    return NAME_None;
}

bool USpecialContract::CompleteContract(AJunkyardCarWreck* CarWreck) {
    return false;
}

bool USpecialContract::CarPartMatchRequirement(UJunkyardCarPartCustomizable* CarPart) {
    return false;
}

bool USpecialContract::CanBeCompleted(AJunkyardCarWreck* CarWreck) {
    return false;
}


