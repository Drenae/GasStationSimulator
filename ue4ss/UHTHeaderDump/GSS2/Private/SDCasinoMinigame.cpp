#include "SDCasinoMinigame.h"

ASDCasinoMinigame::ASDCasinoMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ButtonDigitsNumber = 4;
    this->AvailableDigitsRowNumber = 64;
}

void ASDCasinoMinigame::RemoveCaughtDigit(int32 CaughtAvailableDigitIndex) {
}

void ASDCasinoMinigame::RegenerateDigitRows() {
}

bool ASDCasinoMinigame::IsCriticalFailSymbol(int32 AvailableDigitIndex) const {
    return false;
}

bool ASDCasinoMinigame::IsCorrectDigit(int32 KeyDigitIndex, int32 AvailableDigitIndex) const {
    return false;
}

FString ASDCasinoMinigame::GetButtonDigits() const {
    return TEXT("");
}

FString ASDCasinoMinigame::GetAvailableDigitsRow() const {
    return TEXT("");
}


