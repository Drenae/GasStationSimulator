#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EOSManagers -ObjectName=ELeaderboardStatDataType -FallbackName=ELeaderboardStatDataType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "ECustomerType.h"
#include "EJunkyardCarWreckType.h"
#include "EJunkyardPartRarity.h"
#include "ERVEventType.h"
#include "EnableTabInputDelegate.h"
#include "GamepadModeToggleDelegate.h"
#include "InteractionPlayerControllerDelegate.h"
#include "OnPlayerLoadDelegate.h"
#include "OnPossessDelegate.h"
#include "OnUnPossessDelegate.h"
#include "GSSPlayerController.generated.h"

class AActor;
class AGSSPlayerCharacter;
class AWheeledVehicle;

UCLASS(Blueprintable)
class GSS2_API AGSSPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionPlayerController OnInteractionPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSPlayerCharacter* GSSPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerOverlapActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerTargetActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPossess OnPossesseded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnPossess OnUnPossesseded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLoad OnPlayerLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWheeledVehicle* VehiclePlayerIsIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGamepadModeToggle OnGamepadModeToggle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnableTabInput OnEnableTabInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TabEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIngameMenuActive;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadModeActive;
    
public:
    AGSSPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnlockRVUpgrades();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnlockRVGuestBook();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnlockJunkyardStuff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StatAchievementHandling(const FName StatAPIName, float ProgressAmount);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetRVDebugBoardsVisibility(bool IsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerTargetActor(AActor* NewTargetActor);
    
    UFUNCTION(BlueprintCallable)
    void PrintIsEpicLoggedIn();
    
    UFUNCTION(BlueprintCallable)
    FKey GetKeyBindingForAxis(FName Action, float AxisScale, bool bGamepad);
    
    UFUNCTION(BlueprintCallable)
    FKey GetKeyBindingForAction(FName Action, bool bGamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetKeyAxisString(FName Action, float AxisScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetKeyActionString(FName Action);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGamepadModeActive();
    
private:
    UFUNCTION(BlueprintCallable)
    void GamepadModeCheck(const FKey& Key);
    
public:
    UFUNCTION(BlueprintCallable)
    void FlushPressedKeys();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableCircularMenuBinding(const bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_UnlockRVUpgrades();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_UnlockRVShortcut();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_UnlockRVParking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_UnlockRVGuestBook();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_UnlockJunkyardStuff();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_UnlockContractsManagerFunctionalityFully();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void Cheat_UnlockCinemaStuff();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_UnlockAllServices();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_UnlockAchievement(FName AchievementId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_ToggleCampers3DWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void Cheat_Teleport(int32 DestinationIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void Cheat_SpawnVIPCustomer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void Cheat_SpawnTowTruck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_SpawnTaskCustomer(ECustomerType TaskForCustomer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_SpawnRVEvent(ERVEventType EventType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void Cheat_SpawnPartyBus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_SpawnJunkyardWreck(EJunkyardCarWreckType CarWreckType, int32 JunkyardPartCount, int32 GaragePartCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_SpawnItemBox(const FString& RowName, int32 Quantity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void Cheat_SpawnCinemaEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void Cheat_SkipQuest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void Cheat_SkipObjectives(int32 NumberOfObjectivesToSkip);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_ShowRVDebugBoards();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_SetMaxAmountOfVehicles(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_SetDLCActivated(const FString& DLCName, bool bNewActivated);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_SetCarWashWaterPressure(float NewWaterPressureValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_ResetAchievement(FName AchievementId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void Cheat_RemoveAllRuins();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_ReadLeaderboard(FName LeaderboardName, FName StatName, ELeaderboardStatDataType StatType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_ReadFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_LoginWithTokenDev(const FString& Token);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_LoginWithAccountPortal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_IgnoreQuestProgressForUpgrades(bool bIgnore);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_HideWholeUI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_HideUI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_HideRVDebugBoards();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_GenerateJunkyardPartsBasket(EJunkyardPartRarity DeliveryTier, bool bGarageParts);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_FilePickerNew();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_EnableRVAutoBooking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_DisableRVAutoBooking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_DebugDeactivatedDLCs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_CacheFileByTag(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_AddTimeHours(int32 HoursAdded);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_AddRVTrustPoints(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_AddRVResources(int32 Resource1, int32 Resource2, int32 Resource3);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void Cheat_AddMoney(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_AddLeaderboardStat(FName StatName, ELeaderboardStatDataType StatType, const FString& Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_AddItemToInventory(const FString& RowName, int32 Quantity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void Cheat_AddHappyAngry(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void Cheat_AddFuel(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_AddFameExperience(float Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_AddContractPoints(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_AddCinemaRenown(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_AddChallengeProgress(int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_AddAirstripBlueprints(int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AchievementHandling(const FName AchievementAPIName, float ProgressAmount);
    
};

