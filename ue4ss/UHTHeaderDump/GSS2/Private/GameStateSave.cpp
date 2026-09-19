#include "GameStateSave.h"

FGameStateSave::FGameStateSave() {
    this->bGasStationEnabled = false;
    this->FuelToDelivery = 0.00f;
    this->AirportFuelToDelivery = 0.00f;
    this->FuelBoardDisplayPrice = 0.00f;
    this->JerryCanFuel = 0.00f;
    this->TrashBagCapacity = 0.00f;
    this->HappyAmount = 0;
    this->PopularityLevel = 0;
    this->Strike = 0;
    this->PreviousStrike = 0;
    this->LastDistance = 0.00f;
    this->ThrowDistanceRecord = 0.00f;
    this->FuelStrike = 0;
    this->FuelLast = 0.00f;
    this->NumberOfFuelRecords = 0.00f;
    this->MinFuelRecordVal = 0.00f;
    this->RepairGameStrike = 0;
    this->RepairGameLastResult = 0.00f;
    this->RepairGameBestResult = 0.00f;
    this->ShovelRecord = 0;
    this->CashMoney = 0.00f;
    this->FuelEarnedMoney = 0.00f;
    this->FuelSpendMoney = 0.00f;
    this->GarageMoney = 0.00f;
    this->LastDesertCarTime = 0.00f;
    this->BestDesertCarTime = 0.00f;
    this->CashStrikeCounter = 0;
    this->bVipEventsEnabled = false;
    this->CurrentLotteryState = eLotteryState::READY;
    this->CurrentLotteryPreset = 0;
    this->CurrentLotteryEarnings = 0.00f;
    this->CurrentLotteryTime = 0;
    this->CurrentNameIndex = 0;
}

