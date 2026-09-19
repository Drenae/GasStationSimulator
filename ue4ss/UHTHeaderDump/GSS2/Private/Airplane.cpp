#include "Airplane.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "InventoryComponent.h"

AAirplane::AAirplane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->CountryOfOrigin = ECountryOfOrigin::NONE;
    this->Runway = ERunway::MiddleStrip;
    this->CurrentStatus = ECurrentStatus::InQueue;
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->BoughtItems = CreateDefaultSubobject<UInventoryComponent>(TEXT("BoughtItemsInventory"));
    this->bCanInteract = false;
    this->TimeToTakeOff = 5;
    this->bIsPendingTrade = false;
    this->TotalPilotTradeValue = 0.00f;
    this->TotalPlayerTradeValue = 0.00f;
    this->ImpatienceMeter = 0.00f;
    this->LastPlayerTradeValue = 0.00f;
    this->bIsCogencyUsed = false;
    this->bIsExpressionOfGratitudeUsed = false;
    this->AffectedByTradingBoost = ETradingBoosts::NONE;
}

void AAirplane::UpdateTimeToTakeOff(FTimeStruct TimeStruct) {
}

void AAirplane::UpdateGeneratedItemsForSell(FGeneratedLootInfo& Item, bool bIsByTradeAffected) {
}

void AAirplane::UpdateGeneratedItemsForBuy(FGeneratedLootInfo& Item, bool bIsByTradeAffected) {
}

void AAirplane::TakeOff() {
}

void AAirplane::StartCountingDown() {
}

void AAirplane::SetTotalPlayerTradeValue(float NewValue) {
}

void AAirplane::SetTotalPilotTradeValue(float NewValue) {
}

void AAirplane::SetTimeToTakeOff(int32 TimeToTakeOffToSet) {
}

void AAirplane::SetSkillsUsed(TArray<ETradingSkill> NewValue) {
}

void AAirplane::SetRunway(ERunway RunwayToSet) {
}

void AAirplane::SetPickedPlayerItems(TArray<FGeneratedItem> PickedPlayerItemsToSet) {
}

void AAirplane::SetPickedPilotItems(TArray<FGeneratedItem> PickedPilotItemsToSet) {
}

void AAirplane::SetLastPlayerTradeValue(float NewValue) {
}

void AAirplane::SetIsAffectedByTradingBoost(ETradingBoosts NewValue) {
}

void AAirplane::SetImpatienceMeter(float NewValue) {
}

void AAirplane::SetGeneratedItemsForSell(TArray<FGeneratedLootInfo> GeneratedItemsForSellToSet) {
}

void AAirplane::SetGeneratedItemsForBuy(TArray<FGeneratedLootInfo> GeneratedItemsForBuyToSet) {
}

void AAirplane::SetCurrentStatus(ECurrentStatus CurrentStatusToSet) {
}

void AAirplane::SetCountryOfOrigin(ECountryOfOrigin CountryOfOriginToSet) {
}

void AAirplane::SetCanInteract(bool CanInteractToSet) {
}

void AAirplane::SetCallSign(const FString& NewCallSign) {
}

void AAirplane::SetBoughtItems(UInventoryComponent* BoughtItemsToSet) {
}

void AAirplane::ResetAirplane() {
}

FGeneratedLootInfo AAirplane::RandomGraditudeItem() {
    return FGeneratedLootInfo{};
}

void AAirplane::OnAirportSandstormStarted() {
}

float AAirplane::GetTotalPlayerTradeValue() {
    return 0.0f;
}

float AAirplane::GetTotalPilotTradeValue() {
    return 0.0f;
}

int32 AAirplane::GetTimeToTakeOff() {
    return 0;
}

TArray<ETradingSkill> AAirplane::GetSkillsUsed() {
    return TArray<ETradingSkill>();
}

ERunway AAirplane::GetRunway() {
    return ERunway::MiddleStrip;
}

TArray<FGeneratedItem> AAirplane::GetPickedPlayerItems() {
    return TArray<FGeneratedItem>();
}

TArray<FGeneratedItem> AAirplane::GetPickedPilotItems() {
    return TArray<FGeneratedItem>();
}

float AAirplane::GetLastPlayerTradeValue() {
    return 0.0f;
}

ETradingBoosts AAirplane::GetIsAffectedByTradingBoost() {
    return ETradingBoosts::HOT_STUFF;
}

float AAirplane::GetImpatienceMeter() {
    return 0.0f;
}

TArray<FGeneratedLootInfo> AAirplane::GetGeneratedItemsForSell() {
    return TArray<FGeneratedLootInfo>();
}

TArray<FGeneratedLootInfo> AAirplane::GetGeneratedItemsForBuy() {
    return TArray<FGeneratedLootInfo>();
}

ECurrentStatus AAirplane::GetCurrentStatus() {
    return ECurrentStatus::InQueue;
}

ECountryOfOrigin AAirplane::GetCountryOfOrigin() {
    return ECountryOfOrigin::NONE;
}

bool AAirplane::GetCanInteract() {
    return false;
}

FString AAirplane::GetCallSign() {
    return TEXT("");
}

UInventoryComponent* AAirplane::GetBoughtItems() {
    return NULL;
}

void AAirplane::AddUsedSkill(ETradingSkill NewValue) {
}


