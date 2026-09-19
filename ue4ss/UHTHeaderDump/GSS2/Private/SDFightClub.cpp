#include "SDFightClub.h"
#include "EBuildingType.h"

ASDFightClub::ASDFightClub(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildingType = EBuildingType::FIGHTCLUB;
    this->BlueVehicle = NULL;
    this->BlueFighterRef = NULL;
    this->RedVehicle = NULL;
    this->RedFighterRef = NULL;
    this->Phase = ESDFightClubPhase::None;
    this->SelectedFighter = ESDFightClubZone::None;
    this->bRedFighterBonusObtained = false;
    this->bBlueFighterBonusObtained = false;
    this->bFightEnded = false;
}

void ASDFightClub::StartTrainingPhase() {
}

void ASDFightClub::StartTrainingDurationTimer() {
}

void ASDFightClub::StartFightPhase() {
}

void ASDFightClub::SetRedVehicle(AGSSWheeledVehicle* InVehicle) {
}

void ASDFightClub::SetRedFighter(AAICharacterBase* InCharacter) {
}

void ASDFightClub::SetFighterWaitingStatus(const FSDFighterStats& InFighter, int32 Status) {
}

void ASDFightClub::SetFighterBonusDirect(ESDFightClubZone RelatedZone, const FSDFighterAttributes& Bonus, bool bForce, bool bSilent) {
}

void ASDFightClub::SetBonusForSelectedFighter(const FSDFighterAttributes& Bonus) {
}

void ASDFightClub::SetBlueVehicle(AGSSWheeledVehicle* InVehicle) {
}

void ASDFightClub::SetBlueFighter(AAICharacterBase* InCharacter) {
}

void ASDFightClub::SelectFighter(ESDFightClubZone InZone) {
}

void ASDFightClub::OnGangActivityStarted(USDGangActivityObjBase* ActivityObj) {
}

void ASDFightClub::OnGangActivityEnd(USDGangActivityObjBase* ActivityObj, ESDGangActivityResult Result) {
}

void ASDFightClub::OnActorDestroyed(AActor* DestroyedActor) {
}

void ASDFightClub::OnActivityPenaltyPaid(ESDGangActivityType ActivityType) {
}

void ASDFightClub::OnActivityPenaltyIssued(ESDGangActivityType ActivityType) {
}

void ASDFightClub::OnActivityEnableStateChanged(ESDGangActivityType ActivityType, bool bEnabled) {
}

bool ASDFightClub::IsFighterAvailableID(const FName& ID) const {
    return false;
}

bool ASDFightClub::IsFighterAvailable(const FSDFighterStats& InFighter) const {
    return false;
}

ESDFightClubZone ASDFightClub::GetZoneByCharacter(AAICharacterBase* InCharacter) const {
    return ESDFightClubZone::None;
}

TArray<FSDFighterStats> ASDFightClub::GetWaitingFighters() const {
    return TArray<FSDFighterStats>();
}

ESDFightClubZone ASDFightClub::GetSelectedFighterZone() const {
    return ESDFightClubZone::None;
}

AAICharacterBase* ASDFightClub::GetSelectedFighter() const {
    return NULL;
}

TArray<AInteractableBuilding*> ASDFightClub::GetRedZoneMachines() const {
    return TArray<AInteractableBuilding*>();
}

AGSSWheeledVehicle* ASDFightClub::GetRedVehicle() const {
    return NULL;
}

AAICharacterBase* ASDFightClub::GetRedFighterRef() const {
    return NULL;
}

FSDFighterStats ASDFightClub::GetRedFighter() const {
    return FSDFighterStats{};
}

ESDFightClubPhase ASDFightClub::GetPhase() const {
    return ESDFightClubPhase::None;
}

int32 ASDFightClub::GetFighterWaitingStatus(const FSDFighterStats& InFighter) const {
    return 0;
}

FSDFighterStats ASDFightClub::GetFighter(ESDFightClubZone InFightClubZone) const {
    return FSDFighterStats{};
}

TArray<AInteractableBuilding*> ASDFightClub::GetBlueZoneMachines() const {
    return TArray<AInteractableBuilding*>();
}

AGSSWheeledVehicle* ASDFightClub::GetBlueVehicle() const {
    return NULL;
}

AAICharacterBase* ASDFightClub::GetBlueFighterRef() const {
    return NULL;
}

FSDFighterStats ASDFightClub::GetBlueFighter() const {
    return FSDFighterStats{};
}

TArray<FSDFighterStats> ASDFightClub::GetAvailableFighters() const {
    return TArray<FSDFighterStats>();
}

TArray<FSDFighterStats> ASDFightClub::GetAllFighters() const {
    return TArray<FSDFighterStats>();
}

void ASDFightClub::EndTrainingPhase() {
}

void ASDFightClub::EndFightPhase() {
}

bool ASDFightClub::CanSetFighterBonus(ESDFightClubZone InZone) const {
    return false;
}

bool ASDFightClub::CanOrganizeFight() const {
    return false;
}


