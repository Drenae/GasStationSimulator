#include "GSSSaveGame.h"

UGSSSaveGame::UGSSSaveGame() {
    this->SaveGameVersion = -1;
    this->LanguageFixApplied = 0;
    this->LastDesertCarTime = 0.00f;
    this->BestDesertCarTime = 10000.00f;
    this->FuelStrike = 0;
    this->FuelLast = 0.00f;
    this->NumberOfFuelRecords = 0.00f;
    this->MinFuelRecordVal = 0.10f;
    this->BoughtDecorationAmount = 0;
    this->bCanGenerateCashRegisterTask = false;
    this->SavedQuestLinesNum = 0;
    this->CurrentWaterPressure = -1.00f;
    this->PressureSinceTrash = -1.00f;
    this->CarWashFirstCustomerServed = false;
}

FSavedSwitch UGSSSaveGame::FindSavedSwitchInfo(const FString& Path) {
    return FSavedSwitch{};
}

FSavedDoor UGSSSaveGame::FindSavedDoorInfo(const FString& Path) {
    return FSavedDoor{};
}

FSavedCarWashStation UGSSSaveGame::FindSavedCarWashStationInfo(const FString& Path) {
    return FSavedCarWashStation{};
}


