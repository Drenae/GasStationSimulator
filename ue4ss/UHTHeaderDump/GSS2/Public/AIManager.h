#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CustomerShopTask.h"
#include "ECustomerType.h"
#include "EDLCName.h"
#include "EHumanType.h"
#include "EInteractableTaskType.h"
#include "EVehicleOptymalizeType.h"
#include "OnNpcSpawnedDelegate.h"
#include "SpecialAICharacterBaseSpawnDelegate.h"
#include "SpecificShoppingTypeTask.h"
#include "TaskStruct.h"
#include "Templates/SubclassOf.h"
#include "AIManager.generated.h"

class AAICharacterBase;
class AAISpawnPoint;
class AActor;
class AGSSWheeledVehicle;
class ANoCarAISpawnPoint;
class APlayerVehicle;
class UIteractableActorTask;
class UTaskBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UAIManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGSSWheeledVehicle>> ComingVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AGSSWheeledVehicle>> VehiclesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AGSSWheeledVehicle>> VehiclesBannedFromGarage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AGSSWheeledVehicle>> VehiclesBannedFromCarWash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AGSSWheeledVehicle>> VehiclesBannedFromTidalWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AGSSWheeledVehicle>> VIPVehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAICharacterBase>> NormalCharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAICharacterBase>> DeliveryCharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAICharacterBase>> PartyCharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAICharacterBase>> EmployeeCharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAICharacterBase>> PoliceCharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAICharacterBase>> PartySpotCharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAICharacterBase>> NBM_NormalCharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAICharacterBase>> NBM_DeliveryCharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAICharacterBase>> NBM_PartyCharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAICharacterBase>> NBM_EmployeeCharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAICharacterBase>> NBM_PoliceCharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AAICharacterBase>> NBM_PartySpotCharactersToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AAICharacterBase>, TSoftClassPtr<AAICharacterBase>> NBM_EmployeeMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlayerVehicle> RudyClassBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlayerVehicle> TowyClassBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialAICharacterBaseSpawn OnSpecialAICharacterBaseSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNpcSpawned OnNpcSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGenerateCashRegisterTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceCarWash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceRepair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToiletPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LotteryPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlcoholPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoodPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrugsPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlassesPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IceCreamPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewspaperPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PastriesPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftDrinksPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HatPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarCarePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftToyPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToyPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DLCAirstrip_AlcoholPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DLCAirstrip_HatPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DLCAirstrip_GlassesPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DLCAirstrip_CigarettesPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DLCAirstrip_FoodPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DLCAirstrip_SoftDrinkPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DLCAirstrip_PastryPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DLCAirstrip_ToyPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DLCAirstrip_PremiumDrinkPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DLCAirstrip_SoftToyPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TakeShowerPercent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxVehiclesOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCinemaVehiclesOnMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UTaskBase>> TaskBaseClasses;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomerShopTask> ValidCustomerShopTasks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAISpawnPoint* CurrentSpawnPoint;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> DeliveryBox;
    
    UAIManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TrySpawnVehicleForCustomerType(AAISpawnPoint* SpawnPoint, ECustomerType CustomerType, bool bIgnoreLimit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TrySpawnVehicle(AAISpawnPoint* SpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void TrySpawnRvCustomer(FTransform SpawnTransform, AActor* Home, EInteractableTaskType MainTask);
    
    UFUNCTION(BlueprintCallable)
    void TrySpawnNoCarCustomer(ANoCarAISpawnPoint* SpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AAICharacterBase> TryMapCharacterClass(TSubclassOf<AAICharacterBase> CharacterClass);
    
    UFUNCTION(BlueprintCallable)
    void SpawnVIPCustomer();
    
    UFUNCTION(BlueprintCallable)
    void SpawnTaskCustomer(ECustomerType TaskTypeToGenerate);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPanickingCustomer(ANoCarAISpawnPoint* SpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAICharacterSynchronously(AAICharacterBase*& OutCharacter, AGSSWheeledVehicle*& OutVehicle, TSoftClassPtr<AAICharacterBase> CharacterClass, FTransform CharacterTransform, TSoftClassPtr<AGSSWheeledVehicle> VehicleClass, FTransform VehicleTransform, AActor* Home, EVehicleOptymalizeType VehicleOptymalizeType);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAICharacter(AAICharacterBase*& OutCharacter, AGSSWheeledVehicle*& OutVehicle, TSoftClassPtr<AAICharacterBase> CharacterClass, FTransform CharacterTransform, TSoftClassPtr<AGSSWheeledVehicle> VehicleClass, FTransform VehicleTransform, AActor* Home, TArray<FTaskStruct> Tasks, bool bIsParkingSpotCustomer, bool bNoCarCustomer, bool bSpecialVehicle, EVehicleOptymalizeType VehicleOptymalizeType, EHumanType HumanType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetupDeliveryCars(AAICharacterBase* InICharacterBase, AGSSWheeledVehicle* GSSWheeledVehicle);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxVehiclesOnMap(int32 NewMax);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSpawnPoint(AAISpawnPoint* InSpawnPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetFrequenceOfTasks(int32 Variation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void RandomVehicle(TSoftClassPtr<AGSSWheeledVehicle>& OutVehicle, EVehicleOptymalizeType VehicleType);
    
    UFUNCTION(BlueprintCallable)
    static int32 RandomMachine(const TArray<float> Values);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RandomCustomerVehicleAndCharacter(TSoftClassPtr<AGSSWheeledVehicle>& OutVehicle, EVehicleOptymalizeType VehicleType, TSoftClassPtr<AAICharacterBase>& OutCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RandomCharacter(const TSoftClassPtr<AGSSWheeledVehicle>& InitVehicle, TSoftClassPtr<AAICharacterBase>& OutCharacter, const EHumanType HumanType);
    
    UFUNCTION(BlueprintCallable)
    void LoadVIPCarAsync(TSoftClassPtr<AGSSWheeledVehicle> VIPCarToLoad);
    
    UFUNCTION(BlueprintCallable)
    bool IsBuildingQueueFree(ECustomerType TaskType);
    
    UFUNCTION(BlueprintCallable)
    void HandleGenerateBuyDLCProductsTasks(EDLCName RequiredDLCName, FSpecificShoppingTypeTask& ShoppingTaskType, TArray<TSoftClassPtr<UIteractableActorTask>>& GeneratedTasks, TArray<FSoftObjectPath>& TasksToLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxVehiclesOnMap();
    
    UFUNCTION(BlueprintCallable)
    AAISpawnPoint* GetCurrentSpawnPoint();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetCharacterRequiredByVehicle(TSoftClassPtr<AGSSWheeledVehicle> InVehicle, TSoftClassPtr<AAICharacterBase>& OutCharacter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FTaskStruct> GenerateVehicleTask(TArray<FTaskStruct>& InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FTaskStruct> GenerateTasks(ECustomerType TaskTypeToGenerate, EVehicleOptymalizeType& OutOptymalizeType, bool& OutbIsParkingSpotCustomer, bool bNoCarCustomer);
    
    UFUNCTION(BlueprintCallable)
    ECustomerType GenerateRandomTaskType(bool bNoCarCustomer, bool bIsVipCustomer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FTaskStruct> GenerateRandomTasks(bool bNoCarCustomer, EVehicleOptymalizeType& OutOptymalizeType, bool& OutbIsParkingSpotCustomer, bool bIsVipCustomer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FTaskStruct> GenerateCustomerTask(TArray<FTaskStruct>& InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GenerateBuyProductsTasks(TArray<FTaskStruct>& InTask);
    
    UFUNCTION(BlueprintCallable)
    FTaskStruct CreateTaskStruct(const EInteractableTaskType TaskType);
    
};

