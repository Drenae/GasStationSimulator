#include "CinemaProjector.h"

ACinemaProjector::ACinemaProjector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectorState = eCinemaProjectorState::READY;
    this->ProjectorPreset = 0;
    this->ActualMovieTime = 0.00f;
    this->MediaPlayer = NULL;
    this->bMovieLoopActive = false;
}

void ACinemaProjector::UpdateMovieTime() {
}



void ACinemaProjector::SetProjectorState(eCinemaProjectorState NewProjectorState) {
}

void ACinemaProjector::SetMoviesToPlay(TArray<FQueuedMovieToplay> InMovies) {
}

void ACinemaProjector::SetMovieLoopActive(bool InMovieLoopActive) {
}

void ACinemaProjector::RemoveMovieFromQue() {
}

void ACinemaProjector::OnTimeUpdated(FTimeStruct Time) {
}

void ACinemaProjector::OnStartMovieActions(UMediaSource* MediaSource, float Length) {
}

void ACinemaProjector::OnGameplaySettingsApplied(bool Success) {
}


bool ACinemaProjector::IsReadyToRecieveCustomers() {
    return false;
}

void ACinemaProjector::HandleStreamerMode() {
}

float ACinemaProjector::GetTimeTillNextMovie() {
    return 0.0f;
}

TArray<FQueuedMovieToplay> ACinemaProjector::GetMoviesToPlayInOrder() {
    return TArray<FQueuedMovieToplay>();
}

TArray<FQueuedMovieToplay> ACinemaProjector::GetMoviesToPlay() {
    return TArray<FQueuedMovieToplay>();
}

bool ACinemaProjector::GetMovieLoopActive() {
    return false;
}

bool ACinemaProjector::GetIsHourOccupied(int32 Hour) {
    return false;
}

bool ACinemaProjector::GetIsAnyMovieToPlay() {
    return false;
}

void ACinemaProjector::EndMovie() {
}

void ACinemaProjector::CancelMovie(FQueuedMovieToplay MovieToCancel) {
}

bool ACinemaProjector::AddMovieTOPlay(FQueuedMovieToplay MovieToPlay) {
    return false;
}


