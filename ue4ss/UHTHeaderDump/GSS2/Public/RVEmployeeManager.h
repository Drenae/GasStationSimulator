#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnAutomatedServicesUpdatedDelegate.h"
#include "OnRVEmployeeSpawnedDelegate.h"
#include "RVEmployeeAssignment.h"
#include "RVEmployeeManager.generated.h"

class AActor;
class ARVCampEmployee;
class ARVCampManager;
class ARVServiceUpgrader;
class ARvGuestServiceSpot;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API URVEmployeeManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRVEmployeeSpawned OnRVEmployeeSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAutomatedServicesUpdated OnAutomatedServicesUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> EmployeeSpawnPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, bool> LastPerformedServiceAutomatedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARVCampEmployee*> RVEmployees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AutomatedServices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> NotAutomatedServices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVCampManager* RVCampManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVServiceUpgrader* ServiceUpgrader;
    
public:
    URVEmployeeManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasLastPerformedServiceAutomated(FGameplayTag Service);
    
    UFUNCTION(BlueprintCallable)
    ARVCampEmployee* SpawnRVEmployee();
    
    UFUNCTION(BlueprintCallable)
    void SetPerformedServiceAutomationStatus(FGameplayTag Service, bool AutomationStatus);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRVEmployee(ARVCampEmployee* Employee);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PopulateNotAutomatedServices();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEmployeeAssignmentUpdated(const ARVCampEmployee* Employee, const FRVEmployeeAssignment NewAssignment, const FRVEmployeeAssignment PreviousAssignment, const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServiceAutomated(FGameplayTag Service);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssignmentActive(FRVEmployeeAssignment Assignment);
    
    UFUNCTION(BlueprintCallable)
    TArray<ARVCampEmployee*> GetSortedRVEmployees();
    
    UFUNCTION(BlueprintCallable)
    void GetServiceAutomationStatus(FGameplayTag Service, bool& IsAutomated, bool& IsPaid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARVCampEmployee*> GetRVEmployees();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetNotAutomatedServices();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetEmployeeSpawnTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEmployeeServiceCost(FGameplayTag Service);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetAutomatedServices();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARvGuestServiceSpot* FindTargetServiceSpot(FGameplayTag Service, bool RequireActiveCustomer);
    
    UFUNCTION(BlueprintCallable)
    void AddRVEmployee(ARVCampEmployee* Employee);
    
};

