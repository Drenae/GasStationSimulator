#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=NopeAISystem -ObjectName=NPAITaskStruct -FallbackName=NPAITaskStruct
#include "EBuildingType.h"
#include "EInteractableTaskType.h"
#include "ERVServiceState.h"
#include "GuestServiceData.h"
#include "OnCamper3DWidgetToggleDelegate.h"
#include "OnMinigameCompletedDelegate.h"
#include "Templates/SubclassOf.h"
#include "RVCampManager.generated.h"

class ADecorationCamera;
class AInteractableActor;
class APlayerArea;
class ARVBuildingLocalizer;
class ARVCamp;
class ARVCampSpot;
class ARVSpawner;
class ARubyCharacter;
class ARvConcertBuilding;
class AStaticMeshActor;
class UDA_SpecificAITask;
class UQuestBase;
class URVBookingManager;
class URVBookingSettings;
class URVCamperComponent;
class URVConcertManager;
class URVConcertSettings;
class URVCustomerData;
class URVEmployeeManager;
class URVEmployeesSettings;
class URVEventManager;
class URVEventSettings;
class URVGuestServiceSettings;
class URVResourceManager;
class URVResourceSettings;
class URVTrustPointManager;
class UStringTable;
class UTaskBase;

UCLASS(Blueprintable)
class GSS2_API ARVCampManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestBase* MainGameQuestToTriggerQuestline;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URVBookingManager* BookingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URVEventManager* EventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URVEmployeeManager* EmployeeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URVConcertManager* ConcertManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URVTrustPointManager* RVTrustManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URVResourceManager* ResourceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVBookingSettings* BookingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVEmployeesSettings* RVEmployeesSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVEventSettings* EventSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVConcertSettings* ConcertSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVGuestServiceSettings* GuestServiceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVResourceSettings* ResourceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDA_SpecificAITask* GoToGuestServiceAITask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInteractableTaskType, TSubclassOf<UTaskBase>> AITasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* RVErrorMessages;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigameCompleted OnMinigameCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCamper3DWidgetToggle OnCamper3DWidgetToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVSpawner* RVSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URVCamperComponent*> Campers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ARVCampSpot>> CampSpots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ADecorationCamera> BookingCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARvConcertBuilding> ConcertBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> GoToLeavingCamperSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RVQuestlineStartedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AInteractableActor> ServiceUpgrader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AInteractableActor> CousinsHouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARubyCharacter> RubyCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APlayerArea> RVPlayerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARVCamp> RVCamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARVBuildingLocalizer> BuildingLocalizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RVCampClientsSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AStaticMeshActor> RubyCamperDoorsActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RubyCamperDoorsTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* RubyCamperDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCamper3DWidgetVisible;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuestsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameInstanceLoaded;
    
public:
    ARVCampManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static FGuestServiceData StaticGetServicesDataTableInfo(URVGuestServiceSettings* ServiceSettings, FGameplayTag ServiceTag);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void SpawnRubyCharacter(FTransform SpawnTransform, TArray<FNPAITaskStruct> InTasksList, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SpawnOrLoadRubyCamperDoors();
    
    UFUNCTION(BlueprintCallable)
    static void SortServicesArray(UPARAM(Ref) TArray<FGameplayTag>& ServicesArray);
    
    UFUNCTION(BlueprintCallable)
    void OnRVCampMapLoaded(EBuildingType BuildingType, int32 NewBuildingLevel, bool bLoadedFromSave);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnQuestlinesLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnGameLoaded(bool bGameLoaded);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInsideRvArea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyCamperParked() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleQuestlineActivation(bool bActivateFromQuest);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetSortedServiceIndexesByStatus(URVCustomerData* CustomerData, ARVCampSpot* CampSpot);
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayTag> GetSortedMusicLikesByStatus(URVCustomerData* CustomerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERVServiceState GetServiceState(URVCustomerData* CustomerData, int32 ServiceIndex, ARVCampSpot* CampSpot);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGameplayTag> GetServicesSortedByIncome(URVGuestServiceSettings* ServiceSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRVErrorMessageText(FName ErrorName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARubyCharacter* GetRubyCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuestServiceData GetGuestServiceDataTableInfo(FGameplayTag ServiceTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARVCampSpot* GetCampSpotByIndex(int32 CampSpotNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URVCustomerData* FindCustomerDataByID(FGuid CustomerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARVCampSpot* FindCampSpotByCustomerData(URVCustomerData* CustomerData);
    
    UFUNCTION(BlueprintCallable)
    void Debug_ToggleCampers3DWidget();
    
};

