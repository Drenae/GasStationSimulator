#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AICharacterStruct.h"
#include "BeginFinishTaskCharacterDelegate.h"
#include "CharacterLevelUpDelegate.h"
#include "CharacterMiniGameFinishedDelegate.h"
#include "CharacterRotationSignatureDelegate.h"
#include "CleanLevel.h"
#include "EAIState.h"
#include "EEmployeeSkill.h"
#include "EEmployeeTask.h"
#include "EMovementGroundType.h"
#include "EMovementType.h"
#include "ERenown_Reasons.h"
#include "ETaskResult.h"
#include "EWorkerWorkType.h"
#include "EmployeeSkill.h"
#include "EmployeeStatByLevelStruct.h"
#include "EndActionAnimDelegate.h"
#include "GSSCharacterBase.h"
#include "InitializeTaskCharacterDelegate.h"
#include "InteractionAICharacterDelegate.h"
#include "OnPopcornCooldownFinishedDelegate.h"
#include "OnPopcornCooldownStartedDelegate.h"
#include "StartActionAnimDelegate.h"
#include "StartDialogAnimDelegate.h"
#include "StartOverheadInformationDelegate.h"
#include "TaskStruct.h"
#include "Templates/SubclassOf.h"
#include "TicketData.h"
#include "eTicketState.h"
#include "AICharacterBase.generated.h"

class AAICharacterBase;
class AActor;
class AController;
class AGSSGameState;
class AGSSWayPoint;
class AGSSWheeledVehicle;
class AInteractableDecal;
class AProduct;
class UAiCharacterComponent;
class UAudioComponent;
class UBehaviorTree;
class UDataTable;
class UDialogueGraph;
class UEmployeeTask;
class UNPCAnimationManagerBase;
class UNiagaraComponent;
class UPoseAsset;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTaskBase;
class UWidgetComponent;

UCLASS(Abstract, Blueprintable)
class GSS2_API AAICharacterBase : public AGSSCharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* UpperBody_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LowerBody_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* UpperLeg_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LowerLeg_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* UpperArm_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LowerArm_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Hair_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Beard_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Accessories_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Head_SMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ChristmasHatMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* Sound;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInitializeTaskCharacter OnInitializeTaskCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginFinishTaskCharacter OnBeginFinishTaskCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterLevelUp OnCharacterLevelUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMiniGameFinished OnCharacterMiniGameFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterRotationSignature OnCharacterRotationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionAICharacter OnInteractionAICharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartDialogAnim OnStartDialogAnim;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartActionAnim OnStartActionAnim;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndActionAnim OnEndActionAnim;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartOverheadInformation OnStartOverheadInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationWalkSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseWalkAnimationMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSWheeledVehicle* Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTaskBase* CurrentActiveTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Home;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTaskStruct> TaskList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAICharacterStruct AICharacterInfoStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAICharacterBase> OldCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsParkingSpotCustomer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrivingModeTickDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceEnterVehicle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPoseAsset> PoseAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementType MovementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCleanLevel CleanLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSGameState* GSSGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNPCAnimationManagerBase* AnimationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTutorialCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DTEmplyeeStatByLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmployeeSkill> EmployeeSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeftCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PremiumCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalWorkTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalBreakTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalMoneyEarnedForSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalMoneyEarnedForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMoneyEarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalHappy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalAngry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CleaningMoneyModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelingMoneyModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CashMoneyModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GarageMoneyModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IceCreamVendingMoneyModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarWashMoneyModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CinemaMoneyModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasNewSkeletonAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrashTimeCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrashTimeToSpawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrashPreventTimeToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* OwnerController;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotEnoughFuel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanPlayHitReact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> HatToWear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPartyBusPasanger_Helper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* Test3DWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueGraph* DialogueGraph;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    eTicketState CinemaTicketState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTicketData CinemaTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CinemaPopcornCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CinemaPathPointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CinemaTrashToDropCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* PopcornNS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCinemaCustomer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRVCustomer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeDestroyedInGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopcornCooldownFinished OnPopcornCooldownFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPopcornCooldownStarted OnPopcornCooldownStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredGuestService;
    
    AAICharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSkillStats(const EEmployeeSkill EmployeeSkill, const FEmployeeSkill SEmployeeSkill);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdatePopcornCooldownTime();
    
public:
    UFUNCTION(BlueprintCallable)
    bool UpdateCharacterDirtyStatus(int32 DirtyCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleComponentsTick(bool bEnable, bool bMainMesh);
    
    UFUNCTION(BlueprintCallable)
    void StartPopcornCooldown(bool bAfterGameLoading);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnTrashByCustomer(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnDirtyActorByCustomer(TSubclassOf<AInteractableDecal> DirtyDecalToSpawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowOwnMoneyWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAtWorkWidget(EWorkerWorkType WorkType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTaskDebugVisiblity(bool NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementType(EMovementType NewMovementType);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementGroundType(EMovementGroundType NewMovementGroundType);
    
    UFUNCTION(BlueprintCallable)
    void SetChristmasHat(bool bSet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RotateToTarget(FRotator DeltaRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RotateMesh(FRotator TargetRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetMeshRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotEnoughFuelForTask(EEmployeeTask TaskType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionAICharacterUpdated(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFuelUpdated(float CurrentFuel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedTask(TSubclassOf<UTaskBase> FinishedTaskClass, ERenown_Reasons RenownReason, ETaskResult TaskResult, float TotalMoney, AActor* Instaginator);
    
    UFUNCTION(BlueprintCallable)
    void OnChristmasHatLoaded(TSoftObjectPtr<UStaticMesh> Hat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWatchingInCinema();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEmployeeClass_Helper();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDennisClass_Helper();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDeliveryClass_Helper();
    
    UFUNCTION(BlueprintCallable)
    bool IsCustomerClass();
    
    UFUNCTION(BlueprintCallable)
    void InteractionAICharacter(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideShowBlockedIcon(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideOwnMoneyWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideAtWorkWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoToHome(FName Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWorkCostPerHour(TSubclassOf<UEmployeeTask> EmployeeTask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGSSWayPoint* GetWayPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEmployeeSkill GetSkillStats(const EEmployeeSkill EmployeeSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEmployeeStatByLevelStruct GetSkillParams(const EEmployeeSkill EmployeeSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UTaskBase> GetNextTask();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMovementType(EMovementType& OutTransportMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMovementGroundType(EMovementGroundType& OutMovementGroundType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoneyModifyPerTaskSkill(EEmployeeSkill EmployeeSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoneyModifyPerSkill(TSubclassOf<UEmployeeTask> EmployeeTask);
    
    UFUNCTION(BlueprintCallable)
    float GetMaxEnergy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHourlyRate(EEmployeeSkill EmployeeSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExperienceToLevelUp(const EEmployeeSkill EmployeeSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnergyPercent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnergy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDialogueGraph* GetDialogueGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBehaviorTree* GetDefaultBehaviourTree();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UTaskBase> GetCurrentTask();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEmployeeSkill GetBestSkill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAIState GetAICharacterState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UAiCharacterComponent* Get_AiCharacterComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishCurrentTask(ETaskResult TaskResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroySelf();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CustomerProductNotFound(const TArray<TSubclassOf<AProduct>>& ProductsNotFound, float Timer);
    
    UFUNCTION(BlueprintCallable)
    void ClearPopcornCooldownTimer();
    
    UFUNCTION(BlueprintCallable)
    bool CheckIsDirty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CannonBallHit(FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETaskResult CalculateHappyAngry();
    
    UFUNCTION(BlueprintCallable)
    void AddMoney(float money);
    
    UFUNCTION(BlueprintCallable)
    void AddGSSTag(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddExperience(const EEmployeeSkill EmployeeSkill, float ExperienceVal);
    
    UFUNCTION(BlueprintCallable)
    bool AddEnergy(float Energy);
    
};

