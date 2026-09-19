#include "TradingAirplane.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "InventoryComponent.h"

ATradingAirplane::ATradingAirplane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StablilzerLeftMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StablilzerLeftMeshComponent"));
    this->StablilzerRightMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StablilzerRightMeshComponent"));
    this->CountryFlagMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CountryFlagMesh"));
    this->Pilot = NULL;
    this->CountryOfOrigin = ECountryOfOrigin::NONE;
    this->Runway = ERunway::MiddleStrip;
    this->CurrentStatus = ECurrentStatus::InQueue;
    this->StaticMeshComponent = NULL;
    this->BoughtItems = CreateDefaultSubobject<UInventoryComponent>(TEXT("BoughtItemsInventory"));
    this->bCanInteract = false;
    this->TimeToTakeOff = 180;
    this->TotalPickedPilotItemsAmount = 0;
    this->bIsPendingTrade = false;
    this->TotalPilotTradeValue = 0.00f;
    this->TotalPlayerTradeValue = 0.00f;
    this->ImpatienceMeter = 0.00f;
    this->LastPlayerTradeValue = 0.00f;
    this->LastPilotTradeValue = 0.00f;
    this->bIsSameOffer = false;
    this->bIsCogencyUsed = false;
    this->bIsExpressionOfGratitudeUsed = false;
    this->AffectedByTradingBoost = ETradingBoosts::NONE;
    this->TradeTryTut = 0;
    this->CountryFlagMesh->SetupAttachment(RootComponent);
    this->StablilzerLeftMeshComp->SetupAttachment(RootComponent);
    this->StablilzerRightMeshComp->SetupAttachment(RootComponent);
}

void ATradingAirplane::UpdateTimeToTakeOff(FTimeStruct TimeStruct) {
}

void ATradingAirplane::UpdateGeneratedItemsForSell(FGeneratedLootInfo& Item, bool bIsByTradeAffected) {
}

void ATradingAirplane::UpdateGeneratedItemsForBuy(FGeneratedLootInfo& Item, bool bIsByTradeAffected) {
}


void ATradingAirplane::TakeOff() {
}


void ATradingAirplane::StartPilotMounting() {
}

void ATradingAirplane::StartCountingDown() {
}

void ATradingAirplane::SpawnPilot(ENPCGender PilotGender) {
}

void ATradingAirplane::SetTradeTryTut(int32 NewValue) {
}

void ATradingAirplane::SetTotalPlayerTradeValue(float NewValue) {
}

void ATradingAirplane::SetTotalPilotTradeValue(float NewValue) {
}

void ATradingAirplane::SetTimeToTakeOff(int32 TimeToTakeOffToSet) {
}

void ATradingAirplane::SetSkillsUsed(TArray<ETradingSkill> NewValue) {
}

void ATradingAirplane::SetRunway(ERunway RunwayToSet) {
}

void ATradingAirplane::SetPlaneArrived(bool bLoadedFromSave) {
}

void ATradingAirplane::SetPilot(APilotCharacter* NewPilot) {
}

void ATradingAirplane::SetPickedPlayerItems(TArray<FGeneratedItem> PickedPlayerItemsToSet) {
}

void ATradingAirplane::SetPickedPilotItems(TArray<FGeneratedItem> PickedPilotItemsToSet) {
}

void ATradingAirplane::SetMeshesCollisions(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse) {
}

void ATradingAirplane::SetLastPlayerTradeValue(float NewValue) {
}

void ATradingAirplane::SetLastPilotTradeValue(float NewValue) {
}

void ATradingAirplane::SetIsSameOffer(bool NewValue) {
}

void ATradingAirplane::SetIsAffectedByTradingBoost(ETradingBoosts NewValue) {
}

void ATradingAirplane::SetImpatienceMeter(float NewValue) {
}

void ATradingAirplane::SetGeneratedItemsForSell(TArray<FGeneratedLootInfo> GeneratedItemsForSellToSet) {
}

void ATradingAirplane::SetGeneratedItemsForBuy(TArray<FGeneratedLootInfo> GeneratedItemsForBuyToSet) {
}

void ATradingAirplane::SetDeniedTradeOffers(TArray<FDeniedTradeOffer> NewValue) {
}

void ATradingAirplane::SetCurrentStatus(ECurrentStatus CurrentStatusToSet) {
}

void ATradingAirplane::SetCountryOfOrigin(ECountryOfOrigin CountryOfOriginToSet) {
}

void ATradingAirplane::SetCountryFlagMaterial(TSoftObjectPtr<UMaterialInstance> FlagMaterial) {
}

void ATradingAirplane::SetCanInteract(bool CanInteractToSet) {
}

void ATradingAirplane::SetCallSign(const FString& NewCallSign) {
}

void ATradingAirplane::SetBoughtItems(UInventoryComponent* BoughtItemsToSet) {
}

void ATradingAirplane::ResetAirplane() {
}

FGeneratedLootInfo ATradingAirplane::RandomGraditudeItem() {
    return FGeneratedLootInfo{};
}


void ATradingAirplane::PilotUnMounted() {
}

void ATradingAirplane::OnAirportSandstormStarted() {
}

void ATradingAirplane::LoadPilot(TSoftClassPtr<APilotCharacter> RandomCharacter, TSoftObjectPtr<USkeletalMesh> RandomHair, TSoftObjectPtr<USkeletalMesh> RandomBeard, ENPCGender PilotGender, EMontagePilotState NewValue) {
}

int32 ATradingAirplane::GetTradeTryTut() {
    return 0;
}

float ATradingAirplane::GetTotalPlayerTradeValue() {
    return 0.0f;
}

float ATradingAirplane::GetTotalPilotTradeValue() {
    return 0.0f;
}

int32 ATradingAirplane::GetTimeToTakeOff() {
    return 0;
}

TArray<ETradingSkill> ATradingAirplane::GetSkillsUsed() {
    return TArray<ETradingSkill>();
}

ERunway ATradingAirplane::GetRunway() {
    return ERunway::MiddleStrip;
}

APilotCharacter* ATradingAirplane::GetPilot() {
    return NULL;
}

TArray<FGeneratedItem> ATradingAirplane::GetPickedPlayerItems() {
    return TArray<FGeneratedItem>();
}

TArray<FGeneratedItem> ATradingAirplane::GetPickedPilotItems() {
    return TArray<FGeneratedItem>();
}

float ATradingAirplane::GetLastPlayerTradeValue() {
    return 0.0f;
}

float ATradingAirplane::GetLastPilotTradeValue() {
    return 0.0f;
}

bool ATradingAirplane::GetIsSameOffer() {
    return false;
}

ETradingBoosts ATradingAirplane::GetIsAffectedByTradingBoost() {
    return ETradingBoosts::HOT_STUFF;
}

float ATradingAirplane::GetImpatienceMeter() {
    return 0.0f;
}

TArray<FGeneratedLootInfo> ATradingAirplane::GetGeneratedItemsForSell() {
    return TArray<FGeneratedLootInfo>();
}

TArray<FGeneratedLootInfo> ATradingAirplane::GetGeneratedItemsForBuy() {
    return TArray<FGeneratedLootInfo>();
}

TArray<FDeniedTradeOffer> ATradingAirplane::GetDeniedTradeOffers() {
    return TArray<FDeniedTradeOffer>();
}

ECurrentStatus ATradingAirplane::GetCurrentStatus() {
    return ECurrentStatus::InQueue;
}

ECountryOfOrigin ATradingAirplane::GetCountryOfOrigin() {
    return ECountryOfOrigin::NONE;
}

UStaticMeshComponent* ATradingAirplane::GetCountryFlagMesh() {
    return NULL;
}

bool ATradingAirplane::GetCanInteract() {
    return false;
}

FString ATradingAirplane::GetCallSign() {
    return TEXT("");
}

UInventoryComponent* ATradingAirplane::GetBoughtItems() {
    return NULL;
}

void ATradingAirplane::CheckIfLoadedCountryFlagMaterial(TSoftObjectPtr<UMaterialInstance> FlagMaterial) {
}

void ATradingAirplane::AddUsedSkill(ETradingSkill NewValue) {
}


