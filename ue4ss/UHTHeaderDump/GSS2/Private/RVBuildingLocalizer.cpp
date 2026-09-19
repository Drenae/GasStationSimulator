#include "RVBuildingLocalizer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ARVBuildingLocalizer::ARVBuildingLocalizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
    this->LocationCampSpot1 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationCampSpot1"));
    this->LocationCampSpot2 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationCampSpot2"));
    this->LocationCampSpot3 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationCampSpot3"));
    this->LocationCampSpot4 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationCampSpot4"));
    this->LocationCampSpot5 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationCampSpot5"));
    this->LocationCampSpot6 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationCampSpot6"));
    this->LocationCampSpot7 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationCampSpot7"));
    this->LocationCampSpot8 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationCampSpot8"));
    this->LocationServiceRVLeveling1 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceRVLeveling1"));
    this->LocationServiceRVLeveling2 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceRVLeveling2"));
    this->LocationServiceRVLeveling3 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceRVLeveling3"));
    this->LocationServiceRVLeveling4 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceRVLeveling4"));
    this->LocationServiceRVLeveling5 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceRVLeveling5"));
    this->LocationServiceRVLeveling6 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceRVLeveling6"));
    this->LocationServiceRVLeveling7 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceRVLeveling7"));
    this->LocationServiceRVLeveling8 = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceRVLeveling8"));
    this->LocationServiceRVLevelingGlobal = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceRVLevelingGlobal"));
    this->LocationServiceLaundry = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceLaundry"));
    this->LocationServiceSauna = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceSauna"));
    this->LocationServiceBenchPress = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceBenchPress"));
    this->LocationServiceBBQ = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceBBQ"));
    this->LocationServiceDishwashing = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceDishwashing"));
    this->LocationServiceWoodChopping = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceWoodChopping"));
    this->LocationServiceShootingRange = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServiceShootingRange"));
    this->LocationServicePicnicBasket = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationServicePicnicBasket"));
    this->LocationResourcePower = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationResourcePower "));
    this->LocationResourceWater = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationResourceWater"));
    this->LocationResourceSewage = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationResourceSewage"));
    this->LocationConcert = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationConcert"));
    this->LocationCousinHouse = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationCousinHouse"));
    this->LocationRubyCamper = CreateDefaultSubobject<UArrowComponent>(TEXT("LocationRubyCamper"));
    this->LocationCampSpot1->SetupAttachment(RootComponent);
    this->LocationCampSpot2->SetupAttachment(RootComponent);
    this->LocationCampSpot3->SetupAttachment(RootComponent);
    this->LocationCampSpot4->SetupAttachment(RootComponent);
    this->LocationCampSpot5->SetupAttachment(RootComponent);
    this->LocationCampSpot6->SetupAttachment(RootComponent);
    this->LocationCampSpot7->SetupAttachment(RootComponent);
    this->LocationCampSpot8->SetupAttachment(RootComponent);
    this->LocationConcert->SetupAttachment(RootComponent);
    this->LocationCousinHouse->SetupAttachment(RootComponent);
    this->LocationResourcePower->SetupAttachment(RootComponent);
    this->LocationResourceSewage->SetupAttachment(RootComponent);
    this->LocationResourceWater->SetupAttachment(RootComponent);
    this->LocationRubyCamper->SetupAttachment(RootComponent);
    this->LocationServiceBBQ->SetupAttachment(RootComponent);
    this->LocationServiceBenchPress->SetupAttachment(RootComponent);
    this->LocationServiceDishwashing->SetupAttachment(RootComponent);
    this->LocationServiceLaundry->SetupAttachment(RootComponent);
    this->LocationServicePicnicBasket->SetupAttachment(RootComponent);
    this->LocationServiceRVLeveling1->SetupAttachment(RootComponent);
    this->LocationServiceRVLeveling2->SetupAttachment(RootComponent);
    this->LocationServiceRVLeveling3->SetupAttachment(RootComponent);
    this->LocationServiceRVLeveling4->SetupAttachment(RootComponent);
    this->LocationServiceRVLeveling5->SetupAttachment(RootComponent);
    this->LocationServiceRVLeveling6->SetupAttachment(RootComponent);
    this->LocationServiceRVLeveling7->SetupAttachment(RootComponent);
    this->LocationServiceRVLeveling8->SetupAttachment(RootComponent);
    this->LocationServiceRVLevelingGlobal->SetupAttachment(RootComponent);
    this->LocationServiceSauna->SetupAttachment(RootComponent);
    this->LocationServiceShootingRange->SetupAttachment(RootComponent);
    this->LocationServiceWoodChopping->SetupAttachment(RootComponent);
}

FVector ARVBuildingLocalizer::GetServiceLocation(FGameplayTag Service) const {
    return FVector{};
}

FVector ARVBuildingLocalizer::GetRVLevelingLocation(int32 CampSpotNumber) const {
    return FVector{};
}

FVector ARVBuildingLocalizer::GetRubyCamperLocation() const {
    return FVector{};
}

FVector ARVBuildingLocalizer::GetCousinHouseLocation() const {
    return FVector{};
}

FVector ARVBuildingLocalizer::GetConcertLocation() const {
    return FVector{};
}

FVector ARVBuildingLocalizer::GetCampSpotLocation(int32 CampSpotNumber) const {
    return FVector{};
}


