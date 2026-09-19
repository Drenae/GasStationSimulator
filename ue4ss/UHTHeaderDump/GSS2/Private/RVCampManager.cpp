#include "RVCampManager.h"
#include "RVBookingManager.h"
#include "RVConcertManager.h"
#include "RVEmployeeManager.h"
#include "RVEventManager.h"
#include "RVResourceManager.h"
#include "RVTrustPointManager.h"

ARVCampManager::ARVCampManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainGameQuestToTriggerQuestline = NULL;
    this->BookingManager = CreateDefaultSubobject<URVBookingManager>(TEXT("BookingManager"));
    this->EventManager = CreateDefaultSubobject<URVEventManager>(TEXT("EventManager"));
    this->EmployeeManager = CreateDefaultSubobject<URVEmployeeManager>(TEXT("EmployeeManager"));
    this->ConcertManager = CreateDefaultSubobject<URVConcertManager>(TEXT("ConcertManager"));
    this->RVTrustManager = CreateDefaultSubobject<URVTrustPointManager>(TEXT("RVTrustManager"));
    this->ResourceManager = CreateDefaultSubobject<URVResourceManager>(TEXT("Resource Manager"));
    this->BookingSettings = NULL;
    this->RVEmployeesSettings = NULL;
    this->EventSettings = NULL;
    this->ConcertSettings = NULL;
    this->GuestServiceSettings = NULL;
    this->ResourceSettings = NULL;
    this->GoToGuestServiceAITask = NULL;
    this->RVErrorMessages = NULL;
    this->RVSpawner = NULL;
    this->RVCampClientsSpeedMultiplier = 1.00f;
    this->RubyCamperDoors = NULL;
    this->bIsCamper3DWidgetVisible = true;
    this->bQuestsLoaded = false;
    this->bGameInstanceLoaded = false;
}

FGuestServiceData ARVCampManager::StaticGetServicesDataTableInfo(URVGuestServiceSettings* ServiceSettings, FGameplayTag ServiceTag) {
    return FGuestServiceData{};
}

void ARVCampManager::SpawnRubyCharacter(FTransform SpawnTransform, TArray<FNPAITaskStruct> InTasksList, FLatentActionInfo LatentInfo) {
}

void ARVCampManager::SpawnOrLoadRubyCamperDoors() {
}

void ARVCampManager::SortServicesArray(TArray<FGameplayTag>& ServicesArray) {
}

void ARVCampManager::OnRVCampMapLoaded(EBuildingType BuildingType, int32 NewBuildingLevel, bool bLoadedFromSave) {
}

void ARVCampManager::OnQuestlinesLoaded() {
}

void ARVCampManager::OnGameLoaded(bool bGameLoaded) {
}

bool ARVCampManager::IsPlayerInsideRvArea() {
    return false;
}

bool ARVCampManager::IsAnyCamperParked() const {
    return false;
}

void ARVCampManager::HandleQuestlineActivation(bool bActivateFromQuest) {
}

TArray<int32> ARVCampManager::GetSortedServiceIndexesByStatus(URVCustomerData* CustomerData, ARVCampSpot* CampSpot) {
    return TArray<int32>();
}

TArray<FGameplayTag> ARVCampManager::GetSortedMusicLikesByStatus(URVCustomerData* CustomerData) {
    return TArray<FGameplayTag>();
}

ERVServiceState ARVCampManager::GetServiceState(URVCustomerData* CustomerData, int32 ServiceIndex, ARVCampSpot* CampSpot) {
    return ERVServiceState::NORMAL;
}

TArray<FGameplayTag> ARVCampManager::GetServicesSortedByIncome(URVGuestServiceSettings* ServiceSettings) {
    return TArray<FGameplayTag>();
}

FText ARVCampManager::GetRVErrorMessageText(FName ErrorName) {
    return FText::GetEmpty();
}

ARubyCharacter* ARVCampManager::GetRubyCharacter() {
    return NULL;
}

FGuestServiceData ARVCampManager::GetGuestServiceDataTableInfo(FGameplayTag ServiceTag) {
    return FGuestServiceData{};
}

ARVCampSpot* ARVCampManager::GetCampSpotByIndex(int32 CampSpotNumber) {
    return NULL;
}

URVCustomerData* ARVCampManager::FindCustomerDataByID(FGuid CustomerID) {
    return NULL;
}

ARVCampSpot* ARVCampManager::FindCampSpotByCustomerData(URVCustomerData* CustomerData) {
    return NULL;
}

void ARVCampManager::Debug_ToggleCampers3DWidget() {
}


