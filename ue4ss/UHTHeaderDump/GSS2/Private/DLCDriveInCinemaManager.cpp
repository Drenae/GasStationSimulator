#include "DLCDriveInCinemaManager.h"

ADLCDriveInCinemaManager::ADLCDriveInCinemaManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RenownPoints = 0;
    this->CorrectTicketsCombo = 0;
    this->bDontShowScheduleWarning = false;
    this->bDontShowCustomMoviePopup = false;
    this->bDontShowCancelMoviePopup = false;
    this->bCustomMovieSetup = false;
    this->bUseFilePickerPlugin = true;
    this->RenownMultiplier = 1.00f;
    this->CinemaVehiclesNum = 0;
    this->CurrentRenownLevel = 0;
    this->CinemaName = FText::FromString(TEXT("GSS Drive-In Cinema"));
    this->RenownDataTable = NULL;
    this->TicketSettings = NULL;
    this->PopcornSettings = NULL;
    this->CustomerSettings = NULL;
    this->EventSettings = NULL;
    this->MoviesDataTable = NULL;
    this->CustomMovieMediaSource = NULL;
    this->bTimelineEnabled = false;
    this->CinemaProjector = NULL;
    this->PopcornMachine = NULL;
    this->TicketBarrier = NULL;
    this->CinemaScreen = NULL;
    this->DennisPuppet = NULL;
    this->MinRenownMultiplier = 0.25f;
    this->MaxRenownMultiplier = 2.00f;
    this->TurnLightsOffTime = 5.00f;
    this->MainGameQuestToTriggerQuestline = NULL;
    this->CinemaTrashMaterialCollection = NULL;
    this->bQuestsLoaded = false;
    this->bGameInstanceLoaded = false;
    this->bIsCinemaMuted = false;
    this->CurrentPopcornCombo = 0;
    this->CurrentPopcornHighScore = 0;
}

bool ADLCDriveInCinemaManager::TrySpawnTrash(FTransform SpawnTransform, bool bDecal) {
    return false;
}

void ADLCDriveInCinemaManager::TrySpawnCinemaCustomer() {
}

bool ADLCDriveInCinemaManager::TrySetPopcornHighScore(int32 NewScore) {
    return false;
}

bool ADLCDriveInCinemaManager::TryGetNextQueuedMovie(FQueuedMovieToplay& OutQueuedMovie) {
    return false;
}

bool ADLCDriveInCinemaManager::TryGetCurrentMovieParameters(FMovieParameters& OutParameters) {
    return false;
}

bool ADLCDriveInCinemaManager::TryGetCurrentlyPlayingQueuedMovie(FQueuedMovieToplay& OutQueuedMovie) {
    return false;
}

bool ADLCDriveInCinemaManager::TryDropTrashByCustomer(AAICharacterBase* Customer, bool bDecal) {
    return false;
}



void ADLCDriveInCinemaManager::SetPopcornCombo(int32 NewCombo) {
}

float ADLCDriveInCinemaManager::SetNewRenownMultiplier(float NewValue) {
    return 0.0f;
}

void ADLCDriveInCinemaManager::SetCinemaMuted(bool IsMuted) {
}

void ADLCDriveInCinemaManager::RemoveExistingEvents(bool bTrendingEvent, bool bRushHourEvent) {
}

void ADLCDriveInCinemaManager::OnWrongTicketValidated() {
}

void ADLCDriveInCinemaManager::OnQuestlinesLoaded_SpecialCase() {
}

void ADLCDriveInCinemaManager::OnQuestlinesLoaded() {
}

void ADLCDriveInCinemaManager::OnPopcornRefilled(float RefillPrice) {
}

void ADLCDriveInCinemaManager::OnGameLoaded(bool bGameLoaded) {
}

void ADLCDriveInCinemaManager::OnCustomerRejected(bool bCorrectly) {
}

void ADLCDriveInCinemaManager::OnCustomerArrivedAtCinema() {
}

void ADLCDriveInCinemaManager::OnCorrectTicketValidated() {
}

bool ADLCDriveInCinemaManager::IsTrendingEventActive() {
    return false;
}

bool ADLCDriveInCinemaManager::IsRushHourEventActive() {
    return false;
}

bool ADLCDriveInCinemaManager::IsNextLevelAvaible() {
    return false;
}

bool ADLCDriveInCinemaManager::IsAnyCustomerWatchingInCinema() {
    return false;
}

void ADLCDriveInCinemaManager::HandleQuestlineActivation(bool bQuestlineFinished) {
}

TArray<FWatchedMovieResult> ADLCDriveInCinemaManager::GetWatchedResults() {
    return TArray<FWatchedMovieResult>();
}

UTrendingEvent* ADLCDriveInCinemaManager::GetTrendingEventRef() {
    return NULL;
}

float ADLCDriveInCinemaManager::GetTicketMoneyBonus() {
    return 0.0f;
}

URushHourEvent* ADLCDriveInCinemaManager::GetRushHourEventRef() {
    return NULL;
}

int32 ADLCDriveInCinemaManager::GetRequiredRenownForNextLevel() {
    return 0;
}

int32 ADLCDriveInCinemaManager::GetRenownLevel() const {
    return 0;
}

float ADLCDriveInCinemaManager::GetRenownBonus() {
    return 0.0f;
}

float ADLCDriveInCinemaManager::GetPopcornMoneyBonus() {
    return 0.0f;
}

int32 ADLCDriveInCinemaManager::GetPopcornHighScore() const {
    return 0;
}

int32 ADLCDriveInCinemaManager::GetPopcornCombo() const {
    return 0;
}


bool ADLCDriveInCinemaManager::GetIsCinemaMuted() const {
    return false;
}

int32 ADLCDriveInCinemaManager::GetCustomerDriveOffOrder(AAICharacterBase* Customer) {
    return 0;
}

FTicketData ADLCDriveInCinemaManager::GenerateTicketData(bool bCustomer) {
    return FTicketData{};
}

void ADLCDriveInCinemaManager::CreateNotification(bool bShow) {
}




void ADLCDriveInCinemaManager::ArrangeCustomerDriveOffOrder() {
}

void ADLCDriveInCinemaManager::AddToWatchedMovies(FQueuedMovieToplay Movie) {
}

int32 ADLCDriveInCinemaManager::AddRenownPoints(int32 PointsToAdd, EEconomyDetailedYieldType DetailedYieldType) {
    return 0;
}

float ADLCDriveInCinemaManager::AddCinemaMoney(EEconomyDetailedYieldType DetailedYieldType, float Quantity, float money, bool bTrackEconomy, EMoneyType MoneyType, EEconomyGeneralYieldType ForcedYieldType) {
    return 0.0f;
}


