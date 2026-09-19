#include "DA_CinemaCustomers.h"

UDA_CinemaCustomers::UDA_CinemaCustomers() {
    this->MinimumTimeToSpawnCustomers = 60.00f;
    this->SpawnCustomerAttemptCooldown = 30.00f;
    this->SpawnTwoCustomersChance = 0.10f;
    this->SpawnOneCustomerChance = 0.40f;
    this->SpawnEventTwoCustomersChance = 0.20f;
    this->SpawnEventOneCustomerChance = 0.70f;
    this->RenownLostOnMovieCanceledPerCustomer = 10.00f;
    this->MaxCinemaVehiclesOnMap = 8;
    this->MinTimeBeforeLeavingCinema = 0.50f;
    this->WaitTimeBetweenCustomersLeavingCinema = 2.00f;
    this->TrashDropChance = 0.50f;
    this->SecondTrashDropChance = 0.25f;
    this->TrashDecalChance = 0.25f;
    this->TrashMultiplierModifier = 0.10f;
}


