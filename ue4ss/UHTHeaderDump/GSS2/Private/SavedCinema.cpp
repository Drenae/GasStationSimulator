#include "SavedCinema.h"

FSavedCinema::FSavedCinema() {
    this->CinemaLevel = 0;
    this->CurrentCinemaRenownPoints = 0;
    this->RenownLevel = 0;
    this->RenownMultiplier = 0.00f;
    this->CurrentProjectorState = eCinemaProjectorState::READY;
    this->CurrentProjectorPreset = 0;
    this->CurrentMovieTime = 0.00f;
    this->CurrentPopcornMachineState = ePopcornMachineState::READY;
    this->CurrentPopcornMachineCapacity = 0;
    this->CurrentPopcornProductionTime = 0.00f;
    this->PopcornCombo = 0;
    this->PopcornHighScore = 0;
    this->VacuumSplineDistance = 0.00f;
    this->bVacuumActive = false;
    this->bDontShowScheduleWarning = false;
    this->bDontShowCustomMoviePopup = false;
    this->bDontShowCancelMoviePopup = false;
    this->bMovieLoopActive = false;
    this->CorrectTicketsCombo = 0;
    this->RushHourEventSelectedHour = 0;
}

