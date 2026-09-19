---@meta

---@class AAConcertDanceVolume : AActor
---@field CollisionBox UBoxComponent
---@field DanceMontageStartLoop UAnimMontage
---@field DanceMontageEnd UAnimMontage
---@field bIsDancing boolean
---@field bIsHoveringGuitar boolean
local AAConcertDanceVolume = {}

---@param Branches EInteractionOutput
---@param bGamepadInitialized boolean
function AAConcertDanceVolume:StopDancing_Internal(Branches, bGamepadInitialized) end
function AAConcertDanceVolume:StopDancing() end
---@param bIsPressed boolean
function AAConcertDanceVolume:StartDancing_Internal(bIsPressed) end
---@param IsPressed boolean
function AAConcertDanceVolume:StartDancing(IsPressed) end
---@param ShowHint boolean
---@param bCurrentlyDancing boolean
function AAConcertDanceVolume:ShowDancingHint(ShowHint, bCurrentlyDancing) end
---@param InteractionActor AActor
function AAConcertDanceVolume:OnPlayerShowInteraction(InteractionActor) end
---@param InteractionActor AActor
function AAConcertDanceVolume:OnPlayerHideInteraction(InteractionActor) end
---@param OverlappedActor AActor
---@param OtherActor AActor
function AAConcertDanceVolume:OnOverlapEnd(OverlappedActor, OtherActor) end
---@param OverlappedActor AActor
---@param OtherActor AActor
function AAConcertDanceVolume:OnOverlapBegin(OverlappedActor, OtherActor) end
---@param CamperLeftReason ERVCamperLeftReason
function AAConcertDanceVolume:OnConcertStopped(CamperLeftReason) end
function AAConcertDanceVolume:OnConcertStarted() end
function AAConcertDanceVolume:LockDancing() end
---@return boolean
function AAConcertDanceVolume:IsConcertActive() end
---@param Player AGSSPlayerCharacter
function AAConcertDanceVolume:AddBinding(Player) end


---@class AAIBaseController : AAIController
---@field AICharacterBase AAICharacterBase
local AAIBaseController = {}



---@class AAICharacterBase : AGSSCharacterBase
---@field UpperBody_SMC USkeletalMeshComponent
---@field LowerBody_SMC USkeletalMeshComponent
---@field UpperLeg_SMC USkeletalMeshComponent
---@field LowerLeg_SMC USkeletalMeshComponent
---@field UpperArm_SMC USkeletalMeshComponent
---@field LowerArm_SMC USkeletalMeshComponent
---@field Hair_SMC USkeletalMeshComponent
---@field Beard_SMC USkeletalMeshComponent
---@field Accessories_SMC USkeletalMeshComponent
---@field Head_SMC USkeletalMeshComponent
---@field ChristmasHatMesh UStaticMeshComponent
---@field Sound UAudioComponent
---@field OnInitializeTaskCharacter FAICharacterBaseOnInitializeTaskCharacter
---@field OnBeginFinishTaskCharacter FAICharacterBaseOnBeginFinishTaskCharacter
---@field OnCharacterLevelUp FAICharacterBaseOnCharacterLevelUp
---@field OnCharacterMiniGameFinished FAICharacterBaseOnCharacterMiniGameFinished
---@field OnCharacterRotationStarted FAICharacterBaseOnCharacterRotationStarted
---@field OnInteractionAICharacter FAICharacterBaseOnInteractionAICharacter
---@field OnStartDialogAnim FAICharacterBaseOnStartDialogAnim
---@field OnStartActionAnim FAICharacterBaseOnStartActionAnim
---@field OnEndActionAnim FAICharacterBaseOnEndActionAnim
---@field OnStartOverheadInformation FAICharacterBaseOnStartOverheadInformation
---@field AnimationWalkSpeedMultiplier float
---@field BaseWalkAnimationMovementSpeed float
---@field TargetActor AActor
---@field CurrentHealth int32
---@field Vehicle AGSSWheeledVehicle
---@field CurrentActiveTask UTaskBase
---@field Home AActor
---@field TaskList TArray<FTaskStruct>
---@field AICharacterInfoStruct FAICharacterStruct
---@field OldCharacterClass TSubclassOf<AAICharacterBase>
---@field bIsParkingSpotCustomer boolean
---@field bDrivingModeTickDisabled boolean
---@field bForceEnterVehicle boolean
---@field PoseAsset TSoftObjectPtr<UPoseAsset>
---@field MovementType EMovementType
---@field CleanLevel FCleanLevel
---@field GSSGameState AGSSGameState
---@field AnimationManager UNPCAnimationManagerBase
---@field bIsWalking boolean
---@field bIsTutorialCharacter boolean
---@field FuelAmount float
---@field PlayerDistance float
---@field DTEmplyeeStatByLevel UDataTable
---@field EmployeeSkills TArray<FEmployeeSkill>
---@field LeftCooldown int32
---@field PremiumCooldown int32
---@field TotalWorkTime int32
---@field TotalBreakTime int32
---@field TotalMoneyEarnedForSelf float
---@field TotalMoneyEarnedForPlayer float
---@field CurrentMoneyEarned float
---@field TotalHappy int32
---@field TotalAngry int32
---@field CleaningMoneyModify float
---@field FuelingMoneyModify float
---@field CashMoneyModify float
---@field GarageMoneyModify float
---@field IceCreamVendingMoneyModify float
---@field CarWashMoneyModify float
---@field CinemaMoneyModify float
---@field bHasNewSkeletonAsset boolean
---@field TrashTimeCheck float
---@field TrashTimeToSpawn float
---@field TrashPreventTimeToSpawn float
---@field BehaviorTree UBehaviorTree
---@field OwnerController AController
---@field NotEnoughFuel boolean
---@field CanPlayHitReact boolean
---@field HatToWear TSoftObjectPtr<UStaticMesh>
---@field IsPartyBusPasanger_Helper boolean
---@field Test3DWidget UWidgetComponent
---@field DialogueGraph UDialogueGraph
---@field CinemaTicketState eTicketState
---@field CinemaTicket FTicketData
---@field CinemaPopcornCooldownTime float
---@field CinemaPathPointIndex int32
---@field CinemaTrashToDropCount int32
---@field PopcornNS UNiagaraComponent
---@field bIsCinemaCustomer boolean
---@field bIsRVCustomer boolean
---@field bCanBeDestroyedInGame boolean
---@field OnPopcornCooldownFinished FAICharacterBaseOnPopcornCooldownFinished
---@field OnPopcornCooldownStarted FAICharacterBaseOnPopcornCooldownStarted
---@field RequiredGuestService FGameplayTag
local AAICharacterBase = {}

---@param EmployeeSkill EEmployeeSkill
---@param SEmployeeSkill FEmployeeSkill
function AAICharacterBase:UpdateSkillStats(EmployeeSkill, SEmployeeSkill) end
function AAICharacterBase:UpdatePopcornCooldownTime() end
---@param DirtyCount int32
---@return boolean
function AAICharacterBase:UpdateCharacterDirtyStatus(DirtyCount) end
---@param bEnable boolean
---@param bMainMesh boolean
function AAICharacterBase:ToggleComponentsTick(bEnable, bMainMesh) end
---@param bAfterGameLoading boolean
function AAICharacterBase:StartPopcornCooldown(bAfterGameLoading) end
---@param DeltaTime float
---@return boolean
function AAICharacterBase:SpawnTrashByCustomer(DeltaTime) end
---@param DirtyDecalToSpawn TSubclassOf<AInteractableDecal>
---@return boolean
function AAICharacterBase:SpawnDirtyActorByCustomer(DirtyDecalToSpawn) end
function AAICharacterBase:ShowOwnMoneyWidget() end
---@param WorkType EWorkerWorkType
function AAICharacterBase:ShowAtWorkWidget(WorkType) end
---@param NewVisibility boolean
function AAICharacterBase:SetTaskDebugVisiblity(NewVisibility) end
---@param NewMovementType EMovementType
function AAICharacterBase:SetMovementType(NewMovementType) end
---@param NewMovementGroundType EMovementGroundType
function AAICharacterBase:SetMovementGroundType(NewMovementGroundType) end
---@param bSet boolean
function AAICharacterBase:SetChristmasHat(bSet) end
---@param DeltaRotation FRotator
function AAICharacterBase:RotateToTarget(DeltaRotation) end
---@param TargetRotation FRotator
function AAICharacterBase:RotateMesh(TargetRotation) end
function AAICharacterBase:ResetMeshRotation() end
---@param TaskType EEmployeeTask
function AAICharacterBase:OnNotEnoughFuelForTask(TaskType) end
---@param Actor AActor
function AAICharacterBase:OnInteractionAICharacterUpdated(Actor) end
---@param CurrentFuel float
function AAICharacterBase:OnFuelUpdated(CurrentFuel) end
---@param FinishedTaskClass TSubclassOf<UTaskBase>
---@param RenownReason ERenown_Reasons
---@param TaskResult ETaskResult
---@param TotalMoney float
---@param Instaginator AActor
function AAICharacterBase:OnFinishedTask(FinishedTaskClass, RenownReason, TaskResult, TotalMoney, Instaginator) end
---@param Hat TSoftObjectPtr<UStaticMesh>
function AAICharacterBase:OnChristmasHatLoaded(Hat) end
---@return boolean
function AAICharacterBase:IsWatchingInCinema() end
---@return boolean
function AAICharacterBase:IsEmployeeClass_Helper() end
---@return boolean
function AAICharacterBase:IsDennisClass_Helper() end
---@return boolean
function AAICharacterBase:IsDeliveryClass_Helper() end
---@return boolean
function AAICharacterBase:IsCustomerClass() end
---@param Actor AActor
function AAICharacterBase:InteractionAICharacter(Actor) end
---@param bShow boolean
function AAICharacterBase:HideShowBlockedIcon(bShow) end
function AAICharacterBase:HideOwnMoneyWidget() end
function AAICharacterBase:HideAtWorkWidget() end
---@param Reason FName
function AAICharacterBase:GoToHome(Reason) end
---@param EmployeeTask TSubclassOf<UEmployeeTask>
---@return float
function AAICharacterBase:GetWorkCostPerHour(EmployeeTask) end
---@return AGSSWayPoint
function AAICharacterBase:GetWayPoint() end
---@param EmployeeSkill EEmployeeSkill
---@return FEmployeeSkill
function AAICharacterBase:GetSkillStats(EmployeeSkill) end
---@param EmployeeSkill EEmployeeSkill
---@return FEmployeeStatByLevelStruct
function AAICharacterBase:GetSkillParams(EmployeeSkill) end
---@return TSubclassOf<UTaskBase>
function AAICharacterBase:GetNextTask() end
---@param OutTransportMode EMovementType
function AAICharacterBase:GetMovementType(OutTransportMode) end
---@param OutMovementGroundType EMovementGroundType
function AAICharacterBase:GetMovementGroundType(OutMovementGroundType) end
---@param EmployeeSkill EEmployeeSkill
---@return float
function AAICharacterBase:GetMoneyModifyPerTaskSkill(EmployeeSkill) end
---@param EmployeeTask TSubclassOf<UEmployeeTask>
---@return float
function AAICharacterBase:GetMoneyModifyPerSkill(EmployeeTask) end
---@return float
function AAICharacterBase:GetMaxEnergy() end
---@param EmployeeSkill EEmployeeSkill
---@return float
function AAICharacterBase:GetHourlyRate(EmployeeSkill) end
---@param EmployeeSkill EEmployeeSkill
---@return float
function AAICharacterBase:GetExperienceToLevelUp(EmployeeSkill) end
---@return float
function AAICharacterBase:GetEnergyPercent() end
---@return int32
function AAICharacterBase:GetEnergy() end
---@return UDialogueGraph
function AAICharacterBase:GetDialogueGraph() end
---@return UBehaviorTree
function AAICharacterBase:GetDefaultBehaviourTree() end
---@return TSubclassOf<UTaskBase>
function AAICharacterBase:GetCurrentTask() end
---@return EEmployeeSkill
function AAICharacterBase:GetBestSkill() end
---@return EAIState
function AAICharacterBase:GetAICharacterState() end
---@return UAiCharacterComponent
function AAICharacterBase:Get_AiCharacterComponent() end
---@param TaskResult ETaskResult
function AAICharacterBase:FinishCurrentTask(TaskResult) end
function AAICharacterBase:DestroySelf() end
---@param ProductsNotFound TArray<TSubclassOf<AProduct>>
---@param Timer float
function AAICharacterBase:CustomerProductNotFound(ProductsNotFound, Timer) end
function AAICharacterBase:ClearPopcornCooldownTimer() end
---@return boolean
function AAICharacterBase:CheckIsDirty() end
---@param Direction FVector
function AAICharacterBase:CannonBallHit(Direction) end
---@return ETaskResult
function AAICharacterBase:CalculateHappyAngry() end
---@param money float
function AAICharacterBase:AddMoney(money) end
---@param Tag FName
function AAICharacterBase:AddGSSTag(Tag) end
---@param EmployeeSkill EEmployeeSkill
---@param ExperienceVal float
function AAICharacterBase:AddExperience(EmployeeSkill, ExperienceVal) end
---@param Energy float
---@return boolean
function AAICharacterBase:AddEnergy(Energy) end


---@class AAIExitPoint : AActor
---@field Home AActor
local AAIExitPoint = {}



---@class AAISpawnPoint : AActor
---@field MinTime float
---@field MaxTime float
---@field ExitPoint AAIExitPoint
---@field BoxComponent UBoxComponent
---@field CharacterSpawn UArrowComponent
---@field GS AGSSGameState
---@field WS AGSSWorldSettings
---@field GI UGSSGameInstance
---@field TimeToSpawn float
---@field LastVehicleSpawned AGSSWheeledVehicle
---@field TrafficManager UTrafficManagerSubsystem
local AAISpawnPoint = {}

---@param UpdatedImpact int32
function AAISpawnPoint:OnTrafficImpactUpdated(UpdatedImpact) end
---@param GameLoaded boolean
function AAISpawnPoint:InitTrafficImpact(GameLoaded) end


---@class AAIVehicleController : AAIController
---@field CharacterBase AGSSCharacterBase
---@field BehaviorTree UBehaviorTree
---@field VehicleState EVehicleState
---@field VehicleMoveState EVehicleMoveState
local AAIVehicleController = {}



---@class AAchievementManager : AActor
---@field AchievementScreenTime float
---@field Achievements TArray<FAchievementValue>
---@field OfflineAchievements TArray<FAchievementValue>
---@field AchievementsToShow TArray<FAchievementValue>
---@field ActiveAchivementWidget UUserWidget
local AAchievementManager = {}

---@param AchievementStub FName
function AAchievementManager:WriteAchievementToOnlineSubsystem(AchievementStub) end
function AAchievementManager:SaveAchievementDataToFile() end
function AAchievementManager:RetroactiveAchievementCheck() end
---@param AchievementToTrigger FName
function AAchievementManager:NativeHandleAchievement(AchievementToTrigger) end
function AAchievementManager:LoadAchievementDataFromFile() end
---@param AchievementName FName
---@return boolean
function AAchievementManager:IsAchievementCompleted(AchievementName) end
---@param Stat EGSS_Stat
---@param Value float
function AAchievementManager:HandleStatAchievement(Stat, Value) end
---@param AchievementToTrigger FName
function AAchievementManager:HandleAchievement(AchievementToTrigger) end
---@param AchievementName FName
---@return FAchievementRow
function AAchievementManager:GetAchievementData(AchievementName) end
---@param Stat EGSS_Stat
---@return TArray<FAchievementRow>
function AAchievementManager:FilterAchievementsByStat(Stat) end
function AAchievementManager:AchievementWidgetDone() end


---@class AActionManager : AActor
local AActionManager = {}


---@class AAirplane : AActor
---@field CountryOfOrigin ECountryOfOrigin
---@field CallSign FString
---@field GeneratedItemsForBuy TArray<FGeneratedLootInfo>
---@field GeneratedItemsForSell TArray<FGeneratedLootInfo>
---@field Runway ERunway
---@field CurrentStatus ECurrentStatus
---@field StaticMeshComponent UStaticMeshComponent
---@field BoughtItems UInventoryComponent
---@field bCanInteract boolean
---@field TimeToTakeOff int32
---@field VehiclesParts TArray<AVehiclePart>
---@field bIsPendingTrade boolean
---@field PickedPlayerItems TArray<FGeneratedItem>
---@field PickedPilotItems TArray<FGeneratedItem>
---@field TotalPilotTradeValue float
---@field TotalPlayerTradeValue float
---@field ImpatienceMeter float
---@field LastPlayerTradeValue float
---@field SkillsUsed TArray<ETradingSkill>
---@field bIsCogencyUsed boolean
---@field bIsExpressionOfGratitudeUsed boolean
---@field AffectedByTradingBoost ETradingBoosts
local AAirplane = {}

---@param TimeStruct FTimeStruct
function AAirplane:UpdateTimeToTakeOff(TimeStruct) end
---@param Item FGeneratedLootInfo
---@param bIsByTradeAffected boolean
function AAirplane:UpdateGeneratedItemsForSell(Item, bIsByTradeAffected) end
---@param Item FGeneratedLootInfo
---@param bIsByTradeAffected boolean
function AAirplane:UpdateGeneratedItemsForBuy(Item, bIsByTradeAffected) end
function AAirplane:TakeOff() end
function AAirplane:StartCountingDown() end
---@param NewValue float
function AAirplane:SetTotalPlayerTradeValue(NewValue) end
---@param NewValue float
function AAirplane:SetTotalPilotTradeValue(NewValue) end
---@param TimeToTakeOffToSet int32
function AAirplane:SetTimeToTakeOff(TimeToTakeOffToSet) end
---@param NewValue TArray<ETradingSkill>
function AAirplane:SetSkillsUsed(NewValue) end
---@param RunwayToSet ERunway
function AAirplane:SetRunway(RunwayToSet) end
---@param PickedPlayerItemsToSet TArray<FGeneratedItem>
function AAirplane:SetPickedPlayerItems(PickedPlayerItemsToSet) end
---@param PickedPilotItemsToSet TArray<FGeneratedItem>
function AAirplane:SetPickedPilotItems(PickedPilotItemsToSet) end
---@param NewValue float
function AAirplane:SetLastPlayerTradeValue(NewValue) end
---@param NewValue ETradingBoosts
function AAirplane:SetIsAffectedByTradingBoost(NewValue) end
---@param NewValue float
function AAirplane:SetImpatienceMeter(NewValue) end
---@param GeneratedItemsForSellToSet TArray<FGeneratedLootInfo>
function AAirplane:SetGeneratedItemsForSell(GeneratedItemsForSellToSet) end
---@param GeneratedItemsForBuyToSet TArray<FGeneratedLootInfo>
function AAirplane:SetGeneratedItemsForBuy(GeneratedItemsForBuyToSet) end
---@param CurrentStatusToSet ECurrentStatus
function AAirplane:SetCurrentStatus(CurrentStatusToSet) end
---@param CountryOfOriginToSet ECountryOfOrigin
function AAirplane:SetCountryOfOrigin(CountryOfOriginToSet) end
---@param CanInteractToSet boolean
function AAirplane:SetCanInteract(CanInteractToSet) end
---@param NewCallSign FString
function AAirplane:SetCallSign(NewCallSign) end
---@param BoughtItemsToSet UInventoryComponent
function AAirplane:SetBoughtItems(BoughtItemsToSet) end
function AAirplane:ResetAirplane() end
---@return FGeneratedLootInfo
function AAirplane:RandomGraditudeItem() end
function AAirplane:OnAirportSandstormStarted() end
---@return float
function AAirplane:GetTotalPlayerTradeValue() end
---@return float
function AAirplane:GetTotalPilotTradeValue() end
---@return int32
function AAirplane:GetTimeToTakeOff() end
---@return TArray<ETradingSkill>
function AAirplane:GetSkillsUsed() end
---@return ERunway
function AAirplane:GetRunway() end
---@return TArray<FGeneratedItem>
function AAirplane:GetPickedPlayerItems() end
---@return TArray<FGeneratedItem>
function AAirplane:GetPickedPilotItems() end
---@return float
function AAirplane:GetLastPlayerTradeValue() end
---@return ETradingBoosts
function AAirplane:GetIsAffectedByTradingBoost() end
---@return float
function AAirplane:GetImpatienceMeter() end
---@return TArray<FGeneratedLootInfo>
function AAirplane:GetGeneratedItemsForSell() end
---@return TArray<FGeneratedLootInfo>
function AAirplane:GetGeneratedItemsForBuy() end
---@return ECurrentStatus
function AAirplane:GetCurrentStatus() end
---@return ECountryOfOrigin
function AAirplane:GetCountryOfOrigin() end
---@return boolean
function AAirplane:GetCanInteract() end
---@return FString
function AAirplane:GetCallSign() end
---@return UInventoryComponent
function AAirplane:GetBoughtItems() end
---@param NewValue ETradingSkill
function AAirplane:AddUsedSkill(NewValue) end


---@class AAirplaneBase : AActor
---@field VehiclesParts TArray<AVehiclePart>
---@field MainMeshComponent UStaticMeshComponent
---@field WheelsMeshComp UStaticMeshComponent
---@field PropellerMeshComp UStaticMeshComponent
---@field RadderMeshComp UStaticMeshComponent
---@field ElevatorMeshComp UStaticMeshComponent
---@field AileronLeftTopMeshComp UStaticMeshComponent
---@field AileronLeftBottomMeshComp UStaticMeshComponent
---@field AileronRightTopMeshComp UStaticMeshComponent
---@field AileronRightBottomMeshComp UStaticMeshComponent
---@field WingRopesMeshComp UStaticMeshComponent
---@field AudioComponent_Start UAudioComponent
---@field AudioComponent_LowToHigh UAudioComponent
---@field AudioComponent_HighLoop UAudioComponent
---@field AudioComponent_Passby UAudioComponent
---@field FuelEnterComp UChildActorComponent
---@field AirplaneInventory UInventoryComponent
---@field AudioFade_LowToHighTimerHandle FTimerHandle
---@field AudioFade_HighTimerHandle FTimerHandle
---@field AudioFade_LowToHighTime float
---@field AudioFade_HighTime float
---@field AudioFadeOutDuration float
---@field PropellerSpeed float
---@field WheelsSpeed float
---@field AscendPitchMultiplier float
---@field MaxPitchDuringAscend float
---@field MinPitchDuringAscend float
---@field StartRollingPitch float
---@field RollAddedPerTickInAscend float
---@field RollDirection int32
---@field LastAppliedPitch float
---@field RotatinoOnStartOfTheMinigame FRotator
---@field bIsPlaneRefilled boolean
local AAirplaneBase = {}

function AAirplaneBase:StopAllSounds() end
function AAirplaneBase:StartPlaneAudio() end
function AAirplaneBase:StartMarshalWandsMinigame() end
---@param RotationDegrees float
function AAirplaneBase:SetAileronAndRadderRotation(RotationDegrees) end
function AAirplaneBase:ResumePlaneAudio() end
function AAirplaneBase:PausePlaneAudio() end
---@param Rotation FRotator
---@param Speed float
function AAirplaneBase:MovePlaneForward(Rotation, Speed) end
---@return UStaticMeshComponent
function AAirplaneBase:GetMainMesh() end
---@return UInventoryComponent
function AAirplaneBase:GetAirplaneInventory() end
function AAirplaneBase:FadeOutAllSounds() end
function AAirplaneBase:AudioFade_Start() end
function AAirplaneBase:AudioFade_LowToHigh() end
function AAirplaneBase:AudioFade_High() end
---@param AscendPitch float
---@param Speed float
function AAirplaneBase:AscendPlane(AscendPitch, Speed) end


---@class AAirplaneBox : ASupBox
---@field Box UChildActorComponent
---@field AirplaneInventory UInventoryComponent
---@field BoxMeshes TArray<TSoftObjectPtr<UStaticMesh>>
local AAirplaneBox = {}

function AAirplaneBox:UpdateBox() end
---@param NewAirplaneInventory UInventoryComponent
function AAirplaneBox:RefreshInventory(NewAirplaneInventory) end
---@param Inventory UInventoryComponent
function AAirplaneBox:OnAirplaneInventoryUpdated(Inventory) end
---@param Transform FTransform
---@param BoxMesh TSoftObjectPtr<UStaticMesh>
function AAirplaneBox:OnAirplaneBoxLoaded(Transform, BoxMesh) end


---@class AAirplaneHole : AActor
local AAirplaneHole = {}


---@class AAirplaneItem : AGasStationProduct
local AAirplaneItem = {}


---@class AAirplane_TapingMinigame : AAirplaneBase
---@field PlaneState EJoeAirplaneState
---@field OnJoePlaneStateChanged FAirplane_TapingMinigameOnJoePlaneStateChanged
---@field AmountOfBrokenPartsSpawned int32
---@field AirplaneParts TArray<FPartStruct>
---@field PlanePartsSequance TArray<int32>
---@field OnJoePlaneHoleFixed FAirplane_TapingMinigameOnJoePlaneHoleFixed
---@field OnJoePlaneFixed FAirplane_TapingMinigameOnJoePlaneFixed
---@field PossitionLight_Green UStaticMeshComponent
---@field PossitionLight_Red UStaticMeshComponent
---@field PossitionLight_Red_Beacon UStaticMeshComponent
---@field PropellerComponent UChildActorComponent
---@field RootComp USceneComponent
---@field FixingTapeClass TSoftClassPtr<AFixingTape>
---@field AllertWidgetClass TSoftClassPtr<UUserWidget>
---@field SpawnedPosition FTransform
---@field bCanMagnetActivatePhysics boolean
---@field bCanActorBeAttracted boolean
---@field TowySnapBox UBoxComponent
---@field MetalFrame UStaticMeshComponent
local AAirplane_TapingMinigame = {}

---@param bOn boolean
function AAirplane_TapingMinigame:TurnOnHighlight(bOn) end
---@param bShouldHighlight boolean
function AAirplane_TapingMinigame:TurnOnAirplaneHighlight(bShouldHighlight) end
---@param PartToSpawn FPartStructForAsyncLoad
function AAirplane_TapingMinigame:SpawnAirplanePart(PartToSpawn) end
---@return boolean
function AAirplane_TapingMinigame:ShouldActorRotate() end
---@param bNewVisibility boolean
function AAirplane_TapingMinigame:SetPropellerVisibility(bNewVisibility) end
---@param bVisible boolean
function AAirplane_TapingMinigame:SetPossitionLightVisibility(bVisible) end
---@param NewPlaneState EJoeAirplaneState
function AAirplane_TapingMinigame:SetPlaneState(NewPlaneState) end
function AAirplane_TapingMinigame:ResetPosition() end
function AAirplane_TapingMinigame:PlayEventOnDeattached() end
---@param HoleMesh UStaticMeshComponent
function AAirplane_TapingMinigame:OnOneOfTheHolesFixed(HoleMesh) end
function AAirplane_TapingMinigame:ObjectDeattachedFromMagnet() end
---@param LoadedPlanePartsSequance TArray<int32>
---@param SavedBrokenPartsTapes TArray<FSavedBrokenPartTapes>
function AAirplane_TapingMinigame:InitializePlanePartsAfterLoad(LoadedPlanePartsSequance, SavedBrokenPartsTapes) end
function AAirplane_TapingMinigame:InitializeForFirstSpawn() end
---@return UPrimitiveComponent
function AAirplane_TapingMinigame:GetPrimitiveToApplyFore() end
---@return EJoeAirplaneState
function AAirplane_TapingMinigame:GetPlaneState() end
---@return TArray<int32>
function AAirplane_TapingMinigame:GetPlanePartSequance() end
---@return TArray<FPartStruct>
function AAirplane_TapingMinigame:GetPlaneParts() end
---@return UPrimitiveComponent
function AAirplane_TapingMinigame:GetAttractedPrimitive() end
function AAirplane_TapingMinigame:GenerateRandomPlaneParts() end
---@param PartsSequance TArray<int32>
---@param SavedBrokenPartsTapes TArray<FSavedBrokenPartTapes>
function AAirplane_TapingMinigame:GeneratePlanePartsFromSequance(PartsSequance, SavedBrokenPartsTapes) end
---@return boolean
function AAirplane_TapingMinigame:CanMagnetActivatePhysics() end
---@return boolean
function AAirplane_TapingMinigame:CanActorGetAttracted() end
function AAirplane_TapingMinigame:CalculateRemainingHoles() end
---@return boolean
function AAirplane_TapingMinigame:AreAllBrokenPlanePartsCovered() end


---@class AAirport : AInteractableBuilding
---@field JoeFuelStationReference TSoftObjectPtr<AFuelStation>
---@field FlightControlManager AFlightControlManager
---@field AirportScheduleManager UAirportScheduleManager
---@field DepartureScreensTrigger UBoxComponent
---@field DeparturescreensTutorialClass TSubclassOf<UDepartureScreensTutorial>
---@field DeparturescreensTutorialInstance UUserWidget
---@field bWasTutorialShown boolean
local AAirport = {}

---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function AAirport:OnDepartureScreensOverlapEnd(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AAirport:OnDepartureScreensOverlapBegin(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@return AFlightControlManager
function AAirport:GetFlightControlManager() end
---@return UAirportScheduleManager
function AAirport:GetAirportScheduleManager() end


---@class AAirstripRandomDialoguesManager : AActor
---@field OnJoeOrderGenerated FAirstripRandomDialoguesManagerOnJoeOrderGenerated
---@field bIsRandomCallsManagerActive boolean
---@field bIsJoeMuted boolean
---@field JoeTradingRequestedProducts TArray<FJoeTradingInfo>
---@field AmountOfLeftBlueprints int32
---@field BuildingBlueprintClassItem TSoftClassPtr<AItem>
---@field JoeOrder FJoeOrderInfo
---@field AmountOfHappy int32
---@field AmountOfMoney float
---@field bTradeCompleted boolean
local AAirstripRandomDialoguesManager = {}

---@return boolean
function AAirstripRandomDialoguesManager:TradeWithJoe() end
---@return boolean
function AAirstripRandomDialoguesManager:HasFreeSpaceInInventory() end
function AAirstripRandomDialoguesManager:GenerateJoeOrder() end
---@param InventoryComponent UInventoryComponent
---@param Blueprint TSoftClassPtr<AItem>
function AAirstripRandomDialoguesManager:AddBlueprintToInventory(InventoryComponent, Blueprint) end


---@class AAirstripStorage : AInteractableBuilding
local AAirstripStorage = {}


---@class AAlcoholBase : AGasStationProduct
local AAlcoholBase = {}


---@class AAnimalBase : ACharacter
local AAnimalBase = {}


---@class AAnimalController : AAIBaseController
local AAnimalController = {}


---@class AAnyLocationSnapPoint : ASnapPoint
local AAnyLocationSnapPoint = {}


---@class AAttachmentPoint : AActor
---@field MainMesh UStaticMeshComponent
local AAttachmentPoint = {}



---@class AAudioVolumeUtility : AAudioVolume
local AAudioVolumeUtility = {}


---@class ABBQItem : AItem
---@field OnCookingProgressUpdated FBBQItemOnCookingProgressUpdated
---@field OnMoveEnded FBBQItemOnMoveEnded
---@field OnStateChanged FBBQItemOnStateChanged
---@field PerfectStateThreshold float
---@field OnSlotChanged FBBQItemOnSlotChanged
---@field bIsRated boolean
---@field MinigameInWorldBBQ ARvMinigameInWorld_BBQ
---@field CollisionComponent UBoxComponent
---@field DesiredCookingTimeDeviance float
---@field DesiredCookingTime float
---@field MaxHeightDuringMovement float
---@field CheckCloseCookingTimeValue float
---@field BurningDelay float
---@field State EBBQItemState
---@field Slot TWeakObjectPtr<UBBQSlotComponent>
local ABBQItem = {}

---@param NewSlot UBBQSlotComponent
function ABBQItem:SetSlot(NewSlot) end
---@param NewCookingProgress float
function ABBQItem:SetCookingProgress(NewCookingProgress) end
---@param Target FTransform
---@param Duration float
---@param bSkipScale boolean
function ABBQItem:MoveToSmoothly(Target, Duration, bSkipScale) end
---@return boolean
function ABBQItem:IsMoving() end
---@return float
function ABBQItem:GetStateProgressToPerfect() end
---@return EBBQItemState
function ABBQItem:GetState() end
---@return UBBQSlotComponent
function ABBQItem:GetSlot() end
---@return float
function ABBQItem:GetOnlyCurrentStateProgress() end
---@return float
function ABBQItem:GetDesiredCookingTime() end
---@return float
function ABBQItem:GetCookingRemainingTime() end
---@return float
function ABBQItem:GetCookingProgress() end
---@param Item ABBQItem
function ABBQItem:EnableActorCollisionIfOnCookingSlot(Item) end
---@param DeltaCookingProgress float
function ABBQItem:AddCookingProgress(DeltaCookingProgress) end


---@class ABackMask : AVehiclePart
---@field LockDifficulty int32
---@field AvailableLockPicks int32
---@field ItemInventory UInventoryComponent
---@field CollectiblesItemsInventory UCollectiblesInventoryComponent
---@field bWasInteraction boolean
---@field HardLevel float
local ABackMask = {}

---@param InLockDifficulty int32
function ABackMask:SetLockDifficulty(InLockDifficulty) end
---@param InAvailableLockPicks int32
function ABackMask:SetAvailableLockPicks(InAvailableLockPicks) end
---@return int32
function ABackMask:GetLockDifficulty() end
---@return int32
function ABackMask:GetAvailableLockPicks() end
---@param ChanceToGet float
---@param MaxAmount int32
---@param MaxCategory int32
---@param ItemClass TArray<TSoftClassPtr<AItem>>
---@param OutAmount TArray<int32>
function ABackMask:AwardProduct(ChanceToGet, MaxAmount, MaxCategory, ItemClass, OutAmount) end
---@param ChanceToGet float
---@param MinMoney float
---@param MaxMoney float
---@param OutMoney float
function ABackMask:AwardMoney(ChanceToGet, MinMoney, MaxMoney, OutMoney) end
---@param ChanceToGet float
---@param MaxAmount int32
---@param MaxCategory int32
---@param ItemClass TArray<TSoftClassPtr<AItem>>
---@param OutAmount TArray<int32>
function ABackMask:AwardDecoration(ChanceToGet, MaxAmount, MaxCategory, ItemClass, OutAmount) end
function ABackMask:AfterLoadSetSettings() end


---@class ABarbell : AActor
local ABarbell = {}


---@class ABarn : AInteractableBuilding
local ABarn = {}

function ABarn:AirportSandstormStarted() end


---@class ABigTrashBag : AKeyItem
---@field MaxTrashCapacity float
---@field MaxTrashBagCapacity float
---@field OnTrashDestroyed FBigTrashBagOnTrashDestroyed
local ABigTrashBag = {}

---@return float
function ABigTrashBag:RefreshMesh() end
---@param Product AProduct
---@param NewCapacity float
---@param SpawnedTrash boolean
---@return boolean
function ABigTrashBag:AddNewTrash(Product, NewCapacity, SpawnedTrash) end


---@class ABoatFuelDeliveryWheel : AInteractableActor
---@field InsideWarehouseMovementPoint TSoftObjectPtr<AWaterMovementPoint>
---@field FuelHoseAttachmentPoint UArrowComponent
---@field bFuelPistolAttachDelay float
---@field bIsFueling boolean
---@field bIsOpen boolean
---@field FuelBoat AWaterVehicle
---@field WheelTurnSpeed float
---@field WheelTurnMaxDuration float
---@field WheelTurnCurrentDuration float
---@field bIsTuringWheel boolean
---@field TurnWheelTimer FTimerHandle
---@field FuelSpeedMultiplier float
---@field FuelPourSoundCue USoundCue
---@field FuelPourSound UAudioComponent
local ABoatFuelDeliveryWheel = {}

function ABoatFuelDeliveryWheel:OnUfoUsed() end
---@param WaterVehicle AWaterVehicle
function ABoatFuelDeliveryWheel:OnBoatArrivedAtWarehouseDelayed(WaterVehicle) end
---@param WaterVehicle AWaterVehicle
function ABoatFuelDeliveryWheel:OnBoatArrivedAtWarehouse(WaterVehicle) end


---@class ABrokenPlanePart : APlanePart
---@field TapesAttached TArray<AFixingTape>
---@field bIsPlanePartFixed boolean
---@field OnHoleFixed FBrokenPlanePartOnHoleFixed
---@field HoleMaterialFixedTransitionSpeed float
---@field HolesToTransitionToFixedStateNumber TArray<int32>
---@field AmountOfHolesAssigned int32
---@field HolesFixed int32
---@field Hole1_Mesh UStaticMeshComponent
---@field Hole2_Mesh UStaticMeshComponent
---@field Hole3_Mesh UStaticMeshComponent
---@field Hole4_Mesh UStaticMeshComponent
---@field Hole5_Mesh UStaticMeshComponent
---@field HolesDynamicMaterials TMap<int32, UMaterialInstanceDynamic>
---@field BrokenToFixParamName FName
---@field FinalEffectParamName FName
---@field FixedHoleTag FName
---@field WidgetLocationSocketName FName
---@field AirplaneHoleWorldWidgetInstances TArray<UAirplaneHoleWorldWidget>
---@field AirplaneHoleWorldWidgetClass TSubclassOf<UAirplaneHoleWorldWidget>
local ABrokenPlanePart = {}

---@param bNewVisiblilty boolean
function ABrokenPlanePart:SetHoleVisibility(bNewVisiblilty) end
---@return TArray<UStaticMeshComponent>
function ABrokenPlanePart:GetAllHoleEdgeMeshes() end
function ABrokenPlanePart:DestroyAllTapes() end
function ABrokenPlanePart:CheckIfHolesAreRepaired() end


---@class ABroom : AKeyItem
---@field BroomWidgetInstance UBroomWidget
local ABroom = {}



---@class ABuildArea : AActor
---@field StaticMeshComponent UStaticMeshComponent
---@field BuildingAreaTypes TArray<EBuildingAreaType>
---@field LevelToUnblock int32
local ABuildArea = {}



---@class ABuildingBlueprint : AProduct
local ABuildingBlueprint = {}


---@class ABusStop : AInteractableBuilding
local ABusStop = {}


---@class ACameraUnlockBase : AActor
local ACameraUnlockBase = {}

function ACameraUnlockBase:DeActivateCamera() end
function ACameraUnlockBase:ActivateCamera() end


---@class ACamperStainActor : ADecalActor
---@field HitArea UBoxComponent
---@field bSoftened boolean
---@field bWashed boolean
---@field OnSoftenedStateChanged FCamperStainActorOnSoftenedStateChanged
---@field OnWashedStateChanged FCamperStainActorOnWashedStateChanged
local ACamperStainActor = {}

---@return boolean
function ACamperStainActor:IsWashed() end
---@param bEnable boolean
function ACamperStainActor:EnableShowDirt(bEnable) end


---@class ACap : AGasStationProduct
local ACap = {}


---@class ACarCare : AGasStationProduct
local ACarCare = {}


---@class ACarDoor : AVehiclePart
---@field DoorSide EDoorSide
local ACarDoor = {}

---@return EDoorSide
function ACarDoor:GetDoorSide() end


---@class ACarLift : AInteractableBuilding
---@field CurrentVehicle AGSSWheeledVehicle
---@field bIsLiftedUp boolean
---@field TimesPerLevel TArray<float>
---@field bIsBlockedLiftedDown boolean
local ACarLift = {}

---@param Instaginator ACharacter
function ACarLift:StartCarLift(Instaginator) end
function ACarLift:Reset() end
---@param GSSWheeledVehicle AGSSWheeledVehicle
function ACarLift:PutOutCar(GSSWheeledVehicle) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
function ACarLift:PutInCar(GSSWheeledVehicle) end
function ACarLift:PlayerTargets() end
---@return float
function ACarLift:GetMiniGameTimeRemaining() end
function ACarLift:FinishCarLiftGame() end


---@class ACarLiftVolume : ATriggerVolume
---@field CarLiftReference ACarLift
---@field GarageRef AGarage
local ACarLiftVolume = {}

---@param NewGarageRef AGarage
function ACarLiftVolume:SetGarageRef(NewGarageRef) end
---@param OverlappedActor AActor
---@param OtherActor AActor
function ACarLiftVolume:OnOverlapEnd(OverlappedActor, OtherActor) end
---@param OverlappedActor AActor
---@param OtherActor AActor
function ACarLiftVolume:OnOverlapBegin(OverlappedActor, OtherActor) end


---@class ACarPart_Tooltip : AActor
---@field bUseRightVector boolean
local ACarPart_Tooltip = {}

---@param OwnerPart UJunkyardCarPartCustomizable
function ACarPart_Tooltip:SetupWidget(OwnerPart) end


---@class ACarWash : AHouse
---@field MoneyPerCarWashed float
---@field MoneyPerCarWashedAutomatic float
---@field PressureLossPerSecond float
---@field StartingWaterPressure float
---@field AutomaticCarWashPressureCostMultiplier float
---@field TrashItemsToSpawn TArray<TSoftClassPtr<ACarWashTrash>>
---@field WaterPressureLevels TArray<FCarWashDesignerSettings>
---@field CanSpawnTrashTag FGameplayTag
---@field bFirstCustomerServed boolean
---@field PressureSinceLastSpawn float
---@field CarWashTrashVolume ACarWashTrashVolume
---@field PreviousWaterPressureValue float
---@field CurrentWaterPressure float
---@field CurrentMaximumWaterPressure float
---@field OnCarWashPressureUpdated FCarWashOnCarWashPressureUpdated
---@field OnCarWashPressureLow FCarWashOnCarWashPressureLow
---@field OnCarWashPressureGoodAgain FCarWashOnCarWashPressureGoodAgain
local ACarWash = {}

---@param NewLevel int32
function ACarWash:StationUpgraded(NewLevel) end
function ACarWash:SpawnTrash() end
---@param NewValue float
function ACarWash:SetWaterPressure(NewValue) end
function ACarWash:SetupCarwashPathPoints() end
---@param ActorLevel int32
function ACarWash:SetupAutomaticCarWash(ActorLevel) end
---@param NewValue float
function ACarWash:SetPressureSinceLastSpawn(NewValue) end
---@param TrashChange int32
---@param Count int32
function ACarWash:OnTrashRemovedFromPump(TrashChange, Count) end
function ACarWash:LowPressureNotification() end
---@return boolean
function ACarWash:IsAutomaticUnlocked() end
---@return float
function ACarWash:GetWaterPressurePercentage() end
---@return float
function ACarWash:GetPresssureSinceTrash() end
---@return float
function ACarWash:GetMaximumWaterPressure() end
---@return float
function ACarWash:GetCurrentWaterPressure() end
---@param DeltaTime float
function ACarWash:CarWashUsageNotification(DeltaTime) end


---@class ACarWashAutomaticParts : AActor
---@field DidEndAutomaticWashingDelegate FCarWashAutomaticPartsDidEndAutomaticWashingDelegate
---@field OnStartAutomaticWashing FCarWashAutomaticPartsOnStartAutomaticWashing
local ACarWashAutomaticParts = {}

---@return boolean
function ACarWashAutomaticParts:StartAutomaticWashing() end
---@param bNewCollision boolean
---@return boolean
function ACarWashAutomaticParts:SetAutoCarWashPartsCollision(bNewCollision) end
function ACarWashAutomaticParts:DidEndAutomaticWashing() end


---@class ACarWashGauge : AGSSWorldObject
---@field Needle UStaticMeshComponent
local ACarWashGauge = {}

---@param Percentage float
function ACarWashGauge:UpdateGaugePosition(Percentage) end


---@class ACarWashPistol : AActor
---@field DrawDebug boolean
---@field OwningStation TWeakObjectPtr<ACarWashStation>
---@field CarWashPistol UStaticMeshComponent
---@field Nozzle UChildActorComponent
---@field ValidNozzles TArray<UNozzleData>
---@field bIsPickedUp boolean
---@field PistolRangeBeforeReset float
---@field HeldByPawn TWeakObjectPtr<APawn>
---@field NozzleIndex int32
---@field DistanceCheckTime float
---@field TimeSinceLastDistanceCheck float
---@field ActionsAudioComponent UAudioComponent
---@field LoopAudioComponent UAudioComponent
---@field RotateNozzleSound USoundCue
---@field SwitchNozzleSound USoundCue
---@field PickUpPistolSound USoundCue
---@field PutDownPistolSound USoundCue
---@field Mid UMaterialInstanceDynamic
---@field OnCarWashPistolPickedUp FCarWashPistolOnCarWashPistolPickedUp
---@field OnCarWashPistolDropped FCarWashPistolOnCarWashPistolDropped
---@field OnShineMaterialEnabled FCarWashPistolOnShineMaterialEnabled
---@field OnFiringStateChanged FCarWashPistolOnFiringStateChanged
---@field HorizontalRotation FRotator
---@field VerticalRotation FRotator
---@field CarWashParamCollection UMaterialParameterCollection
local ACarWashPistol = {}

---@param StartLocation FVector
---@param Direction FVector
---@param SpraySpreadDirection FVector
function ACarWashPistol:WashLineTraceFromLocationDirectional(StartLocation, Direction, SpraySpreadDirection) end
function ACarWashPistol:WashLineTrace() end
---@param bActivate boolean
function ACarWashPistol:VFXFireActivation(bActivate) end
---@param Percentage float
function ACarWashPistol:UpdatePistolGauge(Percentage) end
function ACarWashPistol:StopShiningMaterial() end
function ACarWashPistol:StopFiring() end
function ACarWashPistol:ShineMaterial() end
function ACarWashPistol:SetWashingStrength() end
---@param NewSpread boolean
function ACarWashPistol:SetVFXSpread(NewSpread) end
---@param bPressed boolean
function ACarWashPistol:SecondaryAction(bPressed) end
function ACarWashPistol:PutDown() end
---@param bPressed boolean
function ACarWashPistol:PrimaryAction(bPressed) end
function ACarWashPistol:PistolDistanceCheck() end
---@param Pawn APawn
function ACarWashPistol:PickUpByPawn(Pawn) end
---@param IncrementValue int32
function ACarWashPistol:IncrementNozzle(IncrementValue) end
---@return UNiagaraComponent
function ACarWashPistol:GetVFXSystem() end
---@return ACarWashPistolNozzle
function ACarWashPistol:GetNozzle() end
---@return boolean
function ACarWashPistol:GetIsPickedUp() end
---@return UStaticMeshComponent
function ACarWashPistol:GetCarWashPistol() end
---@param bPressed boolean
function ACarWashPistol:ExtraAction(bPressed) end


---@class ACarWashPistolNozzle : AActor
---@field NozzleMeshComponent UStaticMeshComponent
---@field NozzleRotation ENozzleRotation
---@field ActiveNozzleData UNozzleData
local ACarWashPistolNozzle = {}

---@return UStaticMeshComponent
function ACarWashPistolNozzle:GetNozzleMeshComponent() end
---@return UNozzleData
function ACarWashPistolNozzle:GetActiveNozzleData() end
function ACarWashPistolNozzle:ChangeRotation() end
---@param NewNozzleData UNozzleData
function ACarWashPistolNozzle:ChangeNozzle(NewNozzleData) end


---@class ACarWashStation : AInteractableBuilding
---@field CurrentVehicle AGSSWheeledVehicle
---@field Pistol UChildActorComponent
---@field WashedCarPosition USceneComponent
---@field AutomaticWashParts UChildActorComponent
---@field CarWashIsAutomatic boolean
local ACarWashStation = {}

---@param ActorLevel int32
function ACarWashStation:UpdateLeverVisibilityStatus(ActorLevel) end
---@param Automatic boolean
---@return boolean
function ACarWashStation:TurnIntoAutomaticCarWash(Automatic) end
function ACarWashStation:StartNonAutomaticWashing() end
function ACarWashStation:StartAutomaticWashing() end
---@param GSSWheeledVehicle AGSSWheeledVehicle
function ACarWashStation:PutOutCar(GSSWheeledVehicle) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
function ACarWashStation:PutInCar(GSSWheeledVehicle) end
---@return boolean
function ACarWashStation:GetCarWashIsAutomatic() end
---@param TaskState ETaskResult
function ACarWashStation:FinishCarWashGame(TaskState) end


---@class ACarWashTrash : ATrashItemBase
local ACarWashTrash = {}


---@class ACarWashTrashSpawnLocation : AActor
---@field Billboard UBillboardComponent
local ACarWashTrashSpawnLocation = {}



---@class ACarWashTrashVolume : AVolume
---@field PreviousAmount int32
---@field HighlightedTrash TArray<AActor>
---@field CarWashUnlockedTag FGameplayTag
---@field OnTrashAmountInVolumeUpdated FCarWashTrashVolumeOnTrashAmountInVolumeUpdated
---@field UpdatePreasue boolean
local ACarWashTrashVolume = {}

---@param OverlappedActor AActor
---@param OtherActor AActor
function ACarWashTrashVolume:OnOverlapEnd(OverlappedActor, OtherActor) end
---@param OverlappedActor AActor
---@param OtherActor AActor
function ACarWashTrashVolume:OnOverlapBegin(OverlappedActor, OtherActor) end
---@param bGameLoaded boolean
function ACarWashTrashVolume:OnGameLoaded(bGameLoaded) end
---@return TArray<ACarWashTrash>
function ACarWashTrashVolume:GetTrashInVolume() end
---@return int32
function ACarWashTrashVolume:GetAmountOfTrashItemsInVolume() end


---@class ACarWreckPlaceableArea : AActor
---@field AreaType ECarWreckPlaceableAreaType
---@field bHasCraneMarker boolean
---@field bKeepSnappedCarRotation boolean
---@field bKeepPhysicsAfterSnap boolean
---@field CraneDroppableArea UBoxComponent
---@field MagnetDroppableSpot UBoxComponent
---@field MainMesh UStaticMeshComponent
---@field MarkerMesh UStaticMeshComponent
---@field WreckPlacementPoint UArrowComponent
---@field SeanTeleportLocation UArrowComponent
---@field SeanDanceLocation UArrowComponent
---@field CurrentWreck AJunkyardCarWreck
---@field ExhibitionSlotIndex int32
---@field OnWreckPlaced FCarWreckPlaceableAreaOnWreckPlaced
---@field OnWreckTaken FCarWreckPlaceableAreaOnWreckTaken
---@field PlatformZRotation float
---@field bIsAreaEnabled boolean
---@field bIsAreaLoadingWithWreck boolean
---@field WreckSnapProgressSpeed float
---@field DisablePhysicsTime float
---@field EnablePhysicsTime float
---@field DisableOverlapsTime float
---@field SnapWreckCooldown float
---@field CheckWreckAfterRemovingWheelsTime float
---@field EnablePhysicsTimer FTimerHandle
---@field DisablePhysicsTimer FTimerHandle
---@field DisableOverlapsTimer FTimerHandle
---@field SnapWreckCooldownTimer FTimerHandle
---@field LoadDisableTimer FTimerHandle
---@field WheelsRemovedFromWreckTimer FTimerHandle
---@field WreckSnapProgress float
---@field IsCraneUsedByPlayer boolean
---@field bIsWaitingForLoadDisable boolean
---@field IsCraneUsedBySean boolean
---@field bReservedBySean boolean
---@field IsSnapWreckCooldownActive boolean
---@field GES UGlobalEventSubsystem
---@field ActionManagerSubsystem UActionManagerSubsystem
---@field JunkyardManager AJunkyardManager
local ACarWreckPlaceableArea = {}

---@param ExtraPhysicsDelay float
function ACarWreckPlaceableArea:SnapCurrentWreck(ExtraPhysicsDelay) end
---@param IsReservedBySean boolean
function ACarWreckPlaceableArea:SetReservedBySean(IsReservedBySean) end
---@param IsVisible boolean
function ACarWreckPlaceableArea:SetMarkerVisibility(IsVisible) end
---@param IsEnabled boolean
function ACarWreckPlaceableArea:SetAreaEnabled(IsEnabled) end
function ACarWreckPlaceableArea:RemoveWreck() end
---@param Wreck AActor
---@param ShouldSnap boolean
---@param ExtraPhysicsDelay float
function ACarWreckPlaceableArea:PlaceWreck(Wreck, ShouldSnap, ExtraPhysicsDelay) end
---@param Wreck AActor
---@param EnablePhysicsDelay float
function ACarWreckPlaceableArea:OnWreckSpawnedOnArea(Wreck, EnablePhysicsDelay) end
function ACarWreckPlaceableArea:OnWreckAttractedToMagnet() end
function ACarWreckPlaceableArea:OnWheelsRemovedFromWreckTimerEnd() end
function ACarWreckPlaceableArea:OnWheelsRemovedFromWreck() end
function ACarWreckPlaceableArea:OnLoadedEnableArea() end
function ACarWreckPlaceableArea:OnLoadedDisableArea() end
---@param Showighlights boolean
function ACarWreckPlaceableArea:OnCraneHighlightsToggled(Showighlights) end
---@param ExitedyPlayer boolean
function ACarWreckPlaceableArea:OnCraneExited(ExitedyPlayer) end
---@param EnteredByPlayer boolean
function ACarWreckPlaceableArea:OnCraneEntered(EnteredByPlayer) end
---@param Wreck AActor
function ACarWreckPlaceableArea:OnAreaLoadedWithWreck(Wreck) end
---@param Wreck AActor
function ACarWreckPlaceableArea:OnAreaBeginLoadingWithWreck(Wreck) end
---@param SnappedActor AActor
function ACarWreckPlaceableArea:OnActorSnappedToMagnet(SnappedActor) end
---@param DetachedActor AActor
function ACarWreckPlaceableArea:OnActorDetachedFromMagnet(DetachedActor) end
---@param LoadedZRotation float
function ACarWreckPlaceableArea:LoadPlatformRotation(LoadedZRotation) end
---@return boolean
function ACarWreckPlaceableArea:IsWreckInTheAir() end
---@return boolean
function ACarWreckPlaceableArea:IsWreckAttachedToMagnet() end
---@return boolean
function ACarWreckPlaceableArea:IsUnLocked() end
---@return boolean
function ACarWreckPlaceableArea:IsReservedBySean() end
---@return boolean
function ACarWreckPlaceableArea:HasFallingWreckInDroppableArea() end
function ACarWreckPlaceableArea:EndSnapWreckCooldown() end
function ACarWreckPlaceableArea:EnablePhysicsAfterPlacement() end
function ACarWreckPlaceableArea:DisablePhysicsAfterPlacement() end
function ACarWreckPlaceableArea:DisableOverlapEvents() end
---@return boolean
function ACarWreckPlaceableArea:CheckIfWreckStillOnArea() end
---@param DeltaTime float
function ACarWreckPlaceableArea:CheckForNewWreckOnArea(DeltaTime) end
---@param ActorToDrop AActor
---@return boolean
function ACarWreckPlaceableArea:CanDropActor(ActorToDrop) end


---@class ACarWreckTooltip : AActor
local ACarWreckTooltip = {}

function ACarWreckTooltip:SetupWidget() end


---@class ACarWreckTrash : ATrashItemBase
---@field TowySnapBox UBoxComponent
local ACarWreckTrash = {}

---@return boolean
function ACarWreckTrash:ShouldActorRotate() end
function ACarWreckTrash:PlayEventOnDeattached() end
function ACarWreckTrash:ObjectDeattachedFromMagnet() end
---@return UPrimitiveComponent
function ACarWreckTrash:GetPrimitiveToApplyFore() end
---@return UPrimitiveComponent
function ACarWreckTrash:GetAttractedPrimitive() end
---@return boolean
function ACarWreckTrash:CanMagnetActivatePhysics() end
---@return boolean
function ACarWreckTrash:CanActorGetAttracted() end


---@class ACarWreck_Tooltip : AActor
local ACarWreck_Tooltip = {}

---@param CarWreck AJunkyardCarWreck
function ACarWreck_Tooltip:SetupWidget(CarWreck) end


---@class ACaravan : AInteractableBuilding
local ACaravan = {}

---@return TArray<AAICharacterBase>
function ACaravan:GetOwnerCharacters() end
---@param Character AActor
function ACaravan:DestroyCharacter(Character) end
---@param Character AAICharacterBase
---@return boolean
function ACaravan:AddOwnerCharacter(Character) end


---@class ACashShop : AInteractableBuilding
---@field ItemDataTable UDataTable
---@field ShelfMesh UStaticMeshComponent
---@field CashBasket AItemBox
---@field ScannerMesh UStaticMeshComponent
---@field AnimMesh UStaticMeshComponent
---@field SpongeMesh UStaticMeshComponent
---@field ScannerArea UBoxComponent
---@field FailBoxArea UBoxComponent
---@field FailBoxAreaTop UBoxComponent
---@field FailBoxAreaLeft UBoxComponent
---@field FailBoxAreaRight UBoxComponent
---@field FailBoxAreaBehind UBoxComponent
---@field FailBoxAreaFront UBoxComponent
---@field SuccessBoxArea UBoxComponent
---@field NoShelfZone UBoxComponent
---@field CashTaskState ETaskResult
---@field MinigameTime float
---@field bMinigameActive boolean
---@field CachedProductIndex int32
---@field TimeSinceLastSpawn float
---@field AttachmentPoint AAttachmentPoint
---@field CameraRotationSpeed float
---@field MinBeltTimeToSpawnNextItem float
---@field MaxBeltTimeToSpawnNextItem float
---@field DurabilityLossMultiplier float
---@field CleanSpeedMultiplier float
---@field MinDistanceBetweenProducts float
---@field GamepadSphereTraceRadius float
---@field GamepadCursorSpeed float
---@field GamepadCursorSpeedOnProduct float
---@field ScanningSound USoundCue
---@field ItemDropSound USoundCue
---@field BeltStartRepeatSound USoundCue
---@field BeltStopSound USoundCue
---@field CurBeltTimeToSpawnNextItem float
---@field ProductsToScan TArray<FCashShopProduct>
---@field ProductsOnBelt TArray<FCashShopProduct>
---@field ProductsAlreadyScanned TArray<FCashShopProduct>
---@field ConveyorBeltComponent UConveyorBeltComponent
---@field MinigameCamera UCameraComponent
---@field ScannerSoundComponent UAudioComponent
---@field BeltAudioComponent UAudioComponent
---@field ItemDropAudioComponent UAudioComponent
---@field bCustomerWaitingToBeServed boolean
---@field bTimerStarted boolean
---@field QueuePoints TArray<UArrowComponent>
---@field DefaultQueuePointsLocation TArray<FTransform>
---@field MaxDistanceBetweenQueuePoints float
---@field MinDistanceBetweenQueuePoints float
---@field ConveyorBeltMID UMaterialInstanceDynamic
---@field ScannerMID UMaterialInstanceDynamic
---@field bDurabilityIsUnderCriticLevel boolean
---@field bHoldingItem boolean
---@field CurrentCashMeshIndex int32
---@field CurrentCashColor FLinearColor
---@field ItemBeingHeld AItem
---@field BlockCashWhenReachThisDurability float
---@field bHoldingRMB boolean
---@field DefaultCameraRotation FRotator
---@field bIsRotatingRight boolean
---@field bIsRotatingLeft boolean
---@field MoveVector_Gamepad FVector2D
---@field DeltatimeAnimationClean float
---@field MaxSponageMovment float
---@field CurGamepadZone int32
---@field CurItemGamepadStartingPos FVector
---@field bIsItemGrabbedByPad boolean
---@field maxClenTime float
---@field SpongeRelativeLocation FVector
---@field SpongeTime float
---@field CurSpongeTime float
---@field IsMoveForvard boolean
---@field StrikeCounter int32
---@field CurrentMinigameProducts int32
---@field CurrentDurability float
---@field MaxDurability float
---@field CurrentMinigameScannedProducts int32
---@field CurrentMinigameFailedProducts int32
---@field TotalMinigameProducts int32
---@field TotalMinigameScannedProducts int32
---@field TotalMinigameFailedProducts int32
---@field AverageTimes TArray<float>
---@field indexItem int32
---@field MinigameWidgetClass TSubclassOf<UUserWidget>
---@field MinigameWidgetRef UUserWidget
---@field ProductsInBag TArray<AActor>
---@field SpawnedActors TArray<AActor>
---@field ItemsToScan TArray<AActor>
---@field ItemsToScanGamepadZones TArray<int32>
---@field ItemsToScanGamepadStartingPos TArray<FVector>
---@field bGamepadMode boolean
---@field TemporaryProductFile AProduct
---@field GamepadMovementArea UBoxComponent
---@field GamepadPointingOrigin FVector
local ACashShop = {}

---@param Area UBoxComponent
---@param bSuccessArea boolean
function ACashShop:VerifyItemsInBoxArea(Area, bSuccessArea) end
function ACashShop:VerifyIfItemsInScannerArea() end
function ACashShop:VerifyEndOfMinigame() end
function ACashShop:UpdateStrike() end
function ACashShop:UI_UpdateStrike() end
function ACashShop:UI_UpdateProductCounters() end
function ACashShop:UI_UpdateAverageTime() end
---@param bShow boolean
function ACashShop:UI_ShowTutorial(bShow) end
---@param bShow boolean
function ACashShop:UI_SetShiftMessageVisible(bShow) end
---@param bSuccess boolean
function ACashShop:UI_ScanSuccess(bSuccess) end
---@param bShow boolean
function ACashShop:UI_ScanArrow(bShow) end
---@param WorldLocation FVector
function ACashShop:UI_ProductFail(WorldLocation) end
---@param bShow boolean
---@param NumPeopleInQueue int32
function ACashShop:UI_LeftNotification(bShow, NumPeopleInQueue) end
---@param MoneyEarned float
---@param bIsStrike boolean
---@param TotalProducts int32
---@param SuccessProducts int32
---@param AverageTimePerProduct float
---@param TipMoney float
function ACashShop:UI_EndOfMinigameNotification(MoneyEarned, bIsStrike, TotalProducts, SuccessProducts, AverageTimePerProduct, TipMoney) end
---@param DeltaTime float
function ACashShop:TurnCameraIfRequested(DeltaTime) end
---@return FHitResult
function ACashShop:TraceUniversal() end
---@return FHitResult
function ACashShop:TraceUnderMouseCursor() end
function ACashShop:SpawnNewQueuePoint() end
---@param ProductClass TSubclassOf<AItem>
---@param CharOwner AGSSCharacterBase
---@return boolean
function ACashShop:SpawnItemOnBelt(ProductClass, CharOwner) end
---@param AICharacterBase AAICharacterBase
function ACashShop:ShowProducts(AICharacterBase) end
---@param NewStrike int32
function ACashShop:SetStrikeCounter(NewStrike) end
function ACashShop:SetPreviousMesh() end
---@param bNewActive boolean
function ACashShop:SetMinigameActive(bNewActive) end
---@param CashShopMeshComponent UStaticMeshComponent
---@param InMesh UStaticMesh
---@return boolean
function ACashShop:SetMeshWithMaterialsCleanup(CashShopMeshComponent, InMesh) end
---@param bNewHoldingItem boolean
function ACashShop:SetHoldingItem(bNewHoldingItem) end
---@param bNewValue boolean
function ACashShop:SetCustomerWaitingToBeServed(bNewValue) end
---@param InCurrentMeshIndex int32
function ACashShop:SetCurrentMeshIndex(InCurrentMeshIndex) end
---@param InCurrentMeshColor FLinearColor
function ACashShop:SetCurrentMeshColor(InCurrentMeshColor) end
---@param MeshToSet UStaticMesh
---@param MeshLevel int32
---@param Color FLinearColor
function ACashShop:SetCashMeshPreview(MeshToSet, MeshLevel, Color) end
function ACashShop:SelectItem() end
---@param Item AItem
---@return boolean
function ACashShop:ScanProduct(Item) end
function ACashShop:ResetScanner() end
function ACashShop:RemoveMinigameWidgetFromViewportAfterDelay() end
---@param ProductClass TSubclassOf<AItem>
---@param Amount int32
---@param GroupToRemoveFrom EProductCashShopState
function ACashShop:RemoveItemFromGroup(ProductClass, Amount, GroupToRemoveFrom) end
---@param Item AProduct
function ACashShop:ReleaseItem_Gamepad(Item) end
---@param AICharacterBase AAICharacterBase
function ACashShop:PutProductByCustomer(AICharacterBase) end
---@param LocationToPoint FVector
---@param ActorsToIgnore TArray<AActor>
function ACashShop:PointGamepadOriginToLocation(LocationToPoint, ActorsToIgnore) end
---@param DeltaTime float
function ACashShop:PlayerGameTick(DeltaTime) end
---@param Enabled boolean
function ACashShop:OnSpongeEnabled(Enabled) end
---@param bSuccess boolean
function ACashShop:OnProductHandled(bSuccess) end
---@param HandleActor AActor
function ACashShop:OnHandleItem(HandleActor) end
---@param HitTrace FHitResult
function ACashShop:OnGamepadTrace_BP(HitTrace) end
---@param bNewGamepadMode boolean
function ACashShop:OnGamepadModeToggle_BP(bNewGamepadMode) end
---@param bNewGamepadMode boolean
function ACashShop:OnGamepadModeToggle(bNewGamepadMode) end
---@param NewCashSpeed float
function ACashShop:OnCashSpeedChanged(NewCashSpeed) end
---@param Enabled boolean
function ACashShop:OnCashShopRendering(Enabled) end
---@param FinishedTask UTaskBase
---@param TaskResult ETaskResult
---@param Reason FString
function ACashShop:OnBeginFinishTaskAICharacter(FinishedTask, TaskResult, Reason) end
---@param Val float
function ACashShop:MoveRight_Gamepad(Val) end
---@param Item AProduct
---@param isNext boolean
function ACashShop:MoveItem_Gamepad(Item, isNext) end
---@param Val float
function ACashShop:MoveForward_Gamepad(Val) end
---@param AICharacterBase AAICharacterBase
function ACashShop:MiniGameStart(AICharacterBase) end
---@param AICharacterBase AAICharacterBase
function ACashShop:MiniGameFinish(AICharacterBase) end
---@param WayPoint FSavedWayPoint
function ACashShop:LoadQueuePoint(WayPoint) end
function ACashShop:LoadCashAndColor() end
function ACashShop:GrabItems() end
---@param Item AProduct
function ACashShop:GrabItem_Gamepad(Item) end
---@return int32
function ACashShop:GetStrikeCounter() end
---@return TArray<AActor>
function ACashShop:GetScannedProductsInSuccessArea() end
---@param ProductClass TSubclassOf<AItem>
---@param Group EProductCashShopState
---@return int32
function ACashShop:GetProductIndex(ProductClass, Group) end
---@return UUserWidget
function ACashShop:GetMinigameWidgetRef() end
---@param bTotal boolean
---@return int32
function ACashShop:GetMinigameScannedProductCount(bTotal) end
---@param bTotal boolean
---@return int32
function ACashShop:GetMinigameProductCount(bTotal) end
---@param bTotal boolean
---@return int32
function ACashShop:GetMinigameFailedProductCount(bTotal) end
---@return int32
function ACashShop:GetCurrentMeshIndex() end
---@return FLinearColor
function ACashShop:GetCurrentMeshColor() end
---@return TArray<UPrimitiveComponent>
function ACashShop:GetComponentsToIgnoreInTrace() end
---@return TArray<AActor>
function ACashShop:GetActorsToIgnoreInTrace() end
function ACashShop:FinishCashGame() end
---@param PossibleSpawnPoints TArray<UConveyorBeltSpawnLocComp>
---@param ProductClass TSubclassOf<AItem>
---@param OutTransform FTransform
---@return boolean
function ACashShop:FindSpawnTransformForItem(PossibleSpawnPoints, ProductClass, OutTransform) end
---@param DeltaTime float
function ACashShop:EnableSponge(DeltaTime) end
---@param DirtyEffect boolean
---@param CurrentCashDurability float
---@param MaxCashDurability float
function ACashShop:DurabilityUpdate(DirtyEffect, CurrentCashDurability, MaxCashDurability) end
function ACashShop:DetachHandleItemFromPoint() end
function ACashShop:CountQueuePoints() end
---@return int32
function ACashShop:CountProductsRemaining() end
---@param bActivated boolean
function ACashShop:ConveyorActivated(bActivated) end
---@param Color FLinearColor
function ACashShop:ChangeColor(Color) end
---@param bIsPressed boolean
function ACashShop:CancelMinigame(bIsPressed) end
---@param bIsRotating boolean
function ACashShop:CameraTurnRight_Keyboard(bIsRotating) end
---@param Val float
function ACashShop:CameraTurnLeftRight_Gamepad(Val) end
---@param bIsRotating boolean
function ACashShop:CameraTurnLeft_Keyboard(bIsRotating) end
---@param bIsControlling boolean
function ACashShop:CameraControl(bIsControlling) end
---@return float
function ACashShop:CalculateAverageTimeTotal() end
---@return float
function ACashShop:CalculateAverageTimeThisRound() end
function ACashShop:BP_MouseRolledOffTheProduct() end
function ACashShop:BP_MouseoverTheProduct() end
function ACashShop:BP_DurabilityRoseOverCriticVal() end
function ACashShop:BP_DurabilityDroppedBelowCriticVal() end
function ACashShop:BackToPreviousMesh() end
---@param HitTrace FHitResult
function ACashShop:AttachHandleItemToPoint(HitTrace) end
---@param MeshIndex int32
function ACashShop:ApplyNewCashMesh(MeshIndex) end
---@param ProductClass TSubclassOf<AItem>
---@param Amount int32
---@param GroupToAddTo EProductCashShopState
---@param bSuccessfulScan boolean
function ACashShop:AddItemToGroup(ProductClass, Amount, GroupToAddTo, bSuccessfulScan) end


---@class ACatchFallingNPCsVolume : AVolume
local ACatchFallingNPCsVolume = {}

---@param OverlappedActor AActor
---@param OtherActor AActor
function ACatchFallingNPCsVolume:OnOverlapBegin(OverlappedActor, OtherActor) end


---@class ACement : AActor
local ACement = {}

function ACement:HighlightDirt() end
---@return UStaticMeshComponent
function ACement:GetStaticMeshComponent() end
---@return URenderTargetComponent
function ACement:GetRenderTargetComponent() end


---@class ACentralShop : AHouse
---@field StationFloorMaterial UMaterialInstance
---@field ToiletFloorMaterial UMaterialInstance
---@field DirtyClean TArray<FCleanRange>
---@field RoofLevelName FName
---@field RoofLevelToUnload FName
local ACentralShop = {}

---@return FCleanRange
function ACentralShop:GetDirtyCleanStruct() end


---@class ACharacterController : AAIBaseController
local ACharacterController = {}

---@param TaskState EAIState
function ACharacterController:StopInitiativeTask(TaskState) end
function ACharacterController:StartAI() end
function ACharacterController:InitiativeTask() end
---@return EAIState
function ACharacterController:GetAIState() end


---@class AChemicalBath : AInteractableBuilding
---@field ChemicalTick FChemicalBathChemicalTick
---@field ChemicalSlots TArray<FChemicalSlot>
---@field Concetration float
---@field LevelConcentrationDecrease float
---@field LevelDirtDecrease float
---@field WidgetRef UChemicalBathWidget
---@field ConcentrationData UConcentrationData
---@field StartSlotAmount int32
---@field ChemicalBathBuilding AChemicalBath_Building
local AChemicalBath = {}

function AChemicalBath:SwitchAutomaticChemical() end
---@param InConcentrationAmount float
function AChemicalBath:SetConcentrationAmount(InConcentrationAmount) end
---@param InSlotsToSet TArray<FChemicalSlot>
function AChemicalBath:SetChemicalSlots(InSlotsToSet) end
function AChemicalBath:ResetConcentration() end
---@param InSlotIndex int32
function AChemicalBath:RemoveFromChemicalSlot(InSlotIndex) end
---@param Level int32
---@param BuildingRef AChemicalBath_Building
function AChemicalBath:OnChemicalBuildingUp(Level, BuildingRef) end
---@param BathBuilding AChemicalBath_Building
function AChemicalBath:OnChemicalBuildingBeginPlay(BathBuilding) end
---@param InIndex int32
---@return boolean
function AChemicalBath:GetIsSlotOccupied(InIndex) end
---@return boolean
function AChemicalBath:GetIsChemicalSlotsEmpty() end
---@return int32
function AChemicalBath:GetFirstEmptySlotIndex() end
---@return float
function AChemicalBath:GetDirtRemovalAmount() end
---@return float
function AChemicalBath:GetCurrentConcetration() end
---@return TArray<FChemicalSlot>
function AChemicalBath:GetChemicalSlots() end
---@return int32
function AChemicalBath:GetAmountOfItemsInSlots() end
---@return float
function AChemicalBath:CalculateMoneyRequiredToRestoreConcentration() end
---@param Item FStorageCarPart
---@return boolean
function AChemicalBath:AddToFirstEmptySlot(Item) end
---@param InSlotIndex int32
---@param Item FStorageCarPart
function AChemicalBath:AddToChemicalSlot(InSlotIndex, Item) end
function AChemicalBath:AddFirstDirtyCarPartToCleaning() end


---@class AChemicalBath_Building : AInteractableBuilding
---@field bIsAutomaticEnabled boolean
---@field OnChemicalBuildingLevelUp FChemicalBath_BuildingOnChemicalBuildingLevelUp
---@field ChemicalBathsRef TSoftObjectPtr<AChemicalBath>
local AChemicalBath_Building = {}

function AChemicalBath_Building:SwitchAutomaticChemical() end
---@param inIsAutomaticEnbaled boolean
function AChemicalBath_Building:SetAutomaticEnabled(inIsAutomaticEnbaled) end
---@return boolean
function AChemicalBath_Building:IsAutomaticUnlocked() end
---@return boolean
function AChemicalBath_Building:GetIsAutomaticEnabled() end
---@param CarPartToCheck FStorageCarPart
---@return boolean
function AChemicalBath_Building:CheckIsItemInChemicalBath(CarPartToCheck) end


---@class ACiggaretBase : AGasStationProduct
local ACiggaretBase = {}


---@class ACinemaMuteMusicVolume : ATriggerSphere
---@field CinemaManager ADLCDriveInCinemaManager
local ACinemaMuteMusicVolume = {}

---@param OverlappedActor AActor
---@param OtherActor AActor
function ACinemaMuteMusicVolume:OnOverlapEnd(OverlappedActor, OtherActor) end
---@param OverlappedActor AActor
---@param OtherActor AActor
function ACinemaMuteMusicVolume:OnOverlapBegin(OverlappedActor, OtherActor) end


---@class ACinemaProjector : AInteractableBuilding
---@field ProjectorState eCinemaProjectorState
---@field ProjectorPreset int32
---@field ActualMovieTime float
---@field MediaPlayer UMediaPlayer
---@field OnStateChanged FCinemaProjectorOnStateChanged
---@field OnMovieTimeUpdate FCinemaProjectorOnMovieTimeUpdate
---@field OnMovieCanceled FCinemaProjectorOnMovieCanceled
---@field OnMovieStarted FCinemaProjectorOnMovieStarted
---@field OnLoopStateChanged FCinemaProjectorOnLoopStateChanged
---@field OnMovieQueUpdated FCinemaProjectorOnMovieQueUpdated
---@field MoviesToPlay TArray<FQueuedMovieToplay>
---@field bMovieLoopActive boolean
local ACinemaProjector = {}

function ACinemaProjector:UpdateMovieTime() end
function ACinemaProjector:StartPlayMovie() end
---@param StartTime float
function ACinemaProjector:StartCountdown(StartTime) end
---@param NewProjectorState eCinemaProjectorState
function ACinemaProjector:SetProjectorState(NewProjectorState) end
---@param InMovies TArray<FQueuedMovieToplay>
function ACinemaProjector:SetMoviesToPlay(InMovies) end
---@param InMovieLoopActive boolean
function ACinemaProjector:SetMovieLoopActive(InMovieLoopActive) end
function ACinemaProjector:RemoveMovieFromQue() end
---@param Time FTimeStruct
function ACinemaProjector:OnTimeUpdated(Time) end
---@param MediaSource UMediaSource
---@param Length float
function ACinemaProjector:OnStartMovieActions(MediaSource, Length) end
---@param Success boolean
function ACinemaProjector:OnGameplaySettingsApplied(Success) end
function ACinemaProjector:OnEndMovie() end
---@return boolean
function ACinemaProjector:IsReadyToRecieveCustomers() end
function ACinemaProjector:HandleStreamerMode() end
---@return float
function ACinemaProjector:GetTimeTillNextMovie() end
---@return TArray<FQueuedMovieToplay>
function ACinemaProjector:GetMoviesToPlayInOrder() end
---@return TArray<FQueuedMovieToplay>
function ACinemaProjector:GetMoviesToPlay() end
---@return boolean
function ACinemaProjector:GetMovieLoopActive() end
---@param Hour int32
---@return boolean
function ACinemaProjector:GetIsHourOccupied(Hour) end
---@return boolean
function ACinemaProjector:GetIsAnyMovieToPlay() end
function ACinemaProjector:EndMovie() end
---@param MovieToCancel FQueuedMovieToplay
function ACinemaProjector:CancelMovie(MovieToCancel) end
---@param MovieToPlay FQueuedMovieToplay
---@return boolean
function ACinemaProjector:AddMovieTOPlay(MovieToPlay) end


---@class ACinemaTicketBarrier : AActor
---@field bBarrierOpen boolean
---@field bAccessTicketsOnly boolean
---@field bAutomaticValidation boolean
local ACinemaTicketBarrier = {}

---@param bOpen boolean
function ACinemaTicketBarrier:OpenBarrier(bOpen) end


---@class ACinemaTrashVolume : AVolume
---@field CinemaHUD TSoftClassPtr<UGSSBaseWidget>
---@field CinemaHUDWidget UGSSBaseWidget
---@field HUD AGSS_NewHud
---@field bIsPlayerInsideVolume boolean
---@field bIsTrashHighlighted boolean
---@field bAreStainsHighlighted boolean
---@field bIsPlayerHoldingShowButton boolean
---@field bIsHoldingTrashBag boolean
---@field bIsHoldingBroom boolean
---@field CinemaManager ADLCDriveInCinemaManager
local ACinemaTrashVolume = {}

function ACinemaTrashVolume:UpdateTrashHighlight() end
---@param OverlappedActor AActor
---@param OtherActor AActor
function ACinemaTrashVolume:OnOverlapEnd(OverlappedActor, OtherActor) end
---@param OverlappedActor AActor
---@param OtherActor AActor
function ACinemaTrashVolume:OnOverlapBegin(OverlappedActor, OtherActor) end
---@param ItemActor AActor
function ACinemaTrashVolume:OnItemEquipped(ItemActor) end
---@param IsPressed boolean
function ACinemaTrashVolume:OnHighlightCinemaTrash(IsPressed) end


---@class ACommunicationDevice : AKeyItem
---@field MainSkeletalMesh USkeletalMeshComponent
local ACommunicationDevice = {}



---@class AComputer : AInteractableActor
local AComputer = {}


---@class AConsumables : AGasStationProduct
local AConsumables = {}


---@class ACousinHouse : AInteractableBuilding
local ACousinHouse = {}


---@class ACrane : AInteractableBuilding
---@field bMagnetActive boolean
---@field bHideTooltips boolean
---@field bHideHighlights boolean
---@field bReservedBySean boolean
---@field CurrentCameraIndex int32
---@field MagnetArrowComponent UArrowComponent
---@field NpcEnteringPosition UArrowComponent
---@field NpcMoveToPosition UArrowComponent
---@field PlayerExitPosition UArrowComponent
---@field SkeletalMesh USkeletalMeshComponent
---@field MagnetArmComponent UMagnetArmComponent
---@field OnCraneMoveSideways FCraneOnCraneMoveSideways
---@field OnInputSetup FCraneOnInputSetup
---@field OnSeanMagnetReachedLocation FCraneOnSeanMagnetReachedLocation
---@field OnCameraChanged FCraneOnCameraChanged
---@field OnHighlightsToggled FCraneOnHighlightsToggled
---@field bGamepadConnected boolean
---@field UnlockedTag FGameplayTag
---@field WreckDeliveryCollisionZone TSoftObjectPtr<AActor>
---@field CameraRotationSpeed float
---@field CameraMinVerticalRotation float
---@field CameraMaxVerticalRotation float
---@field DeactivateAnimInstanceDelay float
---@field SeanMoveAcceptableDistance float
---@field SeanMoveAcceptableYaw float
---@field SeanDesiredZDistance float
---@field AutoArmDesiredZ float
---@field AutoArmDesiredZAcceptableDistance float
---@field CollisionChannelToIgnore ECollisionChannel
---@field CyllinderActionRange UStaticMeshComponent
---@field bMinigameActive boolean
---@field MinigameWidgetClass TSubclassOf<UUserWidget>
---@field MinigameWidgetRef UUserWidget
---@field CollisionMesh UBoxComponent
---@field CraneAnimInstance UCraneAnimInstance
---@field CurrentCameraHorizontalRotateInput float
---@field CurrentCameraVerticalRotateInput float
---@field SeanMovingToDestination boolean
---@field SeanResettingYaw boolean
---@field bDeliveryZoneOccupied boolean
---@field bStartedInZoneOccupied boolean
---@field SeanTargetLocation FVector
---@field DeactivateAnimInstanceTimer FTimerHandle
---@field Cameras TArray<UCraneCamera>
---@field ActionManagerSubsystem UActionManagerSubsystem
---@field DeliveryCollisionZoneBox UBoxComponent
local ACrane = {}

function ACrane:ToggleTooltipsVisiblity() end
function ACrane:ToggleHighlights() end
function ACrane:SetupInput() end
---@param NewVisibility boolean
function ACrane:SetTooltipsVisiblityEvent(NewVisibility) end
---@param NewEnabled boolean
function ACrane:SetMovementEnabled(NewEnabled) end
---@param bNewActive boolean
function ACrane:SetMinigameActive(bNewActive) end
---@param IsZoneOccupied boolean
function ACrane:SetDeliveryZoneOccupied(IsZoneOccupied) end
---@param NewEnabled boolean
---@param IsBeginPlay boolean
function ACrane:SetCraneEnabled(NewEnabled, IsBeginPlay) end
---@param CameraIndex int32
function ACrane:SetActiveCamera(CameraIndex) end
---@param TargetLocation FVector
function ACrane:SeanMoveMagnetToLocation(TargetLocation) end
---@param Value float
function ACrane:RotateCameraVerticalPad(Value) end
---@param Value float
function ACrane:RotateCameraVertical(Value) end
---@param Value float
function ACrane:RotateCameraHorizontalPad(Value) end
---@param Value float
function ACrane:RotateCameraHorizontal(Value) end
function ACrane:ResetCarWrecks() end
function ACrane:OpenCloseShredder() end
---@param bNewActive boolean
function ACrane:OnSetMinigameActive(bNewActive) end
function ACrane:OnSeanExitCrane() end
function ACrane:OnSeanEnterCrane() end
function ACrane:OnPlayerInteraction() end
function ACrane:OnKeybindingsReset() end
---@param GameLoaded boolean
function ACrane:OnFinishGameLoaded(GameLoaded) end
---@param Value float
function ACrane:MoveSideways(Value) end
---@return boolean
function ACrane:IsInsideDeliveryCollisionZone() end
---@return FVector
function ACrane:GetMagnetToLocation() end
---@return boolean
function ACrane:GetIsMinigameActive() end
---@return boolean
function ACrane:GetDeliveryZoneOccupied() end
---@return UCraneAnimInstance
function ACrane:GetAnimInstance() end
---@return UCraneCamera
function ACrane:GetActiveCamera() end
function ACrane:DisplayCraneReservedBySeanError() end
function ACrane:DeactivateAnimInstance() end
function ACrane:ClearInput() end
function ACrane:ChangeToNextCamera() end
function ACrane:CancelMinigame() end


---@class ACraneShredder : ACarWreckPlaceableArea
---@field OnCrushingStarted FCraneShredderOnCrushingStarted
---@field OnCrushingFinished FCraneShredderOnCrushingFinished
---@field ShouldCloseOnExitFromCrane boolean
---@field SkeletalMesh USkeletalMeshComponent
---@field MagnetTargetPosition UArrowComponent
---@field MagnetWaitPosition UArrowComponent
---@field SlipForceDirection UArrowComponent
---@field CraneBindingLocation UArrowComponent
---@field LastWreckColor FLinearColor
---@field CleanWreckColor FLinearColor
---@field LidSlipForce float
---@field DisableLidOverlapTime float
---@field CrusherUnlockedTag FGameplayTag
---@field CrusherLockedErrorText FText
---@field CrusherLockedErrorDuration float
---@field DisableLidOverlapTimer FTimerHandle
---@field ClosedLidCollision UBoxComponent
---@field OpenLidCollision UBoxComponent
---@field OpenLidOverlap UBoxComponent
---@field ShreddedWreck AJunkyardCarWreck
---@field ShreddingTime float
---@field ShredderAnimInstance UCarCrusher_AnimInstance
---@field LoadedWreck AActor
local ACraneShredder = {}

function ACraneShredder:OpenShredder() end
---@param IgnoreLocked boolean
function ACraneShredder:OpenCloseShredder(IgnoreLocked) end
function ACraneShredder:OnOpenAnimationCompleted() end
function ACraneShredder:OnCrushingCompleted() end
function ACraneShredder:OnCloseAnimationCompleted() end
---@return boolean
function ACraneShredder:IsOpen() end
---@return boolean
function ACraneShredder:IsCrushingCar() end
---@return UCarCrusher_AnimInstance
function ACraneShredder:GetAnimInstance() end
---@param ExperienceGained int32
function ACraneShredder:CreateExperiencePopup(ExperienceGained) end
function ACraneShredder:CloseShredder() end


---@class ACrashSite : AActor
---@field LandscapePiece UStaticMeshComponent
local ACrashSite = {}



---@class ACrashSiteManager : AActor
---@field DefaultSceneRoot USceneComponent
---@field Marker UStaticMeshComponent
---@field Marker1 UStaticMeshComponent
---@field Marker2 UStaticMeshComponent
---@field Marker3 UStaticMeshComponent
---@field SmokeActor UChildActorComponent
---@field CrashSitesToSpawn TArray<TSoftClassPtr<ACrashSite>>
---@field BlankCrashSites TArray<TSoftClassPtr<ACrashSite>>
---@field CreatedCrashSites TArray<ACrashSite>
---@field bSmokeParticleEnabled boolean
local ACrashSiteManager = {}

function ACrashSiteManager:ShowSmokeParticle() end
---@param bActive boolean
function ACrashSiteManager:SetSmokeParticleActive(bActive) end
---@param bActive boolean
function ACrashSiteManager:LoadSmokeParticle(bActive) end
function ACrashSiteManager:HideSmokeParticle() end
---@param bQuestSpawn boolean
function ACrashSiteManager:CreateCrashSites(bQuestSpawn) end


---@class ACustomizationHousePart : AActor
---@field MainMesh UStaticMeshComponent
---@field DynamicMaterials TArray<FWallMaterialStruct>
---@field Material0 FSoftObjectPath
---@field Material1 FSoftObjectPath
---@field MaterialWallpaper FSoftObjectPath
---@field LevelExist TArray<int32>
---@field CameraActor AActor
---@field InteractableDecals TArray<AInteractableDecal>
---@field WallSnapPoint ASnapPoint
---@field OutsideDecorationSnapPoint ASnapPoint
---@field SnapPointLocationSphere UStaticMeshComponent
---@field OutsideDecorationSnapPointLocationSphere UStaticMeshComponent
---@field SnapPointClass TSubclassOf<ASnapPoint>
---@field SnapPointLocation FVector
---@field StructureType EStructureType
---@field AvaliableStructureTypeChange EStructureType
---@field bIsPartPaintable boolean
---@field bIsGasStationPart boolean
---@field bSnapPointInsideBlocked boolean
---@field bSnapPointOutsideBlocked boolean
---@field bWallTypeEdited boolean
---@field OriginalPathName FString
---@field KulkaClass TSubclassOf<ARelaxSpot>
---@field Kulka1 ARelaxSpot
---@field Kulka2 ARelaxSpot
---@field NoShelfZone UBoxComponent
local ACustomizationHousePart = {}

---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function ACustomizationHousePart:UseItem(Pawn, Throw, AimingTime) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ACustomizationHousePart:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param CheckWallSide EWallSide
---@param NewColour FLinearColor
---@param ColorType EColorType
function ACustomizationHousePart:SetWallEndColor(CheckWallSide, NewColour, ColorType) end
---@param CheckWallSide EWallSide
---@param NewCurrentDurability float
---@param NewMaxDurability float
---@param NewColour FLinearColor
---@param ColorType EColorType
function ACustomizationHousePart:SetWallColour(CheckWallSide, NewCurrentDurability, NewMaxDurability, NewColour, ColorType) end
---@param _OriginalPathName FString
function ACustomizationHousePart:SetOriginalPathName(_OriginalPathName) end
---@param DestroyedActor AActor
function ACustomizationHousePart:RemoveDestroyedDecals(DestroyedActor) end
function ACustomizationHousePart:RefreshPaintDurability() end
---@param WallSide EWallSide
function ACustomizationHousePart:PlayCustomizationHousePartChangeVFX(WallSide) end
---@param CheckWallSide EWallSide
---@param NewCurrentDurability float
---@param NewMaxDurability float
---@param NewColour FLinearColor
---@param ColorType EColorType
function ACustomizationHousePart:PaintingWall(CheckWallSide, NewCurrentDurability, NewMaxDurability, NewColour, ColorType) end
---@param Pawn APawn
function ACustomizationHousePart:PaintingEvent(Pawn) end
---@param Hours int32
function ACustomizationHousePart:OnTimeUpdated_Hours(Hours) end
---@param CheckWallSide EWallSide
---@param NewCurrentDurability float
---@param NewMaxDurability float
---@param NewColour FLinearColor
---@param ColorType EColorType
---@param WallpaperInstance UMaterialInstance
function ACustomizationHousePart:LoadWallColor(CheckWallSide, NewCurrentDurability, NewMaxDurability, NewColour, ColorType, WallpaperInstance) end
---@param CheckWallSide EWallSide
---@return FLinearColor
function ACustomizationHousePart:GetWallColor(CheckWallSide) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function ACustomizationHousePart:GetPathPoint(GSSWheeledVehicle) end
---@param CheckWallSide EWallSide
---@return float
function ACustomizationHousePart:GetMaxDurability(CheckWallSide) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function ACustomizationHousePart:GetInteractiveTransform(Actor, RotateToTransform) end
---@param CheckWallSide EWallSide
---@param NewColour FLinearColor
---@return float
function ACustomizationHousePart:GetDurabilityByColor(CheckWallSide, NewColour) end
---@param CheckWallSide EWallSide
---@return float
function ACustomizationHousePart:GetCurrentDurability(CheckWallSide) end
---@param CheckWallSide EWallSide
---@return FWallMaterialStruct
function ACustomizationHousePart:GetCompatibileMaterialParams(CheckWallSide) end
---@param CheckWallSide EWallSide
---@return EColorType
function ACustomizationHousePart:GetColorType(CheckWallSide) end
---@return EWallSide
function ACustomizationHousePart:GetClosestWallSide() end
---@param CheckWallSide EWallSide
---@return TArray<USceneComponent>
function ACustomizationHousePart:GetAllSpawnPointsLocation(CheckWallSide) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ACustomizationHousePart:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param SnapPoint UStaticMeshComponent
---@param bDisable boolean
function ACustomizationHousePart:DisableSnapPointSpawn(SnapPoint, bDisable) end
---@param Pawn APawn
function ACustomizationHousePart:DisableInteractionInfo(Pawn) end
---@param NewColor FPaintingColor
---@param Side EWallSide
---@return boolean
function ACustomizationHousePart:ChangePaintType(NewColor, Side) end
---@param DennisDecal AInteractableDecal
function ACustomizationHousePart:AddDecal(DennisDecal) end
---@param Amount float
function ACustomizationHousePart:AddCurrentDurability(Amount) end


---@class ADLCAirstripManager : AActor
---@field ObjectivesStartedSinceLoadingGame int32
---@field CanStartAirstripTag FGameplayTag
---@field MainGameQuestToTriggerQuestline UQuestBase
---@field FinishedAirStripCampain FGameplayTag
---@field bTryStartingQuestLine boolean
---@field bAirstripCampaingCompleted boolean
---@field JoeAirplane AAirplane_TapingMinigame
---@field JoeClass TSoftClassPtr<AJoeCharacter>
---@field JoePlaces TArray<FJoePlaces>
---@field JoeGraph UDialogueGraph
---@field JoeDialoguesPlayed TArray<int32>
---@field HighlightActors TArray<AActor>
---@field JoeCrashingEvent TSoftClassPtr<UGSSEvent>
---@field PlayerAreaLevelName FName
---@field Airport TSoftObjectPtr<AAirport>
---@field Barn TSoftObjectPtr<ABarn>
---@field TradeCenter TSoftObjectPtr<ATradeCenter>
---@field TowysGarage TSoftObjectPtr<ATowysGarage>
---@field AirstripStorage TSoftObjectPtr<AAirstripStorage>
---@field RadioTower TSoftObjectPtr<ARadioTower>
---@field DLCTradingSystemManager TSoftObjectPtr<ADLCTradingSystemManager>
---@field CrashSiteManager TSoftObjectPtr<ACrashSiteManager>
---@field SpidersWebSpawner TSoftObjectPtr<AWebSpawner>
---@field RandomDialoguesManager TSoftObjectPtr<AAirstripRandomDialoguesManager>
---@field Towy TSoftObjectPtr<ATowy>
---@field PlaneDropSpot TSoftObjectPtr<APlaneDropPlace>
---@field AirstripStuff TArray<AActor>
---@field MinAirportSandstormHoursTime int32
---@field MaxAirportSandstormHoursTime int32
---@field SandstormDurationMinutes int32
---@field bIsSandstormActive boolean
---@field JoeAirplaneSoftClass TSoftClassPtr<AAirplane_TapingMinigame>
---@field BackupGameplayTagsToUnlockAfterCompletingAirstripCampain FGameplayTagContainer
---@field BackupUITagsToUnlockAfterCompletingAirstripCampain FGameplayTagContainer
---@field OnAirportSandstormStarted FDLCAirstripManagerOnAirportSandstormStarted
---@field OnAirportSandstormFinished FDLCAirstripManagerOnAirportSandstormFinished
---@field OnAirstripLoaded FDLCAirstripManagerOnAirstripLoaded
---@field SavedJoePlaneDEBUG FSavedJoePlane
---@field MaxDistanceToTriggerDialogue float
---@field FemaleTradingPilots FTradingPilots
---@field MaleTradingPilots FTradingPilots
---@field BeardChance float
---@field FemaleTradingPilotsInfo UDataTable
---@field MaleTradingPilotsInfo UDataTable
local ADLCAirstripManager = {}

function ADLCAirstripManager:TryLoadMissingLevel() end
---@param NewValue boolean
function ADLCAirstripManager:SetIsSandstormActive(NewValue) end
function ADLCAirstripManager:SaveJoePlaneDEBUG() end
function ADLCAirstripManager:OnQuestsLoaded() end
---@param ObjectiveStarted UObjectiveBase
function ADLCAirstripManager:OnObjectiveStarted(ObjectiveStarted) end
---@param bGameLoaded boolean
function ADLCAirstripManager:OnGameLoaded(bGameLoaded) end
function ADLCAirstripManager:LoadJoePlaneDEBUG() end
---@return TSoftObjectPtr<ATradeCenter>
function ADLCAirstripManager:GetTradeCenter() end
---@return TSoftObjectPtr<ATowysGarage>
function ADLCAirstripManager:GetTowysGarage() end
---@return TSoftObjectPtr<ATowy>
function ADLCAirstripManager:GetTowy() end
---@return TSoftObjectPtr<AAirstripRandomDialoguesManager>
function ADLCAirstripManager:GetRandomDialoguesManager() end
---@return TSoftObjectPtr<ARadioTower>
function ADLCAirstripManager:GetRadioTower() end
---@return UDataTable
function ADLCAirstripManager:GetMaleTradingPilotsInfo() end
---@return FTradingPilots
function ADLCAirstripManager:GetMaleTradingPilots() end
---@param TaskPlace EJoeTasksPlaces
---@return TSoftObjectPtr<AActor>
function ADLCAirstripManager:GetJoeTaskTargetActor(TaskPlace) end
---@param WorldContextObject UObject
---@return AGSSNPAICharacterBase
function ADLCAirstripManager:GetJoeCharacter(WorldContextObject) end
---@return boolean
function ADLCAirstripManager:GetIsSandstormActive() end
---@return UDataTable
function ADLCAirstripManager:GetFemaleTradingPilotsInfo() end
---@return FTradingPilots
function ADLCAirstripManager:GetFemaleTradingPilots() end
---@return TSoftObjectPtr<ADLCTradingSystemManager>
function ADLCAirstripManager:GetDLCTradingSystemManager() end
---@return TSoftObjectPtr<ACrashSiteManager>
function ADLCAirstripManager:GetCrashSiteManager() end
---@return float
function ADLCAirstripManager:GetBeardChance() end
---@return TSoftObjectPtr<ABarn>
function ADLCAirstripManager:GetBarn() end
---@return TArray<AActor>
function ADLCAirstripManager:GetAirstripStuff() end
---@return TSoftObjectPtr<AAirstripStorage>
function ADLCAirstripManager:GetAirstripStorage() end
---@return TSoftObjectPtr<AAirport>
function ADLCAirstripManager:GetAirport() end
---@param Actor AActor
function ADLCAirstripManager:AddToAirstripStuff(Actor) end
function ADLCAirstripManager:AddDLCItemsToInventory() end


---@class ADLCDriveInCinemaManager : AActor
---@field WatchedMovieResults TArray<FWatchedMovieResult>
---@field RenownPoints int32
---@field CorrectTicketsCombo int32
---@field bDontShowScheduleWarning boolean
---@field bDontShowCustomMoviePopup boolean
---@field bDontShowCancelMoviePopup boolean
---@field CustomMovieParameters FMovieParameters
---@field CustomMoviePath FString
---@field bCustomMovieSetup boolean
---@field bUseFilePickerPlugin boolean
---@field RenownMultiplier float
---@field CinemaVehiclesNum int32
---@field OccupiedHours TArray<int32>
---@field TrashItems TArray<ATrashItemBase>
---@field TrashDecals TArray<AInteractableDecal>
---@field CurrentRenownLevel int32
---@field CinemaName FText
---@field RenownDataTable UDataTable
---@field TicketSettings UDA_CinemaTickets
---@field PopcornSettings UDA_CinemaPopcorn
---@field CustomerSettings UDA_CinemaCustomers
---@field EventSettings UDA_CinemaEvents
---@field MoviesDataTable UDataTable
---@field CustomMovieMediaSource UFileMediaSource
---@field bTimelineEnabled boolean
---@field CinemaBase TSoftObjectPtr<AInteractableBuilding>
---@field CinemaProjector ACinemaProjector
---@field PopcornMachine APopcornMachine
---@field TicketBarrier ACinemaTicketBarrier
---@field CinemaScreen AActor
---@field DennisPuppet ADennisPuppet
---@field CinemaLights TArray<AActor>
---@field PopcornBoxes TArray<AActor>
---@field RenownThresholds TArray<float>
---@field RenownThresholdsClamped TArray<float>
---@field MinRenownMultiplier float
---@field MaxRenownMultiplier float
---@field TurnLightsOffTime float
---@field CinemaQuestlineStartedTag FGameplayTag
---@field MainGameQuestToTriggerQuestline UQuestBase
---@field CinemaTrashMaterialCollection UMaterialParameterCollection
---@field CinemaTrashMaterialParameterName FName
---@field OnCinemaRenownPointsAdded FDLCDriveInCinemaManagerOnCinemaRenownPointsAdded
---@field OnPopcornComboChanged FDLCDriveInCinemaManagerOnPopcornComboChanged
---@field OnRenownLevelUp FDLCDriveInCinemaManagerOnRenownLevelUp
---@field OnDirtyUpdated FDLCDriveInCinemaManagerOnDirtyUpdated
---@field OnCinemaMutedUpdated FDLCDriveInCinemaManagerOnCinemaMutedUpdated
---@field OnCustomerArrived FDLCDriveInCinemaManagerOnCustomerArrived
---@field OnCustomerValidated FDLCDriveInCinemaManagerOnCustomerValidated
---@field OnCinemaMuteMusicVolumeEntered FDLCDriveInCinemaManagerOnCinemaMuteMusicVolumeEntered
---@field OnCinemaMuteMusicVolumeLeft FDLCDriveInCinemaManagerOnCinemaMuteMusicVolumeLeft
---@field bQuestsLoaded boolean
---@field bGameInstanceLoaded boolean
---@field bIsCinemaMuted boolean
---@field CurrentPopcornCombo int32
---@field CurrentPopcornHighScore int32
---@field CustomerDriveOffOrder TArray<AAICharacterBase>
local ADLCDriveInCinemaManager = {}

---@param SpawnTransform FTransform
---@param bDecal boolean
---@return boolean
function ADLCDriveInCinemaManager:TrySpawnTrash(SpawnTransform, bDecal) end
function ADLCDriveInCinemaManager:TrySpawnCinemaCustomer() end
---@param NewScore int32
---@return boolean
function ADLCDriveInCinemaManager:TrySetPopcornHighScore(NewScore) end
---@param OutQueuedMovie FQueuedMovieToplay
---@return boolean
function ADLCDriveInCinemaManager:TryGetNextQueuedMovie(OutQueuedMovie) end
---@param OutParameters FMovieParameters
---@return boolean
function ADLCDriveInCinemaManager:TryGetCurrentMovieParameters(OutParameters) end
---@param OutQueuedMovie FQueuedMovieToplay
---@return boolean
function ADLCDriveInCinemaManager:TryGetCurrentlyPlayingQueuedMovie(OutQueuedMovie) end
---@param Customer AAICharacterBase
---@param bDecal boolean
---@return boolean
function ADLCDriveInCinemaManager:TryDropTrashByCustomer(Customer, bDecal) end
---@param NewRenownLevel int32
function ADLCDriveInCinemaManager:ShowRenownLevelUpPopup(NewRenownLevel) end
---@param MoneyAmount float
---@param RenownAmount float
---@param DetailedYieldType EEconomyDetailedYieldType
function ADLCDriveInCinemaManager:ShowCinemaRewardPopup(MoneyAmount, RenownAmount, DetailedYieldType) end
---@param NewCombo int32
function ADLCDriveInCinemaManager:SetPopcornCombo(NewCombo) end
---@param NewValue float
---@return float
function ADLCDriveInCinemaManager:SetNewRenownMultiplier(NewValue) end
---@param IsMuted boolean
function ADLCDriveInCinemaManager:SetCinemaMuted(IsMuted) end
---@param bTrendingEvent boolean
---@param bRushHourEvent boolean
function ADLCDriveInCinemaManager:RemoveExistingEvents(bTrendingEvent, bRushHourEvent) end
function ADLCDriveInCinemaManager:OnWrongTicketValidated() end
function ADLCDriveInCinemaManager:OnQuestlinesLoaded_SpecialCase() end
function ADLCDriveInCinemaManager:OnQuestlinesLoaded() end
---@param RefillPrice float
function ADLCDriveInCinemaManager:OnPopcornRefilled(RefillPrice) end
---@param bGameLoaded boolean
function ADLCDriveInCinemaManager:OnGameLoaded(bGameLoaded) end
---@param bCorrectly boolean
function ADLCDriveInCinemaManager:OnCustomerRejected(bCorrectly) end
function ADLCDriveInCinemaManager:OnCustomerArrivedAtCinema() end
function ADLCDriveInCinemaManager:OnCorrectTicketValidated() end
---@return boolean
function ADLCDriveInCinemaManager:IsTrendingEventActive() end
---@return boolean
function ADLCDriveInCinemaManager:IsRushHourEventActive() end
---@return boolean
function ADLCDriveInCinemaManager:IsNextLevelAvaible() end
---@return boolean
function ADLCDriveInCinemaManager:IsAnyCustomerWatchingInCinema() end
---@param bQuestlineFinished boolean
function ADLCDriveInCinemaManager:HandleQuestlineActivation(bQuestlineFinished) end
---@return TArray<FWatchedMovieResult>
function ADLCDriveInCinemaManager:GetWatchedResults() end
---@return UTrendingEvent
function ADLCDriveInCinemaManager:GetTrendingEventRef() end
---@return float
function ADLCDriveInCinemaManager:GetTicketMoneyBonus() end
---@return URushHourEvent
function ADLCDriveInCinemaManager:GetRushHourEventRef() end
---@return int32
function ADLCDriveInCinemaManager:GetRequiredRenownForNextLevel() end
---@return int32
function ADLCDriveInCinemaManager:GetRenownLevel() end
---@return float
function ADLCDriveInCinemaManager:GetRenownBonus() end
---@return float
function ADLCDriveInCinemaManager:GetPopcornMoneyBonus() end
---@return int32
function ADLCDriveInCinemaManager:GetPopcornHighScore() end
---@return int32
function ADLCDriveInCinemaManager:GetPopcornCombo() end
---@param MovieIndex int32
---@return FMovieParameters
function ADLCDriveInCinemaManager:GetMovieParametersByIndex(MovieIndex) end
---@return boolean
function ADLCDriveInCinemaManager:GetIsCinemaMuted() end
---@param Customer AAICharacterBase
---@return int32
function ADLCDriveInCinemaManager:GetCustomerDriveOffOrder(Customer) end
---@param bCustomer boolean
---@return FTicketData
function ADLCDriveInCinemaManager:GenerateTicketData(bCustomer) end
---@param bShow boolean
function ADLCDriveInCinemaManager:CreateNotification(bShow) end
---@return int32
function ADLCDriveInCinemaManager:CheckForRenownPointsNeeded() end
---@return int32
function ADLCDriveInCinemaManager:CheckForRenownLevelNeeded() end
---@return boolean
function ADLCDriveInCinemaManager:CheckForRenownLevel() end
function ADLCDriveInCinemaManager:ArrangeCustomerDriveOffOrder() end
---@param Movie FQueuedMovieToplay
function ADLCDriveInCinemaManager:AddToWatchedMovies(Movie) end
---@param PointsToAdd int32
---@param DetailedYieldType EEconomyDetailedYieldType
---@return int32
function ADLCDriveInCinemaManager:AddRenownPoints(PointsToAdd, DetailedYieldType) end
---@param DetailedYieldType EEconomyDetailedYieldType
---@param Quantity float
---@param money float
---@param bTrackEconomy boolean
---@param MoneyType EMoneyType
---@param ForcedYieldType EEconomyGeneralYieldType
---@return float
function ADLCDriveInCinemaManager:AddCinemaMoney(DetailedYieldType, Quantity, money, bTrackEconomy, MoneyType, ForcedYieldType) end


---@class ADLCTradingSystemManager : AActor
---@field OnSkillUsed FDLCTradingSystemManagerOnSkillUsed
---@field OnSkillReadyToUse FDLCTradingSystemManagerOnSkillReadyToUse
---@field OnSkillCooldownUpdated FDLCTradingSystemManagerOnSkillCooldownUpdated
---@field OnTradeAccepted FDLCTradingSystemManagerOnTradeAccepted
---@field OnTradeItemsReceived FDLCTradingSystemManagerOnTradeItemsReceived
---@field OnGraditudeItemGot FDLCTradingSystemManagerOnGraditudeItemGot
---@field CurrentAirplane ATradingAirplane
---@field SpawnedAirplanes TArray<ATradingAirplane>
---@field ChanceTiers TArray<FChanceTier>
---@field SuccessfulTradesLevels TArray<FSuccessfulTradesLevel>
---@field PilotItemsQuantityTradeValues TArray<FPilotItemsDiscount>
---@field CurrentSuccessfulTradesNumber int32
---@field CurrentChance float
---@field CurrentSuccessfulTradesLevel FSuccessfulTradesLevel
---@field TradingSkills TArray<FTradingSkill>
---@field UnlockedSkills TArray<FUnlockedSkill>
---@field UsedSkills TArray<FUnlockedSkill>
---@field TradingBoosts TArray<FTradingBoost>
---@field UnavailableBoosts TArray<FTradingBoost>
---@field ActiveBoost FTradingBoost
---@field bIsTutorialItemsAdded boolean
---@field IndexOfSameDeniedOffer int32
local ADLCTradingSystemManager = {}

---@param SkillToUse ETradingSkill
---@param bDebug boolean
---@return boolean
function ADLCTradingSystemManager:UseSkill(SkillToUse, bDebug) end
---@param Item FGeneratedItem
---@param NewValue int32
---@param bPlayerItem boolean
---@param ItemIndex int32
function ADLCTradingSystemManager:UpdatePickedProductAmount(Item, NewValue, bPlayerItem, ItemIndex) end
---@param AddedImpatience float
---@return float
function ADLCTradingSystemManager:UpdateImpatienceMeter(AddedImpatience) end
---@return float
function ADLCTradingSystemManager:UpdateChanceValue() end
---@param SkillToUnlock ETradingSkill
---@param bDebug boolean
---@return boolean
function ADLCTradingSystemManager:UnlockSkill(SkillToUnlock, bDebug) end
---@param AddedImpatience float
---@param InventoryType EInventoryType
---@return boolean
function ADLCTradingSystemManager:TryToTrade(AddedImpatience, InventoryType) end
---@param SkillsToSet TArray<FUnlockedSkill>
function ADLCTradingSystemManager:SetUsedSkills(SkillsToSet) end
---@param SkillsToSet TArray<FUnlockedSkill>
function ADLCTradingSystemManager:SetUnlockedTradingSkills(SkillsToSet) end
---@param UnavailableBoostsToSet TArray<FTradingBoost>
function ADLCTradingSystemManager:SetUnavailableBoosts(UnavailableBoostsToSet) end
---@param SpawnedAirplanesToSet TArray<ATradingAirplane>
function ADLCTradingSystemManager:SetSpawnedAirplanes(SpawnedAirplanesToSet) end
---@param AirplaneToSet ATradingAirplane
function ADLCTradingSystemManager:SetPlaneIfBoostActive(AirplaneToSet) end
---@param NewValue boolean
function ADLCTradingSystemManager:SetIsTutorialItemsAdded(NewValue) end
---@param CurrentSuccessfulTradesNumberToSet int32
function ADLCTradingSystemManager:SetCurrentSuccessfulTradesNumber(CurrentSuccessfulTradesNumberToSet) end
---@param CurrentSuccessfulTradesLevelToSet FSuccessfulTradesLevel
function ADLCTradingSystemManager:SetCurrentSuccessfulTradesLevel(CurrentSuccessfulTradesLevelToSet) end
---@param Airplane ATradingAirplane
function ADLCTradingSystemManager:SetCurrentAirplane(Airplane) end
---@param BoostToSet FTradingBoost
function ADLCTradingSystemManager:SetActiveBoost(BoostToSet) end
---@param SkillToReset FUnlockedSkill
function ADLCTradingSystemManager:ResetSkillCooldown(SkillToReset) end
---@param Airplane ATradingAirplane
function ADLCTradingSystemManager:ResetAfterAirplaneTookOff(Airplane) end
---@param Item FGeneratedItem
---@param bPlayerItem boolean
function ADLCTradingSystemManager:RemoveFromPickedTable(Item, bPlayerItem) end
---@param DLCName EDLCName
---@param bActivated boolean
function ADLCTradingSystemManager:OnDLCActivationStateChanged(DLCName, bActivated) end
function ADLCTradingSystemManager:LevelUpCurrentSuccessfulTradesLevel() end
---@param ItemToCheck TSoftClassPtr<AItem>
---@param NumberOfItemsNeeded int32
---@return boolean
function ADLCTradingSystemManager:IsPlayerHasEnoughProduct(ItemToCheck, NumberOfItemsNeeded) end
---@return TArray<FUnlockedSkill>
function ADLCTradingSystemManager:GetUsedSkills() end
---@return TArray<FUnlockedSkill>
function ADLCTradingSystemManager:GetUnlockedTradingSkills() end
---@param SkillToGet ETradingSkill
---@param FoundSkill FUnlockedSkill
---@return boolean
function ADLCTradingSystemManager:GetUnlockedSkill(SkillToGet, FoundSkill) end
---@return TArray<FTradingBoost>
function ADLCTradingSystemManager:GetUnavailableBoosts() end
---@return TArray<FSuccessfulTradesLevel>
function ADLCTradingSystemManager:GetSuccessfulTradesLevels() end
---@return TArray<ATradingAirplane>
function ADLCTradingSystemManager:GetSpawnedAirplanes() end
---@return boolean
function ADLCTradingSystemManager:GetIsTutorialItemsAdded() end
---@return int32
function ADLCTradingSystemManager:GetCurrentSuccessfulTradesNumber() end
---@return FSuccessfulTradesLevel
function ADLCTradingSystemManager:GetCurrentSuccessfulTradesLevel() end
---@return ATradingAirplane
function ADLCTradingSystemManager:GetCurrentAirplane() end
---@return FTradingBoost
function ADLCTradingSystemManager:GetActiveBoost() end
---@param TimeStruct FTimeStruct
function ADLCTradingSystemManager:CooldownsTimer(TimeStruct) end
---@param ChanceValue float
---@return FText
function ADLCTradingSystemManager:CheckTierLevel(ChanceValue) end
---@return boolean
function ADLCTradingSystemManager:CheckIfTheSameItemsOfDeniedOffers() end
---@param SkillToCheck ETradingSkill
---@return boolean
function ADLCTradingSystemManager:CheckIfSkillUsed(SkillToCheck) end
---@param SkillToCheck ETradingSkill
---@return boolean
function ADLCTradingSystemManager:CheckIfSkillUnlocked(SkillToCheck) end
function ADLCTradingSystemManager:CheckIfSkillUnlockAvailable() end
---@return boolean
function ADLCTradingSystemManager:CheckIfNewSuccessfulTradesLevelAvailable() end
---@return boolean
function ADLCTradingSystemManager:CheckIfCanTrade() end
---@param InventoryType EInventoryType
---@param TutorialTrade boolean
function ADLCTradingSystemManager:CheckIfAllItemsLoaded(InventoryType, TutorialTrade) end
function ADLCTradingSystemManager:CancelBoost() end
function ADLCTradingSystemManager:AddTutorialItems() end
---@param SpawnedAirplaneToAdd ATradingAirplane
function ADLCTradingSystemManager:AddSpawnedAirplane(SpawnedAirplaneToAdd) end
function ADLCTradingSystemManager:AddNewDeniedOffer() end
function ADLCTradingSystemManager:ActivateBoost() end
---@param InventoryType EInventoryType
---@param TutorialTrade boolean
function ADLCTradingSystemManager:AcceptTrade(InventoryType, TutorialTrade) end


---@class ADanceFloor : AInteractableBuilding
---@field PartyNPCSoundCues TArray<FPartySoundCue>
---@field PartyEndNPCSoundCues TArray<FPartySoundCue>
---@field Music UAudioComponent
---@field NPCSounds UAudioComponent
---@field MusicDuration float
---@field PartySpot APartySpot
---@field NumberOfDancingNPC int32
---@field PartyNPCAmount int32
---@field SpotsToDance TArray<FSpotToDance>
local ADanceFloor = {}

function ADanceFloor:StopAllSounds() end
function ADanceFloor:StartDancing() end
---@param OutSpotsToDance TArray<FSpotToDance>
function ADanceFloor:SortSpotsToDance(OutSpotsToDance) end
function ADanceFloor:ResetNumberOfDancingNPC() end
function ADanceFloor:PlaySound() end
function ADanceFloor:PartyEndNPCSounds() end
function ADanceFloor:OnUfoUsed() end
---@param Transform FTransform
function ADanceFloor:OnPartyUfoLoaded(Transform) end
---@param bIsGasStationOpen boolean
function ADanceFloor:OnCloseOpenGasStation(bIsGasStationOpen) end
function ADanceFloor:MusicStopped() end
---@param AICharacter AAICharacterBase
---@return boolean
function ADanceFloor:LeaveSpot(AICharacter) end
---@param NumberOfFullBaskets int32
---@param PartyFinished boolean
---@return TSoftObjectPtr<USoundCue>
function ADanceFloor:GetSoundCue(NumberOfFullBaskets, PartyFinished) end
function ADanceFloor:FinishParty() end
function ADanceFloor:CheckIfDancingTime() end
function ADanceFloor:CheckIfAllNPCStoppedDancing() end
function ADanceFloor:CheckIfAllNPCOnDanceFloor() end
---@param Character AAICharacterBase
---@param Spot UArrowComponent
---@return int32
function ADanceFloor:AddToSpot(Character, Spot) end


---@class ADecalSprayingTool : AKeyItem
---@field DecalSprayingState EDecalSprayingState
---@field DMIDecalTool UMaterialInstanceDynamic
---@field PreviewDecal ADecalToPaint
---@field SpawnedDecal ADecalToPaint
---@field TargetedDecal AActor
---@field GotLastDecal ADecalToPaint
---@field DecalsArray TSoftClassPtr<ADecalToPaint>
---@field DecalText FString
---@field DecalSize FVector
---@field WallLocation FVector
---@field TraceDistance float
---@field DecalsHolderWidget UUserWidget
---@field DecalColor FLinearColor
---@field AllowedInteractableClassTypes TArray<UClass>
---@field DecalAmountLimit int32
---@field HitWallLocation FVector
local ADecalSprayingTool = {}

---@param PickedDecal TSoftClassPtr<ADecalToPaint>
---@param NewDecalText FString
---@param PaintType ECustomizationPaintType
function ADecalSprayingTool:UptadePreviewDecalType(PickedDecal, NewDecalText, PaintType) end
---@param NewState EDecalSprayingState
---@return EDecalSprayingState
function ADecalSprayingTool:SetNewDecalSprayingState(NewState) end
function ADecalSprayingTool:ResetCarPainting() end
---@param SpawningDecalTransform FTransform
---@param bIsSpawned boolean
function ADecalSprayingTool:PaintingDecal(SpawningDecalTransform, bIsSpawned) end
function ADecalSprayingTool:OnPreviewTargets() end
---@param OnSpawnedDecal AActor
function ADecalSprayingTool:OnDecalSpawn(OnSpawnedDecal) end
---@param OnDestroyedDecal AActor
function ADecalSprayingTool:OnDecalDestroy(OnDestroyedDecal) end
function ADecalSprayingTool:OnChangeInventoryUp() end
function ADecalSprayingTool:OnChangeInventoryDown() end
---@param NumberOfDecals int32
function ADecalSprayingTool:MaxDecals(NumberOfDecals) end
---@param DecalType EDecalColor
function ADecalSprayingTool:BringInfoBack(DecalType) end
---@param DecalPossibility EJunkyardDecalPossibility
function ADecalSprayingTool:BlockJunkyardDecal(DecalPossibility) end


---@class ADecalToPaint : AInteractableDecal
---@field DMIDecal UMaterialInstanceDynamic
---@field bPreview boolean
---@field WallLocation FVector
---@field PlannedColor1 FLinearColor
---@field PlannedColor2 FLinearColor
---@field PlannedColor3 FLinearColor
---@field DecalMaterial UMaterialInterface
local ADecalToPaint = {}

function ADecalToPaint:ShowPlane() end
function ADecalToPaint:HidePlane() end


---@class ADecorationBase : AInteractableBuilding
local ADecorationBase = {}

function ADecorationBase:ActivateClockCooKoo() end


---@class ADecorationCamera : ACameraUnlockBase
---@field DecorationMaps TArray<FDecorationMap>
---@field DependingMapsLevelNames TArray<FName>
---@field EventsMaps TArray<FEventMaps>
---@field bIsSpecialSlot boolean
---@field SameLocationLandmarkCameras TArray<ADecorationCamera>
---@field OnUnloadFinished FDecorationCameraOnUnloadFinished
---@field OnDeactivationActionsCompleted FDecorationCameraOnDeactivationActionsCompleted
---@field SameLocationLandmarkLevelsToRemember TArray<FName>
local ADecorationCamera = {}

---@param LevelName FName
---@param UUID int32
function ADecorationCamera:UnloadEventDecorationLevel(LevelName, UUID) end
---@param LevelName FName
---@param UUID int32
function ADecorationCamera:UnloadDecorationLevel(LevelName, UUID) end
function ADecorationCamera:UnloadCollidingLevels() end
function ADecorationCamera:ShowPreviouslyHiddenActors() end
---@param bShow boolean
function ADecorationCamera:ShowAllActorsOnSameSpotLandmarks(bShow) end
---@param bShow boolean
---@param Camera ADecorationCamera
function ADecorationCamera:ShowActorsOnLevelVisible(bShow, Camera) end
---@param LevelName FName
---@param UUID int32
function ADecorationCamera:LoadEventDecorationLevel(LevelName, UUID) end
---@param LevelName FName
---@param UUID int32
function ADecorationCamera:LoadDecorationLevel(LevelName, UUID) end
---@param LevelName FName
---@return boolean
function ADecorationCamera:IsDecorationShown(LevelName) end
---@param LevelName FName
---@return boolean
function ADecorationCamera:IsDecorationHidden(LevelName) end
---@param LevelName FName
---@return boolean
function ADecorationCamera:IsDecorationAcquired(LevelName) end
---@param bIsMaxUpgraded boolean
---@param MinGasStationLvLToUnblock int32
---@param RequiredDLCName EDLCName
---@param MapDisplayName FName
---@param RequiredTag FGameplayTag
---@return FDecorationMap
function ADecorationCamera:GetNextDecorationMapToUnlock(bIsMaxUpgraded, MinGasStationLvLToUnblock, RequiredDLCName, MapDisplayName, RequiredTag) end
---@return TArray<FDecorationMap>
function ADecorationCamera:GetAcquiredDecorations() end
function ADecorationCamera:CallDispatcherOnUnload() end


---@class ADennisPuppet : AActor
---@field VacuumMesh UStaticMeshComponent
---@field PullTrashBoxArea UBoxComponent
---@field DeleteTrashBoxArea UBoxComponent
---@field TargetSpot USceneComponent
---@field NewRoot USceneComponent
---@field VacuumCurrentSplineDistance float
---@field bVacuumActive boolean
---@field StartVelocity FVector
---@field GravityScale float
---@field Acceleration float
local ADennisPuppet = {}

function ADennisPuppet:StopDennis() end
function ADennisPuppet:StartDennis() end
---@param CooldownOffset float
function ADennisPuppet:StartCooldown(CooldownOffset) end
function ADennisPuppet:PullTrash() end
---@param OverlappedComp UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ADennisPuppet:OnDeleteBoxBeginOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
function ADennisPuppet:OnCooldownEnded() end
---@return boolean
function ADennisPuppet:IsOnCooldown() end
function ADennisPuppet:DestroyNotPulledTrash() end


---@class ADepartureScreen : AActor
local ADepartureScreen = {}


---@class ADepartureScreensVolume : ATriggerVolume
local ADepartureScreensVolume = {}


---@class ADesertCar : AWheeledVehicle
---@field BindWidget UKeyItemWidget
local ADesertCar = {}

---@return ACharacter
function ADesertCar:GetBPOriginalCharacter() end


---@class ADialogueManager : AActor
---@field PrimarySpeaker_AC UAudioComponent
---@field Primary_ActiveDialogue UDialogueNode
---@field SecondarySpeaker_AC UAudioComponent
---@field Secondary_ActiveDialogue UDialogueNode
---@field StoryDialogue TArray<UDialogueNode>
---@field Barks TArray<UDialogueNode>
---@field NoVoice_Handle FTimerHandle
---@field PD_Handle FTimerHandle
---@field SD_Handle FTimerHandle
---@field DialogueDelayedStart_Handle FTimerHandle
---@field bDialogueStarted boolean
local ADialogueManager = {}

function ADialogueManager:SkipCurrentLine() end
---@param ObjectTriggering UObject
---@param DialogueGraph UDialogueGraph
---@param DialogueID int32
---@param bOverrideAudioComponent boolean
function ADialogueManager:RemotelyTriggerDialogue(ObjectTriggering, DialogueGraph, DialogueID, bOverrideAudioComponent) end
---@param curDialogue UDialogueNode
---@param OtherAudioComponent UAudioComponent
---@param bForceToPlayOnPlayerAudioComponent boolean
function ADialogueManager:PlayDialogue(curDialogue, OtherAudioComponent, bForceToPlayOnPlayerAudioComponent) end
---@param CurNode UDialogueNode
function ADialogueManager:NotifyUIDialogueEnding(CurNode) end
---@param ParentNode UDialogueNode
function ADialogueManager:NotifyUIChoicesToBeMade(ParentNode) end
---@param NodeSelected UDialogueNode
function ADialogueManager:NotifyChoiceMade(NodeSelected) end
---@param Speaker EDialogueSpeaker
---@return boolean
function ADialogueManager:IsDialoguePlaying(Speaker) end
---@return int32
function ADialogueManager:GetTotalDialoguesInQueue() end
---@return float
function ADialogueManager:GetStoryBarkBlockTimer() end
---@param DialogueGraph UDialogueGraph
---@return UDialogueGraph
function ADialogueManager:GetGameplayDialogueGraph(DialogueGraph) end
---@param InGender ENPCGender
---@param InAccent ENPCAccent
---@return UDialogueGraph
function ADialogueManager:GetDialogueGraphForPilot(InGender, InAccent) end
---@param CurNode UDialogueNode
---@return float
function ADialogueManager:GetDialogueDuration(CurNode) end
---@param CurNode UDialogueNode
function ADialogueManager:EndOfLineActions(CurNode) end
---@param curDialogue UDialogueNode
function ADialogueManager:DialogueEnded(curDialogue) end
---@param curDialogue UDialogueNode
---@param OtherAudioComponent UAudioComponent
---@param AnimatedNPCTarget AGSSNPAICharacterBase
function ADialogueManager:ActuallyStartDialogue(curDialogue, OtherAudioComponent, AnimatedNPCTarget) end


---@class ADigger : APlayerVehicle
---@field TargetHoldDistance float
---@field CurrentHoldDistance float
---@field OverlappedSandDune ARuins
---@field bCanDiggerBeEmpty boolean
---@field DiggerWidgetClass TSoftClassPtr<UDiggerWidget>
---@field DiggerWidgetInstance UDiggerWidget
local ADigger = {}

---@param bShowSand boolean
function ADigger:ShowSand(bShowSand) end
---@param InDune ARuins
function ADigger:SetOverlappedSandDune(InDune) end
---@param bNewValue boolean
function ADigger:SetIsFull(bNewValue) end
---@param bIsDiggerFull boolean
function ADigger:SetDiggerSandPositionAndHeatColor(bIsDiggerFull) end
---@param InCanBeEmpty boolean
function ADigger:SetCanDiggerBeEmpty(InCanBeEmpty) end
function ADigger:SandScaling() end
---@return ARuins
function ADigger:GetOverlappedSandDune() end
---@return boolean
function ADigger:GetIsFull() end
---@return boolean
function ADigger:GetCanDiggerBeEmpty() end
---@return ACharacter
function ADigger:GetBPOriginalCharacter() end


---@class ADirtyDecal : AInteractableDecal
---@field Wall_Colour FLinearColor
---@field SpawnedOnWall boolean
---@field ArrayIndex int32
local ADirtyDecal = {}

---@param OverlappedComp UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ADirtyDecal:OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@return boolean
function ADirtyDecal:IsBarStain() end


---@class ADiscoBall : AActor
local ADiscoBall = {}

---@param bShouldBeOn boolean
function ADiscoBall:TurnLightsOnOff(bShouldBeOn) end


---@class ADishItem : AItem
---@field OnStainsCountChange FDishItemOnStainsCountChange
---@field OnWetStateChanged FDishItemOnWetStateChanged
---@field OnClearStainAttempt FDishItemOnClearStainAttempt
---@field DishType EDishType
---@field PlacingDuration float
---@field PlacingMovementHeight float
---@field DishesStack ADishesStack
---@field PreviousDishesStack ADishesStack
local ADishItem = {}

---@param NewDishesStack ADishesStack
function ADishItem:SetDishesStack(NewDishesStack) end
---@param bNewHighlight boolean
function ADishItem:SetDirtHighlight(bNewHighlight) end
---@param WorldLocation FVector
---@param bInitialPlacement boolean
function ADishItem:PlaceInPosition(WorldLocation, bInitialPlacement) end
---@return boolean
function ADishItem:IsWet() end
---@return int32
function ADishItem:GetStains() end
---@return ADishesStack
function ADishItem:GetPreviousDishesStack() end
---@return EDishType
function ADishItem:GetDishType() end
---@return ADishesStack
function ADishItem:GetDishesStack() end


---@class ADishesStack : AActor
---@field OnDishPlaced FDishesStackOnDishPlaced
---@field OnDishPlaceFailed FDishesStackOnDishPlaceFailed
---@field SceneRootComponent USceneComponent
---@field StaticMeshComponent UStaticMeshComponent
---@field DishTypesFilter TSet<EDishType>
---@field Dishes TArray<ADishItem>
---@field bForDirtyDishes boolean
---@field bHighlight boolean
---@field SpaceLimit int32
---@field ChoosingPriority int32
local ADishesStack = {}

---@param Actor AActor
---@return ADishItem
function ADishesStack:TakeFromTopFromActor(Actor) end
---@return ADishItem
function ADishesStack:TakeFromTop() end
---@param bNewHighlight boolean
function ADishesStack:SetHighlight(bNewHighlight) end
---@param Dish ADishItem
---@param bInitialPlacemenet boolean
---@param bIgnoreSpaceLimit boolean
---@param Result EDishPlacementResult
---@return boolean
function ADishesStack:Place(Dish, bInitialPlacemenet, bIgnoreSpaceLimit, Result) end
---@return boolean
function ADishesStack:IsForDirtyDishes() end
---@param Actor AActor
---@return ADishItem
function ADishesStack:GetTopDishFromActor(Actor) end
---@return ADishItem
function ADishesStack:GetTopDish() end
---@param Actor AActor
---@return ADishesStack
function ADishesStack:GetDishStackFromActor(Actor) end
---@return int32
function ADishesStack:GetChoosingPriority() end
---@param DishItem ADishItem
---@return boolean
function ADishesStack:CheckFilterPass(DishItem) end


---@class ADishwashingWaterStream : AActor
---@field OnWaterStreamEnabled FDishwashingWaterStreamOnWaterStreamEnabled
---@field OnWaterStreamHit FDishwashingWaterStreamOnWaterStreamHit
---@field MinigameInWorldDishwashing ARvMinigameInWorld_Dishwashing
---@field WaterTickRate float
---@field TraceStartHeightOffset float
---@field TraceLength float
---@field TraceRadius float
---@field CurrentWaterTickRate float
---@field bWaterStreamEnabled boolean
---@field DishesUnderWaterStream TArray<ADishItem>
local ADishwashingWaterStream = {}

---@param bNewEnabled boolean
function ADishwashingWaterStream:SetWaterStreamEnabled(bNewEnabled) end
---@return boolean
function ADishwashingWaterStream:IsWaterStreamEnabled() end


---@class ADoor : AGSSWorldObject
---@field OnDoorStateChanged FDoorOnDoorStateChanged
---@field StartingDoorState EDoorState
---@field ActiveDoorState EDoorState
local ADoor = {}

---@param NewState EDoorState
function ADoor:SetDoorState(NewState) end
---@param NewState EDoorState
function ADoor:OnStateUpdated(NewState) end
---@return EDoorState
function ADoor:GetDoorState() end


---@class ADriveInCinema : AInteractableBuilding
local ADriveInCinema = {}


---@class ADumbbellItem : AItem
---@field OnSlotChanged FDumbbellItemOnSlotChanged
---@field Slot TWeakObjectPtr<UDumbbellSlotComponent>
---@field PreviousSlot TWeakObjectPtr<UDumbbellSlotComponent>
---@field Weight float
local ADumbbellItem = {}

---@return float
function ADumbbellItem:GetWeight() end
---@return UDumbbellSlotComponent
function ADumbbellItem:GetSlot() end
---@return UDumbbellSlotComponent
function ADumbbellItem:GetPreviousSlot() end
---@return ADumbbellsContainer
function ADumbbellItem:GetContainer() end
---@return boolean
function ADumbbellItem:CanMove() end


---@class ADumbbellsContainer : AActor
---@field OnDumbbellPlacedInContainer FDumbbellsContainerOnDumbbellPlacedInContainer
---@field OnWeightChanged FDumbbellsContainerOnWeightChanged
---@field ContainerType EDumbbellContainerType
---@field DumbbellsMinigame ARvMinigameInWorld_Dumbbells
---@field Slots TArray<UDumbbellSlotComponent>
local ADumbbellsContainer = {}

---@param ChangedSlot UDumbbellSlotComponent
---@param NewItem ADumbbellItem
function ADumbbellsContainer:UpdateWeight(ChangedSlot, NewItem) end
---@param DumbbellItem ADumbbellItem
---@return boolean
function ADumbbellsContainer:TryToPlaceDumbbell(DumbbellItem) end
---@param bEnabled boolean
---@param Item ADumbbellItem
function ADumbbellsContainer:OnMoveModeEnabled(bEnabled, Item) end
---@param minigame ARvMinigameInWorld_Dumbbells
function ADumbbellsContainer:Init(minigame) end
---@return float
function ADumbbellsContainer:GetWeight() end
---@return TArray<UDumbbellSlotComponent>
function ADumbbellsContainer:GetSlots() end
---@return EDumbbellContainerType
function ADumbbellsContainer:GetContainerType() end
---@param DumbbellItem ADumbbellItem
---@param OutSlot UDumbbellSlotComponent
---@return boolean
function ADumbbellsContainer:CanPlaceItemHere(DumbbellItem, OutSlot) end


---@class AEditableQueuePoint : AInteractableBuilding
local AEditableQueuePoint = {}


---@class AElectrocityParent : AActor
local AElectrocityParent = {}

---@return boolean
function AElectrocityParent:GetElectrocity() end
---@param On boolean
function AElectrocityParent:EnableElectrocity(On) end


---@class AElvisRelaxSpot : AInteractableBuilding
---@field ElvisBuildingType EBuildingType
---@field GasStationLevel int32
local AElvisRelaxSpot = {}



---@class AEquipmentRentalBuilding : AInteractableBuilding
---@field OnRentalSpotUnlocked FEquipmentRentalBuildingOnRentalSpotUnlocked
---@field OnNoMoreReplacementEqLeft FEquipmentRentalBuildingOnNoMoreReplacementEqLeft
---@field OnReplacementEqLeft FEquipmentRentalBuildingOnReplacementEqLeft
---@field UnlockedRentalSpots TArray<ARentalSpot>
---@field RentalEqContainer TSoftObjectPtr<ARentalEquipmentContainer>
---@field DeathsNumber int32
---@field ReplacementTresholdValue float
---@field RentalEquipmentShelf TSoftObjectPtr<ARentalEquipmentShelf>
---@field RentalServiceValues URentalServiceValues
---@field SharkEvent TSoftClassPtr<UGSSEvent>
---@field SharkEventTime FGSSEventTime
local AEquipmentRentalBuilding = {}

---@param RentalSpot ARentalSpot
---@param bForce boolean
---@return boolean
function AEquipmentRentalBuilding:TryToReplaceEquipment_BoxOrInventory(RentalSpot, bForce) end
---@param SpotToCheck ARentalSpot
---@param bForce boolean
---@return boolean
function AEquipmentRentalBuilding:TryToReplaceEquipment(SpotToCheck, bForce) end
---@param NewUnlockedRentalSpots TArray<ARentalSpot>
function AEquipmentRentalBuilding:SetUnlockedRentalSpots(NewUnlockedRentalSpots) end
---@param NewReplacementTresholdValue float
function AEquipmentRentalBuilding:SetReplacementTresholdValue(NewReplacementTresholdValue) end
---@param NewDeathsNumber int32
function AEquipmentRentalBuilding:SetDeathsNumber(NewDeathsNumber) end
function AEquipmentRentalBuilding:RefreshRentalSpots() end
function AEquipmentRentalBuilding:RefreshBuilding() end
---@param AngerState EChunchumanchuAnger
---@param RenownProgress float
---@param ValueChanged float
function AEquipmentRentalBuilding:OnVolcanoAngerChange(AngerState, RenownProgress, ValueChanged) end
---@param Building AInteractableActor
---@param Spot ARentalSpot
---@param Customer AAICharacterBase
function AEquipmentRentalBuilding:OnRentalEquipmentBroken(Building, Spot, Customer) end
---@param Building AInteractableActor
---@param Spot ARentalSpot
function AEquipmentRentalBuilding:OnEquipmentRentalSpotFree(Building, Spot) end
---@param EquipmentRef int32
function AEquipmentRentalBuilding:OnEquipmentAddedToQueue(EquipmentRef) end
---@param IsOpen boolean
function AEquipmentRentalBuilding:OnCloseOpenGasStation(IsOpen) end
---@param EqMeshToLoad TSoftObjectPtr<UStaticMesh>
---@param SpotToSetEqMesh ARentalSpot
function AEquipmentRentalBuilding:LoadSetEqMesh(EqMeshToLoad, SpotToSetEqMesh) end
---@param EqMaterialToLoad TSoftObjectPtr<UMaterialInstance>
---@param SpotToSetEqMesh ARentalSpot
function AEquipmentRentalBuilding:LoadSetEqMaterial(EqMaterialToLoad, SpotToSetEqMesh) end
---@param EqIconToLoad TSoftObjectPtr<UTexture2D>
---@param SpotToSetEqIcon ARentalSpot
function AEquipmentRentalBuilding:LoadSetEqIcon(EqIconToLoad, SpotToSetEqIcon) end
---@return boolean
function AEquipmentRentalBuilding:IsAnyEqAvailable() end
---@param Spot ARentalSpot
function AEquipmentRentalBuilding:HandleCustomerService(Spot) end
---@return TArray<ARentalSpot>
function AEquipmentRentalBuilding:GetUnlockedRentalSpots() end
---@return float
function AEquipmentRentalBuilding:GetReplacementTresholdValue() end
---@return TSoftObjectPtr<ARentalEquipmentContainer>
function AEquipmentRentalBuilding:GetRentalEqContainer() end
---@return int32
function AEquipmentRentalBuilding:GetDeathsNumber() end
function AEquipmentRentalBuilding:ForceFinishRentalService() end
---@return ARentalSpot
function AEquipmentRentalBuilding:FindSpotWithoutEq() end
---@return ARentalSpot
function AEquipmentRentalBuilding:FindFreeSpot() end
---@param AssignedCustomer AAICharacterBase
---@return ARentalSpot
function AEquipmentRentalBuilding:FindClosestSpotToCustomer(AssignedCustomer) end
---@param AssignedCustomer AAICharacterBase
---@return ARentalSpot
function AEquipmentRentalBuilding:FindAssignedSpot(AssignedCustomer) end
---@param SpotToRemoveEquipment ARentalSpot
function AEquipmentRentalBuilding:DeleteEquipmentInRentalSpot(SpotToRemoveEquipment) end
---@param bShow boolean
function AEquipmentRentalBuilding:CreateNotification(bShow) end
---@param NewRentalSpot ARentalSpot
function AEquipmentRentalBuilding:AddUnlockedRentalSpot(NewRentalSpot) end
---@param RentalSpot ARentalSpot
function AEquipmentRentalBuilding:AddEquipmentToRentalSpot(RentalSpot) end


---@class AExhibitionSpot : AInteractableBuilding
---@field BlendTime float
---@field BlendFunction EViewTargetBlendFunction
---@field BlendExp float
---@field LockOutgoing boolean
---@field OutlinedCar AJunkyardCarWreckCustomizable
---@field CurrentExhibitionSpot AExhibitionSpotSlot
---@field ExhibitionSpotWidget UExhibitionSpotWidget
---@field ExhibitionSpotWidget_SoftPtr TSoftClassPtr<UExhibitionSpotWidget>
---@field BoardWidget UGSSBaseWidget
local AExhibitionSpot = {}

---@param bActive boolean
function AExhibitionSpot:SetupBindings(bActive) end
function AExhibitionSpot:SecondaryAction() end
---@param PickedCar AJunkyardCarWreckCustomizable
---@param PickedCarExhibitionSpot AExhibitionSpotSlot
---@param CarSellPrice float
function AExhibitionSpot:PutOnSale(PickedCar, PickedCarExhibitionSpot, CarSellPrice) end
function AExhibitionSpot:PrimaryAction() end
---@param bGameLoaded boolean
function AExhibitionSpot:OnFinishGameLoaded(bGameLoaded) end
function AExhibitionSpot:OnBackButtonClicked() end
---@param InBoardWidget UGSSBaseWidget
---@param PickedCar AJunkyardCarWreckCustomizable
---@param PickedCarExhibitionSpot AExhibitionSpotSlot
function AExhibitionSpot:MoveToExhibition(InBoardWidget, PickedCar, PickedCarExhibitionSpot) end
---@param PickedCar AJunkyardCarWreckCustomizable
---@param PickedCarExhibitionSpot AExhibitionSpotSlot
function AExhibitionSpot:MoveToCarWreckExhibitionSpot(PickedCar, PickedCarExhibitionSpot) end
function AExhibitionSpot:LeaveExhibition() end


---@class AExhibitionSpotSlot : ACarWreckPlaceableArea
---@field ExhibitionCamera UChildActorComponent
local AExhibitionSpotSlot = {}

function AExhibitionSpotSlot:DEBUG_PutCarOnSale() end


---@class AFE_PilotCharacter : APilotCharacter
local AFE_PilotCharacter = {}


---@class AFerrisCabin : AActor
---@field OriginalPathName FString
---@field StaticMeshComponent UStaticMeshComponent
---@field AudioComponent UAudioComponent
---@field Camera UCameraComponent
---@field BaseTurnRate float
---@field BaseLookUpRate float
---@field TurnRate float
---@field bIsInUse boolean
local AFerrisCabin = {}

function AFerrisCabin:UseFerrisCabin() end
function AFerrisCabin:CabinInteraction() end


---@class AFireworkPipe : AActor
---@field StaticMesh UStaticMeshComponent
---@field ParticleSystemComponent UParticleSystemComponent
---@field PassedTime float
local AFireworkPipe = {}

function AFireworkPipe:StopWorking() end
function AFireworkPipe:StopFirework() end
function AFireworkPipe:OnStartParty() end
function AFireworkPipe:CheckIfDancingTime() end


---@class AFixingTape : AActor
---@field bMoveTape boolean
---@field bCutTape boolean
---@field SplineLength float
local AFixingTape = {}

function AFixingTape:TapeCutting() end
function AFixingTape:SplineMeshFunctionalities() end
function AFixingTape:MoveTapeFunction() end
function AFixingTape:DecalFunctionalities() end


---@class AFlightControlManager : AActor
---@field MiddleStrip_Sequences TArray<ALevelSequenceActor>
---@field MS_Sequences TArray<ULevelSequence>
---@field ThirdStrip_Sequences TArray<ALevelSequenceActor>
---@field TS_Sequences TArray<ULevelSequence>
---@field CurrentMSSequenceActor FSavedCurrentStripSequence
---@field CurrentTSSequenceActor FSavedCurrentStripSequence
---@field AvailableAirplanes TArray<ATradingAirplane>
local AFlightControlManager = {}

---@param Airplane ATradingAirplane
function AFlightControlManager:StopPlane(Airplane) end
---@param SequenceActorToSet FSavedCurrentStripSequence
function AFlightControlManager:SetCurrentTSSequenceActor(SequenceActorToSet) end
---@param Runway ERunway
---@param NewValue boolean
function AFlightControlManager:SetCurrentSequenceLoadedFromSave(Runway, NewValue) end
---@param SequenceActorToSet FSavedCurrentStripSequence
function AFlightControlManager:SetCurrentMSSequenceActor(SequenceActorToSet) end
---@param Plane ATradingAirplane
function AFlightControlManager:ResetSequenceRemoveBinding(Plane) end
---@param NumbersOfElementsInArray int32
---@return int32
function AFlightControlManager:RandomSequence(NumbersOfElementsInArray) end
---@param Airplane ATradingAirplane
---@param bLoadedFromSave boolean
function AFlightControlManager:PauseSequence(Airplane, bLoadedFromSave) end
---@param Runway ERunway
function AFlightControlManager:OnPlaneTakeOff(Runway) end
---@param Runway ERunway
function AFlightControlManager:OnPlaneSpawned(Runway) end
---@param bLoadedFromSave boolean
function AFlightControlManager:OnAirportSet(bLoadedFromSave) end
---@return TArray<ALevelSequenceActor>
function AFlightControlManager:GetThirdStrip_Sequences() end
---@return TArray<ALevelSequenceActor>
function AFlightControlManager:GetMiddleStrip_Sequences() end
---@return FSavedCurrentStripSequence
function AFlightControlManager:GetCurrentTSSequenceActor() end
---@return FSavedCurrentStripSequence
function AFlightControlManager:GetCurrentMSSequenceActor() end
---@param bLoadedFromSave boolean
function AFlightControlManager:CreateThirdStripSequences(bLoadedFromSave) end
---@param bLoadedFromSave boolean
function AFlightControlManager:CreateMSTSSequences(bLoadedFromSave) end
---@param bLoadedFromSave boolean
function AFlightControlManager:CreateMiddleStripSequences(bLoadedFromSave) end
---@param Plane ATradingAirplane
function AFlightControlManager:BindOnSequenceFinished(Plane) end


---@class AFoodBase : AGasStationProduct
local AFoodBase = {}


---@class AFuelEnter : AVehiclePart
---@field FuelMinigameWidgetClass TSoftClassPtr<UFuelMinigameWidget>
local AFuelEnter = {}

---@param On boolean
function AFuelEnter:ShowFuelEnter(On) end
---@param Condition boolean
function AFuelEnter:OpenFuelEnter(Condition) end
---@return UInventoryComponent
function AFuelEnter:GetVehicleInventory() end


---@class AFuelPistolBase : AActor
---@field CurrentylUsedFuelEnter AFuelEnter
---@field PistolUser APawn
---@field StartingPosition FVector
local AFuelPistolBase = {}

function AFuelPistolBase:StopMiniGame() end
function AFuelPistolBase:StartMiniGame() end
---@param FuelStationRef AFuelStation
function AFuelPistolBase:PutDownPistol(FuelStationRef) end
---@param Target AActor
---@param UseInstigator AActor
---@param FuelEnter AFuelEnter
function AFuelPistolBase:PistolUse(Target, UseInstigator, FuelEnter) end
function AFuelPistolBase:LimpEvent() end


---@class AFuelPistolMagazineBase : AActor
local AFuelPistolMagazineBase = {}

---@param UserActor AActor
function AFuelPistolMagazineBase:UsePistol(UserActor) end


---@class AFuelPriceBoard : AInteractableBuilding
---@field CurrentDisplayPrice float
---@field OnMinigameStatusChanged FFuelPriceBoardOnMinigameStatusChanged
---@field MinigameCamera UCameraComponent
---@field CameraBlendTime float
---@field bMinigameActive boolean
---@field TutorialVolume ATutorialVolume
---@field bConfirmationPopupActive boolean
---@field IsPriceBoardUnlockedTag FGameplayTag
---@field SetPricePopupActiveTag FGameplayTag
---@field ResetDefaultPricePopupActiveTag FGameplayTag
---@field InteractionType EPriceBoardInteractionType
---@field FuelType EFuelMagazine
---@field MinigameWidgetClass TSubclassOf<UUserWidget>
---@field PriceBoardWidgetRef UUserWidget
---@field MinigameWidgetRef UUserWidget
---@field ActionManager UActionManagerSubsystem
local AFuelPriceBoard = {}

---@param bOnMinigameExit boolean
function AFuelPriceBoard:ShowConfirmationPopup(bOnMinigameExit) end
---@param InType EPriceBoardInteractionType
function AFuelPriceBoard:SetupInteractionType(InType) end
---@param bNewActive boolean
function AFuelPriceBoard:SetMinigameActive(bNewActive) end
---@param bOpen boolean
function AFuelPriceBoard:OpenCloseAllFuelStations(bOpen) end
---@param bNewActive boolean
function AFuelPriceBoard:OnSetMinigameActive(bNewActive) end
---@param bAccepted boolean
function AFuelPriceBoard:OnPopupExitEvent(bAccepted) end
---@param bAccepted boolean
---@param bCloseMinigame boolean
function AFuelPriceBoard:OnPopupExit(bAccepted, bCloseMinigame) end
---@return boolean
function AFuelPriceBoard:IsInteractable() end
---@param bIsPressed boolean
function AFuelPriceBoard:CancelMinigame(bIsPressed) end


---@class AFuelStation : AInteractableBuilding
---@field FuelType EFuelMagazine
---@field EmployeeTask EEmployeeTask
---@field bIsHoldingSpace boolean
---@field SuccessTolerance float
---@field CurrentMoney float
---@field CurrentFuelSpeed float
---@field JerryCanClass TSoftClassPtr<AJerryCan>
---@field Pistolet UChildActorComponent
---@field Airplane AActor
---@field WaterCustomer AActor
---@field IncommingWaterCustomer AActor
local AFuelStation = {}

---@param InWaterCustomer AActor
function AFuelStation:SetIncommingWaterFuelUser(InWaterCustomer) end
---@param InWaterCustomer AActor
function AFuelStation:SetCurrentWaterFuelUser(InWaterCustomer) end
---@param InAirPlane AActor
function AFuelStation:SetCurrentAirportFuelUser(InAirPlane) end
function AFuelStation:ResetWaterFuelUser() end
function AFuelStation:ResetCurrentAirportUser() end
---@param ExtraMoney float
function AFuelStation:OnExtraMoney(ExtraMoney) end
---@return float
function AFuelStation:GetMoneyFromJoe() end
---@return AActor
function AFuelStation:GetIncommingWaterFuelUser() end
---@return AActor
function AFuelStation:GetCurrentWaterFuelUser() end
---@return AActor
function AFuelStation:GetCurrentAirpotFuelUser() end
---@param DeltaTime float
---@param Inventory UInventoryComponent
---@param AdditionalMultiplier float
---@return float
function AFuelStation:GetAndRemoveFuelFromInventoryInDeltaTime(DeltaTime, Inventory, AdditionalMultiplier) end
---@param SpentFuel float
---@param TargetFuel float
function AFuelStation:FinishFuelMiniGame(SpentFuel, TargetFuel) end
---@param DeltaTime float
function AFuelStation:CalcFuelSpeed(DeltaTime) end


---@class AGSS2GameMode : AGameModeBase
---@field PathfindingManager APathfindingManager
---@field TimeToAutoSave float
---@field DLCShadyDealsManagerClass TSoftClassPtr<UDLCShadyDealsManager>
---@field DLCAirstripManagerClass TSoftClassPtr<ADLCAirstripManager>
---@field DLCJunkyardManagerClass TSoftClassPtr<AJunkyardManager>
---@field DLCJunkyardManagerLevelName FName
---@field DLCCinemaManagerClass TSoftClassPtr<ADLCDriveInCinemaManager>
---@field DLCCinemaManagerLevelName FName
---@field DLCRVCampManagerClass TSoftClassPtr<ARVCampManager>
---@field DLCRVCampManagerLevelName FName
---@field GGEM AGlobalGameEventManager
---@field DialogueManager ADialogueManager
---@field ActionManager AActionManager
---@field DLCAirstripManager ADLCAirstripManager
---@field DLCJunkyardManager AJunkyardManager
---@field DLCCinemaManager ADLCDriveInCinemaManager
---@field DLCRVCampManager ARVCampManager
---@field DLCShadyDealsManager UDLCShadyDealsManager
---@field GSSGameInstance UGSSGameInstance
local AGSS2GameMode = {}

function AGSS2GameMode:InitManagers() end
---@return UDLCShadyDealsManager
function AGSS2GameMode:GetShadyDealsDLCManager() end
---@return AGlobalGameEventManager
function AGSS2GameMode:GetGGEM() end
---@return USDGangActivityManager
function AGSS2GameMode:GetGangActivityManager() end
---@return ARVCampManager
function AGSS2GameMode:GetDLCRVCampManager() end
---@return AJunkyardManager
function AGSS2GameMode:GetDLCJunkyardManager() end
---@return ADLCDriveInCinemaManager
function AGSS2GameMode:GetDLCCinemaManager() end
---@return ADLCAirstripManager
function AGSS2GameMode:GetDLCAirstripManager() end
---@return ADialogueManager
function AGSS2GameMode:GetDialogueManager() end
---@return AActionManager
function AGSS2GameMode:GetActionManager() end


---@class AGSS2HUD : AHUD
local AGSS2HUD = {}


---@class AGSSAchievementManager : AAchievementManager
---@field DTAchievements UDataTable
local AGSSAchievementManager = {}



---@class AGSSCharacterBase : ASignificanceCharacterBase
---@field ItemInventory UInventoryComponent
---@field HandleActorInventory UInventoryComponent
---@field AirplaneItemInventory UInventoryComponent
---@field CollectiblesItemsInventory UCollectiblesInventoryComponent
---@field OnHandleActorUpdated FGSSCharacterBaseOnHandleActorUpdated
---@field HandleActor AActor
local AGSSCharacterBase = {}

---@param EventName FName
function AGSSCharacterBase:TriggerEvent(EventName) end
---@param NewHandleActor AActor
function AGSSCharacterBase:SetHandleActor(NewHandleActor) end
---@return AActor
function AGSSCharacterBase:GetHandleActor() end


---@class AGSSGameState : AGameStateBase
---@field CheckGamepadHandle FTimerHandle
---@field TutorialManager UTutorialManager
---@field bIsGameStarted boolean
---@field GameVersion EGameVersion
---@field UI_QuestManager UUI_QuestManager
---@field ProductsInventory UInventoryComponent
---@field AirportFuel float
---@field CarPartsInventory UInventoryComponent
---@field IceCreamStandInventory UInventoryComponent
---@field AIManager UAIManager
---@field BindingsDataTable UDataTable
---@field CashShopRef ACashShop
---@field CollectibleItemsManager UCollectibleItemsManager
---@field bGasStationEnabled boolean
---@field OnGastStationOpened FGSSGameStateOnGastStationOpened
---@field OnCloseOpenGasStation FGSSGameStateOnCloseOpenGasStation
---@field OnUfoUsed FGSSGameStateOnUfoUsed
---@field OnUfoStarted FGSSGameStateOnUfoStarted
---@field OnUnlockCameraActivated FGSSGameStateOnUnlockCameraActivated
---@field OnUnlockCameraDeactivated FGSSGameStateOnUnlockCameraDeactivated
---@field OnGameSaveStarted FGSSGameStateOnGameSaveStarted
---@field OnGameSaveCompleted FGSSGameStateOnGameSaveCompleted
---@field OnAIManagerSpawned FGSSGameStateOnAIManagerSpawned
---@field bMagazineEnabled boolean
---@field DTHappyAngryThreshold UDataTable
---@field DTMovementGroundSpeed UDataTable
---@field DTAllItems UDataTable
---@field bIgnoreQuestProgressForUpgrades boolean
---@field BrowsingCustomers TSet<AAICharacterBase>
---@field AISpawnPoint TArray<AAISpawnPoint>
---@field TimeStruct FTimeStruct
---@field IsDisableControllers boolean
---@field FoodsShop TArray<FProductShopStruct>
---@field AlcoholsShop TArray<FProductShopStruct>
---@field CiggaretShop TArray<FProductShopStruct>
---@field GlassesShop TArray<FProductShopStruct>
---@field IceCreamShop TArray<FProductShopStruct>
---@field HatsShop TArray<FProductShopStruct>
---@field SoftDrinksShop TArray<FProductShopStruct>
---@field NewsPaperShop TArray<FProductShopStruct>
---@field SoftToy TArray<FProductShopStruct>
---@field CarCare TArray<FProductShopStruct>
---@field Toy TArray<FProductShopStruct>
---@field pasteries TArray<FProductShopStruct>
---@field KeyItems TArray<FProductShopStruct>
---@field Decorations TArray<FProductShopStruct>
---@field Tires TArray<FProductShopStruct>
---@field CarMirrors TArray<FProductShopStruct>
---@field ScratchRemover TArray<FProductShopStruct>
---@field Accumulator TArray<FProductShopStruct>
---@field EngineOil TArray<FProductShopStruct>
---@field Battery TArray<FProductShopStruct>
---@field sparkplug TArray<FProductShopStruct>
---@field Coolant TArray<FProductShopStruct>
---@field DuctTape TArray<FProductShopStruct>
---@field IceCreamBuildingProducts TArray<FProductShopStruct>
---@field Products TArray<AItem>
---@field VehicleParts TArray<AVehiclePart>
---@field PlaceableActors TArray<APlaceableActor>
---@field Caravans TArray<ACaravan>
---@field Ruins TArray<ARuins>
---@field PlayerDecals FTArrayPlayerDecals
---@field SavedPickedDecal FSavedPickedDecal
---@field MainPlayerOrderM FAllPlayerOrders
---@field BuildingsShop TArray<FProductShopStruct>
---@field Houses TArray<AHouse>
---@field SnapPoints TArray<ASnapPoint>
---@field GasStationDoorCount int32
---@field TotalDecals TArray<AActor>
---@field HouseDecals TArray<AInteractableDecal>
---@field ToiletDecals TArray<AInteractableDecal>
---@field ShowerDecals TArray<AInteractableDecal>
---@field OnDirtyLevelUpdated FGSSGameStateOnDirtyLevelUpdated
---@field TotalTrashItems TArray<ATrashItemBase>
---@field HouseTrashItems TArray<ATrashItemBase>
---@field ToiletTrashItems TArray<ATrashItemBase>
---@field TrashDirtToClean TArray<AActor>
---@field CustomizationHouseParts TArray<ACustomizationHousePart>
---@field GameplayStuffs TArray<AActor>
---@field GasStationSections TArray<AInteractableBuilding>
---@field GroundDecorationAreas TArray<ABuildArea>
---@field RoofDecorationBox ATriggerBox
---@field PathStationsWithInteractableActorTag TArray<APathStation>
---@field CopiedShelfClass TSoftClassPtr<AShelf>
---@field CopiedCategory EItemTypeCategory
---@field CopiedRestockThreshold float
---@field CopiedProductRestockFilling float
---@field CopiedbAutoRestock boolean
---@field CopiedRestockingData TArray<FRestockProductData>
---@field UnlockedMaps TArray<FName>
---@field MapsToUnload TArray<FName>
---@field DecorationMapDataTable UDataTable
---@field UnlockedFeatures TArray<FName>
---@field DecorationCameras TArray<ADecorationCamera>
---@field InteractiveDecorationCameras TArray<ADecorationCamera>
---@field UpgradeStationCameras TArray<AUpgradeStationCamera>
---@field DecorationsHidden TArray<FName>
---@field Vehicles TArray<APawn>
---@field Pawns TArray<APawn>
---@field bSpawnNewVehiclesIsBlocked boolean
---@field bUsing24HTimeFormat boolean
---@field bVIPCanActivate boolean
---@field bDennisCanActivate boolean
---@field bSharkCanActivate boolean
---@field bSandstormCanActivate boolean
---@field bBusEventCanActivate boolean
---@field bElvisCanActivate boolean
---@field bSantasSleighCanActivate boolean
---@field bChristmasHatsCanActivate boolean
---@field bWarehouseStealingCanActivate boolean
---@field bPostGameChallengesCanActivate boolean
---@field bJunkyardCustomizationEffects boolean
---@field bJunkyardCustomizationMusic boolean
---@field bCashRegisterSoundActive boolean
---@field bHeadBobEnabled boolean
---@field bStreamerMode boolean
---@field OnQuestSpawned FGSSGameStateOnQuestSpawned
---@field OnQuestFinished FGSSGameStateOnQuestFinished
---@field ActiveTasks TArray<UTaskBase>
---@field NewTaskAmount int32
---@field QuestActive UGSSQuest
---@field GSSQuestsSoft TArray<TSoftClassPtr<UGSSQuest>>
---@field FinishedGSSQuestsSoft TArray<TSoftClassPtr<UGSSQuest>>
---@field QuestHistory TArray<FQuestHistory>
---@field ActiveEvents TArray<UGSSEvent>
---@field GSSEventsTime TArray<FGSSEventTime>
---@field ActiveEventDisplay UEventDisplay
---@field EventsDisplay TArray<TSubclassOf<UEventDisplay>>
---@field OnEventSpawned FGSSGameStateOnEventSpawned
---@field OnEventFinished FGSSGameStateOnEventFinished
---@field Strike int32
---@field PreviousStrike int32
---@field LastDistance float
---@field ThrowDistanceRecord float
---@field FuelStrike int32
---@field FuelLast float
---@field NumberOfFuelRecords float
---@field MinFuelRecordVal float
---@field RepairGameStrike int32
---@field RepairGameLastResult float
---@field RepairGameBestResult float
---@field CashMoney float
---@field FuelEarnedMoney float
---@field FuelSpendMoney float
---@field GarageMoney float
---@field LastDesertCarTime float
---@field BestDesertCarTime float
---@field BoughtDecorationAmount int32
---@field TrashBagCapacity float
---@field JerryCanFuel float
---@field TotalGameSessionTime float
---@field OnGameTimeUpdated FGSSGameStateOnGameTimeUpdated
---@field OnMapUnlocked FGSSGameStateOnMapUnlocked
---@field OnKeybindingChanged FGSSGameStateOnKeybindingChanged
---@field OnKeybindingsReset FGSSGameStateOnKeybindingsReset
---@field OnGameTimeHoursUpdated FGSSGameStateOnGameTimeHoursUpdated
---@field OnSpawnedProduct FGSSGameStateOnSpawnedProduct
---@field OnPawnSpawned FGSSGameStateOnPawnSpawned
---@field OnPlayerThrowed FGSSGameStateOnPlayerThrowed
---@field OnPlayerSpawned FGSSGameStateOnPlayerSpawned
---@field OnPlayerShelvProduct FGSSGameStateOnPlayerShelvProduct
---@field OnHappyAngryUpdated FGSSGameStateOnHappyAngryUpdated
---@field OnHappyAngryPopularityLevelUp FGSSGameStateOnHappyAngryPopularityLevelUp
---@field HappyAmount int32
---@field PopularityLevel int32
---@field CentralShop ACentralShop
---@field Garage AGarage
---@field Magazine AMagazine
---@field CarWash ACarWash
---@field IceCreamBuilding AIceCreamBuilding
---@field PartySpot APartySpot
---@field PartyTime APartyTime
---@field Buildings TArray<AInteractableActor>
---@field CarLifts TArray<ACarLift>
---@field ActiveWidgets TArray<UUserWidget>
---@field ActiveBuilding AInteractableBuilding
---@field TrashDropChance float
---@field ValidCustomerTrashClass TArray<TSubclassOf<ATrashItemBase>>
---@field ValidCustomerToiletTrashClass TArray<TSubclassOf<ATrashItemBase>>
---@field FuelingTuTDone boolean
---@field DiggerTUTDone boolean
---@field CashTuTDone boolean
---@field RCTuTDone boolean
---@field JerCanTuTDone boolean
---@field CarPartsTut boolean
---@field ProductsTut boolean
---@field GarageGameIsStillOn boolean
---@field ProductDatabase UDataTable
---@field ChallengeManager AQuestChallengeManager
---@field AchievementManager AAchievementManager
---@field UIQuickAccess AUIQuickAccess
---@field LeaderboardManager ALeaderboardManager
---@field ActiveWidget UUserWidget
---@field CollectibleItemsPluginActivated boolean
---@field OnPartySpotBought FGSSGameStateOnPartySpotBought
---@field PlayerPartySpot FPlayerPartySpot
---@field PartySpotBusGuys TArray<AAICharacterBase>
---@field DTAdditionalUpgrades UDataTable
---@field bOverrideCarAmount boolean
---@field CarOverrideAmount int32
---@field TutorialInfoDT UDataTable
---@field DialogueOwners TArray<FDialogueGraphOwner>
local AGSSGameState = {}

---@param WatervehicleClass TSubclassOf<AWaterVehicle>
---@param bDelivery boolean
---@param bIsComingIn boolean
function AGSSGameState:WaterDeliveryStatus(WatervehicleClass, bDelivery, bIsComingIn) end
---@param DecalName FName
---@param bIsFavourite boolean
function AGSSGameState:UpdatePlayerDecal(DecalName, bIsFavourite) end
---@param Count int32
---@param Instaginator UObject
---@param SourceOfRenown ERenown_Reasons
---@param HappyReason FString
---@return int32
function AGSSGameState:UpdateHappyAngry(Count, Instaginator, SourceOfRenown, HappyReason) end
---@param ItemClass TSoftClassPtr<AItem>
function AGSSGameState:UnblockItem(ItemClass) end
function AGSSGameState:StartGame() end
---@param bShow boolean
function AGSSGameState:ShowGroundDecorationAreas(bShow) end
---@param UnlockType EDecalUnlockType
function AGSSGameState:SetPickedCategory(UnlockType) end
---@param Amount int32
function AGSSGameState:SetMaxVehiclesOnMap(Amount) end
---@param NewIsInShop boolean
function AGSSGameState:SetIsInShop(NewIsInShop) end
---@param NewGenericOrArtistic EDecalColor
function AGSSGameState:SetGenericOrArtistic(NewGenericOrArtistic) end
---@param NewDecalUnlockType EDecalUnlockType
function AGSSGameState:SetDecalUnlockType(NewDecalUnlockType) end
---@param NewColor FLinearColor
function AGSSGameState:SetDecalColor(NewColor) end
---@param NewChallengeManager AQuestChallengeManager
function AGSSGameState:SetChallengeManager(NewChallengeManager) end
---@param QualityIndex int32
function AGSSGameState:SetAdditionalScalability(QualityIndex) end
---@param NewActiveWidget UUserWidget
---@param UIState EUIState
function AGSSGameState:SetActiveWidget(NewActiveWidget, UIState) end
---@param NewActiveBuilding AInteractableBuilding
function AGSSGameState:SetActiveBuilding(NewActiveBuilding) end
---@param Reason FName
---@param bResetCarLifts boolean
---@param bDennis boolean
---@param bEmployees boolean
---@param bDelivery boolean
function AGSSGameState:SendAllNpcsHome(Reason, bResetCarLifts, bDennis, bEmployees, bDelivery) end
---@param IsLoaded boolean
function AGSSGameState:OnGameLoaded(IsLoaded) end
---@param CurrentActiveEventDisplay UEventDisplay
---@param LeftDisplayTime float
function AGSSGameState:OnDisplayEvent(CurrentActiveEventDisplay, LeftDisplayTime) end
---@param UnlockType EDecalUnlockType
---@return boolean
function AGSSGameState:IsUnlockTypeUnlocked(UnlockType) end
---@param DecalName FName
---@param bIsFavourite boolean
---@return boolean
function AGSSGameState:IsPlayerDecalUnblocked(DecalName, bIsFavourite) end
---@return AUIQuickAccess
function AGSSGameState:GetUIQuickAccess() end
---@return UDataTable
function AGSSGameState:GetTutorialInfoDT() end
---@return float
function AGSSGameState:GetTrashDropChance() end
---@param Tag FName
---@return AInteractableBuilding
function AGSSGameState:GetStationSectionByTag(Tag) end
---@return TSubclassOf<ATrashItemBase>
function AGSSGameState:GetRandomTrashItemClass() end
---@return TSubclassOf<ATrashItemBase>
function AGSSGameState:GetRandomToiletTrashItemClass() end
---@param InQuestTitle FText
---@return TSoftClassPtr<UGSSQuest>
function AGSSGameState:GetQuestByTitle(InQuestTitle) end
---@param ProductName FName
---@param bSingle boolean
---@return float
function AGSSGameState:GetProductSellPrice(ProductName, bSingle) end
---@param SellPrice float
---@param ProductPriceCurve UCurveFloat
---@param StartPoint int32
---@param EndPoint int32
---@param LowestPoint float
---@param HighestPoint float
---@return TArray<float>
function AGSSGameState:GetProductPricesData(SellPrice, ProductPriceCurve, StartPoint, EndPoint, LowestPoint, HighestPoint) end
---@param ProductName FName
---@param ProductPriceCurve UCurveFloat
---@param StartPoint int32
---@param EndPoint int32
---@param LowestPoint float
---@param HighestPoint float
---@return TArray<float>
function AGSSGameState:GetProductPrices(ProductName, ProductPriceCurve, StartPoint, EndPoint, LowestPoint, HighestPoint) end
---@param ProductPriceCurve UCurveFloat
---@param StartPoint int32
---@param EndPoint int32
---@param HighestPoint float
---@param LowestPoint float
function AGSSGameState:GetProductHighestLowestValue(ProductPriceCurve, StartPoint, EndPoint, HighestPoint, LowestPoint) end
---@param ProductPriceCurve UCurveFloat
---@return float
function AGSSGameState:GetProductCurrentPriceToAverageRatio(ProductPriceCurve) end
---@param ProductPriceCurve UCurveFloat
---@param DayOffset int32
---@return float
function AGSSGameState:GetProductBuyPrice(ProductPriceCurve, DayOffset) end
---@param ProductPriceCurve UCurveFloat
---@return float
function AGSSGameState:GetProductAverageBuyPrice(ProductPriceCurve) end
---@return EDecalUnlockType
function AGSSGameState:GetPickedCategory() end
---@param OwnedLandmarks int32
---@param TotalLandmarks int32
---@param IsInteractable boolean
---@param CountHidden boolean
function AGSSGameState:GetNumberOfLandmarks(OwnedLandmarks, TotalLandmarks, IsInteractable, CountHidden) end
---@param UpgradeStationCamera AUpgradeStationCamera
---@param Next boolean
---@return AUpgradeStationCamera
function AGSSGameState:GetNextUpgradeCamera(UpgradeStationCamera, Next) end
---@return ADecorationCamera
function AGSSGameState:GetManagementCamera() end
---@return ALeaderboardManager
function AGSSGameState:GetLeaderboardManager() end
---@param ShelfCategory EItemTypeCategory
---@param OutShelfClass TSoftClassPtr<AShelf>
---@param OutRestockThreshold float
---@param OutProductRestockFilling float
---@param OutbAutoRestock boolean
---@param OutRestockingData TArray<FRestockProductData>
---@return boolean
function AGSSGameState:GetLastShelfRestockPreset(ShelfCategory, OutShelfClass, OutRestockThreshold, OutProductRestockFilling, OutbAutoRestock, OutRestockingData) end
---@return boolean
function AGSSGameState:GetIsInShop() end
---@return TArray<AInteractableActor>
function AGSSGameState:GetInteractableBuildings() end
---@return EDecalColor
function AGSSGameState:GetGenericOrArtistic() end
---@param FuelType EFuelMagazine
---@return float
function AGSSGameState:GetFuelSellPrice(FuelType) end
---@param FuelType EFuelMagazine
---@param StartPoint int32
---@param EndPoint int32
---@param LowestPoint float
---@param HighestPoint float
---@return TArray<float>
function AGSSGameState:GetFuelPrices(FuelType, StartPoint, EndPoint, LowestPoint, HighestPoint) end
---@param FuelType EFuelMagazine
---@return UCurveFloat
function AGSSGameState:GetFuelBuyPriceCurve(FuelType) end
---@param FuelType EFuelMagazine
---@param DayOffset int32
---@return float
function AGSSGameState:GetFuelBuyPrice(FuelType, DayOffset) end
---@param PercentHouseDirty float
---@param PercentToiletDirty float
---@param PercentShowerDirty float
function AGSSGameState:GetDirtyStatus(PercentHouseDirty, PercentToiletDirty, PercentShowerDirty) end
---@return EDecalUnlockType
function AGSSGameState:GetDecalUnlockType() end
---@return FLinearColor
function AGSSGameState:GetDecalColor() end
---@return UCollectibleItemsManager
function AGSSGameState:GetCollectibleItemsManager() end
---@return AQuestChallengeManager
function AGSSGameState:GetChallengeManager() end
---@return TArray<FDialogueGraphOwner>
function AGSSGameState:GetAllDialogueOwners() end
---@return AInteractableBuilding
function AGSSGameState:GetActiveBuilding() end
---@param GSSEvent UGSSEvent
function AGSSGameState:FinishEvent(GSSEvent) end
---@param DialogueGraph UDialogueGraph
---@return TSoftObjectPtr<UDialogueGraph>
function AGSSGameState:FindDialogueOwnerGraph(DialogueGraph) end
---@param DialogueGraph TSoftObjectPtr<UDialogueGraph>
---@return UDialogueGraph
function AGSSGameState:FindDialogueOwnerGameplayGraphBySoft(DialogueGraph) end
---@param DialogueGraph UDialogueGraph
---@return UDialogueGraph
function AGSSGameState:FindDialogueOwnerGameplayGraph(DialogueGraph) end
---@param Enabled boolean
function AGSSGameState:EnableGastStation(Enabled) end
---@param VehicleClass TSubclassOf<AGSSWheeledVehicle>
---@param bDelivery boolean
---@param TaskClass TSubclassOf<UTaskBase>
function AGSSGameState:DeliveryStatus(VehicleClass, bDelivery, TaskClass) end
---@param ShelfCategory EItemTypeCategory
---@param InShelfClass TSoftClassPtr<AShelf>
---@param InRestockThreshold float
---@param InProductRestockFilling float
---@param InbAutoRestock boolean
---@param InRestockingData TArray<FRestockProductData>
function AGSSGameState:CopyShelfRestockPreset(ShelfCategory, InShelfClass, InRestockThreshold, InProductRestockFilling, InbAutoRestock, InRestockingData) end
---@param FeatureName FName
---@return boolean
function AGSSGameState:CheckIfFeatureOwned(FeatureName) end
---@param Building AInteractableActor
function AGSSGameState:AddInteractableBuilding(Building) end
---@param Count float
function AGSSGameState:AddGarageMoney(Count) end
---@param Count float
function AGSSGameState:AddFuelMoney(Count) end
---@param NewEventDisplay TSubclassOf<UEventDisplay>
function AGSSGameState:AddEventDisplay(NewEventDisplay) end
---@param Count float
function AGSSGameState:AddCashMoney(Count) end
---@param BoughtActor TSubclassOf<AActor>
---@param Amount int32
function AGSSGameState:AddBoughtActor(BoughtActor, Amount) end


---@class AGSSLadder : AGSSWorldObject
---@field LadderOverlap UBoxComponent
local AGSSLadder = {}

---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AGSSLadder:OnLadderOverlapped(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function AGSSLadder:OnLadderOverlapEnded(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end


---@class AGSSLevelSequenceActor : ALevelSequenceActor
local AGSSLevelSequenceActor = {}


---@class AGSSNPAICharacterBase : ANPAICharacterBase
---@field Head_SMC USkeletalMeshComponent
---@field Sound UAudioComponent
---@field Gender ENPCGender
---@field LanguageAccent ENPCAccent
---@field bDialogNeverLookAt boolean
local AGSSNPAICharacterBase = {}

---@return ENPCGender
function AGSSNPAICharacterBase:GetGender() end
---@return ENPCAccent
function AGSSNPAICharacterBase:GetAccent() end


---@class AGSSNPAIManager : ANPAIManager
local AGSSNPAIManager = {}


---@class AGSSNavMeshBoundsVolume : ANavMeshBoundsVolume
local AGSSNavMeshBoundsVolume = {}


---@class AGSSPlayerCharacter : AGSSCharacterBase
---@field InteractBox UBoxComponent
---@field ActiveMovementState EMovementState
---@field OnPlayerActorSpawned FGSSPlayerCharacterOnPlayerActorSpawned
---@field OnPlayerPickUped FGSSPlayerCharacterOnPlayerPickUped
---@field OnSetPhotoModeActive FGSSPlayerCharacterOnSetPhotoModeActive
---@field OnPlayerMinigameAction01 FGSSPlayerCharacterOnPlayerMinigameAction01
---@field OnHighlightAirplaneHoles FGSSPlayerCharacterOnHighlightAirplaneHoles
---@field OnHighlightCinemaTrash FGSSPlayerCharacterOnHighlightCinemaTrash
---@field ThrowStart FGSSPlayerCharacterThrowStart
---@field OnHoldInteractionStartEvent FGSSPlayerCharacterOnHoldInteractionStartEvent
---@field OnHoldInteractionEndEvent FGSSPlayerCharacterOnHoldInteractionEndEvent
---@field OnPlayerPrimaryAction FGSSPlayerCharacterOnPlayerPrimaryAction
---@field OnPlayerPrimaryActionCheck FGSSPlayerCharacterOnPlayerPrimaryActionCheck
---@field OnPlayerSecondaryAction FGSSPlayerCharacterOnPlayerSecondaryAction
---@field OnPlayerInteractionF FGSSPlayerCharacterOnPlayerInteractionF
---@field OnPlayerInteractionR FGSSPlayerCharacterOnPlayerInteractionR
---@field OnToggleSnapToGrid FGSSPlayerCharacterOnToggleSnapToGrid
---@field OnJumpAction FGSSPlayerCharacterOnJumpAction
---@field OnSprintAction FGSSPlayerCharacterOnSprintAction
---@field OnInspectModeAction FGSSPlayerCharacterOnInspectModeAction
---@field OnMoveForward FGSSPlayerCharacterOnMoveForward
---@field OnToolSelected FGSSPlayerCharacterOnToolSelected
---@field OnPlayerReset FGSSPlayerCharacterOnPlayerReset
---@field OnShowInteraction FGSSPlayerCharacterOnShowInteraction
---@field OnHideInteraction FGSSPlayerCharacterOnHideInteraction
---@field OnPlayerTurnAction FGSSPlayerCharacterOnPlayerTurnAction
---@field OnMouseMoveRawY FGSSPlayerCharacterOnMouseMoveRawY
---@field OnMoveRightAction FGSSPlayerCharacterOnMoveRightAction
---@field OnE_Action FGSSPlayerCharacterOnE_Action
---@field OnMoveMarshalWandsAction FGSSPlayerCharacterOnMoveMarshalWandsAction
---@field OnPlayerMoved FGSSPlayerCharacterOnPlayerMoved
---@field OnPlayerLookUpAction FGSSPlayerCharacterOnPlayerLookUpAction
---@field OnRotateRightAction FGSSPlayerCharacterOnRotateRightAction
---@field OnRotateLeftAction FGSSPlayerCharacterOnRotateLeftAction
---@field OnLeftTriggerAction FGSSPlayerCharacterOnLeftTriggerAction
---@field OnRightTriggerAction FGSSPlayerCharacterOnRightTriggerAction
---@field OnYButtonAction FGSSPlayerCharacterOnYButtonAction
---@field OnEscapeAction FGSSPlayerCharacterOnEscapeAction
---@field OnTipAction FGSSPlayerCharacterOnTipAction
---@field OnQuestlineAction FGSSPlayerCharacterOnQuestlineAction
---@field OnXButtonAction FGSSPlayerCharacterOnXButtonAction
---@field OnBButtonAction FGSSPlayerCharacterOnBButtonAction
---@field OnAButtonAction FGSSPlayerCharacterOnAButtonAction
---@field OnDPadRightAction FGSSPlayerCharacterOnDPadRightAction
---@field OnDPadUpAction FGSSPlayerCharacterOnDPadUpAction
---@field OnDPadLeftAction FGSSPlayerCharacterOnDPadLeftAction
---@field OnDPadDownAction FGSSPlayerCharacterOnDPadDownAction
---@field OnLeftBumperAction FGSSPlayerCharacterOnLeftBumperAction
---@field OnRightBumperAction FGSSPlayerCharacterOnRightBumperAction
---@field OnGameplaySettingsApplied FGSSPlayerCharacterOnGameplaySettingsApplied
---@field OnChangedTableSetting FGSSPlayerCharacterOnChangedTableSetting
---@field OnPlayerEnteredFerrisCabin FGSSPlayerCharacterOnPlayerEnteredFerrisCabin
---@field OnPlayerLeftFerrisCabin FGSSPlayerCharacterOnPlayerLeftFerrisCabin
---@field OnUIRejected FGSSPlayerCharacterOnUIRejected
---@field OnUIConfirmed FGSSPlayerCharacterOnUIConfirmed
---@field OnTicketValidated FGSSPlayerCharacterOnTicketValidated
---@field FirstPersonCameraComponent UCameraComponent
---@field SpringArmComponent USpringArmComponent
---@field BaseBodyMesh UPostapoSkeletalMeshComponent
---@field Hands_SMC UPostapoSkeletalMeshComponent
---@field Legs_SMC UPostapoSkeletalMeshComponent
---@field HandlePoint UArrowComponent
---@field HeldGrinderPoint UArrowComponent
---@field PhysicsHandleComponent UPhysicsHandleComponent
---@field GameState_GSS AGSSGameState
---@field GSSPlayerController AGSSPlayerController
---@field StatKeeper UStatKeeper
---@field EconomyTracker UEconomyTracker
---@field Sound UAudioComponent
---@field InteractionRange float
---@field CharacterState EPlayerState
---@field CharacterMinigameState ECharacterState
---@field PreviewActors TArray<AActor>
---@field RemoveItemFromHandInteractions TArray<TSubclassOf<AActor>>
---@field BaseTurnRate float
---@field BaseLookUpRate float
---@field bUsingMotionControllers boolean
---@field RMBTimeHold float
---@field ChangeQuestlineHoldTimeCurrent float
---@field ChangeQuestlineHoldTimeMax float
---@field LMBTimeHold float
---@field FTimeHold float
---@field bRMBPressed boolean
---@field bLMBPressed boolean
---@field bFPressed boolean
---@field bChangeQuestlinePressed boolean
---@field bInTutorialReading boolean
---@field LavaJumpStrength float
---@field IsRocketJumpEnabled boolean
---@field MaxRocketJumpExplosionDistance float
---@field RocketJumpZPower float
---@field RocketJumpXYPower float
---@field RocketJumpAirControl float
---@field RocketJumpAirControlDuration float
---@field DefaultKeyboardInputActions UDataTable
---@field DefaultGamepadInputActions UDataTable
---@field DefaultKeyboardInputAxis UDataTable
---@field DefaultGamepadInputAxis UDataTable
---@field OnCircularMenuInteraction FGSSPlayerCharacterOnCircularMenuInteraction
---@field bGamepadModeActive boolean
---@field CurInventory UInventoryComponent
---@field TechTreeManager UTechTreeManager
---@field TechTreeManagerClass TSubclassOf<UTechTreeManager>
---@field bInspectModeOn boolean
---@field bPreventCharacterMovement boolean
---@field bPreventCameraMovement boolean
---@field DefaultTraceTypes TArray<EObjectTypeQuery>
---@field TraceTypesWithHandleActor TArray<EObjectTypeQuery>
---@field bInvertX boolean
---@field bInvertY boolean
---@field CameraSpeedX float
---@field CameraSpeedY float
---@field bRumble boolean
---@field bToogleSprintMode boolean
---@field bToogleInspectMode boolean
---@field bOnLadder boolean
---@field BindWidget UKeyItemWidget
---@field DisplayedActor AActor
---@field DisplayedComponent UPrimitiveComponent
---@field UIActionsAudioComponent UAudioComponent
---@field ObjectiveSwitchSound USoundBase
---@field AnalyticsDataCollectorComponent UAnalyticsDataCollectorComponent
---@field bIsInFerrisCabin boolean
---@field PauseMenu TSoftObjectPtr<UUserWidget>
---@field TooltipPart FPartTooltip
local AGSSPlayerCharacter = {}

function AGSSPlayerCharacter:YButton_Released() end
function AGSSPlayerCharacter:YButton_Presssed() end
function AGSSPlayerCharacter:XButton_Released() end
function AGSSPlayerCharacter:XButton_Presssed() end
---@param ButtonToHold EHoldButton
function AGSSPlayerCharacter:TryToStartHoldingInteractions(ButtonToHold) end
---@param ToolNumber int32
function AGSSPlayerCharacter:ToolSelection(ToolNumber) end
function AGSSPlayerCharacter:ToggleStatDebug() end
function AGSSPlayerCharacter:ToggleSnapToGridAction_Released() end
function AGSSPlayerCharacter:ToggleSnapToGridAction() end
function AGSSPlayerCharacter:ToggleEventDebug() end
function AGSSPlayerCharacter:ToggleEconomyDebug() end
function AGSSPlayerCharacter:ToggleCarWashDebug() end
function AGSSPlayerCharacter:TipAction_Released() end
function AGSSPlayerCharacter:TipAction_Pressed() end
---@param StatAPIName FName
---@param ProgressAmount float
function AGSSPlayerCharacter:StatAchievementHandling(StatAPIName, ProgressAmount) end
---@param InputTicketState eTicketState
---@param TargetNPC AAICharacterBase
function AGSSPlayerCharacter:StartCinemaInteraction(InputTicketState, TargetNPC) end
function AGSSPlayerCharacter:SprintAction_ToggleRelease() end
function AGSSPlayerCharacter:SprintAction_Toggle() end
function AGSSPlayerCharacter:SprintAction_Released() end
function AGSSPlayerCharacter:SprintAction_Pressed() end
---@param ToolChoice ECircularMenuChoice
function AGSSPlayerCharacter:SpawnTool(ToolChoice) end
---@param ItemClass TSubclassOf<AItem>
---@param AsPublic boolean
---@param SpawnTransform FTransform
---@return AItem
function AGSSPlayerCharacter:SpawnPlayerItem(ItemClass, AsPublic, SpawnTransform) end
---@param InteractableActor AInteractableActor
---@return AInteractableActor
function AGSSPlayerCharacter:SpawnInteractableActor(InteractableActor) end
---@param AInteractableActorClass TSubclassOf<AInteractableActor>
---@return AInteractableActor
function AGSSPlayerCharacter:SpawnGhostInteractableActor(AInteractableActorClass) end
---@param TooltipToSet FPartTooltip
function AGSSPlayerCharacter:SetTooltipPart(TooltipToSet) end
---@param bNewValue boolean
function AGSSPlayerCharacter:SetPreventCharacterMovement(bNewValue) end
---@param bNewValue boolean
function AGSSPlayerCharacter:SetPreventCameraMovement(bNewValue) end
---@param NewPauseMenu UUserWidget
function AGSSPlayerCharacter:SetPauseMenu(NewPauseMenu) end
---@param NewMovementState EMovementState
function AGSSPlayerCharacter:SetMovementState(NewMovementState) end
function AGSSPlayerCharacter:SetMouseWidgetInteraction() end
---@param Hours int32
function AGSSPlayerCharacter:SetJoeCrashTime(Hours) end
---@param IsInPhotoMode boolean
function AGSSPlayerCharacter:SetIsInPhotoMode(IsInPhotoMode) end
---@param IsHudHidden boolean
function AGSSPlayerCharacter:SetHudVisibilityWithOptions(IsHudHidden) end
function AGSSPlayerCharacter:SetDefaultWidgetInteraction() end
---@param NewState ECharacterState
function AGSSPlayerCharacter:SetCharacterState(NewState) end
function AGSSPlayerCharacter:SecondaryAction_Released() end
function AGSSPlayerCharacter:SecondaryAction() end
function AGSSPlayerCharacter:RotateRight_Released() end
function AGSSPlayerCharacter:RotateRight_Presssed() end
---@param ActorTarget AActor
---@param PositionToLookAt FVector
function AGSSPlayerCharacter:RotatePlayerToActorOrLocation(ActorTarget, PositionToLookAt) end
function AGSSPlayerCharacter:RotateLeft_Released() end
function AGSSPlayerCharacter:RotateLeft_Presssed() end
function AGSSPlayerCharacter:RightTrigger_Released() end
function AGSSPlayerCharacter:RightTrigger_Presssed() end
function AGSSPlayerCharacter:RightBumper_Released() end
function AGSSPlayerCharacter:RightBumper_Presssed() end
function AGSSPlayerCharacter:ResetUnboundInputs() end
function AGSSPlayerCharacter:ResetPlayerPosition() end
function AGSSPlayerCharacter:ReleaseHeldItem() end
function AGSSPlayerCharacter:PrologWakeUpEvent() end
function AGSSPlayerCharacter:PrimaryAction_Released() end
function AGSSPlayerCharacter:PrimaryAction() end
---@param UiSound USoundCue
function AGSSPlayerCharacter:PlayUiSound(UiSound) end
---@param Hit boolean
---@param HitActor AActor
---@param HitComponent UPrimitiveComponent
---@param HitResult FHitResult
function AGSSPlayerCharacter:PlayerTraceLine(Hit, HitActor, HitComponent, HitResult) end
function AGSSPlayerCharacter:OnStepIntoLava() end
function AGSSPlayerCharacter:OnGamePadSettings() end
function AGSSPlayerCharacter:OnEscapeClicked() end
---@param ExplosionLocation FVector
---@param HitActor AActor
function AGSSPlayerCharacter:OnCannonExplosion(ExplosionLocation, HitActor) end
function AGSSPlayerCharacter:OnAppliedSoundSettings() end
function AGSSPlayerCharacter:OnAppliedGameplaySettings() end
function AGSSPlayerCharacter:OnAppliedControlSettings() end
---@param Val float
function AGSSPlayerCharacter:MoveMarshalWands(Val) end
function AGSSPlayerCharacter:Minigame_Action01_Released() end
function AGSSPlayerCharacter:Minigame_Action01_Pressed() end
function AGSSPlayerCharacter:LeftTrigger_Released() end
function AGSSPlayerCharacter:LeftTrigger_Presssed() end
function AGSSPlayerCharacter:LeftBumper_Released() end
function AGSSPlayerCharacter:LeftBumper_Presssed() end
---@param PartToCheck UJunkyardCarPartBase
---@return boolean
function AGSSPlayerCharacter:IsPartHovered(PartToCheck) end
---@param Other UPrimitiveComponent
---@return boolean
function AGSSPlayerCharacter:IsHoldComponent(Other) end
function AGSSPlayerCharacter:InspectModeAction_Released() end
function AGSSPlayerCharacter:InspectModeAction_Pressed() end
function AGSSPlayerCharacter:HighlightCinemaTrash_Released() end
function AGSSPlayerCharacter:HighlightCinemaTrash_Pressed() end
function AGSSPlayerCharacter:HighlightAirplaneHoles_Released() end
function AGSSPlayerCharacter:HighlightAirplaneHoles_Pressed() end
function AGSSPlayerCharacter:HideWholeUI() end
function AGSSPlayerCharacter:HideTooltipPart() end
function AGSSPlayerCharacter:HideCircularMenu() end
function AGSSPlayerCharacter:HandleOpeningOfToolMenu() end
---@return TArray<EObjectTypeQuery>
function AGSSPlayerCharacter:GetTraceTypes() end
---@return UStatKeeper
function AGSSPlayerCharacter:GetStatKeeper() end
---@return boolean
function AGSSPlayerCharacter:GetPreventCharacterMovement() end
---@return UGSSOverlay
function AGSSPlayerCharacter:GetPlayerOverlay() end
---@return boolean
function AGSSPlayerCharacter:GetPlayerInputStatus() end
---@return UUserWidget
function AGSSPlayerCharacter:GetPauseMenu() end
---@return boolean
function AGSSPlayerCharacter:GetIsSprinting() end
---@return boolean
function AGSSPlayerCharacter:GetIsInPhotoMode() end
---@param ClassToCompare TSoftClassPtr<AItem>
---@return boolean
function AGSSPlayerCharacter:GetIsHandleActorEqualBYSoftClass(ClassToCompare) end
---@param ClassToCompare UClass
---@return boolean
function AGSSPlayerCharacter:GetIsHandleActorEqualBYClass(ClassToCompare) end
---@return boolean
function AGSSPlayerCharacter:GetIsHandleActor_Product() end
---@return boolean
function AGSSPlayerCharacter:GetIsHandleActor_KeyItem() end
---@return boolean
function AGSSPlayerCharacter:GetGamepadModeActive() end
---@return UEconomyTracker
function AGSSPlayerCharacter:GetEconomyTracker() end
---@return FPartTooltip
function AGSSPlayerCharacter:GetCurrentPartTooltip() end
function AGSSPlayerCharacter:ForceStopGaragePartsPreview() end
function AGSSPlayerCharacter:ForceOutline() end
function AGSSPlayerCharacter:FollowQuestlineReleased() end
function AGSSPlayerCharacter:FollowQuestlinePressed() end
function AGSSPlayerCharacter:EscapeAction() end
function AGSSPlayerCharacter:EndCinemaInteraction() end
---@param bShowRedDot boolean
function AGSSPlayerCharacter:EnableWidgetInteractionDebugDot(bShowRedDot) end
---@param Item AItem
---@return AItem
function AGSSPlayerCharacter:EditItem(Item) end
function AGSSPlayerCharacter:E_ActionPressed() end
function AGSSPlayerCharacter:DPadUp_Released() end
function AGSSPlayerCharacter:DPadUp_Presssed() end
function AGSSPlayerCharacter:DPadRight_Released() end
function AGSSPlayerCharacter:DPadRight_Presssed() end
function AGSSPlayerCharacter:DPadLeft_Released() end
function AGSSPlayerCharacter:DPadLeft_Presssed() end
function AGSSPlayerCharacter:DPadDown_Released() end
function AGSSPlayerCharacter:DPadDown_Presssed() end
function AGSSPlayerCharacter:DisableInspectMode() end
function AGSSPlayerCharacter:CustomOpenPhotoMode() end
---@return boolean
function AGSSPlayerCharacter:CrashGame() end
---@param bClearConstructorModeLeftovers boolean
function AGSSPlayerCharacter:ClearHandleActor(bClearConstructorModeLeftovers) end
function AGSSPlayerCharacter:CircularMenu_Released_Gamepad() end
function AGSSPlayerCharacter:CircularMenu_Relased() end
function AGSSPlayerCharacter:CircularMenu_Presssed() end
function AGSSPlayerCharacter:CircularMenu_Pressed_Gamepad() end
---@return boolean
function AGSSPlayerCharacter:CanOpenInventory() end
---@return boolean
function AGSSPlayerCharacter:CanHandleSecondaryActionEnd() end
function AGSSPlayerCharacter:BButton_Released() end
function AGSSPlayerCharacter:BButton_Presssed() end
---@param AchievementAPIName FName
---@param ProgressAmount float
function AGSSPlayerCharacter:AchievementHandling(AchievementAPIName, ProgressAmount) end
function AGSSPlayerCharacter:AButton_Released() end
function AGSSPlayerCharacter:AButton_Presssed() end
function AGSSPlayerCharacter:AbortHoldingInteractions() end


---@class AGSSPlayerController : APlayerController
---@field OnInteractionPlayerController FGSSPlayerControllerOnInteractionPlayerController
---@field GSSPlayerCharacter AGSSPlayerCharacter
---@field PlayerOverlapActor AActor
---@field PlayerTargetActor AActor
---@field OnPossesseded FGSSPlayerControllerOnPossesseded
---@field OnUnPossesseded FGSSPlayerControllerOnUnPossesseded
---@field OnPlayerLoaded FGSSPlayerControllerOnPlayerLoaded
---@field VehiclePlayerIsIn AWheeledVehicle
---@field OnGamepadModeToggle FGSSPlayerControllerOnGamepadModeToggle
---@field OnEnableTabInput FGSSPlayerControllerOnEnableTabInput
---@field TabEnabled boolean
---@field bIngameMenuActive boolean
---@field bGamepadModeActive boolean
local AGSSPlayerController = {}

function AGSSPlayerController:UnlockRVUpgrades() end
function AGSSPlayerController:UnlockRVGuestBook() end
function AGSSPlayerController:UnlockJunkyardStuff() end
---@param StatAPIName FName
---@param ProgressAmount float
function AGSSPlayerController:StatAchievementHandling(StatAPIName, ProgressAmount) end
---@param IsVisible boolean
function AGSSPlayerController:SetRVDebugBoardsVisibility(IsVisible) end
---@param NewTargetActor AActor
function AGSSPlayerController:SetPlayerTargetActor(NewTargetActor) end
function AGSSPlayerController:PrintIsEpicLoggedIn() end
---@param Action FName
---@param AxisScale float
---@param bGamepad boolean
---@return FKey
function AGSSPlayerController:GetKeyBindingForAxis(Action, AxisScale, bGamepad) end
---@param Action FName
---@param bGamepad boolean
---@return FKey
function AGSSPlayerController:GetKeyBindingForAction(Action, bGamepad) end
---@param Action FName
---@param AxisScale float
---@return FText
function AGSSPlayerController:GetKeyAxisString(Action, AxisScale) end
---@param Action FName
---@return FText
function AGSSPlayerController:GetKeyActionString(Action) end
---@return boolean
function AGSSPlayerController:GetGamepadModeActive() end
---@param Key FKey
function AGSSPlayerController:GamepadModeCheck(Key) end
function AGSSPlayerController:FlushPressedKeys() end
---@param Enable boolean
function AGSSPlayerController:EnableCircularMenuBinding(Enable) end
function AGSSPlayerController:Cheat_UnlockRVUpgrades() end
function AGSSPlayerController:Cheat_UnlockRVShortcut() end
function AGSSPlayerController:Cheat_UnlockRVParking() end
function AGSSPlayerController:Cheat_UnlockRVGuestBook() end
function AGSSPlayerController:Cheat_UnlockJunkyardStuff() end
function AGSSPlayerController:Cheat_UnlockContractsManagerFunctionalityFully() end
function AGSSPlayerController:Cheat_UnlockCinemaStuff() end
function AGSSPlayerController:Cheat_UnlockAllServices() end
---@param AchievementId FName
function AGSSPlayerController:Cheat_UnlockAchievement(AchievementId) end
function AGSSPlayerController:Cheat_ToggleCampers3DWidget() end
---@param DestinationIndex int32
function AGSSPlayerController:Cheat_Teleport(DestinationIndex) end
function AGSSPlayerController:Cheat_SpawnVIPCustomer() end
function AGSSPlayerController:Cheat_SpawnTowTruck() end
---@param TaskForCustomer ECustomerType
function AGSSPlayerController:Cheat_SpawnTaskCustomer(TaskForCustomer) end
---@param EventType ERVEventType
function AGSSPlayerController:Cheat_SpawnRVEvent(EventType) end
function AGSSPlayerController:Cheat_SpawnPartyBus() end
---@param CarWreckType EJunkyardCarWreckType
---@param JunkyardPartCount int32
---@param GaragePartCount int32
function AGSSPlayerController:Cheat_SpawnJunkyardWreck(CarWreckType, JunkyardPartCount, GaragePartCount) end
---@param RowName FString
---@param Quantity int32
function AGSSPlayerController:Cheat_SpawnItemBox(RowName, Quantity) end
function AGSSPlayerController:Cheat_SpawnCinemaEvents() end
function AGSSPlayerController:Cheat_SkipQuest() end
---@param NumberOfObjectivesToSkip int32
function AGSSPlayerController:Cheat_SkipObjectives(NumberOfObjectivesToSkip) end
function AGSSPlayerController:Cheat_ShowRVDebugBoards() end
---@param Amount float
function AGSSPlayerController:Cheat_SetMaxAmountOfVehicles(Amount) end
---@param DLCName FString
---@param bNewActivated boolean
function AGSSPlayerController:Cheat_SetDLCActivated(DLCName, bNewActivated) end
---@param NewWaterPressureValue float
function AGSSPlayerController:Cheat_SetCarWashWaterPressure(NewWaterPressureValue) end
---@param AchievementId FName
function AGSSPlayerController:Cheat_ResetAchievement(AchievementId) end
function AGSSPlayerController:Cheat_RemoveAllRuins() end
---@param LeaderboardName FName
---@param StatName FName
---@param StatType ELeaderboardStatDataType
function AGSSPlayerController:Cheat_ReadLeaderboard(LeaderboardName, StatName, StatType) end
---@param Filename FString
function AGSSPlayerController:Cheat_ReadFile(Filename) end
---@param Token FString
function AGSSPlayerController:Cheat_LoginWithTokenDev(Token) end
function AGSSPlayerController:Cheat_LoginWithAccountPortal() end
---@param bIgnore boolean
function AGSSPlayerController:Cheat_IgnoreQuestProgressForUpgrades(bIgnore) end
function AGSSPlayerController:Cheat_HideWholeUI() end
function AGSSPlayerController:Cheat_HideUI() end
function AGSSPlayerController:Cheat_HideRVDebugBoards() end
---@param DeliveryTier EJunkyardPartRarity
---@param bGarageParts boolean
function AGSSPlayerController:Cheat_GenerateJunkyardPartsBasket(DeliveryTier, bGarageParts) end
function AGSSPlayerController:Cheat_FilePickerNew() end
function AGSSPlayerController:Cheat_EnableRVAutoBooking() end
function AGSSPlayerController:Cheat_DisableRVAutoBooking() end
function AGSSPlayerController:Cheat_DebugDeactivatedDLCs() end
---@param TagName FString
function AGSSPlayerController:Cheat_CacheFileByTag(TagName) end
---@param HoursAdded int32
function AGSSPlayerController:Cheat_AddTimeHours(HoursAdded) end
---@param Amount int32
function AGSSPlayerController:Cheat_AddRVTrustPoints(Amount) end
---@param Resource1 int32
---@param Resource2 int32
---@param Resource3 int32
function AGSSPlayerController:Cheat_AddRVResources(Resource1, Resource2, Resource3) end
---@param Amount float
function AGSSPlayerController:Cheat_AddMoney(Amount) end
---@param StatName FName
---@param StatType ELeaderboardStatDataType
---@param Value FString
function AGSSPlayerController:Cheat_AddLeaderboardStat(StatName, StatType, Value) end
---@param RowName FString
---@param Quantity int32
function AGSSPlayerController:Cheat_AddItemToInventory(RowName, Quantity) end
---@param Amount float
function AGSSPlayerController:Cheat_AddHappyAngry(Amount) end
---@param Amount float
function AGSSPlayerController:Cheat_AddFuel(Amount) end
---@param Value float
function AGSSPlayerController:Cheat_AddFameExperience(Value) end
---@param Amount int32
function AGSSPlayerController:Cheat_AddContractPoints(Amount) end
---@param Amount int32
function AGSSPlayerController:Cheat_AddCinemaRenown(Amount) end
---@param Value int32
function AGSSPlayerController:Cheat_AddChallengeProgress(Value) end
---@param Amount int32
function AGSSPlayerController:Cheat_AddAirstripBlueprints(Amount) end
---@param AchievementAPIName FName
---@param ProgressAmount float
function AGSSPlayerController:AchievementHandling(AchievementAPIName, ProgressAmount) end


---@class AGSSPlayerState : APlayerState
---@field ItemInventory UInventoryComponent
---@field LastLoanVolcanoAngerIncrease int32
---@field ContractPoints float
---@field OnCharacterMoneyDelegate FGSSPlayerStateOnCharacterMoneyDelegate
---@field OnCharacterCreditsDelegate FGSSPlayerStateOnCharacterCreditsDelegate
---@field OnContractPointsUpdated FGSSPlayerStateOnContractPointsUpdated
local AGSSPlayerState = {}

---@param DetailedYieldType EEconomyDetailedYieldType
---@param Quantity float
---@param money float
---@param bTrackEconomy boolean
---@param MoneyType EMoneyType
---@return boolean
function AGSSPlayerState:SubtractMoney(DetailedYieldType, Quantity, money, bTrackEconomy, MoneyType) end
---@param CircularMenuRef UUserWidget
function AGSSPlayerState:SetCircularMenuRef(CircularMenuRef) end
---@param HowMuchDoYouWantToPay float
---@param HowMuchYouPaid float
function AGSSPlayerState:PayLoan(HowMuchDoYouWantToPay, HowMuchYouPaid) end
---@param money float
---@return boolean
function AGSSPlayerState:HasEnoughMoney(money) end
---@param inPoints float
---@return boolean
function AGSSPlayerState:HasEnoughContractPoints(inPoints) end
---@return float
function AGSSPlayerState:GetMoney() end
---@return float
function AGSSPlayerState:GetCredits() end
---@return float
function AGSSPlayerState:GetContractPoints() end
---@param DetailedYieldType EEconomyDetailedYieldType
---@param Quantity float
---@param money float
---@param bTrackEconomy boolean
---@param MoneyType EMoneyType
---@param ForcedYieldType EEconomyGeneralYieldType
function AGSSPlayerState:AddMoney(DetailedYieldType, Quantity, money, bTrackEconomy, MoneyType, ForcedYieldType) end
---@param Credits float
function AGSSPlayerState:AddCredits(Credits) end
---@param inPoints float
function AGSSPlayerState:AddContractPoints(inPoints) end


---@class AGSSWayPoint : AActor
---@field ArrowComponent UArrowComponent
---@field RotateToPoint boolean
---@field OwnerAICharacter AAICharacterBase
local AGSSWayPoint = {}

---@param GoalTransform FTransform
---@param InRotateToPoint boolean
function AGSSWayPoint:SetWayPoint(GoalTransform, InRotateToPoint) end
---@param Actor AActor
---@param EndPlayReason EEndPlayReason::Type
function AGSSWayPoint:EndPlayAITargetPoint(Actor, EndPlayReason) end


---@class AGSSWheeledVehicle : AWheeledVehicle
---@field bDistanceOptimizationEnabled boolean
---@field SignificanceCalculationsTag FName
---@field bDisableTickWhenNotRendered boolean
---@field MaxTickDisableSignificanceLevel int32
---@field bOverrideDefaultSignificanceLevels boolean
---@field bOverridePriorityWhenNotRendered boolean
---@field NotRenderedOverridePriorityLevel int32
---@field SignificanceLevelsDefinitions TArray<FSignificanceLevel>
---@field VehicleID FGuid
---@field ItemInventory UInventoryComponent
---@field CollectibleItemsInventory UCollectiblesInventoryComponent
---@field bVehicleWasFixed boolean
---@field VehicleSkeletalMeshes TArray<TSoftObjectPtr<USkeletalMesh>>
---@field EnteringCarMontage UAnimMontage
---@field LeavingCarMontage UAnimMontage
---@field FuelEnter UChildActorComponent
---@field Collant UChildActorComponent
---@field OilCheck UChildActorComponent
---@field acumulator UChildActorComponent
---@field WasherFluid UChildActorComponent
---@field MirrorR UChildActorComponent
---@field MirrorL UChildActorComponent
---@field CarDoorRight UChildActorComponent
---@field CarDoorLeft UChildActorComponent
---@field sparkplug UChildActorComponent
---@field Wheel1 UChildActorComponent
---@field Wheel2 UChildActorComponent
---@field Wheel3 UChildActorComponent
---@field Wheel4 UChildActorComponent
---@field BrakeDisk1 UStaticMeshComponent
---@field BrakeDisk2 UStaticMeshComponent
---@field BrakeDisk3 UStaticMeshComponent
---@field BrakeDisk4 UStaticMeshComponent
---@field MaskFront UChildActorComponent
---@field MaskBack UChildActorComponent
---@field TowyMagnetSnapBox UBoxComponent
---@field NewVehicleMovementCollisionBox UBoxComponent
---@field NewVehicleMovementComponent UNewVehicleMovementComponent
---@field WashableCarMesh UChildActorComponent
---@field OnVehicleFinishTrace FGSSWheeledVehicleOnVehicleFinishTrace
---@field OnVehiclePartUpdated FGSSWheeledVehicleOnVehiclePartUpdated
---@field CurrentSpline USplineComponent
---@field Driver APawn
---@field AIVehicleController AAIVehicleController
---@field VehicleDirection EVehicleDirection
---@field VehiclePriorityTraffics TArray<EPriorityTraffic>
---@field StartPathPoint APathPoint
---@field EndPathPoint APathPoint
---@field CurrentPathPoints TArray<APathPoint>
---@field VehicleMovementState EVehicleMovementState
---@field EnterExitSkeletonMontages TArray<FBaseCharacterSkeletonMontage>
---@field VehicleEnteringMontage UAnimMontage
---@field VehicleLeavingMontage UAnimMontage
---@field VehicleCategory FGameplayTag
---@field bRVEntranceCurrentlyOcupied boolean
---@field VehicleTypes TArray<EVehicleType>
---@field RequiredCharacter TSoftClassPtr<AAICharacterBase>
---@field VehiclesParts TArray<AVehiclePart>
---@field VehicleOptymalizeType EVehicleOptymalizeType
---@field MaxSpeed float
---@field CurrentSplineDistance float
---@field MinStuckTime float
---@field MaxStuckVelocity float
---@field MaxStuckDistance float
---@field UnstuckForwardDistance float
---@field TimeToEnablePhysicsAfterUnstuck float
---@field CurrentUnstuckProgress float
---@field CurrentStuckLocation FVector
---@field bIsUnstuckProgressActive boolean
---@field EnablePhysicsTimer FTimerHandle
---@field IdleTimerHandle FTimerHandle
---@field VehicleHoodState EVehicleHoodState
---@field HoodOpeningSound USoundCue
---@field HoodClosingSound USoundCue
---@field HoodClosedSound USoundCue
---@field HoodOpenedSound USoundCue
---@field VehicleHoodStateAlpha float
---@field VehicleHood_CurAnimationTime float
---@field HoodOpeningTime float
---@field HoodOpenedMaxDegrees float
---@field bCanGetAttractedByMagnet boolean
local AGSSWheeledVehicle = {}

---@param NewSetup EVehicleOptymalizeType
function AGSSWheeledVehicle:VehicleStartSetup(NewSetup) end
---@param Distance float
---@param Angle float
---@param DetectedPawn APawn
---@param CheckLeftSide boolean
---@param CheckedVehicles TArray<AActor>
---@return boolean
function AGSSWheeledVehicle:VehicleSightAllert(Distance, Angle, DetectedPawn, CheckLeftSide, CheckedVehicles) end
---@param bEnable boolean
function AGSSWheeledVehicle:VehicleInteractMode(bEnable) end
---@param bEnabled boolean
function AGSSWheeledVehicle:VehicleAlarm(bEnabled) end
function AGSSWheeledVehicle:Unstuck() end
---@param DeltaTime float
function AGSSWheeledVehicle:TryProgressUnstuck(DeltaTime) end
---@param bEnable boolean
function AGSSWheeledVehicle:ToggleNavComponent(bEnable) end
---@param CurrentDriver AAICharacterBase
function AGSSWheeledVehicle:StopDrivingNoExit(CurrentDriver) end
---@param CurrentDriver AAICharacterBase
function AGSSWheeledVehicle:StopDriving(CurrentDriver) end
---@param CurrentDriver AAICharacterBase
---@param NewStartPathPoint APathPoint
function AGSSWheeledVehicle:StartDriving(CurrentDriver, NewStartPathPoint) end
---@param HoodState EVehicleHoodState
function AGSSWheeledVehicle:SnapHoodToLocation(HoodState) end
---@param NewState EVehicleHoodState
function AGSSWheeledVehicle:SetVehicleHoodState(NewState) end
---@param EntranceOccupied boolean
function AGSSWheeledVehicle:SetRVEntering(EntranceOccupied) end
function AGSSWheeledVehicle:ResetUnstuckProgress() end
---@param NewStartPathPoint APathPoint
---@param NewEndPathPoint APathPoint
function AGSSWheeledVehicle:PreStartDriving(NewStartPathPoint, NewEndPathPoint) end
function AGSSWheeledVehicle:OnPreInitializeComponents() end
function AGSSWheeledVehicle:OnHoodInteraction() end
---@param Target UInventoryComponent
function AGSSWheeledVehicle:LoadInventoryTruck(Target) end
---@return boolean
function AGSSWheeledVehicle:IsVIPCar() end
---@return boolean
function AGSSWheeledVehicle:IsTouristBus() end
---@return boolean
function AGSSWheeledVehicle:IsStuck() end
---@return boolean
function AGSSWheeledVehicle:IsRVCamper() end
---@return boolean
function AGSSWheeledVehicle:IsRepaintTruck() end
---@return boolean
function AGSSWheeledVehicle:IsProductsDeliveryTruck() end
---@return boolean
function AGSSWheeledVehicle:IsPartyBusStop() end
---@return boolean
function AGSSWheeledVehicle:IsPartsDeliveryTruck() end
---@return boolean
function AGSSWheeledVehicle:IsMaluch() end
---@return boolean
function AGSSWheeledVehicle:IsJunkyardCarTransporter() end
---@return boolean
function AGSSWheeledVehicle:IsIceCreamDeliveryTruck() end
---@return boolean
function AGSSWheeledVehicle:IsGarbageTruck() end
---@return boolean
function AGSSWheeledVehicle:IsFuelDeliveryTruck() end
---@return boolean
function AGSSWheeledVehicle:IsFightersVehicle() end
---@return boolean
function AGSSWheeledVehicle:IsAirportTruck() end
function AGSSWheeledVehicle:IdleCheck() end
---@param OutBrokedParts TArray<AVehiclePart>
---@param OutFixedParts TArray<AVehiclePart>
function AGSSWheeledVehicle:GetVehiclePartsStatus(OutBrokedParts, OutFixedParts) end
---@return boolean
function AGSSWheeledVehicle:GetVehicleInteractMode() end
---@return EVehicleHoodState
function AGSSWheeledVehicle:GetVehicleHoodState() end
---@return UPrimitiveComponent
function AGSSWheeledVehicle:GetPrimitiveToApplyFore() end
---@return UPrimitiveComponent
function AGSSWheeledVehicle:GetAttractedPrimitive() end
function AGSSWheeledVehicle:FindAndGeneratePath() end
function AGSSWheeledVehicle:EnablePhysicsAfterUnstuck() end
---@param Enable boolean
function AGSSWheeledVehicle:EnableOverlaps(Enable) end
---@param Enable boolean
function AGSSWheeledVehicle:EnableLamps(Enable) end
---@return boolean
function AGSSWheeledVehicle:CheckCarIsFixed() end
function AGSSWheeledVehicle:CarHorn() end
---@return boolean
function AGSSWheeledVehicle:CanActorGetAttracted() end
---@param DeltaTime float
function AGSSWheeledVehicle:AnimateVehicleHoodIfNeeded(DeltaTime) end


---@class AGSSWorldObject : AInteractableBuilding
---@field ConnectedActors TArray<AActor>
local AGSSWorldObject = {}

---@param ActorIndex int32
---@return AActor
function AGSSWorldObject:GetConnectedActor(ActorIndex) end


---@class AGSSWorldSettings : AWorldSettings
---@field MainMapDLC EDLCName
---@field bStartWithCameraDisabled boolean
---@field bStartWithMovementDisabled boolean
---@field PostProcessSettings UGSSPostProcessSettings
---@field ActiveRenownTypes TArray<TSubclassOf<URenownType>>
---@field DayNightCycleElecricityCurve UCurveFloat
---@field BuildingUpgrades UDA_BuildingUpgrades
---@field SOUNDTRACK TSoftObjectPtr<USoundCue>
---@field RadioSoundtrack TSoftObjectPtr<USoundCue>
---@field DecorationCameras TArray<TSoftObjectPtr<ADecorationCamera>>
---@field InteractiveCameras TArray<TSoftObjectPtr<ADecorationCamera>>
---@field UpgradeCameras TArray<TSoftObjectPtr<AUpgradeStationCamera>>
---@field EmployeeTasksInfo UEmployeeTasksDataAsset
---@field EmployeeTasks TArray<TSubclassOf<UEmployeeTask>>
---@field StandingDecorationAssets TArray<UDecorationLevel>
---@field HangingDecorationsAssets TArray<UDecorationLevel>
---@field UnlockableFameDecorations TArray<UFameDecoration>
---@field Shelves TArray<FShelveStruct>
---@field DeliveryBoatSpawnerSoft TSoftObjectPtr<AWaterVehicleSpawner>
---@field WaterFuelCustomerSpawnerSoft TSoftObjectPtr<AWaterVehicleSpawner>
---@field FuelCustomersDestinationMovementPoints TArray<TSoftObjectPtr<AActor>>
---@field IceCreams TArray<FIceCreamStruct>
---@field PartyBusEventClass TSubclassOf<UGSSEvent>
---@field PartyBusFirstSpawnDelay FTimeStruct
---@field PartyBallLevelName FName
---@field DT_Cameras UDataTable
---@field CustomizationCategories UBiomCustomizationsDataAsset
---@field DTKeyItemsUnlocks UDataTable
---@field DTDeliveryTrucks UDataTable
---@field MoreInfoUpgrades UDataTable
---@field Buttons UDA_MainPCButtons
---@field PopularityWidgetClass TSubclassOf<UGSSInnerWidget>
---@field DirtyWidgetClass TSubclassOf<UGSSInnerWidget>
---@field StationMoreInfoPopularity TSubclassOf<UGSSInnerWidget>
---@field CampersData UCampersDataAsset
---@field StartingQuestLine UQuestLineBase
---@field PostGameChallenges UPostGameChallengesDataAsset
---@field MapSpecificSettings UDataAsset
---@field CheatTeleportLocations UDataTable
---@field TrafficSettings UTrafficSettings
---@field Sections TArray<FSectionStruct>
---@field PopularityAwardsData UPopularityRewardsDataAsset
---@field Promotions TArray<UActivePromotionData>
---@field VehiclesFuelData UDA_FuelData
---@field SaveGameActor TSoftObjectPtr<ASaveGameDataActor>
---@field CustomerTasks UDA_AITasksInfo
---@field QuestCompletedWidget TSubclassOf<UUserWidget>
---@field MaxAcceptableWalkingDistance float
---@field TutorialData UTutorialsDataAsset
---@field PlayerResetLocation FVector
---@field NPCResetLocation FVector
---@field PlayerResetRotation FRotator
---@field JourneyTime float
---@field HomeRestingTime float
local AGSSWorldSettings = {}



---@class AGSS_NewHud : AHUD
---@field CurrentRedDotTags FGameplayTagContainer
---@field RedDotWidgetClass TSubclassOf<UGSSBaseWidget>
---@field PlayerOverlayClass TSoftClassPtr<UGSS_HUD_BaseWidget>
---@field NotificationManagerClass TSoftClassPtr<UGSS_HUD_BaseWidget>
---@field InteractionManagerClass TSoftClassPtr<UGSS_HUD_BaseWidget>
---@field RadialInventoryClass TSoftClassPtr<UGSSBaseWidget>
---@field ThrowMiniGameClass TSoftClassPtr<UGSSBaseWidget>
---@field UIQuestManagerClass TSoftClassPtr<UGSS_HUD_BaseWidget>
---@field FocusedWidgets TArray<UGSSBaseWidget>
---@field NotFocusedWidgets TArray<UGSSBaseWidget>
---@field PlayerOverlayRef UGSS_HUD_BaseWidget
---@field InteractionManagerRef UGSS_HUD_BaseWidget
---@field ThrowMiniGameRef UGSS_HUD_BaseWidget
---@field NotificationManagerRef UGSS_HUD_BaseWidget
---@field QuestManagerRef UGSS_HUD_BaseWidget
---@field RadialInventoryRef UGSS_HUD_BaseWidget
---@field OpenTutorials TArray<UUserWidget>
---@field BaseWidgets TArray<UGSS_HUD_BaseWidget>
---@field OtherWidgets TArray<UWidget>
---@field ProductsPreset TArray<FOrderPreset>
---@field PartsPreset TArray<FOrderPreset>
---@field IceCreamPreset TArray<FOrderPreset>
---@field PreviousOrderProducts TArray<FBasketItemStruct>
---@field PreviousOrderParts TArray<FBasketItemStruct>
---@field PreviousOrderIceCreams TArray<FBasketItemStruct>
local AGSS_NewHud = {}

---@param WidgetSoftClass TSoftClassPtr<UGSSBaseWidget>
---@param ParentObject UPanelWidget
---@param bSetFocus boolean
---@param bDestroyIfExists boolean
---@param WidgetName FName
---@param ZOrder int32
---@return UGSSBaseWidget
function AGSS_NewHud:TryCreateGSSWidget(WidgetSoftClass, ParentObject, bSetFocus, bDestroyIfExists, WidgetName, ZOrder) end
---@param InteractionOutput EInteractionOutput
---@param GamepadInitialized boolean
function AGSS_NewHud:ToggleRadialMenu(InteractionOutput, GamepadInitialized) end
---@param bActive boolean
function AGSS_NewHud:ToggleInputs(bActive) end
---@param Visibility ESlateVisibility
function AGSS_NewHud:ToggleHudWidgets(Visibility) end
---@param WidgetToShow TSoftClassPtr<UGSS_HUD_BaseWidget>
---@param Visibility ESlateVisibility
function AGSS_NewHud:SetVisibilityToWidgetBySoftClass(WidgetToShow, Visibility) end
---@param Visibility ESlateVisibility
function AGSS_NewHud:SetVisibilityToOtherWidgets(Visibility) end
---@param Type ECategoryFilter
---@param Items TArray<FBasketItemStruct>
function AGSS_NewHud:SetPreviousOrder(Type, Items) end
---@param Type ECategoryFilter
---@param Preset FOrderPreset
---@param Index int32
function AGSS_NewHud:SetPreset(Type, Preset, Index) end
---@param Name FText
---@param ButtonIndex int32
---@param Category ECategoryFilter
function AGSS_NewHud:SetName(Name, ButtonIndex, Category) end
---@param TutorialToRemove UUserWidget
function AGSS_NewHud:RemoveTutorial(TutorialToRemove) end
---@param WidgetToRemove UWidget
function AGSS_NewHud:RemoveFromOtherWidgets(WidgetToRemove) end
---@param QuestStarted UQuestBase
function AGSS_NewHud:OnQuestStarted(QuestStarted) end
function AGSS_NewHud:OnGameLoaded() end
---@param IsPressed boolean
function AGSS_NewHud:OnEscapeDown(IsPressed) end
---@param TutorialWidget UUserWidget
---@return boolean
function AGSS_NewHud:IsTutorialOnTop(TutorialWidget) end
---@param WidgetToFind TSoftClassPtr<UGSSBaseWidget>
---@return UGSSBaseWidget
function AGSS_NewHud:GetWidgetBySoftClass(WidgetToFind) end
---@return UGSSThrowMiniGame
function AGSS_NewHud:GetThrowMiniGameManager() end
---@return UUI_QuestManager
function AGSS_NewHud:GetQuestUIManager() end
---@param Type ECategoryFilter
---@return TArray<FBasketItemStruct>
function AGSS_NewHud:GetPreviousOrder(Type) end
---@return UGSS_PlayerOverlay
function AGSS_NewHud:GetPlayerOverlay() end
---@param Type ECategoryFilter
---@return TArray<FOrderPreset>
function AGSS_NewHud:GetOrderPresets(Type) end
---@return UGSS_Notification_Manager
function AGSS_NewHud:GetNotificationManager() end
---@return boolean
function AGSS_NewHud:GetIsFocusedWidgetsEmpty() end
---@return UGSS_InteractionManager
function AGSS_NewHud:GetInteractionManager() end
---@return UGSSBaseWidget
function AGSS_NewHud:GetFirstDisplayedWidget() end
---@return TArray<UGSS_HUD_BaseWidget>
function AGSS_NewHud:GetBaseWidgets() end
---@param ClassToFind TSoftClassPtr<UGSSBaseWidget>
---@param FocusType EBaseWidgetFocusType
---@return UGSSBaseWidget
function AGSS_NewHud:FindCreatedWidget(ClassToFind, FocusType) end
---@param WidegtToDestory UGSSBaseWidget
function AGSS_NewHud:DestroyGSSWidget(WidegtToDestory) end
function AGSS_NewHud:CreateNotificationManager() end
---@param OwnerObject AActor
---@return UKeyItemWidget
function AGSS_NewHud:CreateBindingWidget(OwnerObject) end
function AGSS_NewHud:CreateBaseWidgets() end
---@param ClassToFind TSoftClassPtr<UGSSBaseWidget>
---@return boolean
function AGSS_NewHud:CheckIfWidgetIsCreated(ClassToFind) end
function AGSS_NewHud:BeginPlay() end
---@param TutorialToAdd UUserWidget
function AGSS_NewHud:AddTutorial(TutorialToAdd) end
---@param WidgetToAdd UWidget
function AGSS_NewHud:AddToOtherWidgets(WidgetToAdd) end
---@param CreatedWidget UGSSBaseWidget
function AGSS_NewHud:AddToCreatedWidgets(CreatedWidget) end


---@class AGameButton : AGSSWorldObject
local AGameButton = {}

function AGameButton:OnButtonPress() end


---@class AGarage : AHouse
---@field OnGarageGameStartedEvent FGarageOnGarageGameStartedEvent
---@field OnGarageGameFinishedEvent FGarageOnGarageGameFinishedEvent
---@field OnGarageEnteredEvent FGarageOnGarageEnteredEvent
---@field OnGarageLeftEvent FGarageOnGarageLeftEvent
---@field OnGarageMinigameSuccessNotification FGarageOnGarageMinigameSuccessNotification
---@field OnGarageMinigameFailNotification FGarageOnGarageMinigameFailNotification
---@field OnGarageMinigameStarted FGarageOnGarageMinigameStarted
---@field OnGarageMinigameEnded FGarageOnGarageMinigameEnded
---@field OnGarageLiftAreaSwitch FGarageOnGarageLiftAreaSwitch
---@field CarLiftRefs TArray<ACarLift>
---@field GameWidgetREF UUserWidget
---@field bFirstCustomerServed boolean
---@field IsHighlightingVehicleParts boolean
---@field bPlayerInGarage boolean
local AGarage = {}

function AGarage:OnPlayerLeftGarage() end
function AGarage:OnPlayerEnteredGarage() end
---@param GarageMinigameType EGarageMinigame
function AGarage:OnGarageMinigameStart(GarageMinigameType) end
---@param GarageMinigameType EGarageMinigame
---@param bSuccess boolean
function AGarage:OnGarageMinigameEnd(GarageMinigameType, bSuccess) end
---@param CarLiftRef ACarLift
---@param CarRef AGSSWheeledVehicle
function AGarage:OnGarageGameStarted(CarLiftRef, CarRef) end
---@param CarLiftRef ACarLift
---@param CarRef AGSSWheeledVehicle
function AGarage:OnGarageGameFinished(CarLiftRef, CarRef) end
---@return boolean
function AGarage:GetIsPlayerInGarage() end


---@class AGarageVolume : ATriggerVolume
---@field GarageRef AGarage
local AGarageVolume = {}

---@param NewGarageRef AGarage
function AGarageVolume:SetGarageRef(NewGarageRef) end
---@param OverlappedActor AActor
---@param OtherActor AActor
function AGarageVolume:OnOverlapEnd(OverlappedActor, OtherActor) end
---@param OverlappedActor AActor
---@param OtherActor AActor
function AGarageVolume:OnOverlapBegin(OverlappedActor, OtherActor) end


---@class AGasStationProduct : AProduct
local AGasStationProduct = {}


---@class AGenerator : AInteractableActor
---@field HasElectrocity boolean
---@field OnElectricityEvent FGeneratorOnElectricityEvent
local AGenerator = {}

---@param bOn boolean
function AGenerator:GeneratorEvent(bOn) end


---@class AGlasses : AGasStationProduct
local AGlasses = {}


---@class AGlobalGameEventManager : AActor
---@field OnDialogueStarted FGlobalGameEventManagerOnDialogueStarted
---@field OnDialogueEnded FGlobalGameEventManagerOnDialogueEnded
---@field OnDialogueUpdate FGlobalGameEventManagerOnDialogueUpdate
---@field OnDialoguePlayerChoice FGlobalGameEventManagerOnDialoguePlayerChoice
---@field OnNPCDialogueStart FGlobalGameEventManagerOnNPCDialogueStart
---@field OnNPCDialogueEnd FGlobalGameEventManagerOnNPCDialogueEnd
---@field OnThieveWidgetShown FGlobalGameEventManagerOnThieveWidgetShown
---@field OnStartedRvGuestService FGlobalGameEventManagerOnStartedRvGuestService
---@field OnEndedRvGuestService FGlobalGameEventManagerOnEndedRvGuestService
local AGlobalGameEventManager = {}



---@class AGriffin : AActor
---@field OnWeightChanged FGriffinOnWeightChanged
---@field ChildActorGriffinLeft UChildActorComponent
---@field ChildActorGriffinRight UChildActorComponent
---@field GriffinLeftContainer ADumbbellsContainer
---@field GriffinRightContainer ADumbbellsContainer
---@field DumbbellsMinigame ARvMinigameInWorld_Dumbbells
---@field SceneRootComponent USceneComponent
local AGriffin = {}

---@param Container ADumbbellsContainer
---@param ContainerWeight float
function AGriffin:UpdateWeight(Container, ContainerWeight) end
---@param minigame ARvMinigameInWorld_Dumbbells
function AGriffin:Init(minigame) end
---@return float
function AGriffin:GetWeight() end
---@return float
function AGriffin:GetStartingWeight() end
---@return ADumbbellsContainer
function AGriffin:GetGriffinRightContainer() end
---@return ADumbbellsContainer
function AGriffin:GetGriffinLeftContainer() end
---@return ARvMinigameInWorld_Dumbbells
function AGriffin:GetDumbbellsMinigame() end


---@class AGrinderStation : AInteractableBuilding
---@field Grinder UChildActorComponent
---@field UnlockedTag FGameplayTag
local AGrinderStation = {}



---@class AGuitarPlayerPawn : APawn
---@field bIsAvailableForPosses boolean
---@field PosessionTransitionOn boolean
---@field OriginalCharacter ACharacter
local AGuitarPlayerPawn = {}

---@param PlayerController AController
function AGuitarPlayerPawn:PrePosession(PlayerController) end


---@class AHammer : AKeyItem
---@field EditingType EHammerEditType
---@field PlayerInputComponent UInputComponent
---@field MeshComp USkeletalMeshComponent
---@field CurrentlyEditedQueuePoint AQueuePointPreview
---@field CashShopBaseQueuePoint AQueuePointPreview
---@field EditedQueue TArray<AQueuePointPreview>
---@field EditedCashShop ACashShop
---@field EditedActor APlaceableActor
---@field EditedWall ACustomizationHousePart
---@field PreviewWall ACustomizationHousePart
---@field EditedFloor AActor
---@field QuickAccessWall FCustomizationPart
---@field PreviouslyOverlappingActors TArray<AActor>
---@field PlayerCharacter AGSSPlayerCharacter
---@field DefaultWallClass TSoftClassPtr<ACustomizationHousePart>
---@field DefaultWindowClass TSoftClassPtr<ACustomizationHousePart>
---@field DefaultDoorClass TSoftClassPtr<ACustomizationHousePart>
---@field DefaultPillarClass TSoftClassPtr<ACustomizationHousePart>
---@field DefaultRoofClass TSoftClassPtr<ACustomizationHousePart>
---@field QueuePointIndicatorClass TSoftClassPtr<AQueuePointPreview>
---@field PickUpCashShop USoundCue
---@field PickUpTrashCan USoundCue
---@field PutDownObject USoundCue
---@field PlaceNewWall USoundCue
---@field StartEditingWall USoundCue
---@field OnHoverUIButton USoundCue
---@field UseHammerAnimation UAnimMontage
---@field InBlendOutTime float
---@field HammerInteractionCooldown float
---@field bCanBePlaced boolean
---@field bIsLoading boolean
---@field OriginalFloorMaterial UMaterialInterface
---@field HammerWidgetClass TSoftClassPtr<UHammerWidget>
---@field HammerWidgetInstance UHammerWidget
---@field HammerBuildingWidgetClass TSoftClassPtr<UHammerBuildingWidget>
---@field HammerBuildingWidgetInstance UHammerBuildingWidget
local AHammer = {}

---@param EditedStructure EStructureType
function AHammer:ToggleUI_WallInteraction(EditedStructure) end
function AHammer:ToggleUI_QuickAccessPartEnabled() end
---@param EditType EHammerEditType
function AHammer:ToggleUI_EditType(EditType) end
function AHammer:StopInteractingWithPlaceableActor() end
function AHammer:StopEditCashRegisterQueue() end
function AHammer:StopAnimation_UseHammer() end
function AHammer:SpawnEmptyPreviewWall_LoadComplete() end
function AHammer:SetQueueToDefault() end
function AHammer:SetQueuePointPosition() end
---@param bIsPressed boolean
function AHammer:SecondaryInteract(bIsPressed) end
---@return boolean
function AHammer:RemoveQueuePoint() end
---@param bIsPressed boolean
function AHammer:R_Action(bIsPressed) end
---@param TargetWall ACustomizationHousePart
function AHammer:QuickSwapWall(TargetWall) end
---@param bIsPressed boolean
function AHammer:Q_Action(bIsPressed) end
---@param CustomizationPart FCustomizationPart
---@param bIsTwoSided boolean
function AHammer:PreviewNewWallRef_LoadComplete(CustomizationPart, bIsTwoSided) end
---@param StaticMeshSPtr TSoftObjectPtr<UStaticMesh>
---@param MaterialSPtr TSoftObjectPtr<UMaterialInstance>
---@param StructureType EStructureType
---@param bIsTwoSided boolean
function AHammer:PreviewNewWall_LoadComplete(StaticMeshSPtr, MaterialSPtr, StructureType, bIsTwoSided) end
---@param MaterialSPtr TSoftObjectPtr<UMaterialInstance>
function AHammer:PreviewNewFloor_LoadComplete(MaterialSPtr) end
function AHammer:PlayAnimation_UseHammer() end
---@param bIsSettingQueueToDefault boolean
function AHammer:PlaceQueuePoint(bIsSettingQueueToDefault) end
---@param CustomizationPart FCustomizationPart
function AHammer:On_Unhover_PreviewNewWall(CustomizationPart) end
function AHammer:On_Unhover_PreviewNewFloor() end
---@param CustomizationPart FCustomizationPart
---@param bIsTwoSided boolean
function AHammer:On_Hover_PreviewNewWall(CustomizationPart, bIsTwoSided) end
---@param NewMaterialSPtr TSoftObjectPtr<UMaterialInstance>
function AHammer:On_Hover_PreviewNewFloor(NewMaterialSPtr) end
function AHammer:LookForActorSecondaryInteract() end
function AHammer:LookForActorRInteract() end
function AHammer:LookForActorPrimaryInteract() end
function AHammer:LookForActorFInteract() end
function AHammer:LoadNextRoof() end
---@param TargetWall ACustomizationHousePart
function AHammer:InteractWithWall(TargetWall) end
---@param PlaceableActor APlaceableActor
function AHammer:InteractWithPlaceableActor(PlaceableActor) end
---@param FloorActor AActor
function AHammer:InteractWithFloor(FloorActor) end
---@param bIsPressed boolean
function AHammer:Interact(bIsPressed) end
---@return EStructureType
function AHammer:GetAvaliableStructureType() end
---@param Category UCustomizationCategory
---@param Type EStructureType
---@return TArray<FCustomizationPart>
function AHammer:GetAllElementsToDisplay(Category, Type) end
---@param Category UCustomizationCategory
---@return TArray<FCustomizationPart>
function AHammer:GetAllElementsFromCategory(Category) end
---@return TArray<FBiomCustomizationCategory>
function AHammer:GetAllCustomizationCategories() end
---@param bIsCheckingForFloor boolean
---@return AActor
function AHammer:GetActorToInteract(bIsCheckingForFloor) end
---@param bIsPressed boolean
function AHammer:F_Action(bIsPressed) end
---@param bIsPressed boolean
function AHammer:EscapeAction(bIsPressed) end
---@param CashShop ACashShop
function AHammer:EditCashRegisterQueue(CashShop) end
function AHammer:EditCashDesk() end
function AHammer:E_EditCashDesk() end
---@param bIsPressed boolean
function AHammer:E_Action(bIsPressed) end
function AHammer:DrawWrongChangeTypeWarning() end
---@param Price float
function AHammer:DrawWallPriceOnScreen(Price) end
function AHammer:DrawQueuePointsCountWarning() end
function AHammer:DrawNotEditablePartWarning() end
function AHammer:DrawNoMoneyWarning() end
---@param bDraw boolean
function AHammer:DrawLastQueuePointPlacementWarning(bDraw) end
function AHammer:DrawDoorLimitWarning() end
function AHammer:DrawClosedStationWarning() end
function AHammer:DeleteAllQueuePoints() end
---@param CustomizationPart FCustomizationPart
---@param StructureClass TSoftClassPtr<ACustomizationHousePart>
---@param bIsTwoSided boolean
function AHammer:ConfirmSwapWalls_LoadComplete(CustomizationPart, StructureClass, bIsTwoSided) end
---@param CustomizationPart FCustomizationPart
---@param bIsTwoSided boolean
function AHammer:ConfirmSwapWalls(CustomizationPart, bIsTwoSided) end
---@param MaterialSPtr TSoftObjectPtr<UMaterialInstance>
---@param Price int32
function AHammer:ConfirmFloorSwap(MaterialSPtr, Price) end
function AHammer:CloseUI_WallInteraction() end
function AHammer:ChangeToPlayerViewTarget() end


---@class AHandHeldCannon : AKeyItem
---@field SkeletalMesh USkeletalMeshComponent
---@field FireAudioComponent UAudioComponent
local AHandHeldCannon = {}



---@class AHandheldComputer : AKeyItem
---@field InteractionWidget UWidgetInteractionComponent
local AHandheldComputer = {}



---@class AHouse : AInteractableActor
---@field BoxComponent UBoxComponent
local AHouse = {}



---@class AHouseDoor : AInteractableBuilding
local AHouseDoor = {}


---@class AIceCream : AGasStationProduct
local AIceCream = {}


---@class AIceCreamBuilding : AInteractableBuilding
---@field OutlinedActor AActor
---@field State EIceCreamMakingState
---@field OnFailedChangingGamepadTarget FIceCreamBuildingOnFailedChangingGamepadTarget
---@field SkeletalComponentBell USkeletalMeshComponent
---@field MinigameCamera UCameraComponent
---@field ContainersSpawnPoint UArrowComponent
---@field ConesSpawnPoint UArrowComponent
---@field Light UChildActorComponent
---@field LeftHolder UChildActorComponent
---@field RightHolder UChildActorComponent
---@field WaterBowl UStaticMeshComponent
---@field ChainBell UStaticMeshComponent
---@field ChainSmallCones UStaticMeshComponent
---@field ChainMediumCones UStaticMeshComponent
---@field ChainBigCones UStaticMeshComponent
---@field ConeOffset FVector
---@field ContainresInitialPositionOffset FVector
---@field ContainersSpawnOffset FVector
---@field BellAnimStep float
---@field ScoopingStepSize float
---@field MinDistanceToUpdateScooping float
---@field SlowScoopingFactor float
---@field SpoonInBowlRotation FRotator
---@field IceCreamFlavourMaterials TSoftObjectPtr<UMaterialInstance>
---@field StandMeshes TArray<TSoftObjectPtr<UStaticMesh>>
---@field BellMesh TSoftObjectPtr<USkeletalMesh>
---@field IceCreamConeMeshes TArray<TSoftObjectPtr<UStaticMesh>>
---@field ConeMeshes TArray<FIceCreamCones>
---@field IceCreamScoopMesh TSoftObjectPtr<UStaticMesh>
---@field ContainerClass TArray<TSoftClassPtr<AIceCreamContainer>>
---@field ConeClass TSoftClassPtr<AIceCreamCone>
---@field ConeContainerClass TSoftClassPtr<AIceCreamConeContainer>
---@field SpoonClass TSoftClassPtr<ASpoon>
---@field FlavourInfo FIceCreamInfo
---@field CanOrderIceCreams FGameplayTag
---@field SoundScoopingLoop USoundCue
---@field SoundGrabCone USoundCue
---@field SoundReleaseCone USoundCue
---@field SoundFreezerLoopSmall USoundCue
---@field SoundFreezerLoopBig USoundCue
---@field SoundPlaceScoop USoundCue
---@field SoundWater USoundCue
---@field LoadedContainersInfo TArray<FLoadedContainersInfo>
---@field bPlacingScoop boolean
---@field LastSpoonLocation FVector
---@field bStatusVisible boolean
---@field StartHandle FTimerHandle
---@field SpawnedScoop AStaticMeshActor
---@field Spoon ASpoon
---@field PickedUpCone AIceCreamCone
---@field ScoopingContainer AIceCreamContainer
---@field IceCreamGivenToCustomer TArray<FSoldIceCreams>
---@field OrderList TArray<FIceCreamOrders>
---@field BellAnimInstance UBellAnimInstance
---@field Containers TArray<AIceCreamContainer>
---@field ConeContainers TArray<AIceCreamConeContainer>
---@field GamepadTargets TArray<FIceCreamPadTargetStruct>
---@field GamepadIdx int32
---@field MouseSpeedMultiplier int32
---@field LeftHolderIndex int32
---@field RightHolderIndex int32
local AIceCreamBuilding = {}

---@param bPressed boolean
function AIceCreamBuilding:UseBell(bPressed) end
function AIceCreamBuilding:UpdateOrder() end
function AIceCreamBuilding:UI_ShowTutorial() end
function AIceCreamBuilding:UI_ShowNotify() end
function AIceCreamBuilding:UI_OnStartMinigame() end
function AIceCreamBuilding:UI_OnRefreshOrder() end
---@param bShowInfo boolean
---@param UIOrder TArray<FIceCreamOrders>
function AIceCreamBuilding:UI_OnOrderCheck(bShowInfo, UIOrder) end
function AIceCreamBuilding:UI_OnEndMinigame() end
function AIceCreamBuilding:UI_OnCannotTakeNextScoop() end
---@param Flavour EIceCreamFlavours
---@return FIceCreamInfo
function AIceCreamBuilding:UI_GetFlavourInfo(Flavour) end
---@param bPressed boolean
function AIceCreamBuilding:SpoonCleaning(bPressed) end
---@param bActive boolean
function AIceCreamBuilding:SetMinigameActive(bActive) end
---@param bPressed boolean
function AIceCreamBuilding:SecondaryAction(bPressed) end
function AIceCreamBuilding:RepopulateGamepadTargets() end
---@param bPressed boolean
function AIceCreamBuilding:PrimaryAction(bPressed) end
---@param bPressed boolean
function AIceCreamBuilding:PlaySoundScooping(bPressed) end
---@param bPlay boolean
function AIceCreamBuilding:PlaySoundIdleSmall(bPlay) end
---@param bPlay boolean
function AIceCreamBuilding:PlaySoundIdleBig(bPlay) end
function AIceCreamBuilding:PlayBellMontage() end
---@param bPressed boolean
function AIceCreamBuilding:PlaceScoopAction(bPressed) end
---@param bVisibility boolean
function AIceCreamBuilding:OnSpoonChanged(bVisibility) end
---@param Val float
function AIceCreamBuilding:MoveMouseUpDown(Val) end
---@param bPressed boolean
function AIceCreamBuilding:MoveMouseToPreviousSpot(bPressed) end
---@param bPressed boolean
function AIceCreamBuilding:MoveMouseToPreviousSection(bPressed) end
---@param bPressed boolean
function AIceCreamBuilding:MoveMouseToNextSpot(bPressed) end
---@param bPressed boolean
function AIceCreamBuilding:MoveMouseToNextSection(bPressed) end
---@param bGoForward boolean
---@param bChangeSection boolean
function AIceCreamBuilding:MoveMouseToNextGamepadLocation(bGoForward, bChangeSection) end
---@param Val float
function AIceCreamBuilding:MoveMouseLeftRight(Val) end
---@param bGoForward boolean
function AIceCreamBuilding:MoveGamepadIdx(bGoForward) end
---@param GamepadIndex int32
---@return boolean
function AIceCreamBuilding:IsConeEmpty(GamepadIndex) end
function AIceCreamBuilding:IncrementGamepadIdx() end
---@param Section EIceCreamPadTargetSection
---@return EIceCreamPadTargetSection
function AIceCreamBuilding:GetPreviousSection(Section) end
---@param Section EIceCreamPadTargetSection
---@return EIceCreamPadTargetSection
function AIceCreamBuilding:GetNextSection(Section) end
function AIceCreamBuilding:FinishOrderEmployee() end
---@param bPressed boolean
function AIceCreamBuilding:ExitMinigameAction(bPressed) end
function AIceCreamBuilding:DecrementGamepadIdx() end
---@param bPressed boolean
function AIceCreamBuilding:ConeRemoving(bPressed) end
---@param bPressed boolean
function AIceCreamBuilding:CheckStatusAction(bPressed) end
---@return boolean
function AIceCreamBuilding:CanTakeNextScoop() end
---@param bGoForward boolean
---@param bChangeSection boolean
function AIceCreamBuilding:CalculateNextGamepadLocation(bGoForward, bChangeSection) end


---@class AIceCreamCone : AProduct
---@field PositionMultiplier float
---@field ConeOffset FVector
---@field ScoopOffset FVector
---@field OneScoopHeight float
---@field ScoopSpawnPoint UArrowComponent
---@field Scoops TArray<FSoldIceCreamFlavour>
---@field ScoopsMeshes TArray<AStaticMeshActor>
---@field Spoon ASpoon
local AIceCreamCone = {}

---@param bShouldBeOutlined boolean
function AIceCreamCone:SetOutline(bShouldBeOutlined) end


---@class AIceCreamConeContainer : AActor
---@field MainMesh UStaticMeshComponent
local AIceCreamConeContainer = {}

---@param bShouldBeOutlined boolean
function AIceCreamConeContainer:SetOutline(bShouldBeOutlined) end


---@class AIceCreamContainer : AProduct
---@field SoundContainerIn USoundCue
---@field SoundContainerOut USoundCue
---@field IceCreamMesh UStaticMeshComponent
---@field NoIceCreamLeftMesh UStaticMeshComponent
---@field SpoonSkeletalComponent USkeletalMeshComponent
---@field ScoopComponent UStaticMeshComponent
---@field AmountLeft int32
---@field MaxMeshLoweringUnits float
---@field IceCreamInfoTexture UTexture2D
---@field UpTargetPosition float
---@field AnimationStep float
---@field Flavour EIceCreamFlavours
---@field TargetScoopingDistance float
---@field ConePosition FVector
---@field SpoonLerpStep float
---@field TargetScoopScale FVector
---@field IceCreamFlavourMeshes TArray<TSoftObjectPtr<UStaticMesh>>
local AIceCreamContainer = {}

function AIceCreamContainer:UI_UpdateAmountWidget() end
---@param bShow boolean
function AIceCreamContainer:UI_ShowAmountWidgets(bShow) end
---@param bShouldBeOutlined boolean
function AIceCreamContainer:SetOutline(bShouldBeOutlined) end


---@class AIceCreamHolder : AActor
---@field MainMesh UStaticMeshComponent
---@field ConeSnapPoint UArrowComponent
local AIceCreamHolder = {}

---@param bShouldBeOutlined boolean
function AIceCreamHolder:SetOutline(bShouldBeOutlined) end


---@class AIceCreamRelaxSpot : AInteractableBuilding
local AIceCreamRelaxSpot = {}


---@class AInsideGSSArea : ABuildArea
---@field bAcceptShelves boolean
local AInsideGSSArea = {}



---@class AInteractableActor : AItem
---@field ArrowComponent UArrowComponent
---@field PathStations TArray<APathStation>
---@field Waypoints TArray<FWayPoint>
---@field DefaultWayPoints TArray<FWayPoint>
---@field RotateToActor boolean
---@field BuildingType EBuildingType
---@field IgnoreQueue boolean
---@field bCanEmployeeUse boolean
---@field MaxActorLevel int32
---@field CurrentActorLevel int32
---@field InWayPointAcceptanceDistance float
---@field InPathPointAcceptanceDistance float
---@field QueueType EQueueType
---@field bLoadingFromSaveGame boolean
---@field OnQueueUpdated FInteractableActorOnQueueUpdated
---@field OnActorLevelChange FInteractableActorOnActorLevelChange
---@field OnEmployeeLeftQueue FInteractableActorOnEmployeeLeftQueue
---@field PathPoints TArray<APathPoint>
---@field EmployeeePosition UArrowComponent
---@field EmployeeeWayPoint FWayPoint
---@field MapsToLoad TArray<FName>
---@field MapsToUnload TArray<FName>
---@field LoadUUID int32
---@field UnloadUUID int32
local AInteractableActor = {}

function AInteractableActor:UpdatePathStations() end
function AInteractableActor:UpdatePath() end
---@param ActorLevel int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function AInteractableActor:UpdateMesh(ActorLevel, bLoadedFromSaveGame, bNewVersion) end
---@param ItemsToUnlock TArray<TSoftClassPtr<AItem>>
function AInteractableActor:UnlockItems(ItemsToUnlock) end
function AInteractableActor:UnloadMaps() end
---@param OutArray TArray<FWayPoint>
function AInteractableActor:SortWayPoints(OutArray) end
---@param FeautureName FString
function AInteractableActor:SetNewAdditionalFeature(FeautureName) end
---@param Level int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function AInteractableActor:SetActorLevel(Level, bLoadedFromSaveGame, bNewVersion) end
function AInteractableActor:ResetQueue() end
---@param bLoadedFromSave boolean
function AInteractableActor:PostLoadMapsEvent(bLoadedFromSave) end
function AInteractableActor:PostLoadMapsBlueprintEvent() end
---@param UpgradeActions TArray<UGameAction>
function AInteractableActor:PerformUpgradeActions(UpgradeActions) end
---@param EventDisplayToLoad TSoftClassPtr<UEventDisplay>
---@param ItemsToUnlock TArray<TSoftClassPtr<AItem>>
---@param UpgradeActions TArray<UGameAction>
function AInteractableActor:OnEventAndItemsLoaded(EventDisplayToLoad, ItemsToUnlock, UpgradeActions) end
---@param Reason FString
function AInteractableActor:OnEditedActor(Reason) end
---@param bLoadedFromSave boolean
function AInteractableActor:LoadMaps(bLoadedFromSave) end
---@param bLoadedFromSaveGame boolean
---@param NewVersion boolean
function AInteractableActor:LoadGameBeginPlay(bLoadedFromSaveGame, NewVersion) end
---@param EventDisplayToLoad TSoftClassPtr<UEventDisplay>
function AInteractableActor:LoadAndPlayEventDisplay(EventDisplayToLoad) end
---@param AICharacter AAICharacterBase
---@param TaskState ETaskResult
---@param ContinueWaiting boolean
---@param ForceLeave boolean
---@return boolean
function AInteractableActor:LeaveQueue(AICharacter, TaskState, ContinueWaiting, ForceLeave) end
---@param AICharacter AAICharacterBase
---@return FWayPoint
function AInteractableActor:LeaveEmployee(AICharacter) end
---@param Character AAICharacterBase
---@return boolean
function AInteractableActor:IsVehicleInHisPathPoint(Character) end
---@return boolean
function AInteractableActor:IsQueueInTheirsPathPoints() end
---@return boolean
function AInteractableActor:IsQueueFull() end
---@return boolean
function AInteractableActor:IsMaxActorLevel() end
---@return boolean
function AInteractableActor:IsAvailable() end
---@param Character AAICharacterBase
---@return boolean
function AInteractableActor:IsActorInHisWayPoint(Character) end
---@return boolean
function AInteractableActor:HasAnyAvailablePathPoint() end
---@param NumberOfPeopleInQueue int32
---@param NumberOfPeopleWaiting int32
---@param NumberOfPeopleOnTheirWay int32
function AInteractableActor:GetQueueDetails(NumberOfPeopleInQueue, NumberOfPeopleWaiting, NumberOfPeopleOnTheirWay) end
---@return int32
function AInteractableActor:GetNumPeopleInQueue() end
---@return AAICharacterBase
function AInteractableActor:GetCurrentUser() end
---@return AAICharacterBase
function AInteractableActor:GetCurrentEmployee() end
---@param bLoadedFromSaveGame boolean
function AInteractableActor:GetBuildingDataToLoad_Unload(bLoadedFromSaveGame) end
---@return int32
function AInteractableActor:GetActorLevel() end
---@param AICharacterBase AAICharacterBase
---@return FWayPoint
function AInteractableActor:FindCharacter(AICharacterBase) end
---@param FeautureName FString
---@param Level int32
---@return boolean
function AInteractableActor:CheckIfCanBuyAddtionalFeauture(FeautureName, Level) end
---@param AICharacterBase AAICharacterBase
---@return int32
function AInteractableActor:AddToQueue(AICharacterBase) end
---@param AICharacterBase AAICharacterBase
---@param Added boolean
---@return FWayPoint
function AInteractableActor:AddEmployee(AICharacterBase, Added) end


---@class AInteractableBuilding : APlaceableActor
---@field Ruins TArray<ARuins>
---@field OnCustomerArrived FInteractableBuildingOnCustomerArrived
---@field OnCustomerServed FInteractableBuildingOnCustomerServed
---@field BuildingState EBuildingPathStationState
---@field bShowClosedStationMesh boolean
---@field bIsBuildingOpen boolean
---@field ClosedStationMesh UStaticMeshComponent
local AInteractableBuilding = {}

function AInteractableBuilding:SpecialOpenCloseEvent() end
---@param NewState EBuildingPathStationState
---@param PathStationIndex uint8
function AInteractableBuilding:OpenCloseBuilding(NewState, PathStationIndex) end
---@return boolean
function AInteractableBuilding:GetIsBuildingOpen() end
---@param DestroyedActor AActor
function AInteractableBuilding:DestroyRuin(DestroyedActor) end
---@return boolean
function AInteractableBuilding:CanBeUnblocked() end


---@class AInteractableChalkboard : AActor
---@field MainMesh UStaticMeshComponent
---@field RentalBuilding TSoftObjectPtr<AEquipmentRentalBuilding>
local AInteractableChalkboard = {}

---@return TSoftObjectPtr<AEquipmentRentalBuilding>
function AInteractableChalkboard:GetRentalBuilding() end


---@class AInteractableDecal : AActor
---@field DecalComponent UDecalComponent
---@field DecalText FString
---@field DecalLettersLength int32
---@field BoxOverlap UBoxComponent
---@field DecalType EDecalType
---@field bBeingCleaned boolean
local AInteractableDecal = {}

---@param bNewCleaned boolean
function AInteractableDecal:SetBeingCleaned(bNewCleaned) end
---@return boolean
function AInteractableDecal:GetBeingCleaned() end


---@class AItem : AActor
---@field bIsGhost boolean
---@field OnMeshLoadedEvent FItemOnMeshLoadedEvent
---@field ItemStruct FItemStruct
---@field MainMesh UStaticMeshComponent
---@field bIsMeshLoading boolean
---@field IsPublic boolean
---@field CanBeEditable boolean
---@field bHoldToEdit boolean
---@field ButtonToPerformHoldingInteractions EHoldButton
---@field EditHoldTime float
---@field bHasPermanentOutline boolean
---@field OwnerCharacter AGSSCharacterBase
---@field StartPosition FVector
---@field PlayerHandlPoint FTransform
---@field bIsLockedFromQuest boolean
local AItem = {}

---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function AItem:UseItem(Pawn, Throw, AimingTime) end
---@param AsGhost boolean
function AItem:SpawnEventFinished(AsGhost) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AItem:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param bIsSimulatedPhysic boolean
function AItem:SetItemPhysic(bIsSimulatedPhysic) end
---@param Actor AActor
function AItem:OnOnverlapedActor(Actor) end
---@param bLock boolean
function AItem:LockItemFromQuest(bLock) end
---@param Instaginator AInteractableActor
---@return boolean
function AItem:IsUnLocked(Instaginator) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function AItem:GetPathPoint(GSSWheeledVehicle) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function AItem:GetInteractiveTransform(Actor, RotateToTransform) end
---@return boolean
function AItem:GetElectrocity() end
---@param On boolean
function AItem:EnableElectrocity(On) end
---@param EditedComponent UPrimitiveComponent
---@return boolean
function AItem:EditItemHandled(EditedComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AItem:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
function AItem:DisableInteractionInfo(Pawn) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AItem:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AItem:AlternativeInteraction(Pawn, UPrimitiveComponent) end


---@class AItemBox : AItem
---@field StaticMeshComponent UStaticMeshComponent
---@field InventoryComponent UInventoryComponent
local AItemBox = {}



---@class AJerryCan : AKeyItem
---@field MaxFuel float
local AJerryCan = {}

---@param FuelEnter AFuelEnter
function AJerryCan:SnapToFuelEnterAndFueling(FuelEnter) end
---@param Fuel float
function AJerryCan:SetFuel(Fuel) end
---@return float
function AJerryCan:GetFuel() end


---@class AJoeAirplaneTEST : AActor
---@field MainMeshComponent UStaticMeshComponent
---@field VehiclesParts TArray<AVehiclePart>
---@field ItemInventory UInventoryComponent
local AJoeAirplaneTEST = {}

---@return UStaticMeshComponent
function AJoeAirplaneTEST:GetMesh() end


---@class AJoeCharacter : APilotCharacter
---@field JoeAirplane AAirplane_TapingMinigame
---@field JoeReapiringDialogTimer FTimerHandle
---@field FirestJoeDialogTimer FTimerHandle
---@field JoeRepairingDialogInterval float
---@field FirstDialogDelay float
---@field MaxAllowedDistansFromJoeToPlayerToTriggerDialogs float
local AJoeCharacter = {}

---@param Dialogtype ENPCConversationType
function AJoeCharacter:PlayRandomJoeDialog(Dialogtype) end
---@param NewPlaneState EJoeAirplaneState
function AJoeCharacter:OnJoePlaneStateChanged(NewPlaneState) end
---@return boolean
function AJoeCharacter:IsTapingQuestActive() end
---@return boolean
function AJoeCharacter:IsPlayerClose() end


---@class AJoeCrashManager : AActor
---@field HoursPassed int32
---@field CurRandomHour int32
local AJoeCrashManager = {}



---@class AJoePlaneMarshalWandsMinigame : AActor
---@field RootSphere USphereComponent
---@field MainMeshComponent UStaticMeshComponent
---@field WheelsMeshComp UStaticMeshComponent
---@field PropellerMeshComp UStaticMeshComponent
---@field RadderMeshComp UStaticMeshComponent
---@field ElevatorMeshComp UStaticMeshComponent
---@field StablilzerLeftMeshComp UStaticMeshComponent
---@field StablilzerRightMeshComp UStaticMeshComponent
---@field WingLeftMeshComp UStaticMeshComponent
---@field WingRightMeshComp UStaticMeshComponent
---@field WingRopesMeshComp UStaticMeshComponent
---@field AileronLeftTopMeshComp UStaticMeshComponent
---@field AileronLeftBottomMeshComp UStaticMeshComponent
---@field AileronRightTopMeshComp UStaticMeshComponent
---@field AileronRightBottomMeshComp UStaticMeshComponent
---@field AudioComponent_Start UAudioComponent
---@field AudioComponent_LowToHigh UAudioComponent
---@field AudioComponent_HighLoop UAudioComponent
---@field AudioFade_LowToHighTimerHandle FTimerHandle
---@field AudioFade_HighTimerHandle FTimerHandle
---@field AudioFade_LowToHighTime float
---@field AudioFade_HighTime float
---@field PropellerSpeed float
---@field WheelsSpeed float
---@field AscendPitchMultiplier float
---@field MaxPitchDuringAscend float
---@field RollAddedPerTickInAscend float
---@field RollDirection int32
---@field LastAppliedPitch float
local AJoePlaneMarshalWandsMinigame = {}

---@param RotationDegrees float
function AJoePlaneMarshalWandsMinigame:SetAileronAndRadderRotation(RotationDegrees) end
---@param Rotation FRotator
---@param Speed float
function AJoePlaneMarshalWandsMinigame:MovePlaneForward(Rotation, Speed) end
function AJoePlaneMarshalWandsMinigame:AudioFade_Start() end
function AJoePlaneMarshalWandsMinigame:AudioFade_LowToHigh() end
function AJoePlaneMarshalWandsMinigame:AudioFade_High() end
---@param AscendPitch float
---@param Speed float
function AJoePlaneMarshalWandsMinigame:AscendPlane(AscendPitch, Speed) end


---@class AJoePlanePropeller : AActor
---@field SkeletalMesh USkeletalMeshComponent
---@field SmartObject UNPSmartObjectComponent
local AJoePlanePropeller = {}



---@class AJunkyardBase : AInteractableBuilding
local AJunkyardBase = {}


---@class AJunkyardCarWreck : AActor
---@field MainMesh UStaticMeshComponent
---@field RoofMesh UStaticMeshComponent
---@field TrunkMesh UStaticMeshComponent
---@field UnderbodyMesh UStaticMeshComponent
---@field Battery UStaticMeshComponent
---@field sparkplug UStaticMeshComponent
---@field FrontWheels UStaticMeshComponent
---@field BackWheels UStaticMeshComponent
---@field mirrors UStaticMeshComponent
---@field spoiler UStaticMeshComponent
---@field exhaust UStaticMeshComponent
---@field turbo UStaticMeshComponent
---@field Engine UStaticMeshComponent
---@field InteractBox UBoxComponent
---@field MagnetSnapBox UBoxComponent
---@field MagnetTraceBox UBoxComponent
---@field SeanTaskPosition UArrowComponent
---@field MarkerWidget UWidgetComponent
---@field NPSmartObjectComponent UNPSmartObjectComponent
---@field CarPartComponentSlots TMap<EJunkyardCarPartType, UActorComponent>
---@field AttachedActorsForMagnet TArray<AActor>
---@field WreckName FText
---@field CarTier EJunkyardPartRarity
---@field WreckType EJunkyardCarWreckType
---@field RustColor FLinearColor
---@field bRusty boolean
---@field bIsBeingDelivered boolean
---@field bTmpMagnetAttractionDisabled boolean
---@field BasePrice float
---@field CustomizationMaterialInterface UMaterialInterface
---@field DisablePhysicsTime float
---@field EnableCollisionSounds boolean
---@field OnCarWreckPartHovered FJunkyardCarWreckOnCarWreckPartHovered
---@field OnWreckModified FJunkyardCarWreckOnWreckModified
---@field OnAttractedToMagnet FJunkyardCarWreckOnAttractedToMagnet
---@field OnInspectModeEntered FJunkyardCarWreckOnInspectModeEntered
---@field OnWheelsRemoved FJunkyardCarWreckOnWheelsRemoved
---@field OnFullyLoadedFromSave FJunkyardCarWreckOnFullyLoadedFromSave
---@field OnPlannedPaintChanged FJunkyardCarWreckOnPlannedPaintChanged
---@field OnPlannedDecalChanged FJunkyardCarWreckOnPlannedDecalChanged
---@field OnPlannedPartChanged FJunkyardCarWreckOnPlannedPartChanged
---@field WrecksSettings UJunkyardWrecksDataAsset
---@field DisableOverlapsTime float
---@field MarkerDisplayDistance float
---@field TowTruckOffsetNoWheels FTransform
---@field TowTruckOffsetAllWheels FTransform
---@field TowTruckOffsetFrontWheels FTransform
---@field TowTruckOffsetBackWheels FTransform
---@field DisableOverlapsTimer FTimerHandle
---@field bReservedBySean boolean
---@field bWrenchBlocked boolean
---@field bReservedByPlayer boolean
---@field bIsMarkerVisible boolean
---@field bIsCraneUsedByPlayer boolean
---@field bLoadingAttachedToCrane boolean
---@field bBoundCraneEvents boolean
---@field bInspectMode boolean
---@field CarWreckState ECarWreckState
---@field CurrentMarking ECarWreckMarking
---@field PlaceableAreaType ECarWreckPlaceableAreaType
---@field DisablePhysicsTimer FTimerHandle
---@field ActionManagerSubsystem UActionManagerSubsystem
---@field JunkyardManager AJunkyardManager
---@field PlayerCharacter AGSSPlayerCharacter
---@field GES UGlobalEventSubsystem
---@field WheelMeshes TArray<UStaticMeshComponent>
---@field SpawnedWreckTooltip ACarWreck_Tooltip
---@field OnStateChanged FJunkyardCarWreckOnStateChanged
---@field bCanGetAttractedByMagnet boolean
---@field AttractedByMagnetResetTime float
---@field AreaMissedCheckTime float
---@field ShowAllSpotsOccupiedMessageCooldown float
---@field LastDropClosestArea ACarWreckPlaceableArea
---@field AreaMissedCheckTimer FTimerHandle
---@field AttractedByMagnetResetTimer FTimerHandle
---@field IsAttractedByMagnet boolean
---@field PhotoPath FString
---@field IsInteractionInfoDisplayed boolean
---@field DisableInteractionInfoDelayTimer FTimerHandle
local AJunkyardCarWreck = {}

---@param Slot EJunkyardCarPartType
---@param Rarity EJunkyardPartRarity
function AJunkyardCarWreck:UpdateCustomizablePartTierOnlyMaterial(Slot, Rarity) end
function AJunkyardCarWreck:TryFinishProject() end
function AJunkyardCarWreck:StartCustomInteraction() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AJunkyardCarWreck:SimpleInteraction(Pawn, UPrimitiveComponent) end
function AJunkyardCarWreck:ShowReservedBySeanMessage() end
---@param NewVisibility boolean
---@param StencilValue int32
---@param bParts boolean
function AJunkyardCarWreck:SetWholeWreckHighlightVisibility(NewVisibility, StencilValue, bParts) end
---@param NewState ECarWreckState
function AJunkyardCarWreck:SetState(NewState) end
---@param IsReservedBySean boolean
function AJunkyardCarWreck:SetReservedBySean(IsReservedBySean) end
---@param IsReservedByPlayer boolean
function AJunkyardCarWreck:SetReservedByPlayer(IsReservedByPlayer) end
---@param NewPlaceableAreaType ECarWreckPlaceableAreaType
function AJunkyardCarWreck:SetPlaceableAreaType(NewPlaceableAreaType) end
---@param IsEnabled boolean
function AJunkyardCarWreck:SetPhysicsEnabled(IsEnabled) end
---@param InPhotoPath FString
function AJunkyardCarWreck:SetPhotoPath(InPhotoPath) end
---@param IsMobile boolean
function AJunkyardCarWreck:SetMobility(IsMobile) end
---@param IsLocked boolean
function AJunkyardCarWreck:SetLockPhysics(IsLocked) end
---@param NewIsHeldByMagnet boolean
function AJunkyardCarWreck:SetIsHeldByMagnet(NewIsHeldByMagnet) end
---@param NewMarking ECarWreckMarking
---@param IgnoreSeanReservation boolean
---@param LoadingGame boolean
function AJunkyardCarWreck:SetCurrentMarking(NewMarking, IgnoreSeanReservation, LoadingGame) end
---@param IsVisible boolean
function AJunkyardCarWreck:SetCraneMarkerVisibility(IsVisible) end
---@param IsEnabled boolean
function AJunkyardCarWreck:SetAllCollisionsEnabled(IsEnabled) end
function AJunkyardCarWreck:ResetAttractedByMagnet() end
---@param Slot EJunkyardCarPartType
---@param bApplyEffect boolean
function AJunkyardCarWreck:RemovePartFromSlot(Slot, bApplyEffect) end
---@param Slot EJunkyardCarPartType
---@param bGhost boolean
---@param bSynchronously boolean
function AJunkyardCarWreck:RefreshMaterialForPartInSlot(Slot, bGhost, bSynchronously) end
function AJunkyardCarWreck:PlayEventOnDeattached() end
function AJunkyardCarWreck:PlayCollisionSoundManually() end
---@param HitComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param NormalImpulse FVector
---@param Hit FHitResult
function AJunkyardCarWreck:OnWheelsHitEvent(HitComponent, OtherActor, OtherComp, NormalImpulse, Hit) end
---@param HitComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param NormalImpulse FVector
---@param Hit FHitResult
function AJunkyardCarWreck:OnWheelsHit(HitComponent, OtherActor, OtherComp, NormalImpulse, Hit) end
function AJunkyardCarWreck:OnResetCollisionSounds() end
---@param bPressed boolean
function AJunkyardCarWreck:OnPlayerEnterInspectMode(bPressed) end
---@param Slot EJunkyardCarPartType
function AJunkyardCarWreck:OnPartInteracted(Slot) end
function AJunkyardCarWreck:OnMinigameStateChanged() end
---@param Result boolean
---@param Slot EJunkyardCarPartType
---@param PartStruct FStorageCarPart
function AJunkyardCarWreck:OnMinigameResult(Result, Slot, PartStruct) end
---@param OverlappedComp UPrimitiveComponent
---@param Other AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AJunkyardCarWreck:OnInteractBoxOverlap(OverlappedComp, Other, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function AJunkyardCarWreck:OnInteractBoxEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
---@param Showighlights boolean
function AJunkyardCarWreck:OnCraneHighlightsToggled(Showighlights) end
---@param ExitedyPlayer boolean
function AJunkyardCarWreck:OnCraneExited(ExitedyPlayer) end
---@param EnteredByPlayer boolean
function AJunkyardCarWreck:OnCraneEntered(EnteredByPlayer) end
---@param bHovered boolean
---@param CarPartSlot EJunkyardCarPartType
function AJunkyardCarWreck:OnCarPartMouseOver(bHovered, CarPartSlot) end
function AJunkyardCarWreck:OnAttractedToMagnetEvent() end
---@param SnappedActor AActor
function AJunkyardCarWreck:OnActorSnappedToMagnet(SnappedActor) end
---@param DetachedActor AActor
function AJunkyardCarWreck:OnActorDetachedFromMagnet(DetachedActor) end
function AJunkyardCarWreck:LoadAttachedToCrane() end
---@param Marking ECarWreckMarking
---@param MarkingError ECarWreckMarkingError
---@return boolean
function AJunkyardCarWreck:IsSpecificMarkingPossible(Marking, MarkingError) end
---@return boolean
function AJunkyardCarWreck:IsReservedBySean() end
---@return boolean
function AJunkyardCarWreck:IsReservedByPlayer() end
---@return boolean
function AJunkyardCarWreck:IsOtherWreckAttachedToMagnet() end
---@return boolean
function AJunkyardCarWreck:IsOnWreckSpot() end
---@return boolean
function AJunkyardCarWreck:IsOnPlatform() end
---@return boolean
function AJunkyardCarWreck:IsOnExhibitionSpot() end
---@param bGhosts boolean
---@param bHighlight boolean
function AJunkyardCarWreck:HighlightPartsForInspectMode(bGhosts, bHighlight) end
---@return boolean
function AJunkyardCarWreck:HasCustomSetPhysicsEnabled() end
---@param OptionalModifier FStorageCarPart
---@return FCarPartData
function AJunkyardCarWreck:GetWreckAverageStats(OptionalModifier) end
---@return ECarWreckState
function AJunkyardCarWreck:GetState() end
---@return UPrimitiveComponent
function AJunkyardCarWreck:GetPrimitiveToApplyFore() end
---@return ECarWreckPlaceableAreaType
function AJunkyardCarWreck:GetPlaceableAreaType() end
---@return FString
function AJunkyardCarWreck:GetPhotoPath() end
---@return boolean
function AJunkyardCarWreck:GetIsHeldByMagnet() end
---@return boolean
function AJunkyardCarWreck:GetIsAttractedByMagnet() end
---@return ECarWreckMarking
function AJunkyardCarWreck:GetCurrentMarking() end
---@return UPrimitiveComponent
function AJunkyardCarWreck:GetAttractedPrimitive() end
---@return TArray<UActorComponent>
function AJunkyardCarWreck:GetAllInstalledParts() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AJunkyardCarWreck:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
function AJunkyardCarWreck:DisassembleAllParts() end
function AJunkyardCarWreck:DisableOverlapEvents() end
function AJunkyardCarWreck:DisableInteractionInfoDelayed() end
---@param Pawn APawn
function AJunkyardCarWreck:DisableInteractionInfo(Pawn) end
function AJunkyardCarWreck:DestroyWreckTooltip() end
---@param IsPhysicsEnabled boolean
function AJunkyardCarWreck:CustomSetPhysicsEnabled(IsPhysicsEnabled) end
function AJunkyardCarWreck:CreateCarParts() end
function AJunkyardCarWreck:CheckIfAreaMissed() end
---@return boolean
function AJunkyardCarWreck:CanWreckBeMovedByPlayer() end
---@param NoSpaceGarage boolean
---@param NoSpaceJunkyard boolean
---@return boolean
function AJunkyardCarWreck:CanRemoveAllParts(NoSpaceGarage, NoSpaceJunkyard) end
---@return boolean
function AJunkyardCarWreck:CanCollisionSoundsBePlayed() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AJunkyardCarWreck:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@return boolean
function AJunkyardCarWreck:CanActorGetAttracted() end
---@param OptionalModifier FStorageCarPart
---@param bIncludeTribute boolean
---@return float
function AJunkyardCarWreck:CalculateWreckBasePrice(OptionalModifier, bIncludeTribute) end
---@return boolean
function AJunkyardCarWreck:AreAllMountablePartsPlannedOrInstalled() end
---@param PartComponentClass TSoftClassPtr<UActorComponent>
---@param Slot EJunkyardCarPartType
---@param bVisible boolean
---@param Tier EJunkyardPartRarity
---@return UJunkyardCarPartCustomizable
function AJunkyardCarWreck:AddPartToSlot(PartComponentClass, Slot, bVisible, Tier) end


---@class AJunkyardCarWreckCustomizable : AJunkyardCarWreck
---@field RightDoor UStaticMeshComponent
---@field LeftDoor UStaticMeshComponent
---@field FrontBumper UStaticMeshComponent
---@field RearBumper UStaticMeshComponent
---@field hood UStaticMeshComponent
---@field Logo UStaticMeshComponent
---@field MainMeshRenderTarget URenderTargetComponent
---@field bAssemblyMode boolean
---@field bProjectCreatedEffectShown boolean
---@field bProjectFinishedEffectShown boolean
---@field bShowEffectOnProjectFinished boolean
---@field SpawnedDecals TArray<ADecalToPaint>
---@field WreckPaintData TMap<UPrimitiveComponent, FCarPaintData>
---@field MaterialsPerType TMap<ECustomizationPaintType, UTexture>
---@field WreckTooltip ACarWreckTooltip
---@field OnProjectFinished FJunkyardCarWreckCustomizableOnProjectFinished
---@field OnPartEffectStarted FJunkyardCarWreckCustomizableOnPartEffectStarted
---@field OnPaintEffectStarted FJunkyardCarWreckCustomizableOnPaintEffectStarted
---@field OnDecalEffectStarted FJunkyardCarWreckCustomizableOnDecalEffectStarted
---@field OnPartRemovingStarted FJunkyardCarWreckCustomizableOnPartRemovingStarted
---@field bPutOnSale boolean
local AJunkyardCarWreckCustomizable = {}

function AJunkyardCarWreckCustomizable:StartSeanClearingRust() end
---@param bShow boolean
function AJunkyardCarWreckCustomizable:ShowGhostParts(bShow) end
---@param InIsPutOnSale boolean
function AJunkyardCarWreckCustomizable:SetIsPutOnSale(InIsPutOnSale) end
---@param bPreview boolean
function AJunkyardCarWreckCustomizable:PreviewPlannedPaint(bPreview) end
function AJunkyardCarWreckCustomizable:OnRustCleared() end
---@param bEnd boolean
function AJunkyardCarWreckCustomizable:OnMaskInteraction(bEnd) end
function AJunkyardCarWreckCustomizable:OnMaskInteracted() end
---@return boolean
function AJunkyardCarWreckCustomizable:IsProjectFinished() end
---@return boolean
function AJunkyardCarWreckCustomizable:HasAnyPaint() end
function AJunkyardCarWreckCustomizable:HandleFInteraction() end
---@return float
function AJunkyardCarWreckCustomizable:GetRustProgressPercentage() end
---@return float
function AJunkyardCarWreckCustomizable:GetProjectProgress() end
---@return ADecalToPaint
function AJunkyardCarWreckCustomizable:GetLastPlacedDecal() end
---@return boolean
function AJunkyardCarWreckCustomizable:GetIsPutOnSale() end
---@return TArray<UJunkyardCarPartCustomizable>
function AJunkyardCarWreckCustomizable:GetAllPlannedParts() end
function AJunkyardCarWreckCustomizable:FinishRepaintForBody() end
function AJunkyardCarWreckCustomizable:FinishClearingRust() end
function AJunkyardCarWreckCustomizable:DebugCleanEverything() end
---@param Slot EJunkyardCarPartType
---@param CarPaintData FSavedCarPaint
function AJunkyardCarWreckCustomizable:ChangePlannedPaintTypeForPart(Slot, CarPaintData) end
---@param CarPaintData FSavedCarPaint
function AJunkyardCarWreckCustomizable:ChangePlannedPaintTypeForBody(CarPaintData) end
function AJunkyardCarWreckCustomizable:CancelRustClear() end
---@param bRepaint boolean
---@param bApplyingPaint boolean
function AJunkyardCarWreckCustomizable:ApplyBodyEffectsOverTime(bRepaint, bApplyingPaint) end
---@param Slot EJunkyardCarPartType
---@param PartStruct FStorageCarPart
---@param bGhost boolean
---@param bSetup boolean
---@param bPaint boolean
---@param CarPaint FSavedCarPaintData
---@param Decals TArray<ADecalToPaint>
function AJunkyardCarWreckCustomizable:AddAndSetupPartToSlot(Slot, PartStruct, bGhost, bSetup, bPaint, CarPaint, Decals) end


---@class AJunkyardInspectArea : AHouse
local AJunkyardInspectArea = {}

---@return boolean
function AJunkyardInspectArea:IsPlayerInJunkyardArea() end


---@class AJunkyardManager : AActor
---@field JunkyardQuestlineStartedTag FGameplayTag
---@field MainGameQuestToTriggerQuestline UQuestBase
---@field SeanGraph UDialogueGraph
---@field ContractsManager UContractsManager
---@field AuctionsManager UAuctionsManager
---@field FameManager UFameManager
---@field WrecksSettings UJunkyardWrecksDataAsset
---@field CarPartInteractionTag FGameplayTag
---@field WreckDeliveryPickupTag FGameplayTag
---@field WreckMarkingEnabledTag FGameplayTag
---@field UnlockedDeliveriesTag FGameplayTag
---@field UnlockedContractDriversTag FGameplayTag
---@field ForceSuccessDeliveryTag FGameplayTag
---@field UnlockedContractsTag FGameplayTag
---@field UnlockedPlatformSpotTag FGameplayTag
---@field UnlockWreckSpotLevel2Tag FGameplayTag
---@field WreckMarkingRadialWidgetClass TSoftClassPtr<UGSSBaseWidget>
---@field SeanCharacterClass TSoftClassPtr<ANPAICharacterBase>
---@field SeanCar AActor
---@field SeanCarClass TSoftClassPtr<AActor>
---@field SeanTasks UDataTable
---@field SeanCarDefaultTransform FTransform
---@field DecalsInfo UDataTable
---@field WreckReservedBySeanMessage FText
---@field ShortcutLevelName FName
---@field InteractableChannel ECollisionChannel
---@field WreckReservedBySeanMessageDuration float
---@field WreckAttractErrorDuration float
---@field IsJunkyardCinematicPlaying boolean
---@field bShowRefreshWarning boolean
---@field PlatformLights TArray<AActor>
---@field CarPartSlotsAsText TMap<EJunkyardCarPartType, FText>
---@field RarityAsText TMap<EJunkyardPartRarity, FText>
---@field StateAsText TMap<EState, FText>
---@field CustomizationContractTypeAsText TMap<ECustomizationContractType, FText>
---@field ContractDifficultyAsText TMap<EContractDifficulty, FText>
---@field CustomizationMaskTypeAsText TMap<ECustomizationPaintType, FText>
---@field FinishMaskTypeAsText TMap<EFinishMaskType, FText>
---@field WreckTypeAsString TMap<EJunkyardCarWreckType, FString>
---@field AttractWreckErrors TMap<EAttractWreckError, FText>
---@field StatsAsText TMap<ECarPartStat, FText>
---@field DecalCategoryAsText TMap<EDecalUnlockType, FText>
---@field CarWrecks TArray<AJunkyardCarWreck>
---@field WreckTowTrucks TArray<AGSSWheeledVehicle>
---@field WreckPlaceableAreas TArray<ACarWreckPlaceableArea>
---@field WrecksSpot AWrecksSpot
---@field Crane ACrane
---@field Shredder ACraneShredder
---@field CurrentUncleTributeValue float
---@field JunkyardPlayerArea TSoftObjectPtr<APlayerArea>
---@field PhotoModePlatform TSoftObjectPtr<AActor>
---@field JunkyardStorage TSoftObjectPtr<AJunkyardStorage>
---@field JunkyardBase TSoftObjectPtr<AInteractableBuilding>
---@field JunkyardOffice TSoftObjectPtr<AInteractableBuilding>
---@field JunkyardWorkshop TSoftObjectPtr<AInteractableBuilding>
---@field ChemicalBath TSoftObjectPtr<AInteractableBuilding>
---@field ExhibitionSpot TSoftObjectPtr<AExhibitionSpot>
---@field GrinderStation TSoftObjectPtr<AGrinderStation>
---@field MultitoolStation TSoftObjectPtr<AJunkyardMultitoolStation>
---@field DeliveryGoToHome TSoftClassPtr<UIteractableActorTask>
---@field DeliveryWreckClass TSoftClassPtr<UIteractableActorTask>
---@field MainGateClosedLevelName FName
---@field WrenchCombo int32
---@field WrenchRecord int32
---@field StorageSorting EJunkyardSortings
---@field ChemicalSorting EJunkyardSortings
---@field PlayerOverlay UGSS_PlayerOverlay
local AJunkyardManager = {}

function AJunkyardManager:TryLoadShortcutLevel() end
---@param SpawnTransform FTransform
---@param InTasksList TArray<FNPAITaskStruct>
---@param LatentInfo FLatentActionInfo
function AJunkyardManager:SpawnSean(SpawnTransform, InTasksList, LatentInfo) end
---@param WreckClass TSoftClassPtr<AJunkyardCarWreck>
---@param WreckArea ACarWreckPlaceableArea
---@param PartTypes TArray<EJunkyardCarPartType>
---@param LatentInfo FLatentActionInfo
---@param EnablePhysicsDelay float
function AJunkyardManager:SpawnCarWreckWithSpecificPartsAsync(WreckClass, WreckArea, PartTypes, LatentInfo, EnablePhysicsDelay) end
---@param bSetupCarParts boolean
---@param TargetTransform FTransform
---@param WreckClass TSoftClassPtr<AJunkyardCarWreck>
---@param WreckArea TSoftObjectPtr<ACarWreckPlaceableArea>
---@return AJunkyardCarWreck
function AJunkyardManager:SpawnCarWreck(bSetupCarParts, TargetTransform, WreckClass, WreckArea) end
---@param Error EAttractWreckError
function AJunkyardManager:ShowAttractWreckError(Error) end
---@param InWrenchRecord int32
function AJunkyardManager:SetWrenchRecord(InWrenchRecord) end
---@param InWrenchCombo int32
function AJunkyardManager:SetWrenchCombo(InWrenchCombo) end
---@param InSorting EJunkyardSortings
function AJunkyardManager:SetSortingStorage(InSorting) end
---@param InSorting EJunkyardSortings
function AJunkyardManager:SetSortingChemical(InSorting) end
---@param CarPrice float
function AJunkyardManager:OnSaleFinished(CarPrice) end
---@param DLCName EDLCName
---@param bActivated boolean
function AJunkyardManager:OnJunkyardActivationStateChanged(DLCName, bActivated) end
---@param bGameLoaded boolean
function AJunkyardManager:OnGameLoaded(bGameLoaded) end
function AJunkyardManager:OnCrushFinished() end
---@return boolean
function AJunkyardManager:IsPlayerInsideJunkyardArea() end
---@param bMainQuestlineFinished boolean
function AJunkyardManager:HandleQuestlineActivation(bMainQuestlineFinished) end
---@return int32
function AJunkyardManager:GetWrenchRecord() end
---@return int32
function AJunkyardManager:GetWrenchMiniGameCombo() end
---@return EJunkyardSortings
function AJunkyardManager:GetStorageSorting() end
---@param StateEnum EState
---@return FText
function AJunkyardManager:GetStateTextFromEnum(StateEnum) end
---@param WreckMarking ECarWreckMarking
---@return FSeanTaskRow
function AJunkyardManager:GetSeanTaskFromWreckMarking(WreckMarking) end
---@param WorldContextObject UObject
---@return AGSSNPAICharacterBase
function AJunkyardManager:GetSeanCharacter(WorldContextObject) end
---@param RarityEnum EJunkyardPartRarity
---@return FText
function AJunkyardManager:GetRarityTextFromEnum(RarityEnum) end
---@param AreaType ECarWreckPlaceableAreaType
---@return int32
function AJunkyardManager:GetNumberOfWrecksOnAreaType(AreaType) end
---@param FinishMaskType EFinishMaskType
---@return FText
function AJunkyardManager:GetFinishMaskTypeTextFromEnum(FinishMaskType) end
---@param PartClass TSoftClassPtr<UActorComponent>
---@return FCarPartBasicInformation
function AJunkyardManager:GetDataTableInfoFromPartClass(PartClass) end
---@param CustomizationPaintType ECustomizationPaintType
---@return FText
function AJunkyardManager:GetCustomizationMaskTypeTextFromEnum(CustomizationPaintType) end
---@param CustomizationContractType ECustomizationContractType
---@return FText
function AJunkyardManager:GetCustomizationContractTypeTextFromEnum(CustomizationContractType) end
---@param ContractDifficulty EContractDifficulty
---@return FText
function AJunkyardManager:GetContractDifficultyTextFromEnum(ContractDifficulty) end
---@return EJunkyardSortings
function AJunkyardManager:GetChemicalSorting() end
---@param SlotEnum EJunkyardCarPartType
---@return FText
function AJunkyardManager:GetCarPartSlotTextFromEnum(SlotEnum) end
---@param AreaType ECarWreckPlaceableAreaType
---@param OutputArray TArray<ACarWreckPlaceableArea>
---@param OnlyAreasWithWrecks boolean
---@param OnlyAreasWithoutWrecks boolean
function AJunkyardManager:FindAllWreckAreasOfType(AreaType, OutputArray, OnlyAreasWithWrecks, OnlyAreasWithoutWrecks) end
---@param FirstPart FStorageCarPart
---@param SecondPart FStorageCarPart
---@return boolean
function AJunkyardManager:ArePartsTheSame(FirstPart, SecondPart) end


---@class AJunkyardMultitool : AActor
---@field OnMultiToolPickedUp FJunkyardMultitoolOnMultiToolPickedUp
---@field OnMultitoolDropped FJunkyardMultitoolOnMultitoolDropped
---@field MainMesh USkeletalMeshComponent
---@field PlayerHandlePoint UArrowComponent
---@field OwningStation TWeakObjectPtr<AJunkyardMultitoolStation>
---@field MaxRangeFromStationBeforeReset float
---@field TraceDistance float
---@field HeldByPawn TWeakObjectPtr<APawn>
---@field LastTargetedWreck AJunkyardCarWreckCustomizable
local AJunkyardMultitool = {}

function AJunkyardMultitool:ReattachToPlayer() end
---@param TargetType EJunkyardCarPartType
---@param TargetWreck AJunkyardCarWreckCustomizable
---@param bAddingPart boolean
function AJunkyardMultitool:PrimaryAction(TargetType, TargetWreck, bAddingPart) end
function AJunkyardMultitool:OnPutDown() end
---@param PickedUpPawn APawn
function AJunkyardMultitool:OnPickUp(PickedUpPawn) end
---@return boolean
function AJunkyardMultitool:GetIsPickedUp() end
function AJunkyardMultitool:CheckDistanceFromStation() end


---@class AJunkyardMultitoolStation : AInteractableBuilding
---@field Multitool UChildActorComponent
---@field UnlockedTag FGameplayTag
local AJunkyardMultitoolStation = {}



---@class AJunkyardOffice : AInteractableBuilding
local AJunkyardOffice = {}


---@class AJunkyardPaintGun : AActor
---@field OnPaintGunPickedUp FJunkyardPaintGunOnPaintGunPickedUp
---@field OnPaintGunDropped FJunkyardPaintGunOnPaintGunDropped
---@field MainMesh UStaticMeshComponent
---@field MaxRangeFromStationBeforeReset float
---@field MaxRangeFromHolderBeforeReset float
---@field PlayerHandlePoint FTransform
---@field OwningStation TWeakObjectPtr<APaintGunStation>
---@field HeldByPawn TWeakObjectPtr<APawn>
---@field DecalSprayingState EDecalSprayingState
---@field DMIDecalTool UMaterialInstanceDynamic
---@field PreviewDecal ADecalToPaint
---@field SpawnedDecal ADecalToPaint
---@field TargetedDecal AActor
---@field GotLastDecal ADecalToPaint
---@field DecalsArray TSoftClassPtr<ADecalToPaint>
---@field DecalText FString
---@field DecalSize FVector
---@field WallLocation FVector
---@field TraceDistance float
---@field DecalsHolderWidget UUserWidget
---@field DecalColor FLinearColor
---@field AllowedInteractableClassTypes TArray<UClass>
---@field HitWallLocation FVector
---@field DecalAmountLimit int32
---@field DistanceCheckTime float
---@field TimeSinceLastDistanceCheck float
local AJunkyardPaintGun = {}

---@param PickedDecal TSoftClassPtr<ADecalToPaint>
---@param NewDecalText FString
---@param PaintType ECustomizationPaintType
function AJunkyardPaintGun:UptadePreviewDecalType(PickedDecal, NewDecalText, PaintType) end
---@param NewState EDecalSprayingState
---@return EDecalSprayingState
function AJunkyardPaintGun:SetNewDecalSprayingState(NewState) end
function AJunkyardPaintGun:RPM() end
---@param AxisValue float
function AJunkyardPaintGun:RotateItemUp(AxisValue) end
---@param AxisValue float
function AJunkyardPaintGun:RotateItemRight(AxisValue) end
function AJunkyardPaintGun:ResetCarPainting() end
function AJunkyardPaintGun:PreviewTargets() end
---@param SpawningDecalTransform FTransform
---@param bIsSpawned boolean
function AJunkyardPaintGun:PaintingDecal(SpawningDecalTransform, bIsSpawned) end
function AJunkyardPaintGun:OnPutDown() end
function AJunkyardPaintGun:OnPreviewTargets() end
---@param PickedUpPawn APawn
function AJunkyardPaintGun:OnPickUp(PickedUpPawn) end
---@param OnSpawnedDecal AActor
function AJunkyardPaintGun:OnDecalSpawn(OnSpawnedDecal) end
---@param OnDestroyedDecal AActor
function AJunkyardPaintGun:OnDecalDestroy(OnDestroyedDecal) end
---@param NumberOfDecals int32
function AJunkyardPaintGun:MaxDecals(NumberOfDecals) end
function AJunkyardPaintGun:LPM() end
---@return boolean
function AJunkyardPaintGun:GetIsPickedUp() end
---@return boolean
function AJunkyardPaintGun:CheckDistanceFromStation() end
---@param DecalType EDecalColor
function AJunkyardPaintGun:BringInfoBack(DecalType) end
---@param DecalPossibility EJunkyardDecalPossibility
function AJunkyardPaintGun:BlockJunkyardDecal(DecalPossibility) end


---@class AJunkyardPhotoPlatform : AActor
---@field CurrentWreck AJunkyardCarWreck
---@field StaticMesh UStaticMeshComponent
local AJunkyardPhotoPlatform = {}

function AJunkyardPhotoPlatform:RemoveWreckFromPhotoPlatform() end
---@param InWreckToMove AJunkyardCarWreck
---@param AreaFrom ACarWreckPlaceableArea
function AJunkyardPhotoPlatform:MoveWreckToPhotoPlatform(InWreckToMove, AreaFrom) end
---@return AJunkyardCarWreck
function AJunkyardPhotoPlatform:GetCurrentWreck() end


---@class AJunkyardPlatform : ACarWreckPlaceableArea
---@field JunkyardMonitor UChildActorComponent
---@field QuestMarkerLocation UArrowComponent
local AJunkyardPlatform = {}

---@param Index int32
function AJunkyardPlatform:TogglePlatformSign(Index) end
---@param bOn boolean
function AJunkyardPlatform:ToggleMultitoolLights(bOn) end
function AJunkyardPlatform:OnPlatformWithCarLoaded() end


---@class AJunkyardStorage : AInteractableBuilding
---@field OwnedParts TArray<FStorageCarPart>
---@field Cappacity float
---@field MaxCappacity float
local AJunkyardStorage = {}

---@param InParts TArray<FStorageCarPart>
function AJunkyardStorage:SetOwnedParts(InParts) end
---@param CarPartStruct FStorageCarPart
---@return boolean
function AJunkyardStorage:RemovePart_Struct(CarPartStruct) end
---@param PartClass UActorComponent
---@return boolean
function AJunkyardStorage:RemovePart(PartClass) end
---@param PartToCheck FStorageCarPart
---@param CheckChemicalBath boolean
---@param bCountBetterQuality boolean
---@return boolean
function AJunkyardStorage:InventoryContainsItem(PartToCheck, CheckChemicalBath, bCountBetterQuality) end
---@param AditionalCappacityAmount float
function AJunkyardStorage:IncreaseMaxcappacity(AditionalCappacityAmount) end
---@param PartClass UActorComponent
---@return FStorageCarPart
function AJunkyardStorage:GetSpawnedPartAsStorageStruct(PartClass) end
---@return TArray<FStorageCarPart>
function AJunkyardStorage:GetOwnedParts() end
---@return float
function AJunkyardStorage:GetMaxCappacity() end
---@return boolean
function AJunkyardStorage:GetIsStorageFull() end
---@return float
function AJunkyardStorage:GetCurrentCappacity() end
function AJunkyardStorage:CalcaulateCurrentCappacity() end
---@param PartToAdd FStorageCarPart
---@param bIgnoreLimit boolean
---@return int32
function AJunkyardStorage:AddPart_Struct(PartToAdd, bIgnoreLimit) end
---@param PartClass UActorComponent
---@return boolean
function AJunkyardStorage:AddPart(PartClass) end


---@class AJunkyardWorkshop : AInteractableBuilding
local AJunkyardWorkshop = {}


---@class AJunkyardWrench : AKeyItem
local AJunkyardWrench = {}


---@class AKeyItem : AItem
---@field KeyItemDescription FText
---@field BindWidget UKeyItemWidget
local AKeyItem = {}

function AKeyItem:TutorialCreated() end
function AKeyItem:BeginPlayDelayed() end


---@class ALadderParent : AActor
local ALadderParent = {}


---@class ALaptop : AKeyItem
local ALaptop = {}


---@class ALeaderboardManager : AActor
---@field IndxLiderboard int32
---@field LeaderboardList TArray<EMinigame>
---@field LeaderboardMapKey TMap<EMinigame, FString>
---@field LeaderboardDownloaded_OnCallback FLeaderboardManagerLeaderboardDownloaded_OnCallback
local ALeaderboardManager = {}

---@param LeaderboardName FString
---@return EMinigame
function ALeaderboardManager:GetMinigameFromLeaderboardName(LeaderboardName) end
---@param minigame EMinigame
---@return FString
function ALeaderboardManager:GetLeaderboardKey(minigame) end


---@class ALoadingHelper : AActor
local ALoadingHelper = {}


---@class ALotteryMachine : AInteractableBuilding
---@field OnTicketBuy FLotteryMachineOnTicketBuy
---@field OnLotteryWin FLotteryMachineOnLotteryWin
---@field OnLotteryFinish FLotteryMachineOnLotteryFinish
---@field OnLotteryStart FLotteryMachineOnLotteryStart
---@field OnLotteryCancel FLotteryMachineOnLotteryCancel
---@field LotteryState eLotteryState
---@field LotteryPreset int32
---@field CurrentEarnings float
---@field CurrentTimeInSeconds int32
---@field CurrentNameIndex int32
---@field HappyAngryMultiplier float
---@field MachineMapName FName
---@field LotteryWidget UWidgetComponent
local ALotteryMachine = {}

---@param SettingsToSet FLotteryPredefinedSettings
---@param bIsUpdateAfterLoad boolean
function ALotteryMachine:SetLotteryParameters(SettingsToSet, bIsUpdateAfterLoad) end
function ALotteryMachine:FinishLottery() end
---@param bShow boolean
function ALotteryMachine:CreateNotification(bShow) end
---@param MapName FName
function ALotteryMachine:CheckOpenedSection(MapName) end
function ALotteryMachine:CancelLottery() end
---@return boolean
function ALotteryMachine:BuyTicket() end


---@class ALotteryMachineRelaxSpot : AInteractableBuilding
local ALotteryMachineRelaxSpot = {}


---@class AMagazine : AHouse
local AMagazine = {}


---@class AMainMenuPawn : ADefaultPawn
local AMainMenuPawn = {}


---@class AMarshalWands : AActor
---@field WandsDirection int32
---@field WandsWiggleSpeed float
---@field WandsPostition float
---@field WandsPostitionMax float
---@field WandsPostitionMin float
---@field RootSphere USphereComponent
---@field Wand1 UStaticMeshComponent
---@field Wand2 UStaticMeshComponent
---@field bShouldWiggle boolean
local AMarshalWands = {}

---@param DeltaTime float
function AMarshalWands:WiggleWands(DeltaTime) end
---@param _bShouldWiggle boolean
function AMarshalWands:SetShouldWiggle(_bShouldWiggle) end
---@param WandsRotation FRotator
function AMarshalWands:SetRotation(WandsRotation) end
function AMarshalWands:ResetRotation() end


---@class AMinigameBaseCamera : AActor
---@field CameraOverrides TArray<FMinigameCameraOverride>
---@field MinigameState ECharacterState
---@field GarageMingameType EGarageMinigame
---@field PartToFix AVehiclePart
---@field PartsToHide TArray<UStaticMeshComponent>
---@field GarageRef AGarage
---@field MinigameCamera UCameraComponent
---@field SoundMaker UAudioComponent
---@field SoundMakerTwo UAudioComponent
---@field MinigameStartSound USoundCue
---@field MinigameEnd_Success_Sound USoundCue
---@field MinigameEnd_Fail_Sound USoundCue
---@field TrashItemClass TSubclassOf<ATrashItemBase>
local AMinigameBaseCamera = {}

---@param ActorsToIgnore TArray<AActor>
---@return FHitResult
function AMinigameBaseCamera:TraceUnderMouseCursorFromMinigameCamera(ActorsToIgnore) end
---@param bPressed boolean
function AMinigameBaseCamera:SecondaryAction(bPressed) end
---@param Val float
function AMinigameBaseCamera:RightAction(Val) end
---@param bPressed boolean
function AMinigameBaseCamera:PrimaryAction(bPressed) end
---@param CarClassSoftClassPtr TSoftClassPtr<AGSSWheeledVehicle>
---@return boolean
function AMinigameBaseCamera:HasCameraOverrideForCar(CarClassSoftClassPtr) end
---@param CarClassSoftClassPtr TSoftClassPtr<AGSSWheeledVehicle>
---@param LocationOverride FVector
---@param RotationOverride FRotator
function AMinigameBaseCamera:GetCameraOverrides(CarClassSoftClassPtr, LocationOverride, RotationOverride) end
---@param bSuccess boolean
function AMinigameBaseCamera:FinishMinigame(bSuccess) end
---@param bIsPressed boolean
function AMinigameBaseCamera:BButtonAction(bIsPressed) end
---@param bIsPressed boolean
function AMinigameBaseCamera:AButtonAction(bIsPressed) end


---@class AMinigameBaseCamera_Staged : AMinigameBaseCamera
---@field Stages TArray<FMinigameStage>
---@field GameplayStages TArray<FMinigameStage>
---@field GameplayStageIndex int32
---@field ComponentSelected UPrimitiveComponent
local AMinigameBaseCamera_Staged = {}

---@param NewStageIndex int32
function AMinigameBaseCamera_Staged:SetStage(NewStageIndex) end
---@param Component UPrimitiveComponent
function AMinigameBaseCamera_Staged:SetSelectedComponent(Component) end
---@param ComponentRef UPrimitiveComponent
---@param bNewVisibility boolean
function AMinigameBaseCamera_Staged:SetPartVisibility(ComponentRef, bNewVisibility) end
---@param ComponentAnimated UPrimitiveComponent
function AMinigameBaseCamera_Staged:PartAnimationFinished(ComponentAnimated) end
---@param ComponentToCheck UPrimitiveComponent
---@return boolean
function AMinigameBaseCamera_Staged:IsValidForStage(ComponentToCheck) end
---@param ComponentHit UPrimitiveComponent
function AMinigameBaseCamera_Staged:HandleStageComponent(ComponentHit) end
---@param ComponentRef UPrimitiveComponent
---@param StageIndex int32
---@return int32
function AMinigameBaseCamera_Staged:GetPartIndexOfCurrentStage(ComponentRef, StageIndex) end
---@return int32
function AMinigameBaseCamera_Staged:GetMinigameStage() end
---@return boolean
function AMinigameBaseCamera_Staged:AreAllPartsOfActiveStageComplete() end
function AMinigameBaseCamera_Staged:AdvanceToNextStage() end


---@class AMinigame_CarBattery : AMinigameBaseCamera_Staged
---@field SceneRoot USceneComponent
---@field Battery_SMC UGarageStaticMeshComponent
---@field Battery_Cable_L_SkMC UGarageSkeletalMeshComponent
---@field Battery_Cable_R_SkMC UGarageSkeletalMeshComponent
---@field Battery_Ghost UStaticMeshComponent
---@field Battery_Cable_L_Ghost UStaticMeshComponent
---@field Battery_Cable_R_Ghost UStaticMeshComponent
---@field SelectedPart UGarageSkeletalMeshComponent
---@field GamePadDirection float
---@field IsSelectedLeft boolean
local AMinigame_CarBattery = {}



---@class AMinigame_CoolantRefill : AMinigameBaseCamera
---@field SafeZoneSize float
---@field CoolantAmountPerSecond float
---@field SceneRoot USceneComponent
---@field CoolantBottle_SMC UStaticMeshComponent
---@field CoolantReciever_SMC UStaticMeshComponent
---@field CoolantSpill_SMC UStaticMeshComponent
---@field CoolantLiquid_VFXComponent UParticleSystemComponent
---@field MinigameWidgetClass TSubclassOf<UUserWidget>
---@field CoolantCheckWidget UMinigameCoolantCheckWidget
---@field CurrentCoolantAmount float
---@field bAddingCoolant boolean
---@field RiseTime float
---@field curTime float
---@field StartingRotation FRotator
---@field TargetRotation FRotator
---@field CoolantDepthMID UMaterialInstanceDynamic
---@field bAddingCoolantStarted boolean
---@field StartingCoolantAmount float
---@field SafeZoneMin float
---@field SafeZoneMax float
---@field bReachedAddValue boolean
---@field bFailedNotification boolean
---@field CoolantLoopSound USoundCue
---@field CoolantOverflowSound USoundCue
local AMinigame_CoolantRefill = {}

function AMinigame_CoolantRefill:UpdateCoolant_Visuals() end
function AMinigame_CoolantRefill:SelectSafeZone() end
function AMinigame_CoolantRefill:CheckResults() end


---@class AMinigame_DiskBrakeChange : AMinigameBaseCamera
local AMinigame_DiskBrakeChange = {}


---@class AMinigame_MarshalWands : AInteractableBuilding
---@field CenterSpline USplineComponent
---@field PlaneSpawnLocation UArrowComponent
---@field WandsSpawnLocation UArrowComponent
---@field MinigameCamera UCameraComponent
---@field OnMarshalWandsMinigameFinished FMinigame_MarshalWandsOnMarshalWandsMinigameFinished
---@field OnMarshalWandsMinigameStarted FMinigame_MarshalWandsOnMarshalWandsMinigameStarted
---@field OnMarshalWandsMinigameRestarted FMinigame_MarshalWandsOnMarshalWandsMinigameRestarted
---@field OnPlaneRotationStatusChanged FMinigame_MarshalWandsOnPlaneRotationStatusChanged
---@field OnPlanePositionStatusChanged FMinigame_MarshalWandsOnPlanePositionStatusChanged
---@field OnPlaneLiftOffStatusChanged FMinigame_MarshalWandsOnPlaneLiftOffStatusChanged
---@field WandsSpeedMultiplierMouse float
---@field WandsSpeedMultiplierKeyboard float
---@field PlaneTakeOffDuration float
---@field ExitMinigameTimer FTimerHandle
---@field RestartMinigameTimer FTimerHandle
---@field PlaneTakeOffTimer FTimerHandle
---@field MaxAllowedPlaneDistanceFromCenterSpline float
---@field MaxPlaneForwardSpeed float
---@field MaxPlaneForwardSpeedDuringTakeOff float
---@field StartingPlaneForwardSpeed float
---@field PlaneForwardSpeedGainedPerTick float
---@field PlaneForwardSpeedGainedPerTickDuringTakeOff float
---@field MinPlaneRotationSpeed float
---@field TargetAscendPitch float
---@field AscendPitchPerTick float
---@field PlaneClass TSoftClassPtr<AAirplaneBase>
---@field WandsClass TSoftClassPtr<AMarshalWands>
---@field MinigameWidgetClass TSubclassOf<UMinigameMarshalWandsWidget>
---@field FadeInOutWidgetClass TSubclassOf<UUserWidget>
---@field bIsInDebugMode boolean
---@field GameRestartingDuration float
---@field CurrentPlaneRotationMinigameData float
---@field ActualPlaneRotationInWorld float
---@field MinigameCurrentRuntime float
---@field bIsTakingOff boolean
---@field bIsRestarting boolean
---@field StartingCameraTransform FTransform
---@field StartingWandsTransform FTransform
---@field CurrentPlaneForwardSpeed float
---@field CurrentAscendPitch float
---@field PlaneDistanceFromCenterSpline float
---@field TimeSinceLastDirectionChange float
---@field PlaneDirection int32
---@field PlaneInstance AAirplaneBase
---@field CurrentWandsRotation float
---@field WandsInstance AMarshalWands
---@field MinigameWidgetInstance UMinigameMarshalWandsWidget
---@field FadeInOutWidgetInstance UUserWidget
---@field bIsPlaneInGoodPosition boolean
---@field bIsPlaneInGoodRotation boolean
---@field bCanConfirmLiftOff boolean
---@field bIsTutorialShown boolean
---@field DifficultySettings TArray<FMarshalWandsMinigameDifficulty>
---@field DifficultySettingsWidgetClass TSubclassOf<UMarshalDifficultyWidget>
---@field DifficultySettingsWidgetInstance UMarshalDifficultyWidget
---@field CurrentDifficulty EMarshalWandsMinigameDifficulty
---@field MaxAllowedPlaneRotation float
---@field MinMinigameDuration float
---@field MaxMinigameDuration float
---@field TryChangeDirectionInterval float
---@field MaxPlaneRotationSpeed float
---@field PlaneWiggleSpeed float
---@field HappyStatForSuccessfullyFinishing int32
---@field LightsOffset float
---@field LightsInstancedMeshComponent UInstancedStaticMeshComponent
---@field RunwayLightsMesh UStaticMesh
---@field RunwaylightMaterialParamsInstance UMaterialParameterCollectionInstance
---@field RunwaylightMaterialParams UMaterialParameterCollection
---@field RunwaylightMaterialColorParameterName FName
---@field RandomJoeDialogTimer FTimerHandle
---@field FirstJoeDialogTimer FTimerHandle
---@field TakeOffJoeDialogTimer FTimerHandle
---@field RandomJoeDialogInterval float
---@field FirstJoeDialogDelay float
---@field TakeOffJoeDialogDelay float
local AMinigame_MarshalWands = {}

function AMinigame_MarshalWands:WigglePlane() end
function AMinigame_MarshalWands:VisualsTick() end
function AMinigame_MarshalWands:UnbindPlayerInput() end
---@param bOn boolean
function AMinigame_MarshalWands:TurnOnRunwayLights(bOn) end
---@param bOn boolean
function AMinigame_MarshalWands:TurnOnAirplaneStartLights(bOn) end
function AMinigame_MarshalWands:TriggeringEvents() end
function AMinigame_MarshalWands:StartPlaneTakeOffSequance_TimerElapsed() end
function AMinigame_MarshalWands:StartPlaneTakeOffSequance() end
---@param Difficulty EMarshalWandsMinigameDifficulty
function AMinigame_MarshalWands:StartMiniGame(Difficulty) end
function AMinigame_MarshalWands:SpawnLightsAlongRunway() end
function AMinigame_MarshalWands:ShowDifficultyWidget() end
function AMinigame_MarshalWands:SetupPlayerInput() end
---@param _bIsTutorialShow boolean
---@param bIsShownOnStart boolean
function AMinigame_MarshalWands:SetIsTutorialShown(_bIsTutorialShow, bIsShownOnStart) end
---@param Difficulty EMarshalWandsMinigameDifficulty
function AMinigame_MarshalWands:SetDifficultyValues(Difficulty) end
function AMinigame_MarshalWands:SetDefaultValues() end
function AMinigame_MarshalWands:RotatePlaneInDirectionOfWands() end
function AMinigame_MarshalWands:RestartMinigame_TimerElapsed() end
function AMinigame_MarshalWands:RestartMinigame() end
---@param Dialogtype ENPCConversationType
function AMinigame_MarshalWands:PlayRandomJoeDialog(Dialogtype) end
---@param Value float
function AMinigame_MarshalWands:MoveWandsByMouse(Value) end
---@param Value float
function AMinigame_MarshalWands:MoveWandsByKeyboard(Value) end
---@param Value float
function AMinigame_MarshalWands:MoveWands(Value) end
---@return boolean
function AMinigame_MarshalWands:IsPlaneFacingPlayer() end
---@return boolean
function AMinigame_MarshalWands:IsPlaneCloseEnoughToCenter() end
---@param bIsPressed boolean
function AMinigame_MarshalWands:InputPrimaryActionSpace(bIsPressed) end
---@param bIsPressed boolean
function AMinigame_MarshalWands:InputF(bIsPressed) end
---@param bSuccessful boolean
function AMinigame_MarshalWands:FinishMinigame(bSuccessful) end
---@param bSuccessful boolean
function AMinigame_MarshalWands:ExitMinigame_TimerElapsed(bSuccessful) end
---@param bSuccessful boolean
function AMinigame_MarshalWands:ExitMinigame(bSuccessful) end
function AMinigame_MarshalWands:ConfirmLiftOff() end
function AMinigame_MarshalWands:ClearJoeDialogTimers() end
---@return boolean
function AMinigame_MarshalWands:CanConfirmLiftOff() end
function AMinigame_MarshalWands:CalculatePlaneDistenceFromCenter() end
function AMinigame_MarshalWands:AscendPlane() end
function AMinigame_MarshalWands:AcceleratePlane() end


---@class AMinigame_MirrorChange : AMinigameBaseCamera_Staged
---@field GamePadDirection float
---@field indexItem int32
---@field mOrdersIndex TMap<int32, int32>
---@field SceneRoot USceneComponent
---@field MirrorBase UGarageStaticMeshComponent
---@field MirrorGhost UGarageStaticMeshComponent
---@field MirrorFixed UGarageStaticMeshComponent
---@field MirrorPart_01 UGarageStaticMeshComponent
---@field MirrorPart_02 UGarageStaticMeshComponent
---@field MirrorPart_03 UGarageStaticMeshComponent
---@field MirrorPart_04 UGarageStaticMeshComponent
---@field MirrorPart_05 UGarageStaticMeshComponent
---@field BaseMeshOverride TArray<FMirrorMinigameExtraData>
---@field CarMirrorSide EMirrorSide
---@field AmountOfMirrorPartsToBreak int32
---@field AmountOfMirrorPartsBroken int32
---@field ValidGarageStaticMeshComponents TArray<UGarageStaticMeshComponent>
local AMinigame_MirrorChange = {}



---@class AMinigame_OilRefill : AMinigameBaseCamera
---@field SafeZoneSize float
---@field OilAmountPerSecond float
---@field SceneRoot USceneComponent
---@field OilBottle_SMC UStaticMeshComponent
---@field OilCap_SMC UStaticMeshComponent
---@field OilSpill_SMC UStaticMeshComponent
---@field OilLiquid_VFXComponent UParticleSystemComponent
---@field MinigameWidgetClass TSubclassOf<UUserWidget>
---@field OilCheckWidget UMinigameOilCheckWidget
---@field CurrentOilAmount float
---@field bAddingOil boolean
---@field RiseTime float
---@field curTime float
---@field StartingRotation FRotator
---@field TargetRotation FRotator
---@field OilDepthMID UMaterialInstanceDynamic
---@field bAddingOilStarted boolean
---@field bReachedAddValue boolean
---@field bFailedNotification boolean
---@field StartingOilAmount float
---@field SafeZoneMin float
---@field SafeZoneMax float
---@field OilLoopSound USoundCue
---@field OilOverflowSound USoundCue
local AMinigame_OilRefill = {}

function AMinigame_OilRefill:UpdateOil_Visuals() end
function AMinigame_OilRefill:SelectSafeZone() end
function AMinigame_OilRefill:CheckResults() end


---@class AMinigame_ScratchRemoval : AMinigameBaseCamera
---@field SceneRoot USceneComponent
---@field ScratchFixObject UStaticMeshComponent
---@field DoorSide EDoorSide
---@field ScratchHitSound USoundCue
---@field ScratchSuccessfullyRemovedSound USoundCue
---@field ScratchClass TSubclassOf<AScratchActor>
---@field bRemovingScratches boolean
---@field MinScratches int32
---@field MaxScratches int32
---@field DecalFound AScratchActor
---@field ControllerVector FVector
local AMinigame_ScratchRemoval = {}

---@param Amount int32
function AMinigame_ScratchRemoval:SpawnScratchDecals(Amount) end
function AMinigame_ScratchRemoval:CheckIfMinigameComplete() end
function AMinigame_ScratchRemoval:CalculateDecalAmount() end


---@class AMinigame_SparkplugChange : AMinigameBaseCamera_Staged
---@field SceneRoot USceneComponent
---@field SparkplugBase UStaticMeshComponent
---@field SP_Cable_1 UGarageSkeletalMeshComponent
---@field SP_Cable_2 UGarageSkeletalMeshComponent
---@field SP_Cable_3 UGarageSkeletalMeshComponent
---@field SP_Cable_4 UGarageSkeletalMeshComponent
---@field SP_Cable_1_Ghost UStaticMeshComponent
---@field SP_Cable_2_Ghost UStaticMeshComponent
---@field SP_Cable_3_Ghost UStaticMeshComponent
---@field SP_Cable_4_Ghost UStaticMeshComponent
---@field SP_Cap_1 UStaticMeshComponent
---@field SP_Cap_2 UStaticMeshComponent
---@field SP_Cap_3 UStaticMeshComponent
---@field SP_Cap_4 UStaticMeshComponent
---@field sparkplug_1 UGarageStaticMeshComponent
---@field sparkplug_2 UGarageStaticMeshComponent
---@field sparkplug_3 UGarageStaticMeshComponent
---@field sparkplug_4 UGarageStaticMeshComponent
---@field Sparkplug_1_Ghost UGarageStaticMeshComponent
---@field Sparkplug_2_Ghost UGarageStaticMeshComponent
---@field Sparkplug_3_Ghost UGarageStaticMeshComponent
---@field Sparkplug_4_Ghost UGarageStaticMeshComponent
---@field Wrench_Mesh UGarageStaticMeshComponent
---@field ScrewUnscrewTime float
---@field bHoldingPrimary boolean
---@field bHoldingSecondary boolean
---@field CurScrewUnscrewTime float
---@field BrokenPlugValue int32
---@field bScrewingUnscrewing boolean
---@field ChosenSparkplug UGarageStaticMeshComponent
---@field ChosenSparkplugGhost UGarageStaticMeshComponent
---@field ChosenCap UStaticMeshComponent
---@field ChosenGhostCable UStaticMeshComponent
---@field ChosenCable UGarageSkeletalMeshComponent
local AMinigame_SparkplugChange = {}

---@param bNewValue boolean
function AMinigame_SparkplugChange:SetScrewingUnscrewing(bNewValue) end
function AMinigame_SparkplugChange:SelectActiveParts() end


---@class AMinigame_WheelChange : AMinigameBaseCamera_Staged
---@field WheelSide EWheelSide_FourWheel
---@field WheelRepairAnimations FWheelRepairAnimations
---@field SceneRoot USceneComponent
---@field BrokenWheel UGarageStaticMeshComponent
---@field GhostWheel UGarageStaticMeshComponent
---@field WorkingWheel UGarageStaticMeshComponent
---@field Screw1 UGarageStaticMeshComponent
---@field Screw2 UGarageStaticMeshComponent
---@field Screw3 UGarageStaticMeshComponent
---@field Screw4 UGarageStaticMeshComponent
---@field Screw5 UGarageStaticMeshComponent
---@field Screw1Ghost UGarageStaticMeshComponent
---@field Screw2Ghost UGarageStaticMeshComponent
---@field Screw3Ghost UGarageStaticMeshComponent
---@field Screw4Ghost UGarageStaticMeshComponent
---@field Screw5Ghost UGarageStaticMeshComponent
---@field TrashWheelClass TSubclassOf<ATrashItemBase>
---@field Screws TArray<UGarageStaticMeshComponent>
---@field GamePadDirection float
---@field indexItem int32
local AMinigame_WheelChange = {}

---@param StageIndex int32
---@param Selected int32
function AMinigame_WheelChange:SelectScrew(StageIndex, Selected) end
---@return UAnimMontage
function AMinigame_WheelChange:GetProperRepairAnimation() end
---@param StageIndex int32
---@return int32
function AMinigame_WheelChange:GetNum(StageIndex) end
---@param StageIndex int32
---@param Index int32
---@param Next boolean
---@return int32
function AMinigame_WheelChange:GetNextIndex(StageIndex, Index, Next) end


---@class AMinigolfBallStartPoint : AActor
---@field Base USceneComponent
---@field Billboard UBillboardComponent
---@field BallFacing UArrowComponent
local AMinigolfBallStartPoint = {}



---@class AMinigolfCamera : AMinigameBaseCamera
---@field ChargePower float
---@field MaxPower float
---@field HitsSoFar int32
---@field bIsHolding boolean
---@field bCancelled boolean
---@field MinigolfBall UMinigolfBallComponent
---@field BallSpringArm USpringArmComponent
---@field BallResetPoint AMinigolfBallStartPoint
---@field TargetHole AMinigolfHole
---@field CourseWePlay AMinigolfCourseStartButton
---@field BehindVFXSpawner UParticleSystemComponent
---@field ImpactVFXSpawner UParticleSystemComponent
---@field BehindVFX UParticleSystem
---@field ImpactVFX UParticleSystem
---@field BallHitSound USoundCue
---@field BallImpactSound USoundCue
local AMinigolfCamera = {}

---@param Val float
function AMinigolfCamera:TurnCamera(Val) end
function AMinigolfCamera:ShootBall() end
---@param bPressed boolean
function AMinigolfCamera:ResetBall(bPressed) end
---@param HitComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComponent UPrimitiveComponent
---@param NormalImpulse FVector
---@param Hit FHitResult
function AMinigolfCamera:OnBallHit(HitComponent, OtherActor, OtherComponent, NormalImpulse, Hit) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AMinigolfCamera:HoleOverlapped(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end


---@class AMinigolfCourseStartButton : AActor
---@field ButtonBase UStaticMeshComponent
---@field ButtonItself UStaticMeshComponent
---@field StartingPoint AMinigolfBallStartPoint
---@field EndingHole AMinigolfHole
---@field Par int32
---@field CostToStart float
---@field RewardForPar float
---@field RewardForUnderPar float
local AMinigolfCourseStartButton = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AMinigolfCourseStartButton:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AMinigolfCourseStartButton:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end


---@class AMinigolfHole : AActor
---@field HoleBox UBoxComponent
local AMinigolfHole = {}



---@class AMirror : AVehiclePart
---@field MirrorSide EMirrorSide
local AMirror = {}

---@return EMirrorSide
function AMirror:GetMirrorSide() end


---@class ANewsPaper : AGasStationProduct
local ANewsPaper = {}


---@class ANoCarAISpawnPoint : AAISpawnPoint
local ANoCarAISpawnPoint = {}


---@class AObjectDeletionsLogger : AActor
local AObjectDeletionsLogger = {}


---@class AObjectiveMarker : AActor
---@field MarkerWidget TSubclassOf<UUserWidget>
---@field Outline float
---@field Marker float
---@field ActorMarked AActor
---@field DelayActivated float
---@field MarkerIconWidget UUserWidget
local AObjectiveMarker = {}

---@param Show boolean
---@param Distance float
function AObjectiveMarker:UpdateOutline(Show, Distance) end
---@param Show boolean
---@param Distance float
function AObjectiveMarker:UpdateMarker(Show, Distance) end
---@param bShow boolean
function AObjectiveMarker:ShowHideMarker(bShow) end
---@param bEnabled boolean
function AObjectiveMarker:SetMarkerState(bEnabled) end
function AObjectiveMarker:EnableMarker() end
function AObjectiveMarker:DisableMarker() end
---@param Actor AActor
function AObjectiveMarker:DestroyMarker(Actor) end


---@class AOtherProduct : AProduct
local AOtherProduct = {}


---@class APaintBrush : AKeyItem
---@field CurrentLinearColor FLinearColor
---@field PaitingColor FPaintingColor
local APaintBrush = {}



---@class APaintGunStation : AInteractableBuilding
---@field PaintGun UChildActorComponent
local APaintGunStation = {}



---@class AParkingSpot : AInteractableBuilding
local AParkingSpot = {}


---@class APartyBusStop : AInteractableBuilding
local APartyBusStop = {}


---@class APartyLightsToggle : AInteractableBuilding
---@field bAreLightsOn boolean
local APartyLightsToggle = {}

function APartyLightsToggle:SwitchLightsOnOff() end


---@class APartySpot : AInteractableBuilding
---@field OnPartySpotLoaded FPartySpotOnPartySpotLoaded
---@field OnStartParty FPartySpotOnStartParty
---@field OnPartyFinished FPartySpotOnPartyFinished
---@field OnPartyNPCGotToDanceFloor FPartySpotOnPartyNPCGotToDanceFloor
---@field OnPartyNPCStoppedDancing FPartySpotOnPartyNPCStoppedDancing
---@field OnAllNPCsStoppedDancing FPartySpotOnAllNPCsStoppedDancing
---@field OnPartySpotEntered FPartySpotOnPartySpotEntered
---@field OnPartySpotLeft FPartySpotOnPartySpotLeft
---@field OnPartySpotClosed FPartySpotOnPartySpotClosed
---@field PartySpotClock APartySpotClock
---@field PartyTables TArray<APartySpotTable>
---@field DanceFloor ADanceFloor
---@field EventToSpawn TSoftClassPtr<UGSSEvent>
---@field PartyUfo TSoftClassPtr<AActor>
---@field PartyUfoTransform FTransform
---@field SpawnedPartyUfo AActor
---@field SpawnedPartyBus AActor
---@field AvailablePartyProductTypesIndexes TArray<int32>
---@field NumberOfDancingNPC int32
---@field NumberOfNotDancingNPC int32
---@field PartyNPCAmount int32
---@field MusicDuration float
---@field bIsEventActive boolean
---@field DancingTime FTimeStruct
---@field DancingTimeLeft FTimeStruct
---@field bIsDanceTime boolean
---@field bIsTimeLeft boolean
---@field bIsFirstTimeEntering boolean
---@field bisPartySpotOpen boolean
---@field MusicLoop int32
---@field TimeLeft FTimeStruct
---@field BushSpawner TSoftObjectPtr<ANoCarAISpawnPoint>
---@field NPCHome TSoftObjectPtr<AActor>
---@field CustomersNumberToSpawn int32
---@field SpawnedCustomersNumber int32
---@field SpawnHandler FTimerHandle
---@field PartySpotProducts UDA_PartySpotProducts
local APartySpot = {}

---@param Index int32
function APartySpot:UpdateAvailablePartyProductType(Index) end
function APartySpot:StartSpawningPartyNPC() end
function APartySpot:SpawnPartyNPC() end
---@param PartySpotTable APartySpotTable
function APartySpot:ShowConfirm(PartySpotTable) end
---@param Customer AAICharacterBase
function APartySpot:SetNPC(Customer) end
function APartySpot:SetAllPartySpotTableUnlocked() end
function APartySpot:SetAllPartySpotTableBlocked() end
function APartySpot:ResetPartyProductAvailibity() end
function APartySpot:ResetNPCSpawningRelVars() end
---@param Customer AAICharacterBase
---@param HumanType EHumanType
function APartySpot:OnSpecialNPCSpawn(Customer, HumanType) end
---@param Customer AActor
function APartySpot:OnNPCDestroyed(Customer) end
---@param NumberOfFullBaskets int32
---@return float
function APartySpot:GetPartyPopularityAmount(NumberOfFullBaskets) end
---@return int32
function APartySpot:GetPartyNPCAmount() end
---@return int32
function APartySpot:GetNumberOfFullBaskets() end
function APartySpot:FindOtherPartyCustomers() end
function APartySpot:EmptyAllPartySpotTables() end


---@class APartySpotClock : AActor
---@field ClockMesh UStaticMeshComponent
---@field ClockWidgetComponent UWidgetComponent
local APartySpotClock = {}

function APartySpotClock:StartPreparingToParty() end
function APartySpotClock:PartyOn() end


---@class APartySpotLighting : AActor
local APartySpotLighting = {}

function APartySpotLighting:StopWorking() end
function APartySpotLighting:OnStartParty() end
function APartySpotLighting:CheckIfDancingTime() end


---@class APartySpotScreen : AActor
---@field ScreenMesh UStaticMeshComponent
---@field ConfirmationWidgetComponent UWidgetComponent
local APartySpotScreen = {}

---@param DrawnProduct FDrawnProduct
function APartySpotScreen:SetScreen(DrawnProduct) end


---@class APartySpotTable : AShelf
---@field OnBasketFilled FPartySpotTableOnBasketFilled
---@field BasketScreen UChildActorComponent
---@field PartySpotScreen APartySpotScreen
---@field OriginalPathName FString
---@field DrawnProduct FDrawnProduct
---@field ProductAmount TArray<FProductAmount>
---@field ProductReason EProductReason
---@field bIsFull boolean
---@field bIsBlocked boolean
local APartySpotTable = {}

---@param NewProductReason EProductReason
function APartySpotTable:SetProductReason(NewProductReason) end
---@param NewValue boolean
function APartySpotTable:SetIsFull(NewValue) end
---@param NewValue boolean
function APartySpotTable:SetIsBlocked(NewValue) end
---@param NewDrawnProduct FDrawnProduct
function APartySpotTable:SetDrawnProduct(NewDrawnProduct) end
---@param PartySpotProducts UDA_PartySpotProducts
function APartySpotTable:RandomItem(PartySpotProducts) end
function APartySpotTable:Notification() end
function APartySpotTable:ItemAdded() end
---@return EProductReason
function APartySpotTable:GetProductReason() end
---@return TArray<FProductAmount>
function APartySpotTable:GetProductAmount() end
---@return boolean
function APartySpotTable:GetIsFull() end
---@return boolean
function APartySpotTable:GetIsBlocked() end
---@return FDrawnProduct
function APartySpotTable:GetDrawnProduct() end


---@class APartySpotVolume : ATriggerVolume
local APartySpotVolume = {}

---@param OverlappedActor AActor
---@param OtherActor AActor
function APartySpotVolume:OnOverlapEnd(OverlappedActor, OtherActor) end
---@param OverlappedActor AActor
---@param OtherActor AActor
function APartySpotVolume:OnOverlapBegin(OverlappedActor, OtherActor) end


---@class APartyTime : AInteractableBuilding
---@field PartyLightsToggle APartyLightsToggle
local APartyTime = {}



---@class APastries : AGasStationProduct
local APastries = {}


---@class APathPoint : AActor
---@field VehicleTypes TArray<EVehicleType>
---@field PriorityTraffics TArray<EPriorityTraffic>
---@field Nodes TArray<FNodeStruct>
---@field Parent APathPoint
---@field PathCost int32
---@field PathCostMultipler float
---@field IsExhausted boolean
---@field IsOccupied boolean
---@field IsUnlimited boolean
---@field IsUnLocked boolean
---@field Ruins TArray<ARuins>
local APathPoint = {}

---@param Actor AActor
function APathPoint:StopReservePathPoint(Actor) end
---@param Actor AActor
function APathPoint:StartReservePathPoint(Actor) end
---@param Enabled boolean
function APathPoint:SetLockState(Enabled) end
---@param DestroyedActor AActor
function APathPoint:DestroyRuin(DestroyedActor) end
---@return boolean
function APathPoint:CanBeUnblocked() end


---@class APathStation : AActor
---@field PathPoints TArray<APathPoint>
---@field InteractableActorTagToCheck FName
local APathStation = {}

---@param NewPathPoints TArray<APathPoint>
---@param GSSWheeledVehicleClass AGSSWheeledVehicle
---@return APathPoint
function APathStation:GetAvailablePathPoint(NewPathPoints, GSSWheeledVehicleClass) end


---@class APathfindingManager : AActor
---@field PathPoints TArray<APathPoint>
---@field SpawnPathPoints TArray<APathPoint>
local APathfindingManager = {}

---@param ClosedNodes TArray<APathPoint>
function APathfindingManager:ResetNodes(ClosedNodes) end
function APathfindingManager:GenerateNavLinks() end
---@param StartPoint APathPoint
---@param EndPoint APathPoint
---@param GSSVehicle AGSSWheeledVehicle
---@return TArray<APathPoint>
function APathfindingManager:FindPath(StartPoint, EndPoint, GSSVehicle) end


---@class APhoneBooth : AInteractableActor
---@field RingingAudio UAudioComponent
---@field PickUpAudio UAudioComponent
---@field CallAudio UAudioComponent
---@field bIsCooldownActive boolean
---@field CooldownTimerHandle FTimerHandle
local APhoneBooth = {}

function APhoneBooth:StopRinging() end
function APhoneBooth:StartRinging() end
---@param CooldownDuration float
function APhoneBooth:SetCooldown(CooldownDuration) end
---@return boolean
function APhoneBooth:IsOnCooldown() end
function APhoneBooth:EndCooldown() end


---@class APickableTool : AActor
---@field OnToolPickedUp FPickableToolOnToolPickedUp
---@field OnToolDropped FPickableToolOnToolDropped
---@field MainMesh USkeletalMeshComponent
---@field PlayerHandlePoint UArrowComponent
---@field OwningStation TWeakObjectPtr<APickableToolStation>
---@field MaxRangeFromStationBeforeReset float
---@field HeldByPawn TWeakObjectPtr<APawn>
local APickableTool = {}

function APickableTool:ReattachToPlayer() end
function APickableTool:OnPutDown() end
---@param PickedUpPawn APawn
function APickableTool:OnPickUp(PickedUpPawn) end
---@return boolean
function APickableTool:GetIsPickedUp() end
function APickableTool:CheckDistanceFromStation() end


---@class APickableToolStation : AInteractableBuilding
---@field PickableTool UChildActorComponent
---@field UnlockedTag FGameplayTag
local APickableToolStation = {}



---@class APicklockBase : AKeyItem
local APicklockBase = {}


---@class APicnicProduct : AItem
---@field Type EPicnicProductType
---@field MovementDuration float
---@field Hop float
---@field IsInTheBasket boolean
---@field SlotIndex int32
---@field OnItemPlaced FPicnicProductOnItemPlaced
---@field OnItemGrabbed FPicnicProductOnItemGrabbed
---@field InitialMovementTransform FTransform
---@field TargetMovementTransform FTransform
---@field CurrentMovementDuration float
---@field bIsMoving boolean
local APicnicProduct = {}



---@class APilotCharacter : AGSSNPAICharacterBase
---@field Hair_SMC USkeletalMeshComponent
---@field Beard_SMC USkeletalMeshComponent
---@field OnTradingPilotBackInPlane FPilotCharacterOnTradingPilotBackInPlane
---@field OnTradingPilotLeftPlane FPilotCharacterOnTradingPilotLeftPlane
---@field PoseAsset TSoftObjectPtr<UPoseAsset>
local APilotCharacter = {}

---@param ConversationType ENPCConversationType
function APilotCharacter:TriggerTradingPilotDialogue(ConversationType) end
---@param HumanBase AGSSNPAICharacterBase
function APilotCharacter:TradingDialogueFinished(HumanBase) end
---@param RandomHair TSoftObjectPtr<USkeletalMesh>
---@param RandomBeard TSoftObjectPtr<USkeletalMesh>
---@param FlagMaterial TSoftObjectPtr<UMaterialInstance>
function APilotCharacter:SetPilotComponents(RandomHair, RandomBeard, FlagMaterial) end
---@param Country FName
---@param GenderToSet ENPCGender
function APilotCharacter:SetPilot(Country, GenderToSet) end
---@param flag TSoftObjectPtr<UMaterialInstance>
function APilotCharacter:SetFlag(flag) end
---@param NewValue EMontagePilotState
function APilotCharacter:SetCurrentPilotMontageState(NewValue) end
---@param SavedTradingPilot FSavedTradingPilot
function APilotCharacter:LoadSetPilot(SavedTradingPilot) end
---@return EMontagePilotState
function APilotCharacter:GetCurrentPilotMontageState() end


---@class APlaceableActor : AInteractableActor
---@field bIsCompatibile boolean
---@field bConstructionMode boolean
---@field CompatibileAreas TArray<EBuildingAreaType>
---@field ConstructType EConstructType
---@field MinLevelHouseToUnblock int32
---@field SnapPointTag FName
---@field PlaceableBox UBoxComponent
---@field PlacementCollisionBox UBoxComponent
---@field PreviouslyOverlappingWalls TArray<AActor>
---@field PreviouslyOverlappingPlaceableActors TArray<AActor>
---@field bSnapToGrid boolean
---@field SnappedToActor AActor
---@field ComponentsCollisions TArray<FCollisionSaveStruct>
---@field DecorationSnapType ESnapType
---@field MaxSnapDistance float
---@field CurrentSnapPoint ASnapPoint
---@field HittedHousePart ACustomizationHousePart
local APlaceableActor = {}

function APlaceableActor:ToggleSnappingToGrid() end
function APlaceableActor:StartMovingActor() end
---@param StartLocation FVector
function APlaceableActor:SearchClosestCompatibileSnapPoint(StartLocation) end
---@param bIsPressed boolean
function APlaceableActor:R_Action(bIsPressed) end
---@return boolean
function APlaceableActor:PlaceActor() end
---@param OverlappingActors TArray<AActor>
---@param PreviouslyOverlappingActors TArray<AActor>
function APlaceableActor:OutLineOverlappingActors(OverlappingActors, PreviouslyOverlappingActors) end
---@return int32
function APlaceableActor:GetCurrentGridRotationValue() end
---@return TArray<AActor>
function APlaceableActor:GetAllCompatibileSpawnPoint() end
function APlaceableActor:EnableGhostMode() end
---@param PreviouslyOverlappingActors TArray<AActor>
function APlaceableActor:ClearOutlinedActors(PreviouslyOverlappingActors) end
---@param bIncrease boolean
function APlaceableActor:ChangeSnapRotationValue(bIncrease) end
---@param bIncrease boolean
function APlaceableActor:ChangeSnapGridValue(bIncrease) end
---@param bCompatibile boolean
---@param OverlapedElements TArray<AActor>
---@param Reason FName
function APlaceableActor:CanBeSpawned(bCompatibile, OverlapedElements, Reason) end


---@class APlaneDropPlace : AActor
---@field MainMesh UStaticMeshComponent
---@field PlaneFinalPosition UArrowComponent
---@field AreaTriggerBox UBoxComponent
---@field TowyTriggerBox UBoxComponent
---@field OneTimeTutorialTag FGameplayTag
---@field TipWidgetInstance UUserWidget
---@field JoeAirplaneInsideArea AAirplane_TapingMinigame
---@field TipWidgetClass TSubclassOf<UAirplaneHighlightAreaWidget>
---@field JoeAirplaneClass TSubclassOf<AAirplane_TapingMinigame>
---@field TapingTutorialClass TSoftClassPtr<UUserWidget>
---@field TapingTutorialInstance UUserWidget
---@field bIsPlayerInsideArea boolean
---@field bWasTutorialShown boolean
local APlaneDropPlace = {}

---@param bOn boolean
function APlaneDropPlace:TurnOnHolesHighlight(bOn) end
---@param bOn boolean
function APlaneDropPlace:TurnOnHighlight(bOn) end
function APlaneDropPlace:SetAreaCollisionBaseOnPlaneState() end
---@param NewPlaneState EJoeAirplaneState
function APlaneDropPlace:OnJoePlaneStateChange(NewPlaneState) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function APlaneDropPlace:OnAreaStopOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function APlaneDropPlace:OnAreaBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@return boolean
function APlaneDropPlace:IsOnFixingTapeQuestAndHasTape() end
---@param bShouldHighlight boolean
function APlaneDropPlace:HighlightAirplane(bShouldHighlight) end


---@class APlanePart : AActor
---@field ParentPlane AAirplane_TapingMinigame
---@field RootSphere USphereComponent
---@field MainMeshComponent UStaticMeshComponent
local APlanePart = {}



---@class APlayerArea : AActor
local APlayerArea = {}


---@class APlayerVehicle : AGSSWheeledVehicle
---@field OnPlayerVehicleMoveForwardAction FPlayerVehicleOnPlayerVehicleMoveForwardAction
---@field OnPlayerVehicleMoveSidewaysAction FPlayerVehicleOnPlayerVehicleMoveSidewaysAction
---@field OnPlayerVehicleHandbrakeAction FPlayerVehicleOnPlayerVehicleHandbrakeAction
---@field OnPlayerVehicleTurboAction FPlayerVehicleOnPlayerVehicleTurboAction
---@field OnPlayerVehiclePrimaryAction FPlayerVehicleOnPlayerVehiclePrimaryAction
---@field OnPlayerVehicleSecondaryAction FPlayerVehicleOnPlayerVehicleSecondaryAction
---@field OnPlayerVehicleInteraction FPlayerVehicleOnPlayerVehicleInteraction
---@field OnPlayerVehicleLookSides FPlayerVehicleOnPlayerVehicleLookSides
---@field OnPlayerVehicleLookUp FPlayerVehicleOnPlayerVehicleLookUp
---@field OnPlayerVehicleZoomAxis FPlayerVehicleOnPlayerVehicleZoomAxis
---@field NewSpringArmComponent USpringArmComponent
---@field NewCameraComponent UCameraComponent
---@field OriginalCharacter ACharacter
---@field ForwardAxisValue float
---@field InputAxisMoveRight float
---@field FuelRemoveSpeed float
---@field StandardSpeed float
---@field BoostSpeed float
---@field bFillMinigameActive boolean
---@field bIsBoostActive boolean
---@field bEngineCrashed boolean
---@field bHandbrakePressed boolean
---@field bHoldingCooling boolean
---@field TimeSinceLastMove float
---@field CameraMoveTime float
---@field OverheatSpeedWhenSprint float
---@field OverheatSpeedMultiplier float
---@field OverheatLimit float
---@field OverheatReductionMultiplier float
---@field OverheatReductionHolding float
---@field bInvertX boolean
---@field bInvertY boolean
---@field bToogleSprintMode boolean
---@field CameraSpeedX float
---@field CameraSpeedY float
---@field BaseTurnRate float
---@field BaseLookUpRate float
---@field CurrentOverheat float
---@field BindWidget UKeyItemWidget
local APlayerVehicle = {}

function APlayerVehicle:UnPossesPlayerVehicle() end
function APlayerVehicle:TutorialCreated() end
function APlayerVehicle:StopBoostOnEngineCrash() end
---@param bPossesed boolean
function APlayerVehicle:SetInputActions(bPossesed) end
---@param NewValue float
function APlayerVehicle:SetCurrentOverheat(NewValue) end
function APlayerVehicle:ResetVehicle() end
function APlayerVehicle:PossesPlayerVehicle() end
---@param Value float
function APlayerVehicle:PlayerVehicleZoomAxis(Value) end
function APlayerVehicle:PlayerVehicleTurboAction_Released() end
function APlayerVehicle:PlayerVehicleTurboAction_Pressed() end
function APlayerVehicle:PlayerVehicleSecondaryAction_Released() end
function APlayerVehicle:PlayerVehicleSecondaryAction_Pressed() end
function APlayerVehicle:PlayerVehiclePrimaryAction_Released() end
function APlayerVehicle:PlayerVehiclePrimaryAction_Pressed() end
---@param Value float
function APlayerVehicle:PlayerVehicleMoveSideways(Value) end
---@param Value float
function APlayerVehicle:PlayerVehicleMoveForward(Value) end
---@param Value float
function APlayerVehicle:PlayerVehicleLookUpAxis(Value) end
---@param Value float
function APlayerVehicle:PlayerVehicleLookSidesAxis(Value) end
function APlayerVehicle:PlayerVehicleInteraction_Released() end
function APlayerVehicle:PlayerVehicleInteraction_Pressed() end
function APlayerVehicle:PlayerVehicleHandbreakeAction_Released() end
function APlayerVehicle:PlayerVehicleHandbreakeAction_Pressed() end
function APlayerVehicle:OverheatHandling() end
function APlayerVehicle:OnAppliedControlSettings() end
---@param Value float
function APlayerVehicle:InputActionZoomAxis(Value) end
---@param bPressed boolean
function APlayerVehicle:InputActionTurbo(bPressed) end
---@param bPressed boolean
function APlayerVehicle:InputActionSecondary(bPressed) end
---@param bPressed boolean
function APlayerVehicle:InputActionPrimary(bPressed) end
---@param Value float
function APlayerVehicle:InputActionMoveSides(Value) end
---@param Value float
function APlayerVehicle:InputActionMoveForward(Value) end
---@param Value float
function APlayerVehicle:InputActionLookUp(Value) end
---@param Value float
function APlayerVehicle:InputActionLookSides(Value) end
---@param bPressed boolean
function APlayerVehicle:InputActionInteraction(bPressed) end
---@param bPressed boolean
function APlayerVehicle:InputActionHandbrake(bPressed) end
---@return float
function APlayerVehicle:GetCurrentOverheat() end
function APlayerVehicle:EngineCrash() end
function APlayerVehicle:EngineColor() end
function APlayerVehicle:CreateKeyItemWidget() end
function APlayerVehicle:CheckIfUnderMap() end
function APlayerVehicle:BoostBlueprintEvent() end


---@class APopcornMachine : AInteractableBuilding
---@field MachineState ePopcornMachineState
---@field CurrentCapacity int32
---@field MaximumCapacity int32
---@field ProductionTime float
---@field PopcornMaterial UMaterialInstanceDynamic
---@field OnTimeUpdate FPopcornMachineOnTimeUpdate
---@field OnCapacityUpdate FPopcornMachineOnCapacityUpdate
---@field OnPopcornGenerated FPopcornMachineOnPopcornGenerated
---@field OnStateChanged FPopcornMachineOnStateChanged
---@field OnEmptyMachine FPopcornMachineOnEmptyMachine
---@field ActualProductionTime float
local APopcornMachine = {}

function APopcornMachine:UpdateProductionTime() end
function APopcornMachine:StartProductionAnimation() end
---@param bAfterGameLoading boolean
function APopcornMachine:StartProduction(bAfterGameLoading) end
---@param NewMachineState ePopcornMachineState
function APopcornMachine:SetMachineState(NewMachineState) end
---@param PopcornBox AActor
---@param Vehicle AActor
function APopcornMachine:PopcornDeliveredActions(PopcornBox, Vehicle) end
function APopcornMachine:FinishProductionAnimation() end
function APopcornMachine:CheckForPopcornSpawn() end
function APopcornMachine:CheckForEmptyMachine() end


---@class APortableCarWashPistol : ACarWashPistol
---@field OnCleaningSolutionActivated FPortableCarWashPistolOnCleaningSolutionActivated
---@field OnCleaningSolutionDeactivated FPortableCarWashPistolOnCleaningSolutionDeactivated
---@field bCleaningSolutionActive boolean
local APortableCarWashPistol = {}

---@param bPressed boolean
function APortableCarWashPistol:PlayerInteractionF(bPressed) end
function APortableCarWashPistol:EnableCleaningSolution() end
function APortableCarWashPistol:DisableCleaningSolution() end


---@class APortablePowerWashHolder : AInteractableBuilding
---@field PistolChildActorComponent UChildActorComponent
local APortablePowerWashHolder = {}

---@return APortableCarWashPistol
function APortablePowerWashHolder:GetPortableCarWashPistol() end
---@return UChildActorComponent
function APortablePowerWashHolder:GetPistolChildActorComponent() end


---@class APressureWasher : AActor
---@field OnGrinderPickedUp FPressureWasherOnGrinderPickedUp
---@field OnGrinderDropped FPressureWasherOnGrinderDropped
---@field MainMesh UStaticMeshComponent
---@field SparksParticles UNiagaraComponent
---@field SmokeParticles UNiagaraComponent
---@field LoopAudioComponent UAudioComponent
---@field ActionsAudioComponent UAudioComponent
---@field WaterSplashStartEndAudioComponent UAudioComponent
---@field WaterSplashLoopAudioComponent UAudioComponent
---@field bIsFiring boolean
---@field MaxRangeFromStationBeforeReset float
---@field MaxRangeFromHolderBeforeReset float
---@field NumberOfTraces int32
---@field TraceOffset float
---@field TraceDistance float
---@field VInterpSpeed float
---@field RInterpSpeed float
---@field PickUpSound USoundCue
---@field PutDownSound USoundCue
---@field WashingStartSound USoundCue
---@field WashingLoopSound USoundCue
---@field WashingStopSound USoundCue
---@field SpalshStart USoundCue
---@field SpalshLoop USoundCue
---@field SpalshEnd USoundCue
---@field OwningStation TWeakObjectPtr<AGrinderStation>
---@field FadeOutTime float
---@field FadeInTime float
---@field HeldByPawn TWeakObjectPtr<APawn>
---@field DistanceCheckTime float
---@field TimeSinceLastDistanceCheck float
---@field AlertCooldownDuration float
---@field CurrentAlertCooldown float
---@field bAlertCooldown boolean
---@field LastTargetedWreck AJunkyardCarWreckCustomizable
local APressureWasher = {}

function APressureWasher:StopWashing() end
function APressureWasher:StopGrindingCar() end
function APressureWasher:StartWashing() end
function APressureWasher:StartGrindingCar() end
function APressureWasher:ReattachToPlayer() end
---@param bPressed boolean
function APressureWasher:PrimaryAction(bPressed) end
function APressureWasher:OnPutDown() end
---@param PickedUpPawn APawn
function APressureWasher:OnPickUp(PickedUpPawn) end
---@return boolean
function APressureWasher:GetIsPickedUp() end
function APressureWasher:DisplayWarningPlatformPrompt() end
function APressureWasher:DisplayWarningPartsPrompt() end
function APressureWasher:CheckDistanceFromStation() end
function APressureWasher:CheckDistanceFromHolder() end


---@class AProduct : AItem
---@field ThrowSound UAudioComponent
---@field PickUpSound UAudioComponent
---@field ImpactSound UAudioComponent
---@field bIsPickable boolean
---@field bAllowInteraction boolean
---@field bTmpPawn APawn
---@field ThrowMultiplier float
---@field CashShopHoldZOffset float
---@field CashShopScale float
local AProduct = {}

---@param Seconds float
function AProduct:StartTimerToDeactivatePhysics(Seconds) end
---@param Seconds float
function AProduct:StartTimerToActivateCollision(Seconds) end
---@param Active boolean
function AProduct:SetThrowStatus(Active) end
---@param Active boolean
function AProduct:SetNonPlayerThrowStatus(Active) end
---@param bNewValue boolean
function AProduct:SetIsScanned(bNewValue) end
---@param bAllow boolean
function AProduct:SetAllowInteraction(bAllow) end
function AProduct:PickUpProductInternal() end
---@param Pawn APawn
function AProduct:PickUpProduct(Pawn) end
function AProduct:HandleLanding() end
---@return boolean
function AProduct:GetProductLanded() end
---@return boolean
function AProduct:GetIsScanned() end
---@return FName
function AProduct:GetInteractionName_Implementation() end
---@return FName
function AProduct:GetInteractionName() end
---@return float
function AProduct:GetCashShopScale() end
---@return float
function AProduct:GetCashShopHoldZOffset() end
---@return TArray<AProduct>
function AProduct:GetAllThingsAroundObjects() end
---@return boolean
function AProduct:GetAllowInteraction() end
function AProduct:DestroySelfYolo() end
function AProduct:DeactivatePhysicsOnTimer() end
---@param Seconds float
function AProduct:DeactivateCollisionOnObjectForFewSeconds(Seconds) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AProduct:BeginOverlapOnTrash(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param Seconds float
function AProduct:ActivatePhysicsOnObjectForFewSeconds(Seconds) end
function AProduct:ActivateCollisionOnTimer() end


---@class AProjectileActor : AActor
---@field MainMesh UStaticMeshComponent
---@field ProjectileMovementComponent UProjectileMovementComponent
---@field StartPosition FVector
local AProjectileActor = {}



---@class AQuestChallengeManager : AActor
---@field OnChallengeObjectiveUpdated FQuestChallengeManagerOnChallengeObjectiveUpdated
---@field OnChallengeCompleted FQuestChallengeManagerOnChallengeCompleted
---@field OnChallengeStarted FQuestChallengeManagerOnChallengeStarted
---@field ObjectiveChallengeCompleted FQuestChallengeManagerObjectiveChallengeCompleted
---@field ObjectiveChallengeStarted FQuestChallengeManagerObjectiveChallengeStarted
---@field OnRVChallengeStarted FQuestChallengeManagerOnRVChallengeStarted
---@field OnRVChallengeCompleted FQuestChallengeManagerOnRVChallengeCompleted
---@field OnRVChallengeUpdated FQuestChallengeManagerOnRVChallengeUpdated
---@field OnPostGameChallengeComplete FQuestChallengeManagerOnPostGameChallengeComplete
---@field OnPostGameChallengeStarted FQuestChallengeManagerOnPostGameChallengeStarted
---@field OnPostGameChallengeTimerUpdate FQuestChallengeManagerOnPostGameChallengeTimerUpdate
---@field RVObjective URVChallenge
---@field ActiveChallenge TArray<FQuestChallenge>
---@field ActiveQuestData UGSSQuest
---@field ActiveObjectiveData UChallengeObjective
---@field TimeUntilChallenge float
---@field TimeUntilChallengeCompletitionCheck float
local AQuestChallengeManager = {}

function AQuestChallengeManager:VerifyIfChallengeStillSame() end
function AQuestChallengeManager:VerifyChallengeComplete() end
---@param StatUpdated EGSS_Stat
---@param ValueUpdated int32
function AQuestChallengeManager:StatUpdated(StatUpdated, ValueUpdated) end
---@param ObjectiveRef URVChallenge
function AQuestChallengeManager:StartRVChallenge(ObjectiveRef) end
---@param ChallengeToStart FQuestChallenge
function AQuestChallengeManager:StartPostGameChallenge(ChallengeToStart) end
---@param ObjectiveRef UChallengeObjective
function AQuestChallengeManager:StartObjectiveChallenges(ObjectiveRef) end
---@param QuestRef UGSSQuest
function AQuestChallengeManager:StartChallenge(QuestRef) end
---@param QuestRef URVChallenge
---@param Condition URVChallengeCondition
function AQuestChallengeManager:RVChallengeUpdated(QuestRef, Condition) end
function AQuestChallengeManager:ResetTimeUntilChallenge() end
function AQuestChallengeManager:OnQuestsLoadingStartLoadingChallenges() end
---@param CharRef AGSSPlayerCharacter
function AQuestChallengeManager:OnGSSPlayerSpawned(CharRef) end
---@param ChallengesToLoad TArray<FQuestChallenge>
---@param LoadedTimeUntilChallenge float
---@param LoadedTimeUntilChallengeComp float
---@param bIsTickEnabled boolean
function AQuestChallengeManager:LoadActiveChallenges(ChallengesToLoad, LoadedTimeUntilChallenge, LoadedTimeUntilChallengeComp, bIsTickEnabled) end
---@param QuestRef URVChallenge
---@return boolean
function AQuestChallengeManager:IsRVChallengeComplete(QuestRef) end
---@return boolean
function AQuestChallengeManager:IsRVChallengeActive() end
---@param QuestRef UChallengeObjective
---@return boolean
function AQuestChallengeManager:IsObjectiveChallengeComplete(QuestRef) end
---@param QuestRef UGSSQuest
---@return boolean
function AQuestChallengeManager:IsChallengeComplete(QuestRef) end
---@return boolean
function AQuestChallengeManager:IsChallengeActive() end
---@return boolean
function AQuestChallengeManager:IsActiveChallengeComplete() end
---@param ChallengeToCheck TArray<FQuestChallenge>
---@param StatToCheck EGSS_Stat
---@param ActiveAmount float
---@param NeededAmount float
function AQuestChallengeManager:GetValuesOfChallengePart(ChallengeToCheck, StatToCheck, ActiveAmount, NeededAmount) end
---@return float
function AQuestChallengeManager:GetTimeUntilChallengeCompletitionCheck() end
---@return float
function AQuestChallengeManager:GetTimeUntilChallenge() end
---@param StatToCheck EGSS_Stat
---@return int32
function AQuestChallengeManager:GetChallengeValue(StatToCheck) end
---@return TArray<FQuestChallenge>
function AQuestChallengeManager:GetActiveChallenges() end
---@param ObjectiveRef URVChallenge
---@param bSuccess boolean
function AQuestChallengeManager:FinishRVChallenge(ObjectiveRef, bSuccess) end
---@param bSuccess boolean
function AQuestChallengeManager:FinishPostGameChallenge(bSuccess) end
function AQuestChallengeManager:FinishChallenge() end
---@param StatToCheck EGSS_Stat
---@return int32
function AQuestChallengeManager:FindActiveChallengeIndex(StatToCheck) end
---@param Amount int32
function AQuestChallengeManager:Debug_AddChallengeProgress(Amount) end
function AQuestChallengeManager:ActivatePostGameChallenges() end


---@class AQuestZone : AActor
---@field bIsLevelQuestZone boolean
---@field QuestZoneShape EQuestZoneShape
---@field BoxComponent UBoxComponent
---@field CapsuleComponent UCapsuleComponent
---@field SpawnedZoneID FName
local AQuestZone = {}

---@param ID FName
---@param ZoneSize float
function AQuestZone:SetQuestZoneToSpawnedType(ID, ZoneSize) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AQuestZone:OnQuestTriggerComponentBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end


---@class AQueuPointPreview : AActor
local AQueuPointPreview = {}


---@class AQueuePointPreview : AActor
---@field InnerRadiusMesh UStaticMeshComponent
---@field OuterRadiusMesh UStaticMeshComponent
---@field PositionText UTextRenderComponent
---@field MID_Arrow UMaterialInstanceDynamic
---@field MID_InnerRing UMaterialInstanceDynamic
---@field MID_OuterRing UMaterialInstanceDynamic
---@field DefaultRoot USceneComponent
---@field ArrowMesh UStaticMeshComponent
---@field PositionInQueue int32
local AQueuePointPreview = {}

---@param Position int32
function AQueuePointPreview:SetPositionInQueue(Position) end


---@class AQueuePointRadiusPreview : AActor
---@field StaticMesh UStaticMeshComponent
local AQueuePointRadiusPreview = {}



---@class ARVBuildingLocalizer : AActor
---@field LocationCampSpot1 UArrowComponent
---@field LocationCampSpot2 UArrowComponent
---@field LocationCampSpot3 UArrowComponent
---@field LocationCampSpot4 UArrowComponent
---@field LocationCampSpot5 UArrowComponent
---@field LocationCampSpot6 UArrowComponent
---@field LocationCampSpot7 UArrowComponent
---@field LocationCampSpot8 UArrowComponent
---@field LocationServiceRVLeveling1 UArrowComponent
---@field LocationServiceRVLeveling2 UArrowComponent
---@field LocationServiceRVLeveling3 UArrowComponent
---@field LocationServiceRVLeveling4 UArrowComponent
---@field LocationServiceRVLeveling5 UArrowComponent
---@field LocationServiceRVLeveling6 UArrowComponent
---@field LocationServiceRVLeveling7 UArrowComponent
---@field LocationServiceRVLeveling8 UArrowComponent
---@field LocationServiceRVLevelingGlobal UArrowComponent
---@field LocationServiceLaundry UArrowComponent
---@field LocationServiceSauna UArrowComponent
---@field LocationServiceBenchPress UArrowComponent
---@field LocationServiceBBQ UArrowComponent
---@field LocationServiceDishwashing UArrowComponent
---@field LocationServiceWoodChopping UArrowComponent
---@field LocationServiceShootingRange UArrowComponent
---@field LocationServicePicnicBasket UArrowComponent
---@field LocationResourcePower UArrowComponent
---@field LocationResourceWater UArrowComponent
---@field LocationResourceSewage UArrowComponent
---@field LocationConcert UArrowComponent
---@field LocationCousinHouse UArrowComponent
---@field LocationRubyCamper UArrowComponent
---@field CampSpotsLocations TArray<FVector>
---@field RVLevelingLocations TArray<FVector>
---@field ServiceLocations TMap<FName, FVector>
local ARVBuildingLocalizer = {}

---@param Service FGameplayTag
---@return FVector
function ARVBuildingLocalizer:GetServiceLocation(Service) end
---@param CampSpotNumber int32
---@return FVector
function ARVBuildingLocalizer:GetRVLevelingLocation(CampSpotNumber) end
---@return FVector
function ARVBuildingLocalizer:GetRubyCamperLocation() end
---@return FVector
function ARVBuildingLocalizer:GetCousinHouseLocation() end
---@return FVector
function ARVBuildingLocalizer:GetConcertLocation() end
---@param CampSpotNumber int32
---@return FVector
function ARVBuildingLocalizer:GetCampSpotLocation(CampSpotNumber) end


---@class ARVCamp : AInteractableBuilding
local ARVCamp = {}


---@class ARVCampEmployee : AGSSNPAICharacterBase
---@field ServiceTask TSoftClassPtr<UNPAITaskBase>
---@field RestTask TSoftClassPtr<UNPAITaskBase>
---@field ConcertTask TSoftClassPtr<UNPAITaskBase>
---@field ConcertMontage TSoftObjectPtr<UAnimMontage>
---@field TalkToPlayerTask TSoftClassPtr<UNPAITaskBase>
---@field ConcertSpot TSoftObjectPtr<AActor>
---@field EmployeeRestPoint TSoftObjectPtr<ARVEmployeeRestPoint>
---@field OnAssignmentUpdated FRVCampEmployeeOnAssignmentUpdated
---@field OnMoneyEarnedUpdated FRVCampEmployeeOnMoneyEarnedUpdated
---@field OnAutopayUpdated FRVCampEmployeeOnAutopayUpdated
---@field OnIsUnpaidUpdated FRVCampEmployeeOnIsUnpaidUpdated
---@field OnPayCooldownUpdated FRVCampEmployeeOnPayCooldownUpdated
---@field OnEmployeeReset FRVCampEmployeeOnEmployeeReset
---@field EmployeeConfig URVEmployeeConfig
---@field AssignedServices TArray<FRVEmployeeAssignment>
---@field CurrentServiceTarget FGameplayTag
---@field AtConcertMessage FText
---@field CurrentServiceSpot ARvGuestServiceSpot
---@field bIsTalkingToPlayer boolean
---@field bShouldWalkAfterTalkingToPlayer boolean
---@field bIsAutopayEnabled boolean
---@field bIsUnpaid boolean
---@field bIsAtConcert boolean
---@field CurrentMoneyEarned float
---@field PayCooldown FTimeStruct
---@field RVCampManager ARVCampManager
---@field GSSPlayerState AGSSPlayerState
---@field PlayerCharacter AGSSPlayerCharacter
---@field bIsDLCDeactivated boolean
local ARVCampEmployee = {}

---@param Assignment FRVEmployeeAssignment
---@param SlotIndex int32
function ARVCampEmployee:UpdateServiceAssignment(Assignment, SlotIndex) end
---@param ForceUpdate boolean
---@param KeepIndex boolean
---@param IndexToKeep int32
function ARVCampEmployee:TryToGoToNextService(ForceUpdate, KeepIndex, IndexToKeep) end
---@return boolean
function ARVCampEmployee:TryPayEmployee() end
function ARVCampEmployee:TalkToEmployeeEvent() end
function ARVCampEmployee:TalkToEmployee() end
function ARVCampEmployee:StopTalkingToEmployee() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ARVCampEmployee:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ARVCampEmployee:ShowServiceWidget() end
---@param NewPayCooldown FTimeStruct
function ARVCampEmployee:SetPayCooldown(NewPayCooldown) end
---@param IsUnpaid boolean
function ARVCampEmployee:SetIsUnpaid(IsUnpaid) end
---@param IsEnabled boolean
function ARVCampEmployee:SetIsAutopayEnabled(IsEnabled) end
---@param NewIsAtConcert boolean
function ARVCampEmployee:SetIsAtConcert(NewIsAtConcert) end
---@param NewMoneyEarned float
function ARVCampEmployee:SetCurrentMoneyEarned(NewMoneyEarned) end
function ARVCampEmployee:ResetPayCooldown() end
function ARVCampEmployee:ResetCurrentService() end
function ARVCampEmployee:Reset() end
---@param UpdatedTime FTimeStruct
function ARVCampEmployee:OnTimeUpdated(UpdatedTime) end
---@param ServiceTag FGameplayTag
---@param ServiceBuilding ARvGuestServiceSpot
---@param Success boolean
function ARVCampEmployee:OnMinigameCompleted(ServiceTag, ServiceBuilding, Success) end
---@param DLCName EDLCName
---@param bActivated boolean
function ARVCampEmployee:OnDLCActivationStateChanged(DLCName, bActivated) end
---@param CamperLeftReason ERVCamperLeftReason
function ARVCampEmployee:OnConcertStopped(CamperLeftReason) end
function ARVCampEmployee:OnConcertStarted() end
---@param LoadedAssignments TArray<FRVEmployeeAssignment>
---@param LoadedCurrentServiceTarget FGameplayTag
function ARVCampEmployee:LoadServiceAssignments(LoadedAssignments, LoadedCurrentServiceTarget) end
function ARVCampEmployee:InitAfterSpawn() end
function ARVCampEmployee:HideServiceWidget() end
---@param Service FGameplayTag
---@param ServiceSpot ARvGuestServiceSpot
---@param ForceUpdate boolean
function ARVCampEmployee:GoToService(Service, ServiceSpot, ForceUpdate) end
function ARVCampEmployee:GoToConcert() end
---@return FTimeStruct
function ARVCampEmployee:GetPayCooldown() end
---@return boolean
function ARVCampEmployee:GetIsUnpaid() end
---@return boolean
function ARVCampEmployee:GetIsTalkingToPlayer() end
---@return boolean
function ARVCampEmployee:GetIsAutopayEnabled() end
---@return boolean
function ARVCampEmployee:GetIsAtConcert() end
---@return FGameplayTag
function ARVCampEmployee:GetCurrentServiceTarget() end
---@return float
function ARVCampEmployee:GetCurrentMoneyEarned() end
---@return TArray<FRVEmployeeAssignment>
function ARVCampEmployee:GetAssignedServices() end
---@param SearchStartIndex int32
---@param Service FGameplayTag
---@param ServiceSpot ARvGuestServiceSpot
function ARVCampEmployee:FindNextValidService(SearchStartIndex, Service, ServiceSpot) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ARVCampEmployee:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
function ARVCampEmployee:DisableInteractionInfo(Pawn) end
---@return boolean
function ARVCampEmployee:CanPayEmployee() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ARVCampEmployee:CanBeInteractable(Pawn, UPrimitiveComponent) end


---@class ARVCampManager : AActor
---@field MainGameQuestToTriggerQuestline UQuestBase
---@field BookingManager URVBookingManager
---@field EventManager URVEventManager
---@field EmployeeManager URVEmployeeManager
---@field ConcertManager URVConcertManager
---@field RVTrustManager URVTrustPointManager
---@field ResourceManager URVResourceManager
---@field BookingSettings URVBookingSettings
---@field RVEmployeesSettings URVEmployeesSettings
---@field EventSettings URVEventSettings
---@field ConcertSettings URVConcertSettings
---@field GuestServiceSettings URVGuestServiceSettings
---@field ResourceSettings URVResourceSettings
---@field GoToGuestServiceAITask UDA_SpecificAITask
---@field AITasks TMap<EInteractableTaskType, TSubclassOf<UTaskBase>>
---@field RVErrorMessages UStringTable
---@field OnMinigameCompleted FRVCampManagerOnMinigameCompleted
---@field OnCamper3DWidgetToggle FRVCampManagerOnCamper3DWidgetToggle
---@field RVSpawner ARVSpawner
---@field Campers TArray<URVCamperComponent>
---@field CampSpots TArray<TSoftObjectPtr<ARVCampSpot>>
---@field BookingCamera TSoftObjectPtr<ADecorationCamera>
---@field ConcertBuilding TSoftObjectPtr<ARvConcertBuilding>
---@field GoToLeavingCamperSpot TSoftObjectPtr<AActor>
---@field RVQuestlineStartedTag FGameplayTag
---@field ServiceUpgrader TSoftObjectPtr<AInteractableActor>
---@field CousinsHouse TSoftObjectPtr<AInteractableActor>
---@field RubyCharacterClass TSoftClassPtr<ARubyCharacter>
---@field RVPlayerArea TSoftObjectPtr<APlayerArea>
---@field RVCamp TSoftObjectPtr<ARVCamp>
---@field BuildingLocalizer TSoftObjectPtr<ARVBuildingLocalizer>
---@field RVCampClientsSpeedMultiplier float
---@field RubyCamperDoorsActorClass TSoftClassPtr<AStaticMeshActor>
---@field RubyCamperDoorsTransform FTransform
---@field RubyCamperDoors AStaticMeshActor
---@field bIsCamper3DWidgetVisible boolean
---@field bQuestsLoaded boolean
---@field bGameInstanceLoaded boolean
local ARVCampManager = {}

---@param ServiceSettings URVGuestServiceSettings
---@param ServiceTag FGameplayTag
---@return FGuestServiceData
function ARVCampManager:StaticGetServicesDataTableInfo(ServiceSettings, ServiceTag) end
---@param SpawnTransform FTransform
---@param InTasksList TArray<FNPAITaskStruct>
---@param LatentInfo FLatentActionInfo
function ARVCampManager:SpawnRubyCharacter(SpawnTransform, InTasksList, LatentInfo) end
function ARVCampManager:SpawnOrLoadRubyCamperDoors() end
---@param ServicesArray TArray<FGameplayTag>
function ARVCampManager:SortServicesArray(ServicesArray) end
---@param BuildingType EBuildingType
---@param NewBuildingLevel int32
---@param bLoadedFromSave boolean
function ARVCampManager:OnRVCampMapLoaded(BuildingType, NewBuildingLevel, bLoadedFromSave) end
function ARVCampManager:OnQuestlinesLoaded() end
---@param bGameLoaded boolean
function ARVCampManager:OnGameLoaded(bGameLoaded) end
---@return boolean
function ARVCampManager:IsPlayerInsideRvArea() end
---@return boolean
function ARVCampManager:IsAnyCamperParked() end
---@param bActivateFromQuest boolean
function ARVCampManager:HandleQuestlineActivation(bActivateFromQuest) end
---@param CustomerData URVCustomerData
---@param CampSpot ARVCampSpot
---@return TArray<int32>
function ARVCampManager:GetSortedServiceIndexesByStatus(CustomerData, CampSpot) end
---@param CustomerData URVCustomerData
---@return TArray<FGameplayTag>
function ARVCampManager:GetSortedMusicLikesByStatus(CustomerData) end
---@param CustomerData URVCustomerData
---@param ServiceIndex int32
---@param CampSpot ARVCampSpot
---@return ERVServiceState
function ARVCampManager:GetServiceState(CustomerData, ServiceIndex, CampSpot) end
---@param ServiceSettings URVGuestServiceSettings
---@return TArray<FGameplayTag>
function ARVCampManager:GetServicesSortedByIncome(ServiceSettings) end
---@param ErrorName FName
---@return FText
function ARVCampManager:GetRVErrorMessageText(ErrorName) end
---@return ARubyCharacter
function ARVCampManager:GetRubyCharacter() end
---@param ServiceTag FGameplayTag
---@return FGuestServiceData
function ARVCampManager:GetGuestServiceDataTableInfo(ServiceTag) end
---@param CampSpotNumber int32
---@return ARVCampSpot
function ARVCampManager:GetCampSpotByIndex(CampSpotNumber) end
---@param CustomerID FGuid
---@return URVCustomerData
function ARVCampManager:FindCustomerDataByID(CustomerID) end
---@param CustomerData URVCustomerData
---@return ARVCampSpot
function ARVCampManager:FindCampSpotByCustomerData(CustomerData) end
function ARVCampManager:Debug_ToggleCampers3DWidget() end


---@class ARVCampParkingSpot : AInteractableBuilding
local ARVCampParkingSpot = {}


---@class ARVCampSpot : AActor
---@field CampSpotRoot UArrowComponent
---@field CampSpotMapLocation UArrowComponent
---@field OnCamperSpawned FRVCampSpotOnCamperSpawned
---@field OnCamperLoaded FRVCampSpotOnCamperLoaded
---@field OnCamperArrived FRVCampSpotOnCamperArrived
---@field OnCamperLeft FRVCampSpotOnCamperLeft
---@field OnCustomNameUpdated FRVCampSpotOnCustomNameUpdated
---@field BookedCustomers TArray<URVCustomerData>
---@field CurrentMaxScheduledGuests int32
---@field bIsUnlocked boolean
---@field SpawnedNpcHome AActor
---@field Camper URVCamperComponent
---@field CampParkingSpot TSoftObjectPtr<ARVCampParkingSpot>
---@field SpawnDelay float
---@field CustomersSpawnQueue TArray<FCustomerSpawnInfo>
---@field CustomerSpawnDelayHandle FTimerHandle
---@field SpawningNpcsServiceTagHolder TArray<FGameplayTag>
---@field SpotCustomName FString
---@field bHasCustomName boolean
local ARVCampSpot = {}

---@param CustomName FString
function ARVCampSpot:UpdateCustomName(CustomName) end
---@param IsSpotUnlocked boolean
function ARVCampSpot:UnlockCampSpot(IsSpotUnlocked) end
function ARVCampSpot:TrySpawnCustomerForServiceFromQueue() end
---@param ServiceTag FGameplayTag
---@param MainTask EInteractableTaskType
function ARVCampSpot:TrySpawnCustomerForService(ServiceTag, MainTask) end
function ARVCampSpot:TrySpawnCustomerForConcert() end
---@param UnlockedService FGameplayTag
function ARVCampSpot:SpawnCustomerForRecentlyUnlockedService(UnlockedService) end
---@param NewMax int32
function ARVCampSpot:SetMaxScheduledGuest(NewMax) end
---@param IsVisible boolean
function ARVCampSpot:SetDebugBoardVisibility(IsVisible) end
---@param SpawnedNpc AAICharacterBase
function ARVCampSpot:OnNpcSpawned(SpawnedNpc) end
---@param CustomerData URVCustomerData
---@return boolean
function ARVCampSpot:IsNextInQueue(CustomerData) end
---@return boolean
function ARVCampSpot:IsCamperParked() end
---@return boolean
function ARVCampSpot:IsBooked() end
---@param SpawnedCamper URVCamperComponent
function ARVCampSpot:HandleCamperSpawned(SpawnedCamper) end
---@param LoadedCamper URVCamperComponent
function ARVCampSpot:HandleCamperLoaded(LoadedCamper) end
function ARVCampSpot:HandleCamperLeft() end
function ARVCampSpot:HandleCamperArrived() end
---@param ServiceTag FGameplayTag
---@return TArray<AAICharacterBase>
function ARVCampSpot:GetSpawnedCustomerNpcsForService(ServiceTag) end
---@param HasCustomerName boolean
---@param CustomName FString
function ARVCampSpot:GetCustomName(HasCustomerName, CustomName) end
---@return URVCustomerData
function ARVCampSpot:GetCustomerData() end
---@param bIncludeGoingHome boolean
---@return TArray<AAICharacterBase>
function ARVCampSpot:GetAllSpawnedCustomerNpcs(bIncludeGoingHome) end
---@param CustomerID FGuid
---@return URVCustomerData
function ARVCampSpot:FindBookedCustomerByID(CustomerID) end


---@class ARVEmployeeRestPoint : AActor
---@field RestPosition UArrowComponent
local ARVEmployeeRestPoint = {}



---@class ARVGuestBook : AKeyItem
---@field InteractionWidget UWidgetInteractionComponent
local ARVGuestBook = {}



---@class ARVMinigameInWorld_Picnic : ARvMinigameInWorld
---@field BasketMesh UStaticMeshComponent
---@field TableMesh UStaticMeshComponent
---@field OnCorrectItemPlaced FRVMinigameInWorld_PicnicOnCorrectItemPlaced
---@field OnItemGrabbed FRVMinigameInWorld_PicnicOnItemGrabbed
---@field PicnicSettings URVPicnicBasketSettings
---@field TimeToComplete float
---@field MaxTraceLenght int32
---@field ProductsToPutInTheBasket TArray<APicnicProduct>
---@field TeleportLocation USceneComponent
---@field SpawnSlots TArray<USceneComponent>
---@field bCanShowProducts boolean
---@field TimeToShowProductList float
---@field AmountOfProductsInBasketRequired int32
---@field bLoseWhenTimeEnds boolean
---@field bListOnScreen boolean
---@field SpawnedProducts TArray<APicnicProduct>
---@field ProductsInTheBasket TArray<APicnicProduct>
---@field SelectedProduct APicnicProduct
---@field AmountOfProductsInterpolatingToBasket int32
---@field ProductsAlreadySpawned int32
---@field AllProductsSpawned boolean
local ARVMinigameInWorld_Picnic = {}

---@param ProductClasses TArray<TSoftClassPtr<APicnicProduct>>
function ARVMinigameInWorld_Picnic:SpawnProducts(ProductClasses) end
function ARVMinigameInWorld_Picnic:SelectFirstProductInSlot() end
---@param PicnicProduct APicnicProduct
function ARVMinigameInWorld_Picnic:OnItemPlaced(PicnicProduct) end
function ARVMinigameInWorld_Picnic:OnIncorrectItemPlaced() end
function ARVMinigameInWorld_Picnic:OnAllProductsSpawned() end
function ARVMinigameInWorld_Picnic:GenerateSpawnSlots() end
---@param AmountOfProductsToPick int32
function ARVMinigameInWorld_Picnic:GenerateProductsList(AmountOfProductsToPick) end
function ARVMinigameInWorld_Picnic:Gamepad_ConfirmProductList() end
---@param PicnicProduct APicnicProduct
function ARVMinigameInWorld_Picnic:BroadcastOnItemGrabbed(PicnicProduct) end


---@class ARVServiceUpgrader : AInteractableActor
---@field UpgradeCosts URVUpgradeCostsSettings
---@field OnNewServiceUnlocked FRVServiceUpgraderOnNewServiceUnlocked
---@field OnNewServiceLoaded FRVServiceUpgraderOnNewServiceLoaded
---@field OnParkingUpgraded FRVServiceUpgraderOnParkingUpgraded
---@field OnConcertBuildingUpgraded FRVServiceUpgraderOnConcertBuildingUpgraded
---@field OnCousinHouseUpgraded FRVServiceUpgraderOnCousinHouseUpgraded
---@field OnResourceUpgraded FRVServiceUpgraderOnResourceUpgraded
---@field OnBookingUpgraded FRVServiceUpgraderOnBookingUpgraded
---@field OnUpgradeMarkerClicked FRVServiceUpgraderOnUpgradeMarkerClicked
---@field MapsAndEventsData URV_MapAndEventsUpgradeData
---@field QuestUnlockedTag FGameplayTag
---@field CampManager ARVCampManager
---@field RVBuildingMapsToLoad TArray<FName>
---@field RVBuildingMapsToUnload TArray<FName>
---@field RVLoadingUUID int32
---@field RVUnloadingUUID int32
---@field CurrentlyLoadedRVServices TArray<FGameplayTag>
---@field ServicesData TArray<FRVServiceData>
---@field UnlockThresholds FRVMinigamesDifficultyUnlockThresholds
local ARVServiceUpgrader = {}

function ARVServiceUpgrader:UnlockFullParking() end
function ARVServiceUpgrader:UnlockAllServices() end
function ARVServiceUpgrader:UnloadRVBuildingMaps() end
---@param Resource ERVResource
---@return boolean
function ARVServiceUpgrader:TryUpgradeRVResource(Resource) end
---@param SpotNumber int32
---@return boolean
function ARVServiceUpgrader:TryUpgradeRVParking(SpotNumber) end
---@return boolean
function ARVServiceUpgrader:TryUpgradeRVCousinHouse() end
---@return boolean
function ARVServiceUpgrader:TryUpgradeRVConcert() end
---@return boolean
function ARVServiceUpgrader:TryUpgradeBooking() end
---@param UnlockedMinigameTag FGameplayTag
---@return boolean
function ARVServiceUpgrader:TryUnlockRVService(UnlockedMinigameTag) end
---@param CostToPay FRVUpgradeCost
---@return boolean
function ARVServiceUpgrader:PayUpgradeCost(CostToPay) end
---@param ServiceTag FGameplayTag
---@param DifficultySelected EGuestServiceDifficulty
---@param WasSuccess boolean
function ARVServiceUpgrader:OnServiceFinished(ServiceTag, DifficultySelected, WasSuccess) end
---@param EventDisplayToLoad TSoftClassPtr<UEventDisplay>
function ARVServiceUpgrader:OnBuildingUpgraded(EventDisplayToLoad) end
---@param ServiceTag FGameplayTag
---@param bLocked boolean
function ARVServiceUpgrader:LockService(ServiceTag, bLocked) end
---@param ServicesToLoad TArray<FRVServiceData>
function ARVServiceUpgrader:LoadRVServices(ServicesToLoad) end
function ARVServiceUpgrader:LoadRVBuildingMaps() end
---@param MapBuildingSublevelsPtr FMapIndependentBuildingSublevels
function ARVServiceUpgrader:LoadMapAndEventData(MapBuildingSublevelsPtr) end
---@param CheckedTag FGameplayTag
---@return boolean
function ARVServiceUpgrader:IsServiceUnlocked(CheckedTag) end
---@param CheckedTag FGameplayTag
---@return boolean
function ARVServiceUpgrader:IsServiceLockedFromQuest(CheckedTag) end
---@param InputData FRVUpgradeInputData
---@return boolean
function ARVServiceUpgrader:IsBuildingLockedByQuest(InputData) end
---@param InputData FRVUpgradeInputData
---@return boolean
function ARVServiceUpgrader:IsBuildingFullyUpgraded(InputData) end
function ARVServiceUpgrader:InitServiceUpgrader() end
---@return TArray<FGameplayTag>
function ARVServiceUpgrader:GetUnlockedServices() end
---@param ServiceTag FGameplayTag
---@return int32
function ARVServiceUpgrader:GetServiceWinStreak(ServiceTag) end
---@param GuestServiceTag FGameplayTag
---@return TArray<EGuestServiceDifficulty>
function ARVServiceUpgrader:GetServiceUnlockedDifficulties(GuestServiceTag) end
---@return TArray<FDetailedServiceQueueData>
function ARVServiceUpgrader:GetServiceQueueData() end
---@return int32
function ARVServiceUpgrader:GetNumberOfUnlockedServices() end
---@param ServiceTag FGameplayTag
---@return int32
function ARVServiceUpgrader:GetExperienceThreshold(ServiceTag) end
---@param ServiceTag FGameplayTag
---@param Difficulty EGuestServiceDifficulty
---@return int32
function ARVServiceUpgrader:GetAmountOfServiceCompletedPerDifficulty(ServiceTag, Difficulty) end
---@param ServiceTag FGameplayTag
---@return int32
function ARVServiceUpgrader:GetAmountOfServiceCompleted(ServiceTag) end
---@param Resource ERVResource
---@param bCanBeUpgraded boolean
---@param bCanPay boolean
function ARVServiceUpgrader:CanUpgradeRVResource(Resource, bCanBeUpgraded, bCanPay) end
---@param ParkingSpotNumber int32
---@param bCanBeUpgraded boolean
---@param bCanPay boolean
function ARVServiceUpgrader:CanUpgradeRVParking(ParkingSpotNumber, bCanBeUpgraded, bCanPay) end
---@param bCanBeUpgraded boolean
---@param bCanPay boolean
---@param bEnoughServices boolean
function ARVServiceUpgrader:CanUpgradeRVCousinHouse(bCanBeUpgraded, bCanPay, bEnoughServices) end
---@param bCanBeUpgraded boolean
---@param bCanPay boolean
function ARVServiceUpgrader:CanUpgradeRVConcert(bCanBeUpgraded, bCanPay) end
---@param bCanBeUpgraded boolean
---@param bCanPay boolean
function ARVServiceUpgrader:CanUpgradeRVBooking(bCanBeUpgraded, bCanPay) end
---@param UnlockedMinigameTag FGameplayTag
---@param IsUnLocked boolean
---@param bCanPay boolean
function ARVServiceUpgrader:CanUnlockRVService(UnlockedMinigameTag, IsUnLocked, bCanPay) end
---@param CostToPay FRVUpgradeCost
---@param ShowErrorMessage boolean
---@return boolean
function ARVServiceUpgrader:bCanPayCost(CostToPay, ShowErrorMessage) end
---@param ServiceTag FGameplayTag
function ARVServiceUpgrader:AddServiceWinStreak(ServiceTag) end


---@class ARVSpawner : AActor
---@field SpawnCollision UBoxComponent
---@field VehicleSpawnLocation UArrowComponent
---@field CharacterSpawnLocation UArrowComponent
---@field ExitPoint AAIExitPoint
---@field HomePoint AHouse
---@field ScheduledCampersData TArray<URVCustomerData>
---@field LoadingCamperData URVCustomerData
---@field SpawnAttemptInterval float
---@field MinSpawnCooldown float
---@field SpawnCooldownActive boolean
---@field LoadingCamperDismissed boolean
---@field IsSpawnCooldownActive boolean
---@field CamperSpawnTimer FTimerHandle
---@field CamperCooldownTimer FTimerHandle
---@field GameState AGSSGameState
---@field RVCampManager ARVCampManager
local ARVSpawner = {}

function ARVSpawner:TrySpawnCamper() end
---@param CustomerData URVCustomerData
function ARVSpawner:ScheduleCamperSpawn(CustomerData) end
---@param Camper URVCamperComponent
---@param Driver AAICharacterBase
---@param Success boolean
function ARVSpawner:RegisterCamperAfterSpawn(Camper, Driver, Success) end
---@param CustomerData URVCustomerData
function ARVSpawner:HandleCustomerDismissed(CustomerData) end
function ARVSpawner:EndSpawnCooldown() end


---@class ARacingComputer : AActor
---@field StaticMeshComponent UStaticMeshComponent
---@field CurrentTime float
local ARacingComputer = {}



---@class ARadioTower : AInteractableBuilding
local ARadioTower = {}


---@class ARailsForShootingRange : AActor
---@field SplineComp USplineComponent
---@field ShootingRangeREF ARvMinigameInWorldShootingRange
---@field CurrentTargetRef AShootingRangeTarget
---@field ShootingTargetClass TSubclassOf<AShootingRangeTarget>
---@field RedTeamMaterialSlot UMaterialInterface
---@field BlueTeamMaterialSlot UMaterialInterface
---@field NeutralUfoMesh UStaticMesh
---@field NeutralCoyotMesh UStaticMesh
---@field Speed float
---@field TargetRespawnRate float
---@field FoldRateMin float
---@field FoldRateMax float
---@field TimerToFold float
---@field RandomizeRailType boolean
---@field Direction float
---@field RandomDirection int32
---@field TargetStartingLocation float
---@field RailTypeS FTargetTypeScorePair
---@field RailMesh UStaticMeshComponent
---@field MaterialSlot1 UMaterialInterface
---@field MaterialSlot2 UMaterialInterface
---@field MaterialSlot3 UMaterialInterface
---@field StandUpMeshes TArray<UStaticMesh>
---@field MovableMeshes TArray<UStaticMesh>
---@field ZigZagMeshes TArray<UStaticMesh>
---@field RespawnShootingTargetTimerRef FTimerHandle
local ARailsForShootingRange = {}

function ARailsForShootingRange:StartRespawn() end
function ARailsForShootingRange:StartMoveZigZag() end
function ARailsForShootingRange:StartMoveCoyote() end
function ARailsForShootingRange:SpawnShootingTarget() end
function ARailsForShootingRange:SetupTargetOnSpline() end
---@return FTargetTypeScorePair
function ARailsForShootingRange:RollRailType() end
function ARailsForShootingRange:RespawnShootingTarget() end
---@param ShootedByOponent boolean
function ARailsForShootingRange:RemoveTargetOnShooted(ShootedByOponent) end
function ARailsForShootingRange:FoldCoyoteOnTravelEnd() end
function ARailsForShootingRange:CreateShootingTargetSetRef() end
function ARailsForShootingRange:ClearRailAtGameEnds() end
function ARailsForShootingRange:AtGameStarted() end


---@class ARelaxSpot : AInteractableBuilding
local ARelaxSpot = {}


---@class ARenownSystemStorage : AActor
local ARenownSystemStorage = {}


---@class ARentableItem : AGasStationProduct
---@field CurrentDurability float
local ARentableItem = {}

---@param NewCurrentDurability float
function ARentableItem:SetCurrentDurability(NewCurrentDurability) end
---@return float
function ARentableItem:GetCurrentDurability() end


---@class ARentalEquipmentContainer : AActor
---@field OnEquipmentAddedToQueue FRentalEquipmentContainerOnEquipmentAddedToQueue
---@field OnEquipmentRemovedFromQueue FRentalEquipmentContainerOnEquipmentRemovedFromQueue
---@field OnEquipmentAddingFinished FRentalEquipmentContainerOnEquipmentAddingFinished
---@field MainMesh UStaticMeshComponent
---@field ReplacementEqQueue TArray<FRentableEquipmentSlot>
---@field CompatibleItem TSoftClassPtr<ARentableItem>
---@field CurrentMaxCapacity int32
local ARentalEquipmentContainer = {}

function ARentalEquipmentContainer:TryShowRentalTutorial() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ARentalEquipmentContainer:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param NewQueue TArray<FRentableEquipmentSlot>
function ARentalEquipmentContainer:SetReplacementEqQueue(NewQueue) end
---@param NewValue int32
function ARentalEquipmentContainer:SetCurrentMaxCapacity(NewValue) end
---@return boolean
function ARentalEquipmentContainer:RemoveEqFromQueue() end
---@return TArray<FRentableEquipmentSlot>
function ARentalEquipmentContainer:GetReplacementEqQueue() end
---@return int32
function ARentalEquipmentContainer:GetCurrentMaxCapacity() end
---@param NumInInventory int32
---@return int32
function ARentalEquipmentContainer:FillToMax(NumInInventory) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ARentalEquipmentContainer:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
function ARentalEquipmentContainer:DisableInteractionInfo(Pawn) end
---@param ItemQuantity int32
---@return boolean
function ARentalEquipmentContainer:AddEqToQueue(ItemQuantity) end


---@class ARentalEquipmentShelf : AActor
---@field MainMesh UStaticMeshComponent
local ARentalEquipmentShelf = {}



---@class ARentalSlot : AInteractableBuilding
local ARentalSlot = {}


---@class ARentalSpot : AInteractableBuilding
---@field OnEquipmentDurabilityChanged FRentalSpotOnEquipmentDurabilityChanged
---@field Equipment FRentableEquipmentSlot
---@field RentalServiceDuration int32
---@field CurrentRentalDutation int32
---@field WearOffPerSec float
---@field PricePerSec float
---@field RentingCustomerSpawner AWaterVehicleSpawner
---@field EqMesh AStaticMeshActor
---@field FullEqMeshSocketName FName
---@field EmptyEqMeshSocketName FName
---@field RentalEquipmentShelf TSoftObjectPtr<ARentalEquipmentShelf>
---@field DeathChanceMultipliers TArray<FDeathChanceMultipliers>
---@field UniqueHandle FTimerHandle
local ARentalSpot = {}

---@param RentalDuration int32
---@param PricePerSecond float
---@param EqWearOffPerSecond float
function ARentalSpot:StartRentalService(RentalDuration, PricePerSecond, EqWearOffPerSecond) end
---@param NewRentalEquipmentShelf ARentalEquipmentShelf
function ARentalSpot:SetRentalEquipmentShelf(NewRentalEquipmentShelf) end
---@param NewEquipment FRentableEquipmentSlot
function ARentalSpot:SetEquipment(NewEquipment) end
function ARentalSpot:SetEqMeshVisibility() end
---@param EqMeshToSet TSoftObjectPtr<UStaticMesh>
function ARentalSpot:SetEqMeshRef(EqMeshToSet) end
---@param NewStaticMesh UStaticMesh
function ARentalSpot:SetEqMesh(NewStaticMesh) end
---@param EqMaterialToSet TSoftObjectPtr<UMaterialInstance>
function ARentalSpot:SetEqMaterialRef(EqMaterialToSet) end
---@param NewEqMaterial UMaterialInstance
function ARentalSpot:SetEqMaterial(NewEqMaterial) end
---@param Icon UTexture2D
function ARentalSpot:SetEqIcon(Icon) end
---@param NewValue TArray<FDeathChanceMultipliers>
function ARentalSpot:SetDeathChanceMultipliers(NewValue) end
---@param UpdatedTime FTimeStruct
function ARentalSpot:OnRentalTimeUpdated(UpdatedTime) end
---@param Shark AShark
---@param EatenCustomer AWaterVehicle
function ARentalSpot:OnCustomerEaten(Shark, EatenCustomer) end
---@param SpawnedVehicle AWaterVehicle
function ARentalSpot:OnBoatSpawned(SpawnedVehicle) end
---@return boolean
function ARentalSpot:IsEquipmentGoingToBreak() end
---@return ARentalEquipmentShelf
function ARentalSpot:GetRentalEquipmentShelf() end
---@return FRentableEquipmentSlot
function ARentalSpot:GetEquipment() end
---@return AStaticMeshActor
function ARentalSpot:GetEqMesh() end
---@return UTexture2D
function ARentalSpot:GetEqIcon() end
---@return float
function ARentalSpot:GetEqCurrentDurability() end
---@return TArray<FDeathChanceMultipliers>
function ARentalSpot:GetDeathChanceMultipliers() end
---@param CurrentEqDurability float
---@return float
function ARentalSpot:GetDeathChanceMultiplier(CurrentEqDurability) end
function ARentalSpot:FinishRentalService() end
function ARentalSpot:FillEquipment() end
function ARentalSpot:DestroyEquipment() end
function ARentalSpot:DestroyEqMesh() end
---@param bIsEqBroken boolean
function ARentalSpot:DeactivateRentingVisuals(bIsEqBroken) end
function ARentalSpot:CreateEqMesh() end
function ARentalSpot:CheckIfSharkActiveBeforeBreakEq() end
---@param Reason FString
function ARentalSpot:BreakEquipment(Reason) end
function ARentalSpot:ActivateRentingVisuals() end


---@class ARubyCharacter : AGSSNPAICharacterBase
---@field ResetPosition TSoftObjectPtr<AActor>
---@field OnRubyReset FRubyCharacterOnRubyReset
---@field bNoShotGunIdle boolean
---@field bSleeping boolean
---@field bMegaphoneEquipped boolean
---@field Megaphone UStaticMeshComponent
---@field MegaphoneInitialLoaction FTransform
local ARubyCharacter = {}

---@param bShotGunInHand boolean
function ARubyCharacter:SwitchRubyShotGunState(bShotGunInHand) end
function ARubyCharacter:ResetRuby() end
function ARubyCharacter:PlayShotGunMontage() end


---@class ARuinSpawner : AActor
---@field RuinToSpawn TSubclassOf<ARuins>
---@field SpawnedRuin ARuins
local ARuinSpawner = {}

---@return boolean
function ARuinSpawner:TrySpawnRuin() end
---@param DestroyedActor AActor
function ARuinSpawner:DestroyRuin(DestroyedActor) end


---@class ARuins : AActor
---@field RuinMesh UStaticMeshComponent
---@field RuinsProjectileActorClass TSubclassOf<AProjectileActor>
---@field Stage int32
local ARuins = {}

---@param CurrentStage int32
function ARuins:UpdateRuins(CurrentStage) end
---@param PlayerCharacter AGSSPlayerCharacter
function ARuins:StartMiniGame(PlayerCharacter) end
function ARuins:SpawnTrash() end
---@param NewStage int32
function ARuins:SetStageLevel(NewStage) end
---@return int32
function ARuins:GetStageLevel() end
---@param Levels int32
---@param PlayerCharacter AGSSPlayerCharacter
---@return boolean
function ARuins:AddRemoveRuinLevel(Levels, PlayerCharacter) end


---@class ARunway : AActor
---@field OnRunwayEntriesSet FRunwayOnRunwayEntriesSet
---@field OnNewPlaneEntry FRunwayOnNewPlaneEntry
---@field OnScheduleUpdated FRunwayOnScheduleUpdated
---@field OnAirplaneSet FRunwayOnAirplaneSet
---@field OnNewItemRevealed FRunwayOnNewItemRevealed
---@field OnExtraTimeSkillUsed FRunwayOnExtraTimeSkillUsed
---@field OnExtraTimeSkillFinished FRunwayOnExtraTimeSkillFinished
---@field RunwayType ERunway
---@field AirportLevelToUnlock int32
---@field RunwaySchedule TArray<FPlaneEntry>
---@field FuelStationReference TSoftObjectPtr<AFuelStation>
---@field CurrentAirplaneLanded ATradingAirplane
---@field bExtraTimeUsed boolean
---@field ExtraTimeLeft int32
local ARunway = {}

---@param PlaneIndex int32
function ARunway:ShowCreatedEntryItems(PlaneIndex) end
---@param NewValue boolean
function ARunway:SetExtraTimeUsed(NewValue) end
---@param TimeToSet int32
function ARunway:SetExtraTimeLeft(TimeToSet) end
---@param AirplaneToSet ATradingAirplane
function ARunway:SetCurrentAirplaneLanded(AirplaneToSet) end
---@return boolean
function ARunway:GetExtraTimeUsed() end
---@return int32
function ARunway:GetExtraTimeLeft() end
---@return ATradingAirplane
function ARunway:GetCurrentAirplaneLanded() end
---@param ItemsToLoad TArray<FSoftObjectPath>
---@param NumberOfEntriesCreated int32
function ARunway:CheckIfAllItemsLoaded(ItemsToLoad, NumberOfEntriesCreated) end
---@param PlaneEntry FPlaneEntry
---@param ItemIndex int32
function ARunway:CargoItemsLoaded(PlaneEntry, ItemIndex) end
---@param NumberOfEntriesCreated int32
function ARunway:AllItemsNeededLoaded(NumberOfEntriesCreated) end


---@class ARvConcertBuilding : AInteractableBuilding
local ARvConcertBuilding = {}

function ARvConcertBuilding:StopConcert() end
function ARvConcertBuilding:StartConcert() end
function ARvConcertBuilding:LoadConcert() end


---@class ARvGuestServiceSpot : AInteractableBuilding
---@field ExtraPrimarySkeletalMesh USkeletalMeshComponent
---@field ExtraSecondarySkeletalMesh USkeletalMeshComponent
---@field ExtraStaticMesh UStaticMeshComponent
---@field ExtraGuestPositioningArrow UArrowComponent
---@field OnGuestWaitsForService FRvGuestServiceSpotOnGuestWaitsForService
---@field GuestServiceTag FGameplayTag
---@field bCheckClientReadyWithMinigameInWorld boolean
---@field AdditionalActors TArray<AActor>
---@field AttachedCampSpot TSoftObjectPtr<ARVCampSpot>
---@field RvMinigameInWorld ARvMinigameInWorld
---@field MinigameWidget URvMinigameWidget
local ARvGuestServiceSpot = {}

---@param Customer AAICharacterBase
---@param TargetActor AActor
function ARvGuestServiceSpot:UpdateGuestWaitsForServiceOnCustomerArrived(Customer, TargetActor) end
function ARvGuestServiceSpot:UpdateGuestWaitsForService() end
---@return boolean
function ARvGuestServiceSpot:IsClientReady() end
---@param bForceDifficulty boolean
---@param ForcedDifficulty EGuestServiceDifficulty
---@return boolean
function ARvGuestServiceSpot:InteractWithGuestService(bForceDifficulty, ForcedDifficulty) end
---@return UArrowComponent
function ARvGuestServiceSpot:GetExtraGuestPositioningArrow() end
---@return UPrimitiveComponent
function ARvGuestServiceSpot:GetComponentToAttachToGuest() end
---@return AActor
function ARvGuestServiceSpot:GetActorForAnimating() end


---@class ARvMinigameInWorld : AActor
---@field SceneRootComponent USceneComponent
---@field CameraComponent UCameraComponent
---@field MainSKM USkeletalMeshComponent
---@field MeshToAttach UStaticMeshComponent
---@field ExtraVisualMesh UStaticMeshComponent
---@field ExtraSKM USkeletalMeshComponent
---@field PositioningArrow UArrowComponent
---@field ServiceTag FGameplayTag
---@field bDisableCrosshair boolean
---@field bDisablePlayerTick boolean
---@field bShowMouseCursor boolean
---@field bTakePlayerControl boolean
---@field bOverrideCamera boolean
---@field BlendOutCameraMode ERVMinigameCameraBlendOutMode
---@field bHideUI boolean
---@field CountdownWidget UCountdownWidget
---@field Difficulty EGuestServiceDifficulty
---@field MinigameStage ERVMinigameStage
---@field OnAttachedHandleItem FRvMinigameInWorldOnAttachedHandleItem
---@field OnDetachedHandleItem FRvMinigameInWorldOnDetachedHandleItem
---@field ItemBeingHeld AItem
---@field AttachmentPoint AAttachmentPoint
---@field OnMinigameStarted FRvMinigameInWorldOnMinigameStarted
---@field OnMinigameLateStart FRvMinigameInWorldOnMinigameLateStart
---@field OnMinigameEnded FRvMinigameInWorldOnMinigameEnded
---@field OnMinigameLateEnd FRvMinigameInWorldOnMinigameLateEnd
---@field GuestServiceSpot ARvGuestServiceSpot
---@field PositioningAcceptanceDistance float
local ARvMinigameInWorld = {}

---@param Service ARvGuestServiceSpot
---@param ChosenDifficulty EGuestServiceDifficulty
---@return boolean
function ARvMinigameInWorld:TryToStartMinigame(Service, ChosenDifficulty) end
function ARvMinigameInWorld:TryToEndMinigameWithScoringWithDelay() end
function ARvMinigameInWorld:TryToEndMinigameWithScoring() end
---@param bSuccess boolean
function ARvMinigameInWorld:TryToEndMinigameWithDelay(bSuccess) end
---@param bSuccess boolean
---@return boolean
function ARvMinigameInWorld:TryToEndMinigame(bSuccess) end
---@param Service ARvGuestServiceSpot
---@param ChosenDifficulty EGuestServiceDifficulty
function ARvMinigameInWorld:StartMinigameLate(Service, ChosenDifficulty) end
---@param Service ARvGuestServiceSpot
---@param ChosenDifficulty EGuestServiceDifficulty
function ARvMinigameInWorld:StartMiniGame(Service, ChosenDifficulty) end
---@param Phase FName
function ARvMinigameInWorld:SetPhase(Phase) end
---@param bIsPressed boolean
function ARvMinigameInWorld:OnTipAction(bIsPressed) end
---@param bIsPressed boolean
function ARvMinigameInWorld:OnPlayerSecondaryAction(bIsPressed) end
---@param bIsPressed boolean
function ARvMinigameInWorld:OnPlayerPrimaryAction(bIsPressed) end
---@param Value float
function ARvMinigameInWorld:OnMoveRightAction(Value) end
---@param Value float
function ARvMinigameInWorld:OnMoveForwardAction(Value) end
---@param bPressed boolean
function ARvMinigameInWorld:OnLeftShoulderAction(bPressed) end
---@param bIsPressed boolean
function ARvMinigameInWorld:OnJumpAction(bIsPressed) end
---@param bPressed boolean
function ARvMinigameInWorld:OnInspectModeAction(bPressed) end
---@param bNewGamepadMode boolean
function ARvMinigameInWorld:OnGamepadModeToggle(bNewGamepadMode) end
---@param bIsPressed boolean
function ARvMinigameInWorld:OnEscape(bIsPressed) end
---@param bPressed boolean
function ARvMinigameInWorld:OnDPadUpAction(bPressed) end
---@param bPressed boolean
function ARvMinigameInWorld:OnDPadRightAction(bPressed) end
---@param bPressed boolean
function ARvMinigameInWorld:OnDPadLeftAction(bPressed) end
---@param bPressed boolean
function ARvMinigameInWorld:OnDPadDownAction(bPressed) end
function ARvMinigameInWorld:OnAutomatationProcessStarted_CustomCode() end
function ARvMinigameInWorld:OnAutomatationProcessEnded_CustomCode() end
---@return boolean
function ARvMinigameInWorld:IsGamepadMode() end
---@return FRvMinigameStageInfo
function ARvMinigameInWorld:GetMinigameStageInfo() end
---@return ERVMinigameStage
function ARvMinigameInWorld:GetMinigameStage() end
---@return URvMinigameBaseSettings
function ARvMinigameInWorld:GetMinigameSettings() end
---@param bSuccess boolean
function ARvMinigameInWorld:EndMinigameLate(bSuccess) end
---@param bSuccess boolean
function ARvMinigameInWorld:EndMinigame(bSuccess) end
function ARvMinigameInWorld:DetachHandleItemFromPoint() end
---@return boolean
function ARvMinigameInWorld:CheckScore() end
---@param Service ARvGuestServiceSpot
---@param ChosenDifficulty EGuestServiceDifficulty
---@return boolean
function ARvMinigameInWorld:CanStartMinigame(Service, ChosenDifficulty) end
---@param bSuccess boolean
---@return boolean
function ARvMinigameInWorld:CanEndMinigame(bSuccess) end
function ARvMinigameInWorld:AttachHandleItemToPoint() end


---@class ARvMinigameInWorldBenchPress : ARvMinigameInWorld
local ARvMinigameInWorldBenchPress = {}


---@class ARvMinigameInWorldShootingRange : ARvMinigameInWorld
---@field OnPlayerTotalScoreChanged FRvMinigameInWorldShootingRangeOnPlayerTotalScoreChanged
---@field OnOponentTotalScoreChanged FRvMinigameInWorldShootingRangeOnOponentTotalScoreChanged
---@field OnTimeLeftChanged FRvMinigameInWorldShootingRangeOnTimeLeftChanged
---@field OnRemoveBullet FRvMinigameInWorldShootingRangeOnRemoveBullet
---@field OnReloadStarted FRvMinigameInWorldShootingRangeOnReloadStarted
---@field OnReloadEnded FRvMinigameInWorldShootingRangeOnReloadEnded
---@field OnTargetShooted FRvMinigameInWorldShootingRangeOnTargetShooted
---@field OnTargetMissed FRvMinigameInWorldShootingRangeOnTargetMissed
---@field OnGameEndDelayed FRvMinigameInWorldShootingRangeOnGameEndDelayed
---@field ChosenDifficultyREF EGuestServiceDifficulty
---@field GameEnded boolean
---@field GameTime float
---@field PlayerTotalScore float
---@field OponentTotalScore float
---@field ReloadTime float
---@field CurrentAmmo int32
---@field MaxAmmo int32
---@field IsReloading boolean
---@field ShootingRangeSettingsREF UShootingRangeSettings
---@field OpenentShootingDelayMin float
---@field OpenentShootingDelayMax float
---@field TargetSpeed float
---@field TargetRespawnRate float
---@field TargetFoldMin float
---@field TargetFoldMax float
---@field TargetTypeList TArray<FTargetTypeScorePair>
---@field RandomizeRailsType boolean
---@field UpdateGameTimerRef FTimerHandle
---@field PreGameEndTimerRef FTimerHandle
---@field DefaultRailsList TArray<ARailsForShootingRange>
---@field RailsForShootingList TArray<ARailsForShootingRange>
---@field OponentCurrentTarget AShootingRangeTarget
---@field OponentAimingTimerRef FTimerHandle
---@field OnOpponentAimingAtTarget FRvMinigameInWorldShootingRangeOnOpponentAimingAtTarget
---@field RecentSpawnedTargetTeams TArray<ETargetTeam>
---@field bForceNextTargetRed boolean
---@field bBlockSpawning boolean
local ARvMinigameInWorldShootingRange = {}

function ARvMinigameInWorldShootingRange:UpdateGameTimer() end
function ARvMinigameInWorldShootingRange:TryToShootBullet() end
function ARvMinigameInWorldShootingRange:StartTimer() end
function ARvMinigameInWorldShootingRange:StartReloading() end
function ARvMinigameInWorldShootingRange:ShootTarget() end
function ARvMinigameInWorldShootingRange:SetupShootingRangeStartValues() end
function ARvMinigameInWorldShootingRange:SetupShootingRangeRails() end
function ARvMinigameInWorldShootingRange:SetupShootingRangeDifficultyValues() end
function ARvMinigameInWorldShootingRange:OnTimeEnded() end
function ARvMinigameInWorldShootingRange:OnReloadLogicEnds() end
function ARvMinigameInWorldShootingRange:GuaranteeRedTeam() end
function ARvMinigameInWorldShootingRange:GameEndDelay() end
function ARvMinigameInWorldShootingRange:BeginShootingRangeGame() end
---@param ScoreToAdd float
function ARvMinigameInWorldShootingRange:AddPlayerTotalScore(ScoreToAdd) end
---@param ScoreToAdd float
function ARvMinigameInWorldShootingRange:AddOponentTotalScore(ScoreToAdd) end


---@class ARvMinigameInWorldWoodChopping : ARvMinigameInWorld
---@field CuttingAreaPlane UStaticMeshComponent
---@field FirstPoint UStaticMeshComponent
---@field StartIndicator UStaticMeshComponent
---@field SecondPoint UStaticMeshComponent
---@field CuttingIndicator_Spline USplineComponent
---@field CapMaterialRef UMaterialInterface
---@field CutedLogsCounter int32
---@field MinigameEnded boolean
---@field ClickerBlocker boolean
---@field ClickCounter int32
---@field ScoreList TArray<float>
---@field TotalOfFirstRatios float
---@field TotalOfSecondRatios float
---@field FirstRatio float
---@field SecondRatio float
---@field SetFixedZForPosition float
---@field MaxLogsToCut int32
---@field SuccessTolerance int32
---@field CutDistanceFromCenter float
---@field WoodChoppingSettingsREF UWoodChoppingSettings
---@field WoodenLogClass TSubclassOf<AWoodenLogForCutting>
---@field WoodenLogForCuttingREF AWoodenLogForCutting
---@field SplineMeshComponentREF USplineMeshComponent
---@field StartIndicatorDMIRef UMaterialInstanceDynamic
---@field CuttingIndicatorMesh UStaticMesh
---@field CuttingIndicatorMaterial UMaterialInterface
---@field SlicedProceduralMeshREF UProceduralMeshComponent
---@field bSelectingEndPoint boolean
---@field StartPointLocation FVector
---@field EndPointLocation FVector
---@field OnCuttingRatioUpdated FRvMinigameInWorldWoodChoppingOnCuttingRatioUpdated
---@field UpdateLogsCounter FRvMinigameInWorldWoodChoppingUpdateLogsCounter
---@field SpawnWoodenLogDelayed FRvMinigameInWorldWoodChoppingSpawnWoodenLogDelayed
---@field AwaitWoodenLogPlaced FRvMinigameInWorldWoodChoppingAwaitWoodenLogPlaced
---@field CalculateFinalScoreEndGame FRvMinigameInWorldWoodChoppingCalculateFinalScoreEndGame
---@field DisplaySuccessFail FRvMinigameInWorldWoodChoppingDisplaySuccessFail
---@field OnIncorrectCuttingPoint FRvMinigameInWorldWoodChoppingOnIncorrectCuttingPoint
---@field OnLogSliced FRvMinigameInWorldWoodChoppingOnLogSliced
local ARvMinigameInWorldWoodChopping = {}

---@param DeltaTime float
function ARvMinigameInWorldWoodChopping:UpdateCuttingPoints(DeltaTime) end
---@param bVisible boolean
---@param StartLocationWorld FVector
---@param EndLocationWorld FVector
---@param bPointingEnd boolean
function ARvMinigameInWorldWoodChopping:UpdateCuttingLine(bVisible, StartLocationWorld, EndLocationWorld, bPointingEnd) end
function ARvMinigameInWorldWoodChopping:TryToStartCutting() end
function ARvMinigameInWorldWoodChopping:TryToEndCutting() end
function ARvMinigameInWorldWoodChopping:StartCutting() end
function ARvMinigameInWorldWoodChopping:SpawnWoodenLog() end
function ARvMinigameInWorldWoodChopping:SimulatePhysicsDestroyIndicatorDelayed() end
function ARvMinigameInWorldWoodChopping:SetupStartingValues() end
function ARvMinigameInWorldWoodChopping:SetupCuttingIndicator() end
function ARvMinigameInWorldWoodChopping:EndWoodenLogsCutting() end
function ARvMinigameInWorldWoodChopping:EndCutting() end
function ARvMinigameInWorldWoodChopping:DestroyWoodenLogDelayed() end
---@return boolean
function ARvMinigameInWorldWoodChopping:CanMakeCut() end
function ARvMinigameInWorldWoodChopping:CancelCutting() end
function ARvMinigameInWorldWoodChopping:CancelClickingBlocker() end


---@class ARvMinigameInWorld_BBQ : ARvMinigameInWorld
---@field OnSelectedSlotChanged FRvMinigameInWorld_BBQOnSelectedSlotChanged
---@field OnSlotSpawned FRvMinigameInWorld_BBQOnSlotSpawned
---@field OnMistakesCountChanged FRvMinigameInWorld_BBQOnMistakesCountChanged
---@field OnBBQItemRated FRvMinigameInWorld_BBQOnBBQItemRated
---@field SlotComponents TArray<UBBQSlotComponent>
---@field BBQSettings UBBQSettings
---@field ScoresList TArray<FBBQScore>
---@field Mistakes int32
---@field AllowedMistakes int32
---@field PlacingCooldown float
---@field CookingSpeedOnGamepad float
---@field RawSlotsAreaComponent UBoxComponent
---@field CookingSlotsAreaComponent UBoxComponent
---@field ReadySlotsAreaComponent UBoxComponent
---@field SelectedSlot TWeakObjectPtr<UBBQSlotComponent>
local ARvMinigameInWorld_BBQ = {}

---@param CookingSlot UBBQSlotComponent
function ARvMinigameInWorld_BBQ:TryToMoveAnyItemToCookingSlot(CookingSlot) end
---@param Slot UBBQSlotComponent
---@param Item ABBQItem
function ARvMinigameInWorld_BBQ:OnSetBBQItemInside(Slot, Item) end
---@param Item ABBQItem
---@param State EBBQItemState
function ARvMinigameInWorld_BBQ:OnItemStateChanged(Item, State) end
---@return boolean
function ARvMinigameInWorld_BBQ:IsTutorialLock() end
---@return int32
function ARvMinigameInWorld_BBQ:GetMistakes() end


---@class ARvMinigameInWorld_CamperWashing : ARvMinigameInWorld
---@field OnFlowDurationUpdated FRvMinigameInWorld_CamperWashingOnFlowDurationUpdated
---@field Pistol TWeakObjectPtr<APortableCarWashPistol>
---@field PistolChildActorComponent TWeakObjectPtr<UChildActorComponent>
---@field WashableCarMeshMID UMaterialInstanceDynamic
---@field CamperWashingSettings UCamperWashingSettings
---@field CurrentWaterFlowDuration float
---@field CurrentEfficiency ECamperWashingEfficiency
---@field bPistolIsFiring boolean
local ARvMinigameInWorld_CamperWashing = {}

---@param Amount float
function ARvMinigameInWorld_CamperWashing:UseWater(Amount) end
---@param bEnabled boolean
function ARvMinigameInWorld_CamperWashing:OnShowDirtEnabled(bEnabled) end
---@param TaskResult ETaskResult
function ARvMinigameInWorld_CamperWashing:OnReachedWashTarget(TaskResult) end
---@param Tag FGameplayTag
---@param bAutocompleted boolean
function ARvMinigameInWorld_CamperWashing:OnGuestServiceCompleted(Tag, bAutocompleted) end
---@param bIsFiring boolean
function ARvMinigameInWorld_CamperWashing:OnFiringStateChanged(bIsFiring) end
function ARvMinigameInWorld_CamperWashing:OnCleaningSolutionActivated() end
function ARvMinigameInWorld_CamperWashing:OnCarWashPistolDropped() end
---@param Camper URVCamperComponent
function ARvMinigameInWorld_CamperWashing:OnCamperSpawned(Camper) end
---@param Camper URVCamperComponent
---@param IsParked boolean
function ARvMinigameInWorld_CamperWashing:OnCamperLoaded(Camper, IsParked) end
---@param Camper URVCamperComponent
function ARvMinigameInWorld_CamperWashing:OnCamperLeft(Camper) end
---@return AWashableCamperMesh
function ARvMinigameInWorld_CamperWashing:GetWashableCamperMesh() end
---@return ARVCampSpot
function ARvMinigameInWorld_CamperWashing:GetCampSpot() end
---@return AGSSWheeledVehicle
function ARvMinigameInWorld_CamperWashing:GetCamperVehicle() end
---@return URVCamperComponent
function ARvMinigameInWorld_CamperWashing:GetCamperComponent() end


---@class ARvMinigameInWorld_Dishwashing : ARvMinigameInWorld
---@field GamepadMovementArea UBoxComponent
---@field CurrentEfficiency EDishwashingEfficiency
---@field MaxWaterFlowDuration float
---@field CurrentWaterFlowDuration float
---@field OnDishWetStateChanged FRvMinigameInWorld_DishwashingOnDishWetStateChanged
---@field OnDishStainsCountChange FRvMinigameInWorld_DishwashingOnDishStainsCountChange
---@field OnDishStainClearAttempt FRvMinigameInWorld_DishwashingOnDishStainClearAttempt
---@field OnWaterFlowDurationUpdated FRvMinigameInWorld_DishwashingOnWaterFlowDurationUpdated
---@field DishwashingSettings UDishwashingSettings
---@field DishesStacks TArray<ADishesStack>
---@field DishwashingWaterStream ADishwashingWaterStream
local ARvMinigameInWorld_Dishwashing = {}

---@param Amount float
function ARvMinigameInWorld_Dishwashing:UseWater(Amount) end
---@param DishesStack ADishesStack
---@param Dish ADishItem
function ARvMinigameInWorld_Dishwashing:OnDishPlacedOnDishesStack(DishesStack, Dish) end
---@return ADishItem
function ARvMinigameInWorld_Dishwashing:GetTopDishFromPriorityDirtyDishesStack() end
---@param Dish ADishItem
---@param bWet boolean
function ARvMinigameInWorld_Dishwashing:BroadcastOnDishWetStateChanged(Dish, bWet) end
---@param Dish ADishItem
---@param Change int32
function ARvMinigameInWorld_Dishwashing:BroadcastOnDishStainsCountChange(Dish, Change) end
---@param Dish ADishItem
---@param Amount int32
function ARvMinigameInWorld_Dishwashing:BroadcastOnClearStainAttempt(Dish, Amount) end


---@class ARvMinigameInWorld_Dumbbells : ARvMinigameInWorld
---@field OnMoveModeEnabled FRvMinigameInWorld_DumbbellsOnMoveModeEnabled
---@field TargetTotalWeight float
---@field TimeLimit float
---@field TimeLeft float
---@field bMoveMode boolean
---@field DumbbellsSettings UDumbbellsSettings
---@field DumbbellsContainers TArray<ADumbbellsContainer>
---@field Griffins TArray<AGriffin>
---@field SpawnedDumbbells TArray<ADumbbellItem>
local ARvMinigameInWorld_Dumbbells = {}

---@param Setup FDumbbellSetup
function ARvMinigameInWorld_Dumbbells:SpawnDumbbell(Setup) end
function ARvMinigameInWorld_Dumbbells:ResetDumbbells() end
---@param Item ADumbbellItem
---@param Container ADumbbellsContainer
function ARvMinigameInWorld_Dumbbells:OnDumbbellItemPlacedInContainer(Item, Container) end
---@param Solutions TArray<FDumbbellsSolution>
---@return FDumbbellsSolution
function ARvMinigameInWorld_Dumbbells:MergeSolutions(Solutions) end
---@param Diff EGuestServiceDifficulty
---@param SlotsAmount int32
---@return int32
function ARvMinigameInWorld_Dumbbells:GetTotalWeightForDifficulty(Diff, SlotsAmount) end
---@return float
function ARvMinigameInWorld_Dumbbells:GetTargetTotalWeight() end
---@param OutSetups TArray<FDumbbellSetup>
---@param Solutions TArray<FDumbbellsSolution>
function ARvMinigameInWorld_Dumbbells:GetSetupsForSolutions(OutSetups, Solutions) end
---@param bSort boolean
---@return TArray<FDumbbellSetup>
function ARvMinigameInWorld_Dumbbells:GetSetups(bSort) end
---@param TargetWeight float
---@param Setups TArray<FDumbbellSetup>
---@param OutSolutions TArray<FDumbbellsSolution>
---@param MaxDumbbellsAmount int32
function ARvMinigameInWorld_Dumbbells:GenerateSolutions(TargetWeight, Setups, OutSolutions, MaxDumbbellsAmount) end
---@param TargetWeight float
---@param Setups TArray<FDumbbellSetup>
---@param OutSolution FDumbbellsSolution
---@param MaxDumbbellsAmount int32
function ARvMinigameInWorld_Dumbbells:GenerateSimplestSolution(TargetWeight, Setups, OutSolution, MaxDumbbellsAmount) end


---@class ARvMinigameInWorld_Sauna : ARvMinigameInWorld
---@field OnMistakesCountChanged FRvMinigameInWorld_SaunaOnMistakesCountChanged
---@field OnSaunaTargetDotCollected FRvMinigameInWorld_SaunaOnSaunaTargetDotCollected
---@field OnMistakeModeEnabled FRvMinigameInWorld_SaunaOnMistakeModeEnabled
---@field Track ASaunaTrack
---@field CollectibleDots TArray<ASaunaCollectibleDot>
---@field PlayerDot ASaunaPlayerDot
---@field PlayerDotClass TSubclassOf<ASaunaPlayerDot>
---@field TargetDotClass TSubclassOf<ASaunaTargetDot>
---@field ObstacleDotClass TSubclassOf<ASaunaObstacleDot>
---@field TrackClass TSubclassOf<ASaunaTrack>
---@field TrackSlot USceneComponent
---@field SaunaSettings USaunaSettings
---@field TargetsToCollect int32
---@field CollectedTargets int32
---@field AllowedMistakes int32
---@field Mistakes int32
---@field bMistakeMode boolean
local ARvMinigameInWorld_Sauna = {}

---@param bNewEnabled boolean
function ARvMinigameInWorld_Sauna:SetMistakeMode(bNewEnabled) end
---@param CollectedDot ASaunaCollectibleDot
function ARvMinigameInWorld_Sauna:OnCollectedDot(CollectedDot) end
---@return boolean
function ARvMinigameInWorld_Sauna:IsMistakeMode() end
---@return ASaunaPlayerDot
function ARvMinigameInWorld_Sauna:GetPlayerDot() end
---@return float
function ARvMinigameInWorld_Sauna:GetMistakeModeProgress() end
---@return TArray<ASaunaCollectibleDot>
function ARvMinigameInWorld_Sauna:GetCollectibleDots() end
function ARvMinigameInWorld_Sauna:DelayedSpawn() end
---@return boolean
function ARvMinigameInWorld_Sauna:CanSpawnCollectibleDots() end


---@class ASDBackAlleyMinigame : ASDShadyDealsMinigameBase
local ASDBackAlleyMinigame = {}


---@class ASDBeerKegParent : AProduct
local ASDBeerKegParent = {}


---@class ASDCasino : AHouse
---@field bOpened boolean
local ASDCasino = {}

---@param bInOpened boolean
function ASDCasino:SetOpened(bInOpened) end
---@return boolean
function ASDCasino:IsOpened() end


---@class ASDCasinoMinigame : ASDMinigameBase
---@field ButtonDigitsNumber int32
---@field AvailableDigitsRowNumber int32
---@field KeyDigits FString
---@field AvailableDigitsRow FString
local ASDCasinoMinigame = {}

---@param CaughtAvailableDigitIndex int32
function ASDCasinoMinigame:RemoveCaughtDigit(CaughtAvailableDigitIndex) end
function ASDCasinoMinigame:RegenerateDigitRows() end
---@param AvailableDigitIndex int32
---@return boolean
function ASDCasinoMinigame:IsCriticalFailSymbol(AvailableDigitIndex) end
---@param KeyDigitIndex int32
---@param AvailableDigitIndex int32
---@return boolean
function ASDCasinoMinigame:IsCorrectDigit(KeyDigitIndex, AvailableDigitIndex) end
---@return FString
function ASDCasinoMinigame:GetButtonDigits() end
---@return FString
function ASDCasinoMinigame:GetAvailableDigitsRow() end


---@class ASDCasinoShadyStuffBuilding : AInteractableBuilding
local ASDCasinoShadyStuffBuilding = {}


---@class ASDConferenceHall : AHouse
local ASDConferenceHall = {}


---@class ASDDirtyMoneyCache : AInteractableActor
---@field bActive boolean
---@field bHasMoneyBag boolean
---@field PlacedBagClass TSoftClassPtr<ASDMoneyBag>
local ASDDirtyMoneyCache = {}

---@return ASDMoneyBag
function ASDDirtyMoneyCache:TakeOutBag() end
---@param bInActive boolean
function ASDDirtyMoneyCache:SetActive(bInActive) end
---@param InBag ASDMoneyBag
function ASDDirtyMoneyCache:PlaceMoneyBag(InBag) end
---@return boolean
function ASDDirtyMoneyCache:IsActive() end
function ASDDirtyMoneyCache:Init() end
---@return boolean
function ASDDirtyMoneyCache:HasMoneyBag() end
---@return boolean
function ASDDirtyMoneyCache:CanPlaceMoneyBag() end


---@class ASDFightClub : AHouse
---@field FightClubPhaseChangedDelegate FSDFightClubFightClubPhaseChangedDelegate
---@field FighterSelectedDelegate FSDFightClubFighterSelectedDelegate
---@field FighterBonusSelectedDelegate FSDFightClubFighterBonusSelectedDelegate
---@field TrainingEndedDelegate FSDFightClubTrainingEndedDelegate
---@field WaitingStatusTickDelegate FSDFightClubWaitingStatusTickDelegate
---@field Fighters TArray<FSDFighterStats>
---@field BlueVehicle AGSSWheeledVehicle
---@field BlueFighterRef AAICharacterBase
---@field RedVehicle AGSSWheeledVehicle
---@field RedFighterRef AAICharacterBase
---@field TimerHandle_TrainingPause FTimerHandle
---@field TimerHandle_AfterFightPause FTimerHandle
---@field TimerHandle_TrainingDuration FTimerHandle
---@field BlueZoneMachines TArray<AInteractableBuilding>
---@field RedZoneMachines TArray<AInteractableBuilding>
---@field Phase ESDFightClubPhase
---@field SelectedFighter ESDFightClubZone
---@field bRedFighterBonusObtained boolean
---@field bBlueFighterBonusObtained boolean
---@field bFightEnded boolean
---@field FightersWaitingStatus TMap<FName, int32>
local ASDFightClub = {}

function ASDFightClub:StartTrainingPhase() end
function ASDFightClub:StartTrainingDurationTimer() end
function ASDFightClub:StartFightPhase() end
---@param InVehicle AGSSWheeledVehicle
function ASDFightClub:SetRedVehicle(InVehicle) end
---@param InCharacter AAICharacterBase
function ASDFightClub:SetRedFighter(InCharacter) end
---@param InFighter FSDFighterStats
---@param Status int32
function ASDFightClub:SetFighterWaitingStatus(InFighter, Status) end
---@param RelatedZone ESDFightClubZone
---@param Bonus FSDFighterAttributes
---@param bForce boolean
---@param bSilent boolean
function ASDFightClub:SetFighterBonusDirect(RelatedZone, Bonus, bForce, bSilent) end
---@param Bonus FSDFighterAttributes
function ASDFightClub:SetBonusForSelectedFighter(Bonus) end
---@param InVehicle AGSSWheeledVehicle
function ASDFightClub:SetBlueVehicle(InVehicle) end
---@param InCharacter AAICharacterBase
function ASDFightClub:SetBlueFighter(InCharacter) end
---@param InZone ESDFightClubZone
function ASDFightClub:SelectFighter(InZone) end
---@param ActivityObj USDGangActivityObjBase
function ASDFightClub:OnGangActivityStarted(ActivityObj) end
---@param ActivityObj USDGangActivityObjBase
---@param Result ESDGangActivityResult
function ASDFightClub:OnGangActivityEnd(ActivityObj, Result) end
---@param DestroyedActor AActor
function ASDFightClub:OnActorDestroyed(DestroyedActor) end
---@param ActivityType ESDGangActivityType
function ASDFightClub:OnActivityPenaltyPaid(ActivityType) end
---@param ActivityType ESDGangActivityType
function ASDFightClub:OnActivityPenaltyIssued(ActivityType) end
---@param ActivityType ESDGangActivityType
---@param bEnabled boolean
function ASDFightClub:OnActivityEnableStateChanged(ActivityType, bEnabled) end
---@param ID FName
---@return boolean
function ASDFightClub:IsFighterAvailableID(ID) end
---@param InFighter FSDFighterStats
---@return boolean
function ASDFightClub:IsFighterAvailable(InFighter) end
---@param InCharacter AAICharacterBase
---@return ESDFightClubZone
function ASDFightClub:GetZoneByCharacter(InCharacter) end
---@return TArray<FSDFighterStats>
function ASDFightClub:GetWaitingFighters() end
---@return ESDFightClubZone
function ASDFightClub:GetSelectedFighterZone() end
---@return AAICharacterBase
function ASDFightClub:GetSelectedFighter() end
---@return TArray<AInteractableBuilding>
function ASDFightClub:GetRedZoneMachines() end
---@return AGSSWheeledVehicle
function ASDFightClub:GetRedVehicle() end
---@return AAICharacterBase
function ASDFightClub:GetRedFighterRef() end
---@return FSDFighterStats
function ASDFightClub:GetRedFighter() end
---@return ESDFightClubPhase
function ASDFightClub:GetPhase() end
---@param InFighter FSDFighterStats
---@return int32
function ASDFightClub:GetFighterWaitingStatus(InFighter) end
---@param InFightClubZone ESDFightClubZone
---@return FSDFighterStats
function ASDFightClub:GetFighter(InFightClubZone) end
---@return TArray<AInteractableBuilding>
function ASDFightClub:GetBlueZoneMachines() end
---@return AGSSWheeledVehicle
function ASDFightClub:GetBlueVehicle() end
---@return AAICharacterBase
function ASDFightClub:GetBlueFighterRef() end
---@return FSDFighterStats
function ASDFightClub:GetBlueFighter() end
---@return TArray<FSDFighterStats>
function ASDFightClub:GetAvailableFighters() end
---@return TArray<FSDFighterStats>
function ASDFightClub:GetAllFighters() end
function ASDFightClub:EndTrainingPhase() end
function ASDFightClub:EndFightPhase() end
---@param InZone ESDFightClubZone
---@return boolean
function ASDFightClub:CanSetFighterBonus(InZone) end
---@return boolean
function ASDFightClub:CanOrganizeFight() end


---@class ASDFightClubLockerMinigame : ASDShadyDealsMinigameBase
---@field GlovesTypeChangedDelegate FSDFightClubLockerMinigameGlovesTypeChangedDelegate
---@field FightClubZone ESDFightClubZone
---@field GlovesAttributeBonuses TMap<ESDFightClubGloves, FSDFighterAttributes>
---@field DefaultGlovesMesh UStaticMeshComponent
---@field ReducedPaddingGlovesMesh UStaticMeshComponent
---@field GravelPaddingGlovesMesh UStaticMeshComponent
---@field BuckshotFilledGlovesMesh UStaticMeshComponent
---@field HorseshoeGlovesMesh UStaticMeshComponent
---@field SelectedGlovesPosition UBillboardComponent
---@field GlovesPosition_1 UBillboardComponent
---@field GlovesPosition_2 UBillboardComponent
---@field GlovesPosition_3 UBillboardComponent
---@field GlovesPosition_4 UBillboardComponent
---@field GlovesPositionOffset FVector
---@field GlovesMeshes TArray<UStaticMeshComponent>
---@field GlovesPositions TMap<UBillboardComponent, UStaticMeshComponent>
---@field SelectedGlovesType ESDFightClubGloves
local ASDFightClubLockerMinigame = {}

---@param InStaticMesh UStaticMeshComponent
function ASDFightClubLockerMinigame:SetGlovesTypeByStaticMeshComp(InStaticMesh) end
---@param InGlovesType ESDFightClubGloves
function ASDFightClubLockerMinigame:SetGlovesType(InGlovesType) end
---@return ESDFightClubGloves
function ASDFightClubLockerMinigame:GetSelectedGlovesType() end
---@return FSDFighterAttributes
function ASDFightClubLockerMinigame:GetSelectedGlovesBonus() end
---@param InGlovesStaticMesh UStaticMeshComponent
---@return ESDFightClubGloves
function ASDFightClubLockerMinigame:GetGlvoesType(InGlovesStaticMesh) end
---@param InGlovesType ESDFightClubGloves
---@return UStaticMeshComponent
function ASDFightClubLockerMinigame:GetGlvoesStaticMesh(InGlovesType) end
---@return ESDFightClubZone
function ASDFightClubLockerMinigame:GetFightClubZone() end


---@class ASDFightClubMinigame : ASDMinigameBase
---@field BetChangedDelegate FSDFightClubMinigameBetChangedDelegate
---@field MinigameParticipantsComponent USDMinigameParticipantComponent
---@field Bet float
---@field BetZone ESDFightClubZone
---@field FavouriteZone ESDFightClubZone
---@field UnderdogZone ESDFightClubZone
---@field FightClubBuilding ASDFightClub
---@field BlueWinRate float
---@field RedWinRate float
---@field DrawWinRate float
---@field FightActivityObj USDGangActivityObjBase
local ASDFightClubMinigame = {}

function ASDFightClubMinigame:StartFight() end
---@param InBetZone ESDFightClubZone
function ASDFightClubMinigame:SetBetZone(InBetZone) end
function ASDFightClubMinigame:ResetBet() end
---@param InZone ESDFightClubZone
---@param InBet float
---@param bForce boolean
function ASDFightClubMinigame:PlaceBet(InZone, InBet, bForce) end
function ASDFightClubMinigame:OnWinRatesCalculated() end
---@param ActivityObj USDGangActivityObjBase
function ASDFightClubMinigame:OnGangActivityStarted(ActivityObj) end
---@param ActivityObj USDGangActivityObjBase
---@param Result ESDGangActivityResult
function ASDFightClubMinigame:OnGangActivityEnded(ActivityObj, Result) end
---@param FightClubActivity USDFightClubActivity
function ASDFightClubMinigame:OnFightStarted(FightClubActivity) end
---@param FightClubActivity USDFightClubActivity
function ASDFightClubMinigame:OnFightEnded(FightClubActivity) end
---@param Phase ESDFightClubPhase
function ASDFightClubMinigame:OnFightClubPhaseChanged(Phase) end
---@param Zone ESDFightClubZone
---@return float
function ASDFightClubMinigame:GetWinRate(Zone) end
---@return USDMinigameParticipantComponent
function ASDFightClubMinigame:GetMinigameParticipantsComponent() end
---@return ASDFightClub
function ASDFightClubMinigame:GetFightClubBuilding() end
---@param Delta float
function ASDFightClubMinigame:ChangeBet(Delta) end
---@return boolean
function ASDFightClubMinigame:CanStartFight() end
---@param InZone ESDFightClubZone
---@return boolean
function ASDFightClubMinigame:CanPlaceBet(InZone) end


---@class ASDFightClubRelaxSpot : ARelaxSpot
local ASDFightClubRelaxSpot = {}


---@class ASDFightClubRelaxSpotBlue : ARelaxSpot
local ASDFightClubRelaxSpotBlue = {}


---@class ASDFightClubRelaxSpotRed : ARelaxSpot
local ASDFightClubRelaxSpotRed = {}


---@class ASDFirePitMinigame : ASDMinigameBase
---@field PlacedMeatInstancedStaticMesh UInstancedStaticMeshComponent
---@field MeatBagPlaceAnchor USceneComponent
---@field MeatBagPlaceTrigger UBoxComponent
---@field MeatStatusChangedDelegate FSDFirePitMinigameMeatStatusChangedDelegate
---@field MeatBagPlacedDelegate FSDFirePitMinigameMeatBagPlacedDelegate
---@field MeatCookingTime float
---@field MeatBurnTime float
---@field MeatStaticMesh TSoftObjectPtr<UStaticMesh>
---@field RawMeatMaterial TSoftObjectPtr<UMaterialInterface>
---@field CookedMeatMaterial TSoftObjectPtr<UMaterialInterface>
---@field BurntMeatMaterial TSoftObjectPtr<UMaterialInterface>
---@field MeatCook_TimerHandle FTimerHandle
---@field MeatBurn_TimerHandle FTimerHandle
---@field PlacedMeatBag ASDMeatBagProduct
---@field MeatStatus ESDFirePitMeatStatus
local ASDFirePitMinigame = {}

function ASDFirePitMinigame:TryPlaceMeat() end
function ASDFirePitMinigame:RemoveMeat() end
---@param Mesh TSoftObjectPtr<UStaticMesh>
function ASDFirePitMinigame:OnStaticMeshLoaded(Mesh) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ASDFirePitMinigame:OnMeatTriggerBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
function ASDFirePitMinigame:OnMeatCooked() end
function ASDFirePitMinigame:OnMeatBurned() end
---@param InMaterial TSoftObjectPtr<UMaterialInterface>
function ASDFirePitMinigame:OnMaterialLoaded(InMaterial) end
---@return boolean
function ASDFirePitMinigame:IsMeatPlaced() end
---@return boolean
function ASDFirePitMinigame:IsMeatBagPlaced() end
---@return ASDMeatBagProduct
function ASDFirePitMinigame:GetPlacedMeatBag() end
---@return ESDFirePitMeatStatus
function ASDFirePitMinigame:GetMeatStatus() end


---@class ASDMeatBagProduct : AProduct
local ASDMeatBagProduct = {}


---@class ASDMinigameBase : APlaceableActor
---@field MinigameStartedDelegate FSDMinigameBaseMinigameStartedDelegate
---@field MinigameEndedDelegate FSDMinigameBaseMinigameEndedDelegate
---@field MinigameTrigger USDStandaloneSheriffTrigger
---@field MinigameCamera UCameraComponent
---@field bPlayerCanLeave boolean
---@field bMinigameStarted boolean
---@field ChararcterMinigameState ECharacterState
---@field MinigameUIWidget TSubclassOf<USDMinigameWidget>
---@field CameraBlendSpeed float
---@field bShowMouseCursor boolean
---@field bAutoDisablePlayerInput boolean
---@field bTransferInputToMinigame boolean
---@field bGameAndUIInputMode boolean
---@field CreatedMinigameWidget USDMinigameWidget
---@field MinigameCrucialActors TArray<AActor>
local ASDMinigameBase = {}

function ASDMinigameBase:StartMiniGame() end
---@param bEnabled boolean
---@param bInTransferInputToMinigame boolean
---@param bInSetGameAndUIInputMode boolean
function ASDMinigameBase:SetPlayerInputEnabled(bEnabled, bInTransferInputToMinigame, bInSetGameAndUIInputMode) end
---@param BlendTime float
function ASDMinigameBase:RestorePlayerCamera(BlendTime) end
---@param CrucialActor AActor
function ASDMinigameBase:RemoveCrucialActor(CrucialActor) end
function ASDMinigameBase:OnWidgetAddedToViewport() end
function ASDMinigameBase:OnStart() end
---@param OverlappedComp UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function ASDMinigameBase:OnOverlapEnd(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex) end
function ASDMinigameBase:OnEnd() end
---@param OverlappedComp UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ASDMinigameBase:OnBoxBeginOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@return boolean
function ASDMinigameBase:IsMinigameStarted() end
---@return USDMinigameWidget
function ASDMinigameBase:GetMinigameWidgetInstance() end
---@return TSubclassOf<USDMinigameWidget>
function ASDMinigameBase:GetMinigameWidgetClass() end
---@return TArray<AActor>
function ASDMinigameBase:GetCrucialActors() end
---@param EndReason ESDMinigameEndReason
function ASDMinigameBase:EndMinigame(EndReason) end
function ASDMinigameBase:CleanUp() end
---@return boolean
function ASDMinigameBase:CanStartMinigame() end
---@param bPressed boolean
function ASDMinigameBase:CancelMinigame(bPressed) end
---@param CameraToBlendTo UCameraComponent
---@param BlendSpeed float
function ASDMinigameBase:BlendViewTargetToCameraComponent(CameraToBlendTo, BlendSpeed) end
---@param InActor AActor
function ASDMinigameBase:AddCrucialActor(InActor) end


---@class ASDMoneyBag : AProduct
local ASDMoneyBag = {}

function ASDMoneyBag:Init() end


---@class ASDParkingDealMinigame : ASDShadyDealsMinigameBase
---@field MinigameParticipantsComponent USDMinigameParticipantComponent
local ASDParkingDealMinigame = {}

---@param MinigameParticipantComponent USDMinigameParticipantComponent
function ASDParkingDealMinigame:OnReadyToDeal(MinigameParticipantComponent) end


---@class ASDParkingDealRelaxSpot : ARelaxSpot
local ASDParkingDealRelaxSpot = {}


---@class ASDPrisonBusStop : AInteractableActor
local ASDPrisonBusStop = {}


---@class ASDShadyDealsMinigameBase : ASDTimedMinigameBase
---@field GangActivityType ESDGangActivityType
local ASDShadyDealsMinigameBase = {}

---@return boolean
function ASDShadyDealsMinigameBase:TryDetectFraud() end
function ASDShadyDealsMinigameBase:ProcessFraudDetection() end
function ASDShadyDealsMinigameBase:OnFraudDetected() end
---@return ESDGangActivityType
function ASDShadyDealsMinigameBase:GetGangActivity() end


---@class ASDSheriffPatrolWaypoint : AActor
---@field bAccessible boolean
---@field bGangActivityRelated boolean
---@field RelatedGangActivity ESDGangActivityType
---@field bStaticWaypoint boolean
---@field bFallbackWaypoint boolean
---@field FallbackWaypoint ASDSheriffPatrolWaypoint
local ASDSheriffPatrolWaypoint = {}

---@return boolean
function ASDSheriffPatrolWaypoint:IsStaticWaypoint() end
---@return boolean
function ASDSheriffPatrolWaypoint:IsFallbackWaypoint() end
---@return ESDGangActivityType
function ASDSheriffPatrolWaypoint:GetRelatedGangActivity() end
---@return ASDSheriffPatrolWaypoint
function ASDSheriffPatrolWaypoint:GetFallbackWaypoint() end


---@class ASDSheriffRelaxSpot : ARelaxSpot
local ASDSheriffRelaxSpot = {}


---@class ASDShootingRange : AEquipmentRentalBuilding
local ASDShootingRange = {}


---@class ASDTimedMinigameBase : ASDMinigameBase
---@field MinigameTimeOutDelegate FSDTimedMinigameBaseMinigameTimeOutDelegate
---@field TimeOutDelay float
---@field bTimedOut boolean
---@field TimerHandle_MinigameTimeOut FTimerHandle
local ASDTimedMinigameBase = {}

function ASDTimedMinigameBase:StartTimeOutTimer() end
function ASDTimedMinigameBase:OnMinigameTimeOut() end
---@return boolean
function ASDTimedMinigameBase:IsTimedOut() end
function ASDTimedMinigameBase:ClearTimeOutTimer() end


---@class ASDToiletMinigame : ASDMinigameBase
---@field ToiletCloggedDelegate FSDToiletMinigameToiletCloggedDelegate
---@field ToiletUnCloggedDelegate FSDToiletMinigameToiletUnCloggedDelegate
---@field ToiletClogLevelChangedDelegate FSDToiletMinigameToiletClogLevelChangedDelegate
---@field PlungerMesh UStaticMeshComponent
---@field ClogMesh UStaticMeshComponent
---@field PlungerPathSpline USplineComponent
---@field MaxToiletClogLevel int32
---@field PlungerMovementSpeed float
---@field PlungerTriggerDepth float
---@field ToiletClogLevel int32
---@field bClogged boolean
---@field CurrentPlungerDistance float
---@field VirtualDirtDecalClass TSubclassOf<ADirtyDecal>
---@field bUnclogTriggerGate boolean
---@field VirtualDirtDecals TArray<ADirtyDecal>
local ASDToiletMinigame = {}

---@param InAmount int32
function ASDToiletMinigame:SetToiletClogLevel(InAmount) end
---@param Value float
function ASDToiletMinigame:MouseMovedUp(Value) end
---@return boolean
function ASDToiletMinigame:IsToiletClogged() end
---@return float
function ASDToiletMinigame:GetToiletClogPercent() end
---@return int32
function ASDToiletMinigame:GetCurrentClogLevel() end
---@param DecaltoDestroy ADirtyDecal
function ASDToiletMinigame:DestroyVirtualDecal(DecaltoDestroy) end
---@param Delta int32
function ASDToiletMinigame:ChangeToiletClogLevel(Delta) end


---@class ASDWarehouseMinigame : ASDShadyDealsMinigameBase
local ASDWarehouseMinigame = {}


---@class ASD_AiBarHallManager : AActor
local ASD_AiBarHallManager = {}


---@class ASD_BarPlace : AInteractableBuilding
local ASD_BarPlace = {}


---@class ASD_BarTable : AInteractableBuilding
---@field SnapPoints TArray<ASnapPoint>
local ASD_BarTable = {}

---@return ASnapPoint
function ASD_BarTable:FindClosestAvailableSnapPoint() end


---@class ASD_SnapPoint : ASnapPoint
local ASD_SnapPoint = {}

---@param NewInteractableBuilding AInteractableBuilding
function ASD_SnapPoint:SnapToActor(NewInteractableBuilding) end


---@class ASD_Tool_Plunger : AKeyItem
local ASD_Tool_Plunger = {}


---@class ASD_Tool_Rag : AKeyItem
local ASD_Tool_Rag = {}


---@class ASD_Tool_Tray : AKeyItem
local ASD_Tool_Tray = {}


---@class ASaunaCollectibleDot : ASaunaDot
---@field LifeTimeLeft float
---@field WarmUpTimeLeft float
local ASaunaCollectibleDot = {}

---@param TimeLeft float
function ASaunaCollectibleDot:OnWarmUpTimeLeftChanged(TimeLeft) end
function ASaunaCollectibleDot:OnLifeDurationPassed() end
function ASaunaCollectibleDot:OnDotCollected() end
---@return boolean
function ASaunaCollectibleDot:IsWarmingUp() end


---@class ASaunaDot : AActor
---@field MinigameInWorldSauna ARvMinigameInWorld_Sauna
local ASaunaDot = {}

---@return float
function ASaunaDot:GetSplineTime() end


---@class ASaunaObstacleDot : ASaunaCollectibleDot
local ASaunaObstacleDot = {}


---@class ASaunaPlayerDot : ASaunaDot
---@field MovementSpeed float
---@field bMoveForward boolean
local ASaunaPlayerDot = {}

function ASaunaPlayerDot:ReverseDirection() end


---@class ASaunaTargetDot : ASaunaCollectibleDot
local ASaunaTargetDot = {}


---@class ASaunaTrack : AActor
---@field MinigameInWorldSauna ARvMinigameInWorld_Sauna
---@field SplineComponent USplineComponent
---@field ArcCenter USceneComponent
---@field ArcAngle float
---@field ArcRadius float
local ASaunaTrack = {}

---@param Time float
---@return float
function ASaunaTrack:NormalizeSplineTime(Time) end
---@param Time float
---@return FTransform
function ASaunaTrack:GetTransformForTime(Time) end
---@return USplineComponent
function ASaunaTrack:GetSplineComponent() end


---@class ASaveGameDataActor : AActor
---@field SaveGameComponents TArray<USaveGameDLCActorComponent>
local ASaveGameDataActor = {}



---@class AScratchActor : ADecalActor
---@field BaseHealth float
---@field ValidScratchMaterialInstances TArray<UMaterialInterface>
---@field DecalHitArea UBoxComponent
---@field MDI UMaterialInstanceDynamic
---@field CurrentHealth float
local AScratchActor = {}

---@return float
function AScratchActor:GetHealth() end
---@param Damage float
function AScratchActor:DamageScratch(Damage) end


---@class AScrew : AProduct
local AScrew = {}


---@class AScubaEquipmentRentalBuilding : AEquipmentRentalBuilding
local AScubaEquipmentRentalBuilding = {}


---@class AScubaEquipment_RentalSpot : ARentalSpot
---@field Dead_ScubaIndicator TSoftClassPtr<AWaterVehicle>
---@field Default_ScubaIndicator TSoftClassPtr<AWaterVehicle>
local AScubaEquipment_RentalSpot = {}

---@param Boat AWaterVehicle
function AScubaEquipment_RentalSpot:OnCustomerGotBack(Boat) end


---@class ASeanCharacter : AGSSNPAICharacterBase
---@field OnTalkWithPlayer FSeanCharacterOnTalkWithPlayer
---@field OnSeanReset FSeanCharacterOnSeanReset
---@field OnWreckProcessingStarted FSeanCharacterOnWreckProcessingStarted
---@field OnWreckProcessingEnded FSeanCharacterOnWreckProcessingEnded
---@field bIsBarkDisabled boolean
---@field bIsInsideCrane boolean
---@field bIsExitingCrane boolean
---@field bIsDancingInWorkshop boolean
---@field bIsWorkingOnWreck boolean
---@field bWreckPickedUpWithCrane boolean
---@field bWreckDroppedWithCrane boolean
---@field bJustFinishedDefaultSubtask boolean
---@field CurrentWreckArea ACarWreckPlaceableArea
---@field CurrentMoveTargetArea ACarWreckPlaceableArea
---@field CurrentWreck AJunkyardCarWreck
---@field CurrentTaskStruct FSeanTaskRow
---@field WreckMarkingEnabledTag FGameplayTag
---@field CheckForWorkInterval float
---@field IsInWorkshopYLocation float
---@field EnterCraneTask TSoftClassPtr<UNPAITaskBase>
---@field ExitCraneTask TSoftClassPtr<UNPAITaskBase>
---@field DanceAtWorkshopTask TSoftClassPtr<UNPAITaskBase>
---@field ResetPosition TSoftObjectPtr<AActor>
---@field PendingSpecialBarks TArray<ENPCConversationType>
---@field CurrentTaskBark ESeanTaskBark
---@field LastBarkSystemTime FDateTime
---@field bWasLastBarkSystemTimeRecorded boolean
---@field bPlayerLeftJunkyard boolean
---@field TimeSinceLastBark float
---@field CurrentBarkInterval float
---@field MinBarkInterval float
---@field MaxBarkInterval float
---@field MinGreetingBarkInterval float
---@field MaxGreetingBarkInterval float
---@field BarkDistance float
---@field CraneBarkDistance float
---@field PlayerLeftJunkyardDistance float
---@field GreetingTimeThresholdSeconds float
---@field LongGreetingTimeThresholdHours int32
---@field BarkCheckInterval float
---@field MinCarSalePriceToBark float
---@field BuildingTypesForBark TArray<EBuildingType>
---@field BarkCheckTimer FTimerHandle
---@field JunkyardManager AJunkyardManager
---@field ActionManagerSubsystem UActionManagerSubsystem
---@field CheckForWorkTimer FTimerHandle
---@field CanBeTalkedToTag FGameplayTag
local ASeanCharacter = {}

---@param TargetArea ACarWreckPlaceableArea
function ASeanCharacter:TryTeleportToDanceAtPlatform(TargetArea) end
---@param CurrentTasksCancelled boolean
---@return boolean
function ASeanCharacter:TryProcessNextWreck(CurrentTasksCancelled) end
function ASeanCharacter:TalkToSean() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ASeanCharacter:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param QueueBark boolean
function ASeanCharacter:ResetSean(QueueBark) end
---@param BarkType ENPCConversationType
function ASeanCharacter:QueueSpecialBark(BarkType) end
---@param TaskType ECarWreckMarking
---@param WreckArea ACarWreckPlaceableArea
---@param ReplaceCurrentTasks boolean
function ASeanCharacter:ProcessSpecificWreck(TaskType, WreckArea, ReplaceCurrentTasks) end
function ASeanCharacter:OnWreckProcessingStart() end
function ASeanCharacter:OnWreckProcessingEnd() end
---@param Wreck AJunkyardCarWreck
function ASeanCharacter:OnWreckPlayerProcessingStarted(Wreck) end
---@param Area ACarWreckPlaceableArea
---@param Wreck AJunkyardCarWreck
function ASeanCharacter:OnWreckPlacedOnArea(Area, Wreck) end
---@param MarkedWreck AJunkyardCarWreck
---@param NewMarking ECarWreckMarking
function ASeanCharacter:OnWreckMarked(MarkedWreck, NewMarking) end
---@param Wreck AJunkyardCarWreck
function ASeanCharacter:OnWreckAttractedToMagnet(Wreck) end
function ASeanCharacter:OnUfoUsed() end
---@param GameplayStuffUnlocked FUnlockableGameplayStuffState
function ASeanCharacter:OnNewGameplayStuffUnlockStateChanged(GameplayStuffUnlocked) end
---@param NewLevel int32
function ASeanCharacter:OnNewFameLevelUnlocked(NewLevel) end
function ASeanCharacter:OnDefaultTaskStarted() end
---@param EnteredByPlayer boolean
function ASeanCharacter:OnCraneEntered(EnteredByPlayer) end
---@param SaleSlot FSaleSlot
---@param bCarSold boolean
function ASeanCharacter:OnCarSaleFinished(SaleSlot, bCarSold) end
---@param BuildingType EBuildingType
---@param BuildingLevel int32
---@param bLoadedFromSave boolean
function ASeanCharacter:OnBuildingUpgraded(BuildingType, BuildingLevel, bLoadedFromSave) end
---@return boolean
function ASeanCharacter:IsWreckMarkingEnabled() end
---@param ProcessingTask FSeanTaskRow
---@param TargetWreckArea ACarWreckPlaceableArea
---@return boolean
function ASeanCharacter:IsProcessingPossible(ProcessingTask, TargetWreckArea) end
---@return boolean
function ASeanCharacter:IsInWorkshop() end
---@param AreaType ECarWreckPlaceableAreaType
---@param DistanceReferenceActor AActor
---@return ACarWreckPlaceableArea
function ASeanCharacter:FindFreeWreckAreaOfType(AreaType, DistanceReferenceActor) end
---@param WreckFound boolean
---@param OutputWreckArea ACarWreckPlaceableArea
---@param OutputTaskStruct FSeanTaskRow
function ASeanCharacter:FindClosestWreckToProcess(WreckFound, OutputWreckArea, OutputTaskStruct) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ASeanCharacter:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
function ASeanCharacter:DisableInteractionInfo(Pawn) end
function ASeanCharacter:CheckForWorkToDo() end
function ASeanCharacter:CheckForBark() end
function ASeanCharacter:CancelCurrentTask() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ASeanCharacter:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param BarkType ENPCConversationType
---@param IgnoreBarkDistance boolean
function ASeanCharacter:BarkDialog(BarkType, IgnoreBarkDistance) end


---@class ASeanDesk : ASeanInteractionItem
---@field Desk UStaticMeshComponent
---@field Chair UStaticMeshComponent
---@field Glass UStaticMeshComponent
---@field PhoneStand UStaticMeshComponent
---@field Phone UStaticMeshComponent
---@field PaperSheet UStaticMeshComponent
---@field PaperStack UStaticMeshComponent
local ASeanDesk = {}



---@class ASeanEngineFixingStation : ASeanInteractionItem
---@field Hammer UStaticMeshComponent
---@field ScrewDriver UStaticMeshComponent
---@field Wrench UStaticMeshComponent
local ASeanEngineFixingStation = {}



---@class ASeanInteractionItem : AActor
---@field DefaultRoot USceneComponent
---@field NPSmartObjectComponent UNPSmartObjectComponent
local ASeanInteractionItem = {}



---@class ASeanPeakingSpot : ASeanInteractionItem
---@field bPeakLeft boolean
local ASeanPeakingSpot = {}



---@class AShadowCasterParent : AActor
---@field MainMesh UStaticMeshComponent
local AShadowCasterParent = {}



---@class AShark : AWaterVehicle
---@field PreysNumberToEat int32
---@field EatenCustomersNumber int32
---@field MinPreysNumber int32
---@field MaxPreysNumber int32
---@field CurrentSecondsToFindNextPrey float
---@field SecondsToFindNextPrey float
---@field ScreamsSound TSoftObjectPtr<USoundCue>
---@field bIgnoreCustomers boolean
---@field AcceptableDistance float
---@field SharkMarkerArrow UArrowComponent
---@field SharkMarkerClass TSubclassOf<AObjectiveMarker>
---@field SharkMarker AObjectiveMarker
---@field HealthBarClass TSubclassOf<USharkHealthBar>
---@field HealthBar USharkHealthBar
---@field NotificationClass TSubclassOf<USharkNotification>
---@field Notification USharkNotification
---@field bAttacking boolean
---@field UniqueHandle FTimerHandle
---@field CheckMarkerTime float
---@field bChecking boolean
local AShark = {}

function AShark:UpdateSharkMarker() end
function AShark:StartLookingForAPrey() end
function AShark:StartAttack() end
function AShark:RandomAttackValues() end
function AShark:OnSharkOutAnimFinished() end
---@param Shark AShark
---@param EatenCustomer AWaterVehicle
function AShark:OnCustomerEaten(Shark, EatenCustomer) end
function AShark:ManageWigdetsPostEvent() end
---@return boolean
function AShark:IsSharkSeenByPlayer() end
function AShark:CreateSharkMarker() end
function AShark:CreateNotification() end
function AShark:CreateHealthBar() end
function AShark:ActivateSounds() end


---@class ASharkSpawner : AActor
---@field SpawnedShark AShark
---@field bSharkInPreparation boolean
local ASharkSpawner = {}

function ASharkSpawner:StartSharkSpawn() end
---@param bLoadedFromSave boolean
---@param SavedSharkData FSavedShark
function ASharkSpawner:SpawnShark(bLoadedFromSave, SavedSharkData) end
---@param NewShark AShark
function ASharkSpawner:SetSpawnedShark(NewShark) end
---@return AShark
function ASharkSpawner:GetSpawnedShark() end


---@class AShelf : AInteractableBuilding
---@field StaticMesh UStaticMeshComponent
---@field RestrictedProducts TMap<TSoftClassPtr<AItem>, FGameplayTag>
---@field ShelfType EShelfType
---@field ItemInventory UInventoryComponent
---@field bShelfMode boolean
---@field RotateProductsToShelf boolean
---@field CategoryNameText FText
---@field OnShelfCapacityChanged FShelfOnShelfCapacityChanged
---@field OnShelfRestocked FShelfOnShelfRestocked
---@field OnRestockDataSet FShelfOnRestockDataSet
---@field ProductsLines TArray<FProductsLineStruct>
---@field Products TArray<FProductsStruct>
---@field CompatibileItemClasses TArray<TSubclassOf<AItem>>
---@field SpecificRotation float
---@field RotateProductsToShelfX boolean
---@field SpecificRotationX float
---@field RotateProductsToShelfY boolean
---@field SpecificRotationY float
---@field StartCullDistance int32
---@field EndCullDistance int32
---@field bUnderRestocking boolean
---@field bCanBeRestocked boolean
---@field RestockThreshold float
---@field ProductRestockFilling float
---@field bAutoRestock boolean
---@field RestockingData TArray<FRestockProductData>
local AShelf = {}

function AShelf:SortProductSplines() end
---@param ProductsToSort TArray<FItemsToRestock>
function AShelf:SortProductsByShelfPriorities(ProductsToSort) end
---@param InShelfClass TSoftClassPtr<AShelf>
---@param InRestockThreshold float
---@param InProductRestockFilling float
---@param InbAutoRestock boolean
---@param InRestockingData TArray<FRestockProductData>
function AShelf:SetRestockingParams(InShelfClass, InRestockThreshold, InProductRestockFilling, InbAutoRestock, InRestockingData) end
---@param ItemClass TSubclassOf<AItem>
---@param Amount int32
---@return int32
function AShelf:RemoveProduct(ItemClass, Amount) end
function AShelf:ReFillShelfes() end
---@param ItemToCheck TSubclassOf<AItem>
---@return boolean
function AShelf:IsItemCompatible(ItemToCheck) end
---@return boolean
function AShelf:IsEmpty() end
---@param ItItemClassem TSubclassOf<AItem>
---@return boolean
function AShelf:IsCompatibile(ItItemClassem) end
---@param ItemToCheck TSubclassOf<AItem>
---@param AmountOfSpace int32
---@return boolean
function AShelf:HasProductSpace(ItemToCheck, AmountOfSpace) end
---@return EItemTypeCategory
function AShelf:GetShelfProductsCategory() end
---@return float
function AShelf:GetShelfCapacity() end
---@param ItemToCheck TSubclassOf<AItem>
---@return FRestockProductData
function AShelf:GetRestockData(ItemToCheck) end
---@return TArray<TSubclassOf<AItem>>
function AShelf:GetProductClassesOnTheShelf() end
---@param ItemClass TSubclassOf<AItem>
---@return int32
function AShelf:GetProductCapacity(ItemClass) end
---@param ItemToCheck TSubclassOf<AItem>
---@return int32
function AShelf:GetItemAmount(ItemToCheck) end
---@return FName
function AShelf:GetInteractionName_Implementation() end
---@return FName
function AShelf:GetInteractionName() end
---@return TArray<FItemsToRestock>
function AShelf:GetAmountOfProductsToRestock() end
---@param ItemClass TSubclassOf<AItem>
---@return boolean
function AShelf:CheckItem(ItemClass) end
---@param NewThreshold float
function AShelf:ChangeShelfRestockThreshold(NewThreshold) end
---@param ValueAdded float
---@param RefilledProductClass TSubclassOf<AItem>
---@return boolean
function AShelf:ChangeProductRestockValue(ValueAdded, RefilledProductClass) end
---@return boolean
function AShelf:bIsShelfBelowRestockCapacity() end
---@param ItemClass TSubclassOf<AItem>
---@param Amount int32
---@return int32
function AShelf:AddProduct(ItemClass, Amount) end


---@class AShootingRangeTarget : AActor
---@field TargetTeam ETargetTeam
---@field OwnerREF ARailsForShootingRange
---@field CanBeShooted boolean
---@field BaseScore float
---@field DefaultSceneRoot USceneComponent
---@field MainTargetMesh UStaticMeshComponent
---@field TargetType EShootingRangeDifficulty
local AShootingRangeTarget = {}

---@param Stand boolean
---@param FromFold boolean
---@param ShootedByOponent boolean
function AShootingRangeTarget:PlayStandAnimation(Stand, FromFold, ShootedByOponent) end
---@param ShootedByOponent boolean
function AShootingRangeTarget:OnTargetShooted(ShootedByOponent) end


---@class AShovel : AKeyItem
local AShovel = {}


---@class AShower : AInteractableBuilding
local AShower = {}


---@class AShowerActor : AInteractableBuilding
local AShowerActor = {}


---@class ASmokeMachine : AActor
---@field StaticMesh UStaticMeshComponent
---@field Smoke_ParticleComponent UNiagaraComponent
---@field PassedTime float
local ASmokeMachine = {}

function ASmokeMachine:StopWorking() end
function ASmokeMachine:OnStartParty() end
function ASmokeMachine:CheckIfDancingTime() end


---@class ASnapPoint : AActor
---@field DistanceFromInsideStation float
---@field InsideStationTag FName
---@field StaticMeshComponent UStaticMeshComponent
---@field SnapPointArrowComp UArrowComponent
---@field ActorAttached APlaceableActor
---@field SnapType ESnapType
---@field InteractableBuilding AInteractableBuilding
---@field bIsOutdated boolean
---@field TimerHandle FTimerHandle
---@field ParentWall ACustomizationHousePart
local ASnapPoint = {}

---@param _BuildingType EBuildingType
---@param NewBuildingLevel int32
---@param bLoadedFromSave boolean
function ASnapPoint:OnBuildingUpgraded(_BuildingType, NewBuildingLevel, bLoadedFromSave) end
---@return boolean
function ASnapPoint:IsInsideGasStationArea() end
function ASnapPoint:DestroySnapPoint() end
function ASnapPoint:AddSnapPointToInsideGasStationArea() end


---@class ASoftDrink : AGasStationProduct
local ASoftDrink = {}


---@class ASpiderWebBase : AActor
---@field HitsToDestroy int32
local ASpiderWebBase = {}



---@class ASpoon : AActor
---@field MainSkeletalMesh USkeletalMeshComponent
---@field ScoopMesh UStaticMeshComponent
---@field SoundSpoonInContainer USoundCue
---@field SoundSpoonOutContainer USoundCue
---@field SoundSpoonSqueeze USoundCue
---@field SoundSpoonRelease USoundCue
---@field SoundPlaceScoop USoundCue
---@field SpoonLocationOffset FVector
---@field SpoonRotationOffset FRotator
---@field TargetSpoonWithScoopRotation FRotator
---@field SpoonOnConeRotation FRotator
---@field TraceMultiplier float
---@field ToContainerLerpStep float
---@field ToConeLerpStep float
---@field ToHandLerpStep float
---@field SqueezeStep float
---@field Cone AIceCreamCone
---@field bSpoonVisible boolean
---@field OnSpoonChangedVisibility FSpoonOnSpoonChangedVisibility
---@field Container AIceCreamContainer
local ASpoon = {}



---@class AStand : AInteractableBuilding
local AStand = {}


---@class ASupBox : AItemBox
---@field bCanBePickedUp boolean
local ASupBox = {}

function ASupBox:UpdateItemBox() end
---@param Inventory UInventoryComponent
function ASupBox:OnInventoryUpdated_CheatCheck(Inventory) end
---@param Inventory UInventoryComponent
function ASupBox:ChangeInventory(Inventory) end


---@class ASurfingEquipmentRentalBuilding : AEquipmentRentalBuilding
local ASurfingEquipmentRentalBuilding = {}


---@class ASurfingEquipment_RentalSpot : ARentalSpot
local ASurfingEquipment_RentalSpot = {}

---@param Boat AWaterVehicle
function ASurfingEquipment_RentalSpot:OnCustomerGotBack(Boat) end


---@class ASwitch : AGSSWorldObject
---@field StartingSwitchState ESwitchState
---@field ActiveSwitchState ESwitchState
local ASwitch = {}

---@param NewState ESwitchState
function ASwitch:SetSwitchState(NewState) end
---@param NewState ESwitchState
function ASwitch:OnStateUpdated(NewState) end
---@return ESwitchState
function ASwitch:GetSwitchState() end


---@class ATapeTool : AProduct
---@field OnAllTapeUsed FTapeToolOnAllTapeUsed
---@field OnTapeLengthChanged FTapeToolOnTapeLengthChanged
---@field PlayerInputComponent UInputComponent
---@field FixingTapeClass TSoftClassPtr<AFixingTape>
---@field InteractionRange float
---@field EdgeComponentTag FName
---@field StartingTapeOffSet FVector
---@field AfterCutTapeOffSet FVector
---@field MaxTapeLength float
---@field CurrentTapeLength float
---@field bIsStrechingTape boolean
---@field LastKnownBrokenPart ABrokenPlanePart
---@field CurrentlyFixedBrokenPart ABrokenPlanePart
---@field FixingTapeInstance AFixingTape
---@field bIsFirstStrech boolean
---@field SoundCue_Open USoundCue
---@field SoundCue_End USoundCue
---@field SoundCue_Strip USoundCue
---@field AllertWidgetClass TSoftClassPtr<UUserWidget>
---@field TapeToolWidgetClass TSoftClassPtr<UTapeToolWidget>
---@field TapeToolWidgetInstance UUserWidget
local ATapeTool = {}

---@return boolean
function ATapeTool:WasTapeUsed() end
---@param OutHit FHitResult
---@param bInHitEdge boolean
---@return ABrokenPlanePart
function ATapeTool:TraceForBrokenPlanePartOutHits(OutHit, bInHitEdge) end
---@return ABrokenPlanePart
function ATapeTool:TraceForBrokenPlanePart() end
function ATapeTool:StretchTape() end
function ATapeTool:RemoveTapeToolWidget() end
function ATapeTool:FindBrokenPart() end


---@class ATeddyBear : AGasStationProduct
local ATeddyBear = {}


---@class AToilet : AInteractableBuilding
local AToilet = {}


---@class ATowy : APlayerVehicle
---@field exhaust USkeletalMeshComponent
---@field SmokeHeatLeft UParticleSystemComponent
---@field SmokeHeatRight UParticleSystemComponent
---@field SmokeRight UParticleSystemComponent
---@field SmokeLeft UParticleSystemComponent
---@field CoolingLeft UParticleSystemComponent
---@field CoolingRight UParticleSystemComponent
---@field OverheatLeft UParticleSystemComponent
---@field OverheatRight UParticleSystemComponent
---@field MagnetArmComponent UMagnetArmComponent
---@field CyllinderActionRange UStaticMeshComponent
---@field ArrowComponent UArrowComponent
---@field HorizontalBlockBoxComponent UBoxComponent
---@field VerticalBlockBoxComponent UBoxComponent
---@field bMagnetMode boolean
---@field OnTowyChangeModeAction FTowyOnTowyChangeModeAction
local ATowy = {}

---@param bPressed boolean
function ATowy:InputActionChangeMode(bPressed) end
function ATowy:ChangeModeAction_Released() end
function ATowy:ChangeModeAction_Pressed() end


---@class ATowysGarage : AInteractableBuilding
local ATowysGarage = {}


---@class AToy : AGasStationProduct
local AToy = {}


---@class ATradeCenter : AInteractableBuilding
local ATradeCenter = {}


---@class ATradingAirplane : AAirplaneBase
---@field OnTakeOff FTradingAirplaneOnTakeOff
---@field OnAirplaneStatusChanged FTradingAirplaneOnAirplaneStatusChanged
---@field OnTimeToTakeOffUpdated FTradingAirplaneOnTimeToTakeOffUpdated
---@field StablilzerLeftMeshComp UStaticMeshComponent
---@field StablilzerRightMeshComp UStaticMeshComponent
---@field CountryFlagMesh UStaticMeshComponent
---@field Pilot APilotCharacter
---@field CountryOfOrigin ECountryOfOrigin
---@field CallSign FString
---@field GeneratedItemsForBuy TArray<FGeneratedLootInfo>
---@field GeneratedItemsForSell TArray<FGeneratedLootInfo>
---@field Runway ERunway
---@field CurrentStatus ECurrentStatus
---@field StaticMeshComponent UStaticMeshComponent
---@field BoughtItems UInventoryComponent
---@field bCanInteract boolean
---@field TimeToTakeOff int32
---@field TotalPickedPilotItemsAmount int32
---@field bIsPendingTrade boolean
---@field PickedPlayerItems TArray<FGeneratedItem>
---@field PickedPilotItems TArray<FGeneratedItem>
---@field TotalPilotTradeValue float
---@field TotalPlayerTradeValue float
---@field ImpatienceMeter float
---@field LastPlayerTradeValue float
---@field LastPilotTradeValue float
---@field DeniedTradeOffers TArray<FDeniedTradeOffer>
---@field bIsSameOffer boolean
---@field SkillsUsed TArray<ETradingSkill>
---@field bIsCogencyUsed boolean
---@field bIsExpressionOfGratitudeUsed boolean
---@field AffectedByTradingBoost ETradingBoosts
---@field TradeTryTut int32
---@field DMI_1_Tint_1 FLinearColor
---@field DMI_1_Tint_2 FLinearColor
---@field DMI_1_Tint_3 FLinearColor
---@field DMI_2_Tint_1 FLinearColor
---@field DMI_2_Tint_2 FLinearColor
local ATradingAirplane = {}

---@param TimeStruct FTimeStruct
function ATradingAirplane:UpdateTimeToTakeOff(TimeStruct) end
---@param Item FGeneratedLootInfo
---@param bIsByTradeAffected boolean
function ATradingAirplane:UpdateGeneratedItemsForSell(Item, bIsByTradeAffected) end
---@param Item FGeneratedLootInfo
---@param bIsByTradeAffected boolean
function ATradingAirplane:UpdateGeneratedItemsForBuy(Item, bIsByTradeAffected) end
function ATradingAirplane:UpdateColors() end
function ATradingAirplane:TakeOff() end
function ATradingAirplane:StartTrading() end
function ATradingAirplane:StartPilotMounting() end
function ATradingAirplane:StartCountingDown() end
---@param PilotGender ENPCGender
function ATradingAirplane:SpawnPilot(PilotGender) end
---@param NewValue int32
function ATradingAirplane:SetTradeTryTut(NewValue) end
---@param NewValue float
function ATradingAirplane:SetTotalPlayerTradeValue(NewValue) end
---@param NewValue float
function ATradingAirplane:SetTotalPilotTradeValue(NewValue) end
---@param TimeToTakeOffToSet int32
function ATradingAirplane:SetTimeToTakeOff(TimeToTakeOffToSet) end
---@param NewValue TArray<ETradingSkill>
function ATradingAirplane:SetSkillsUsed(NewValue) end
---@param RunwayToSet ERunway
function ATradingAirplane:SetRunway(RunwayToSet) end
---@param bLoadedFromSave boolean
function ATradingAirplane:SetPlaneArrived(bLoadedFromSave) end
---@param NewPilot APilotCharacter
function ATradingAirplane:SetPilot(NewPilot) end
---@param PickedPlayerItemsToSet TArray<FGeneratedItem>
function ATradingAirplane:SetPickedPlayerItems(PickedPlayerItemsToSet) end
---@param PickedPilotItemsToSet TArray<FGeneratedItem>
function ATradingAirplane:SetPickedPilotItems(PickedPilotItemsToSet) end
---@param Channel ECollisionChannel
---@param NewResponse ECollisionResponse
function ATradingAirplane:SetMeshesCollisions(Channel, NewResponse) end
---@param NewValue float
function ATradingAirplane:SetLastPlayerTradeValue(NewValue) end
---@param NewValue float
function ATradingAirplane:SetLastPilotTradeValue(NewValue) end
---@param NewValue boolean
function ATradingAirplane:SetIsSameOffer(NewValue) end
---@param NewValue ETradingBoosts
function ATradingAirplane:SetIsAffectedByTradingBoost(NewValue) end
---@param NewValue float
function ATradingAirplane:SetImpatienceMeter(NewValue) end
---@param GeneratedItemsForSellToSet TArray<FGeneratedLootInfo>
function ATradingAirplane:SetGeneratedItemsForSell(GeneratedItemsForSellToSet) end
---@param GeneratedItemsForBuyToSet TArray<FGeneratedLootInfo>
function ATradingAirplane:SetGeneratedItemsForBuy(GeneratedItemsForBuyToSet) end
---@param NewValue TArray<FDeniedTradeOffer>
function ATradingAirplane:SetDeniedTradeOffers(NewValue) end
---@param CurrentStatusToSet ECurrentStatus
function ATradingAirplane:SetCurrentStatus(CurrentStatusToSet) end
---@param CountryOfOriginToSet ECountryOfOrigin
function ATradingAirplane:SetCountryOfOrigin(CountryOfOriginToSet) end
---@param FlagMaterial TSoftObjectPtr<UMaterialInstance>
function ATradingAirplane:SetCountryFlagMaterial(FlagMaterial) end
---@param CanInteractToSet boolean
function ATradingAirplane:SetCanInteract(CanInteractToSet) end
---@param NewCallSign FString
function ATradingAirplane:SetCallSign(NewCallSign) end
---@param BoughtItemsToSet UInventoryComponent
function ATradingAirplane:SetBoughtItems(BoughtItemsToSet) end
function ATradingAirplane:ResetAirplane() end
---@return FGeneratedLootInfo
function ATradingAirplane:RandomGraditudeItem() end
function ATradingAirplane:RandomColors() end
function ATradingAirplane:PilotUnMounted() end
function ATradingAirplane:OnAirportSandstormStarted() end
---@param RandomCharacter TSoftClassPtr<APilotCharacter>
---@param RandomHair TSoftObjectPtr<USkeletalMesh>
---@param RandomBeard TSoftObjectPtr<USkeletalMesh>
---@param PilotGender ENPCGender
---@param NewValue EMontagePilotState
function ATradingAirplane:LoadPilot(RandomCharacter, RandomHair, RandomBeard, PilotGender, NewValue) end
---@return int32
function ATradingAirplane:GetTradeTryTut() end
---@return float
function ATradingAirplane:GetTotalPlayerTradeValue() end
---@return float
function ATradingAirplane:GetTotalPilotTradeValue() end
---@return int32
function ATradingAirplane:GetTimeToTakeOff() end
---@return TArray<ETradingSkill>
function ATradingAirplane:GetSkillsUsed() end
---@return ERunway
function ATradingAirplane:GetRunway() end
---@return APilotCharacter
function ATradingAirplane:GetPilot() end
---@return TArray<FGeneratedItem>
function ATradingAirplane:GetPickedPlayerItems() end
---@return TArray<FGeneratedItem>
function ATradingAirplane:GetPickedPilotItems() end
---@return float
function ATradingAirplane:GetLastPlayerTradeValue() end
---@return float
function ATradingAirplane:GetLastPilotTradeValue() end
---@return boolean
function ATradingAirplane:GetIsSameOffer() end
---@return ETradingBoosts
function ATradingAirplane:GetIsAffectedByTradingBoost() end
---@return float
function ATradingAirplane:GetImpatienceMeter() end
---@return TArray<FGeneratedLootInfo>
function ATradingAirplane:GetGeneratedItemsForSell() end
---@return TArray<FGeneratedLootInfo>
function ATradingAirplane:GetGeneratedItemsForBuy() end
---@return TArray<FDeniedTradeOffer>
function ATradingAirplane:GetDeniedTradeOffers() end
---@return ECurrentStatus
function ATradingAirplane:GetCurrentStatus() end
---@return ECountryOfOrigin
function ATradingAirplane:GetCountryOfOrigin() end
---@return UStaticMeshComponent
function ATradingAirplane:GetCountryFlagMesh() end
---@return boolean
function ATradingAirplane:GetCanInteract() end
---@return FString
function ATradingAirplane:GetCallSign() end
---@return UInventoryComponent
function ATradingAirplane:GetBoughtItems() end
---@param FlagMaterial TSoftObjectPtr<UMaterialInstance>
function ATradingAirplane:CheckIfLoadedCountryFlagMaterial(FlagMaterial) end
---@param NewValue ETradingSkill
function ATradingAirplane:AddUsedSkill(NewValue) end


---@class ATrapDoor : AActor
---@field MainMesh UStaticMeshComponent
---@field TeleportTransform FTransform
---@field OnTriedToTeleport FTrapDoorOnTriedToTeleport
local ATrapDoor = {}

function ATrapDoor:TryTeleport() end
function ATrapDoor:PlayParticle() end
function ATrapDoor:OnCantTeleport() end
---@return boolean
function ATrapDoor:CanTeleport() end


---@class ATrashBin : AInteractableBuilding
---@field CurrentCapacity float
---@field SingleTrashMax float
---@field MaxCapacity float
---@field bIsFullTrashBin boolean
local ATrashBin = {}

---@param TrashCapacity float
---@param TrashBinCapacityInPercent float
---@param IgnoreLimit boolean
---@return boolean
function ATrashBin:UpdateTrashBinCapacity(TrashCapacity, TrashBinCapacityInPercent, IgnoreLimit) end
---@param Product AProduct
function ATrashBin:UpdateThrowDistance(Product) end
---@param TrashCapacity float
---@param TrashBinCapacityInPercent float
function ATrashBin:OnTrashBinCapacityUpdated(TrashCapacity, TrashBinCapacityInPercent) end
function ATrashBin:EmptyTrash() end


---@class ATrashItemBase : AProduct
---@field SphereOverlap USphereComponent
---@field bTrashFinalProduct boolean
---@field ImpactSoundTreshold float
---@field TrashMesh TSoftObjectPtr<UStaticMesh>
---@field bBeingCleaned boolean
local ATrashItemBase = {}

function ATrashItemBase:TrashMeshLoaded() end
---@param DestroyDelay float
function ATrashItemBase:TimedDestroyTrash(DestroyDelay) end
---@param bNewCleaned boolean
function ATrashItemBase:SetBeingCleaned(bNewCleaned) end
function ATrashItemBase:SendGoogleAnalyticsDataAboutTrashClear() end
---@return boolean
function ATrashItemBase:GetBeingCleaned() end


---@class ATrashShredder : AActor
---@field ShredderMesh UStaticMeshComponent
---@field TargetSpot USceneComponent
---@field PullTrashBoxArea UBoxComponent
---@field DeleteTrashBoxArea UBoxComponent
---@field TrashClass TSubclassOf<AActor>
---@field StartVelocity FVector
---@field GravityScale float
---@field Acceleration float
local ATrashShredder = {}

function ATrashShredder:PullTrash() end
---@param OverlappedComp UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ATrashShredder:OnDeleteBoxBeginOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
function ATrashShredder:OnButtonPress() end
function ATrashShredder:DestroyNotPulledTrash() end


---@class ATutorialVolume : AVolume
---@field TutorialToShow EGameActivityType
---@field TutorialTag FGameplayTag
---@field TutorialGameplayTag FGameplayTag
---@field OverlapActivateTag FGameplayTag
---@field ShowOnce boolean
---@field ShowOnEnter boolean
---@field WidgetClassToCreateOnOverlap TSubclassOf<UMinigameTutorialWidget>
---@field TutorialWidgetRef UMinigameTutorialWidget
local ATutorialVolume = {}

---@param OverlappedActor AActor
---@param OtherActor AActor
function ATutorialVolume:OnOverlapEnd(OverlappedActor, OtherActor) end
---@param OverlappedActor AActor
---@param OtherActor AActor
function ATutorialVolume:OnOverlapBegin(OverlappedActor, OtherActor) end


---@class AUIQuickAccess : AActor
---@field OverlayWidgetRef UUserWidget
---@field NotificationWidgetRef UUserWidget
---@field InteractionWidgetRef UUserWidget
local AUIQuickAccess = {}



---@class AUnlimitedPathPoint : APathPoint
local AUnlimitedPathPoint = {}


---@class AUpgradeStationCamera : ACameraUnlockBase
---@field UpgradingMaps TArray<FUpgradingMap>
---@field OnUpgradingProcessFinished FUpgradeStationCameraOnUpgradingProcessFinished
local AUpgradeStationCamera = {}

---@param MapName FName
---@param EnablePostprocess boolean
function AUpgradeStationCamera:UnblockMap(MapName, EnablePostprocess) end
---@param MapName FName
function AUpgradeStationCamera:TryUnlockPathPoints(MapName) end
---@param MapName FName
---@param bIsExtraFeature boolean
---@param bIsUnlocked boolean
---@param MinGasStationLvLToUnblock int32
function AUpgradeStationCamera:GetUnlockMapInfo(MapName, bIsExtraFeature, bIsUnlocked, MinGasStationLvLToUnblock) end
---@param bIsMaxUpgraded boolean
---@param MinGasStationLvLToUnblock int32
---@param RequiredDLCName EDLCName
---@param UpgradeActorTag FName
---@return FUpgradingMap
function AUpgradeStationCamera:GetNextUpgradedMapToUnlock(bIsMaxUpgraded, MinGasStationLvLToUnblock, RequiredDLCName, UpgradeActorTag) end
---@param MapName FName
---@return FUpgradingMap
function AUpgradeStationCamera:GetMapToUpgrade(MapName) end
---@return TArray<FUpgradingMap>
function AUpgradeStationCamera:GetMapsToUnblock() end
---@param DestroyedActor AActor
function AUpgradeStationCamera:DestroyRuin(DestroyedActor) end


---@class AVacuumGun : AKeyItem
---@field SkeletalMesh USkeletalMeshComponent
---@field ProjectilesSpawnPoint USceneComponent
---@field FireAudioComponent UAudioComponent
local AVacuumGun = {}



---@class AVacuumProjectile : AActor
---@field ProjectileMesh UStaticMeshComponent
---@field MovementComponent UProjectileMovementComponent
---@field PullTrashSphereArea USphereComponent
---@field TrashClass TSubclassOf<AActor>
---@field HomingTarget USceneComponent
---@field StartVelocity FVector
---@field GravityScale float
---@field Acceleration float
---@field TrashDestroyDistance float
---@field TrashDestroyPercentage float
---@field DestroyedTrashCounter float
---@field bTrashBinEmptied boolean
---@field bDirtyActorCleaned boolean
---@field PulledItems TArray<FPulledTrashItem>
---@field FlyAudioComponent UAudioComponent
---@field HitAudioComponent UAudioComponent
local AVacuumProjectile = {}

function AVacuumProjectile:PullTrash() end
function AVacuumProjectile:DestroyTrashNotCloseEnough() end


---@class AVehiclePart : AProduct
---@field RequirmentVehiclePartToFix TSubclassOf<AVehiclePart>
---@field bNeedsFixing boolean
---@field bIsBroken boolean
---@field TimeToRepair float
---@field bReplacementFailed boolean
---@field IsAcumulatorVehiclePart boolean
local AVehiclePart = {}

---@param Broken boolean
---@param WasFixedSuccessfully boolean
function AVehiclePart:UpdateVehiclePart(Broken, WasFixedSuccessfully) end
---@param ChanceToBroke float
---@param RequirmentGarageLevel int32
---@return boolean
function AVehiclePart:TryBroke(ChanceToBroke, RequirmentGarageLevel) end
---@param Pawn APawn
---@param Success boolean
---@param FailReason FString
function AVehiclePart:StartVehicleMinigame(Pawn, Success, FailReason) end
---@return boolean
function AVehiclePart:PlayerHasCompatibileItem() end
---@return boolean
function AVehiclePart:IsConnectedToVehicle() end
---@param Enabled boolean
function AVehiclePart:InteractMode(Enabled) end
---@return AActor
function AVehiclePart:GetOwnerWaterVehicle() end
---@return AGSSWheeledVehicle
function AVehiclePart:GetOwnerVehicle() end
---@return AActor
function AVehiclePart:GetOwnerFlyingVehicle() end
---@param NewGSSWheeledVehicle AGSSWheeledVehicle
---@return boolean
function AVehiclePart:ConnectToVehicle(NewGSSWheeledVehicle) end


---@class AVolcano : AActor
---@field Anger EChunchumanchuAnger
---@field bErupting boolean
---@field CurrentEruptionTime float
local AVolcano = {}

function AVolcano:ReloadVolcano() end


---@class AWC : AInteractableBuilding
local AWC = {}


---@class AWashableCamperMesh : AWashableCarMesh
---@field StainSlots TArray<UCamperStainSlot>
---@field DesiredStainsAmount int32
---@field StainsClasses TArray<TSoftClassPtr<ACamperStainActor>>
local AWashableCamperMesh = {}



---@class AWashableCarMesh : AActor
---@field OnReachedWashTarget FWashableCarMeshOnReachedWashTarget
---@field CarColor FLinearColor
---@field RandomCoatVal float
---@field RenderTargetData UWashRenderTargetData
---@field CarWashMesh UStaticMeshComponent
---@field LowResDirtMapCaptureComponent USceneCaptureComponent2D
---@field LowResDirtMapPlane UStaticMeshComponent
---@field CheckWashProgressResolution int32
---@field CarWashPercentTarget float
---@field WashProgressCheckSecondsInterval float
---@field bUseCachedMainMaterialOnStartWashing boolean
---@field CachedMainMaterial UMaterialInterface
---@field DynamicMaterialForWashing UMaterialInstanceDynamic
---@field DynamicMaterialForCalculating UMaterialInstanceDynamic
---@field DynamicBrushMaterialInstance UMaterialInstanceDynamic
---@field DynamicBrushMaterialInstance1 UMaterialInstanceDynamic
---@field DynamicBrushMaterialInstance2 UMaterialInstanceDynamic
---@field DynamicBrushMaterialInstance3 UMaterialInstanceDynamic
---@field DynamicBrushMaterialInstance4 UMaterialInstanceDynamic
---@field DynamicBrushMaterialInstance5 UMaterialInstanceDynamic
---@field DynamicBrushMaterialInstance6 UMaterialInstanceDynamic
---@field DynamicBrushMaterialInstance7 UMaterialInstanceDynamic
---@field DynamicBrushMaterialInstance8 UMaterialInstanceDynamic
---@field DynamicBrushMaterialInstance9 UMaterialInstanceDynamic
---@field MainMaterialIndex int32
---@field DynamicBrushMaterialTemp UMaterialInstanceDynamic
---@field TimeSinceCheck float
local AWashableCarMesh = {}

---@return float
function AWashableCarMesh:GetWashProgress() end
---@return UMaterialInstanceDynamic
function AWashableCarMesh:GetWashedMaterial() end
---@return int32
function AWashableCarMesh:GetMainMaterialIndex() end
---@return UMaterialInterface
function AWashableCarMesh:GetMainMaterial() end
---@return UStaticMeshComponent
function AWashableCarMesh:GetCarWashMesh() end
---@return UMaterialInterface
function AWashableCarMesh:GetCachedMainMaterial() end
function AWashableCarMesh:CalculateWashProgress() end
---@param WashUvs TArray<FVector2D>
function AWashableCarMesh:ApplyBrushWashes(WashUvs) end


---@class AWaterMovementPoint : AActor
---@field OnWaterVehicleArrived FWaterMovementPointOnWaterVehicleArrived
---@field OnWaterVehicleGotHome FWaterMovementPointOnWaterVehicleGotHome
---@field arrow UArrowComponent
---@field CurrentVehicle AActor
---@field bReserved boolean
---@field IsFuelStationStop boolean
---@field InteractableActor AActor
local AWaterMovementPoint = {}

---@param NewValue boolean
function AWaterMovementPoint:SetIsReserved(NewValue) end
---@param NewVehicle AActor
function AWaterMovementPoint:SetCurrentVehicle(NewVehicle) end
---@param ReserverVehicle AActor
function AWaterMovementPoint:Reserve(ReserverVehicle) end
---@param ReserverVehicle AActor
function AWaterMovementPoint:OnReserverDestroyed(ReserverVehicle) end
---@return boolean
function AWaterMovementPoint:GetIsReserved() end
---@return AActor
function AWaterMovementPoint:GetCurrentVehicle() end
function AWaterMovementPoint:Free() end


---@class AWaterVehicle : AActor
---@field bIsComingIn boolean
---@field OriginSpawner AActor
---@field ItemInventory UInventoryComponent
---@field DeliveryCategory ECategoryFilter
---@field WaterMovmentComponentClass TSubclassOf<UWaterMovementComponent>
---@field bCanStartFueling boolean
---@field bCreatedFuelNotification boolean
---@field bCreatedNotificationInBlueprint boolean
---@field bIsWaterCustomer boolean
---@field bIsJetSki boolean
---@field VolcanoAngerOnDeath int32
---@field bIsManualCharSetUp boolean
---@field bAutoConstruct boolean
---@field bAllPassengersLeft boolean
---@field SkeletalMesh USkeletalMeshComponent
---@field StaticMesh UStaticMeshComponent
---@field ObstacleDetectionCollision USphereComponent
---@field NPCPosition UArrowComponent
---@field WaterMovementComponent UWaterMovementComponent
---@field NPCInvis USkeletalMeshComponent
---@field NPCHead USkeletalMeshComponent
---@field NPCUpperBody USkeletalMeshComponent
---@field NPCLowerBody USkeletalMeshComponent
---@field NPCLowerLegs USkeletalMeshComponent
---@field NPCLowerArms USkeletalMeshComponent
---@field NPCHair USkeletalMeshComponent
---@field NPCBeard USkeletalMeshComponent
---@field DriverNPC ACharacter
---@field HasFuelEnterComponent boolean
---@field SharkAttackOffset FVector
---@field SharkAttackRotation FRotator
---@field SharkAttackArrow UArrowComponent
---@field bCanTakeDamage boolean
---@field Health float
---@field DeathDespawnTime float
---@field bIsIndicator boolean
---@field GoalFuelStationActor AActor
---@field WetSuitColors TArray<FWetSuitColors>
---@field bSharkVictim boolean
---@field bIsDead boolean
---@field HitSound USoundBase
---@field DeathSound USoundBase
---@field bWaitingForSharkAppearing boolean
---@field FuelEnterComp UChildActorComponent
local AWaterVehicle = {}

function AWaterVehicle:Sound_OnDeath() end
function AWaterVehicle:Sound_OnDamageDealt() end
---@param bShowNotification boolean
function AWaterVehicle:ShowNotification(bShowNotification) end
---@param NewValue boolean
function AWaterVehicle:SetIsWaitingForSharkAppearing(NewValue) end
---@param NewValue boolean
function AWaterVehicle:SetIsSharkVictim(NewValue) end
---@param NewValue float
function AWaterVehicle:SetHealth(NewValue) end
---@param NewDriverNPC ACharacter
function AWaterVehicle:SetDriverNPC(NewDriverNPC) end
---@return int32
function AWaterVehicle:RandomWetSuitColorsSet() end
function AWaterVehicle:OnVolcanoEruption() end
function AWaterVehicle:OnUfoReset() end
---@param TaskResult ETaskResult
function AWaterVehicle:OnTaskCompleted(TaskResult) end
function AWaterVehicle:OnStationClosed() end
---@param OverlappedComp UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function AWaterVehicle:OnObstacleDetectionCollisionOverlapEnd(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex) end
---@param OverlappedComp UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AWaterVehicle:OnObstacleDetectionCollisionOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param GoalTargetActor AActor
function AWaterVehicle:OnFinishMoving(GoalTargetActor) end
function AWaterVehicle:OnDeath() end
---@param Damage float
function AWaterVehicle:OnDamageDealt(Damage) end
function AWaterVehicle:OnBeginGoingHome() end
---@return UWaterMovementComponent
function AWaterVehicle:GetWaterMovementComponent() end
---@return UStaticMeshComponent
function AWaterVehicle:GetStaticMesh() end
---@return USkeletalMeshComponent
function AWaterVehicle:GetSkeletalMesh() end
---@return boolean
function AWaterVehicle:GetIsWaitingForSharkAppearing() end
---@return boolean
function AWaterVehicle:GetIsSharkVictim() end
---@return float
function AWaterVehicle:GetHealth() end
---@return AFuelPistolMagazineBase
function AWaterVehicle:GetFuelPistolMagazine() end
---@return ACharacter
function AWaterVehicle:GetDriverNPC() end
function AWaterVehicle:ConstructCharacter() end


---@class AWaterVehicleSpawner : AActor
---@field arrow UArrowComponent
---@field VehicleClassToSpawn TSoftClassPtr<AWaterVehicle>
---@field SpawnedActor AWaterVehicle
---@field TargetPoints TArray<AActor>
---@field Home AActor
---@field HomeTargetPoints TArray<AActor>
---@field bUseSpawnMontage boolean
---@field bUseDeSpawnMontage boolean
---@field SingleMoveTo boolean
---@field VariableTarget AActor
local AWaterVehicleSpawner = {}

---@param WatervehicleClass TSoftClassPtr<AWaterVehicle>
function AWaterVehicleSpawner:SpawnWaterVehicleSoft(WatervehicleClass) end
---@param SpawnData FWaterVehicleSpawnData
function AWaterVehicleSpawner:SpawnWaterVehicle(SpawnData) end
function AWaterVehicleSpawner:SpawnDefaultWaterVehicle() end
---@param NewSpawnedActor AWaterVehicle
function AWaterVehicleSpawner:SetSpawnedActor(NewSpawnedActor) end
---@return AWaterVehicle
function AWaterVehicleSpawner:GetSpawnedActor() end
---@return TArray<AActor>
function AWaterVehicleSpawner:GetHomeTargetPoints() end


---@class AWebSpawner : AActor
---@field RequiredLevelMap TArray<FSpiderWebPosition>
---@field SpawnedWebs TArray<ASpiderWebBase>
local AWebSpawner = {}

---@param InRequiredLevelMap TArray<FSpiderWebPosition>
function AWebSpawner:SetRequiredLevelMap(InRequiredLevelMap) end
---@param SpawnedWeb ASpiderWebBase
---@param bIsOccupied boolean
---@param Index int32
function AWebSpawner:SetArrayStructByIndex(SpawnedWeb, bIsOccupied, Index) end
function AWebSpawner:RemoveInvalidSpiderWebsFromArray() end
function AWebSpawner:OnLevelUpgraded() end
function AWebSpawner:OnGameLoaded() end
---@return TArray<ASpiderWebBase>
function AWebSpawner:GetSpawnedWebs() end
---@return TArray<FSpiderWebPosition>
function AWebSpawner:GetRequiredLevelMap() end
---@param ToAdd ASpiderWebBase
function AWebSpawner:AddToSpawnedWebs(ToAdd) end


---@class AWheel : AVehiclePart
---@field bIsScrewed boolean
---@field WheelSide EWheelSide_FourWheel
local AWheel = {}



---@class AWolf : AAnimalBase
---@field StartLocation FVector
local AWolf = {}

---@param Actors TArray<AActor>
---@param Instaginatorlocation FVector
---@param RangeAttack float
---@return AActor
function AWolf:FindEnemyByWolf(Actors, Instaginatorlocation, RangeAttack) end


---@class AWoodenLogForCutting : AActor
---@field DefaultSceneRoot USceneComponent
---@field WoodenLogMainMesh UStaticMeshComponent
---@field ProceduralMeshWoodenLog UProceduralMeshComponent
---@field ProceduralMeshToCutREF UProceduralMeshComponent
---@field OwnerREF ARvMinigameInWorldWoodChopping
---@field GameDifficulty EGuestServiceDifficulty
---@field WoodChoppingSettings UWoodChoppingSettings
local AWoodenLogForCutting = {}



---@class AWorkshopRoof : AActor
---@field Root USceneComponent
---@field MainMesh UStaticMeshComponent
---@field OpenedMeshPositionArrow UArrowComponent
---@field AssignedPlatform TSoftObjectPtr<ACarWreckPlaceableArea>
---@field AssignedPlatformResolved ACarWreckPlaceableArea
---@field DistanceFromMagnetToOpen float
---@field OpeningSpeedCurve UCurveFloat
---@field ClosedMeshPosition FVector
---@field OpenedMeshPosition FVector
---@field bIsOpen boolean
---@field bIsMoving boolean
---@field bIsClosingOnExit boolean
---@field OpenPercentage float
---@field JunkyardManager AJunkyardManager
local AWorkshopRoof = {}

function AWorkshopRoof:UpdateRoofPosition() end
function AWorkshopRoof:OpenRoof() end
function AWorkshopRoof:OnRoofStartedMoving() end
function AWorkshopRoof:OnRoofFinishedMoving() end
---@param ExitedyPlayer boolean
function AWorkshopRoof:OnCraneExited(ExitedyPlayer) end
---@param EnteredByPlayer boolean
function AWorkshopRoof:OnCraneEntered(EnteredByPlayer) end
---@return boolean
function AWorkshopRoof:IsOpen() end
function AWorkshopRoof:CloseRoof() end


---@class AWreckDeliveryRelaxSpot : AInteractableBuilding
local AWreckDeliveryRelaxSpot = {}


---@class AWrecksSpot : AInteractableBuilding
local AWrecksSpot = {}


---@class AWrecksSpotSlot : ACarWreckPlaceableArea
local AWrecksSpotSlot = {}


---@class FAICharacterStruct
---@field CharacterGender ECharacterGender
---@field MovementGroundType EMovementGroundType
---@field Name FName
---@field Description FText
---@field Texture UTexture2D
---@field SpecialCharacterType ESpecialCharacterType
---@field CharacterTraits FGameplayTagContainer
local FAICharacterStruct = {}



---@class FAccentConnection
---@field NPCGender ENPCGender
---@field NPCAccent ENPCAccent
---@field DialogueGraph UDialogueGraph
local FAccentConnection = {}



---@class FAchievementRow : FTableRowBase
---@field AchievementStub FName
---@field AchievementType EAchievementType
---@field StatType EGSS_Stat
---@field ValueNeeded float
---@field ValueHave float
---@field AchievementName FText
---@field AchievementDescription FText
---@field AchievementIcon UTexture2D
---@field AchievementIconLocked UTexture2D
---@field bIsHidden boolean
---@field DlcRequired EDLCName
local FAchievementRow = {}



---@class FAchievementValue
---@field Achievement FName
---@field bObtained boolean
local FAchievementValue = {}



---@class FAction
---@field RequiredItem TSoftClassPtr<AItem>
---@field Prefix EInteractionPrefix
---@field Sofix EInteractionSofix
---@field Button EInteractionButton
---@field UniqueRowIndex int32
---@field Icon UTexture2D
---@field ActionKeyName FName
---@field Quest TSoftClassPtr<UGSSQuest>
---@field Mode int32
---@field RequiredUnlockedTag FGameplayTag
---@field QuestStateType EQuestStateType
---@field IgnorePlayerHandleItem boolean
---@field bShowActionProgressBar boolean
local FAction = {}



---@class FActorWithBuilding
---@field Actor TSoftObjectPtr<AActor>
---@field ClassFilter TArray<TSubclassOf<AInteractableBuilding>>
local FActorWithBuilding = {}



---@class FAdditionalUpgrades : FTableRowBase
---@field FeatureUpgrade UFeatureUpgrade
---@field DlcRequired TArray<EDLCName>
local FAdditionalUpgrades = {}



---@class FAdditionalWidget
---@field WidgetOverride TSoftClassPtr<UGSSBaseWidget>
---@field ActorRequiredToClick TSoftClassPtr<AActor>
---@field UniqueRowIndex int32
local FAdditionalWidget = {}



---@class FAdvertIcon
---@field Image FString
---@field mask FString
local FAdvertIcon = {}



---@class FAdvertNews
---@field Icon FAdvertIcon
---@field URL FString
---@field ButtonText FString
---@field BackgroundImage FString
---@field Niagara FAdvertNiagara
---@field Date FDateTime
---@field OpenAutomaticallyDays int32
local FAdvertNews = {}



---@class FAdvertNiagara
---@field bEnabled boolean
---@field SpriteMask FString
---@field Color1 FColor
---@field Color2 FColor
local FAdvertNiagara = {}



---@class FAirplanesDataRow : FTableRowBase
---@field CountryOfOrigin ECountryOfOrigin
---@field CountryShortCut FString
---@field Cargo FCargo
---@field RunwayLevelActor int32
local FAirplanesDataRow = {}



---@class FAirportSlotStruct
---@field ItemClass TSubclassOf<AItem>
---@field QuantityItem int32
local FAirportSlotStruct = {}



---@class FAllPlayerOrders
---@field ProductsOrders TArray<FPlayerListOfOrdersM>
---@field CarPartsOrders TArray<FPlayerListOfOrdersM>
---@field IceCreamOrders TArray<FPlayerListOfOrdersM>
---@field PreviousProductsOrders FPlayerListOfOrdersM
---@field PreviousCarPartsOrders FPlayerListOfOrdersM
---@field PreviousIceCreamsOrders FPlayerListOfOrdersM
local FAllPlayerOrders = {}



---@class FAssignedTasksInfo
---@field TaskType EEmployeeTask
---@field Task TSoftClassPtr<UEmployeeTask>
---@field bTaskActive boolean
---@field TargetActors TArray<TSoftObjectPtr<AInteractableBuilding>>
---@field TargetActorsPathNames TArray<FString>
local FAssignedTasksInfo = {}



---@class FAvailableFeature
---@field FeatureUpgrade UFeatureUpgrade
---@field bIsAvailable boolean
local FAvailableFeature = {}



---@class FBBQScore
---@field BBQItemClass TSubclassOf<ABBQItem>
---@field State EBBQItemState
---@field Score int32
local FBBQScore = {}



---@class FBBQSettingsPerDifficulty
---@field Difficulty EGuestServiceDifficulty
---@field TotalItemsCount FInt32Range
---@field Items TArray<TSoftClassPtr<ABBQItem>>
---@field PerfectStateThreshold float
---@field MoveToCookingSpotCooldown float
---@field CookingGridHeight int32
---@field CookingGridWidth int32
---@field AllowedMistakes int32
---@field CooldownBonusPerMistake TMap<int32, float>
---@field CookingSpeedOnGamepad float
local FBBQSettingsPerDifficulty = {}



---@class FBBQSlotConfig
---@field Transform FTransform
---@field GridPosition FIntVector
local FBBQSlotConfig = {}



---@class FBaseCharacterSkeletonMontage
---@field Mesh USkeleton
---@field Gender ECharacterGender
---@field MontageToPlay UAnimMontage
---@field TagMontage FGameplayTag
local FBaseCharacterSkeletonMontage = {}



---@class FBaseTrustPointPerService
---@field ServiceTag FGameplayTag
---@field TrustPointsEasy int32
---@field TrustPointsMedium int32
---@field TrustPointsHard int32
local FBaseTrustPointPerService = {}



---@class FBasketBasicInfo
---@field StateLevel int32
---@field ContractTier EJunkyardPartRarity
---@field StateDifficulty EContractDifficulty
local FBasketBasicInfo = {}



---@class FBasketItemStruct
---@field ItemToAdd TSoftClassPtr<AItem>
---@field Quantity int32
---@field RestockAmount int32
---@field ItemName FText
---@field Price float
---@field Icon UTexture2D
---@field SlotMainCategory ECategoryFilter
---@field SubCategory EItemTypeCategory
---@field DataTableItemName FName
local FBasketItemStruct = {}



---@class FBindingRow : FTableRowBase
---@field ItemClass TSoftClassPtr<AActor>
---@field MainKeyItemWidget TSoftClassPtr<UAdditionalKeyItemWidget>
---@field Actions TArray<FKeyItemAction>
---@field bHasTutorial boolean
local FBindingRow = {}



---@class FBiomCustomizationCategory
---@field CustomizationCategory UCustomizationCategory
---@field GasStationLevelRequiredToUnlock int32
local FBiomCustomizationCategory = {}



---@class FBrokenMirrorSet
---@field BrokenMirrorSet TArray<UStaticMesh>
local FBrokenMirrorSet = {}



---@class FCamperStruct
---@field Icon TSoftObjectPtr<UTexture2D>
---@field EmployeeHomeLevelName FName
---@field RequiredCentralShopLevel int32
---@field LevelSequenceToPlay ULevelSequence
local FCamperStruct = {}



---@class FCamperWashingSettingsPerDifficulty
---@field Difficulty EGuestServiceDifficulty
---@field StainsCount FInt32Range
---@field CleaningSolutionTriggerDuration float
---@field EcoBonus float
local FCamperWashingSettingsPerDifficulty = {}



---@class FCarPaintColor : FTableRowBase
---@field Icon TSoftObjectPtr<UTexture2D>
---@field LinearColor FLinearColor
---@field RequiredTag FGameplayTag
---@field ColorName FText
---@field bNoColor boolean
local FCarPaintColor = {}



---@class FCarPaintData
---@field CurrentPaintData FSavedCarPaint
---@field PlannedPaintData FSavedCarPaint
---@field CustomizableMaterial UMaterialInstanceDynamic
---@field bPaintChanged boolean
local FCarPaintData = {}



---@class FCarPaintDataRow : FTableRowBase
---@field Icon TSoftObjectPtr<UMaterialInterface>
---@field PaintType ECustomizationPaintType
---@field bCarbonFiber boolean
---@field bChameleon boolean
---@field bDamascus boolean
---@field bMatte boolean
---@field RequiredTag FGameplayTag
local FCarPaintDataRow = {}



---@class FCarPartAdditionalDataPerType
---@field SocketName FName
---@field SecondaryCarPartsToSpawn TArray<TSubclassOf<UJunkyardCarPartBase>>
local FCarPartAdditionalDataPerType = {}



---@class FCarPartBasicInformation : FTableRowBase
---@field PossibleCarPartTypes TArray<EJunkyardCarPartType>
---@field bGarage boolean
---@field CarPartName FText
---@field Icon TSoftObjectPtr<UTexture2D>
---@field CleanedIcon TSoftObjectPtr<UTexture2D>
---@field PartClass TSoftClassPtr<UActorComponent>
---@field BasePrice float
---@field PartVariants TArray<FName>
local FCarPartBasicInformation = {}



---@class FCarPartData
---@field Acceleration float
---@field TopSpeed float
---@field Handling float
---@field Strength float
---@field DirtyPercentage float
---@field PartRarity EJunkyardPartRarity
local FCarPartData = {}



---@class FCarPartReward
---@field CarPartType EJunkyardCarPartType
---@field Reward FCarPartBasicInformation
---@field Tier EJunkyardPartRarity
---@field bUnlockedVisibility boolean
local FCarPartReward = {}



---@class FCarPartTierModels
---@field Tier EJunkyardPartRarity
---@field Model FName
local FCarPartTierModels = {}



---@class FCarPartTypeModels
---@field CarPartType EJunkyardCarPartType
---@field AvailableCarPartTiers TArray<FCarPartTierModels>
local FCarPartTypeModels = {}



---@class FCarPlannedPaint
---@field PaintType ECustomizationPaintType
---@field MaskType EFinishMaskType
---@field SelectedColorIndexes TArray<int32>
local FCarPlannedPaint = {}



---@class FCarStatArray
---@field Stats TArray<ECarPartStat>
local FCarStatArray = {}



---@class FCarWashDesignerSettings
---@field MaxWaterPressure float
---@field TrashSpawnEveryXPressureUsed float
local FCarWashDesignerSettings = {}



---@class FCarWreckParts
---@field CarType EJunkyardCarWreckType
---@field AvailableCarParts TArray<FCarPartTypeModels>
local FCarWreckParts = {}



---@class FCarWreckPartsBasket
---@field BasketBasicInfo FBasketBasicInfo
---@field CarWrecksPartsBaskets TArray<FCarPartTypeModels>
local FCarWreckPartsBasket = {}



---@class FCarWreckReward
---@field CarWreckType EJunkyardCarWreckType
---@field RewardCarName FText
---@field CarWreckReward TSoftClassPtr<AJunkyardCarWreck>
---@field Icon TSoftObjectPtr<UTexture2D>
---@field CarWreckTier EJunkyardPartRarity
---@field bUnlockedVisibility boolean
local FCarWreckReward = {}



---@class FCarWreckType
---@field CarWreck TSoftClassPtr<AJunkyardCarWreck>
---@field bCustomizable boolean
---@field Icon TSoftObjectPtr<UTexture2D>
---@field WreckName FText
---@field RequiredTag FGameplayTag
local FCarWreckType = {}



---@class FCarWreckTypeInfo
---@field CarWreckType EJunkyardCarWreckType
---@field CarWreck FCarWreckType
---@field Tiers TArray<EJunkyardPartRarity>
local FCarWreckTypeInfo = {}



---@class FCarWrecksBasket
---@field BasketBasicInfo FBasketBasicInfo
---@field CarWrecksBaskets TArray<FCarWreckTypeInfo>
local FCarWrecksBasket = {}



---@class FCarWrecksTierModels
---@field CarType EJunkyardCarWreckType
---@field Tier EJunkyardPartRarity
local FCarWrecksTierModels = {}



---@class FCargo
---@field CountrySpecific TArray<FItemRange>
---@field PlaneExclusives TArray<FItemRange>
local FCargo = {}



---@class FCargoRevealPercentage
---@field CurrentStageIndex int32
---@field CurrentStagePercentage float
---@field CargoBarPercentage float
local FCargoRevealPercentage = {}



---@class FCashShopProduct
---@field ProductClass TSubclassOf<AItem>
---@field ItemAmount int32
---@field ItemsScannedSuccessfully int32
local FCashShopProduct = {}



---@class FChanceTier
---@field Name FText
---@field MinRange float
---@field MaxRange float
local FChanceTier = {}



---@class FChangelogNews
---@field Title FString
---@field Text FString
---@field Image FString
---@field ButtonText FString
---@field ButtonURL FString
---@field NewsDate FDateTime
local FChangelogNews = {}



---@class FCharacterLookOverride
---@field Gender ECharacterGender
---@field Head FCharacterMeshOverride
---@field UpperBody FCharacterMeshOverride
---@field LowerBody FCharacterMeshOverride
---@field UpperLeg FCharacterMeshOverride
---@field LowerLeg FCharacterMeshOverride
---@field UpperArm FCharacterMeshOverride
---@field LowerArm FCharacterMeshOverride
---@field Hair FCharacterMeshOverride
---@field Beard FCharacterMeshOverride
---@field Accessories FCharacterMeshOverride
local FCharacterLookOverride = {}



---@class FCharacterMeshOverride
---@field bOverride boolean
---@field Mesh TSoftObjectPtr<USkeletalMesh>
local FCharacterMeshOverride = {}



---@class FCheatTeleportLocation : FTableRowBase
---@field Location FVector
local FCheatTeleportLocation = {}



---@class FChemicalSlot
---@field ItemIN FStorageCarPart
---@field SlotIndex int32
---@field IsSlotOccupied boolean
local FChemicalSlot = {}



---@class FChunchumanchuSavableWaterVehicle : FTableRowBase
---@field UniqueSaveIndexDoNotModify int32
---@field WaterVehicle TSoftClassPtr<AWaterVehicle>
local FChunchumanchuSavableWaterVehicle = {}



---@class FChunchumanchuWaterFuelCustomer : FTableRowBase
---@field WaterVehicle TSoftClassPtr<AWaterVehicle>
local FChunchumanchuWaterFuelCustomer = {}



---@class FCinemaParameters : FTableRowBase
---@field RenownPoints int32
local FCinemaParameters = {}



---@class FCleanLevel
---@field AlreadyChecked boolean
---@field TotalDecalsHit int32
---@field DecalsToSpread int32
---@field LimitAngry int32
local FCleanLevel = {}



---@class FCleanRange
---@field HouseDecalsTolerance int32
---@field ToiletDecalsTolerance int32
---@field ShowerDecalsTolerance int32
local FCleanRange = {}



---@class FCollisionSaveStruct
---@field Mesh UStaticMeshComponent
---@field Materials TArray<FMeshMaterialsStruct>
---@field CollisionEnabled ECollisionEnabled::Type
---@field CollisionProfileName FName
local FCollisionSaveStruct = {}



---@class FConcertDetails
---@field ConcertDisplayName FText
---@field ConcertIcon TSoftObjectPtr<UTexture2D>
---@field ConcertPoster TSoftObjectPtr<UTexture2D>
---@field ConcertBuildingLevelRequired int32
local FConcertDetails = {}



---@class FContainerTrash
---@field Container ATrashBin
---@field TrashAmount int32
local FContainerTrash = {}



---@class FContractCarPartRequirement
---@field CarPartModel TSoftClassPtr<UObject>
---@field Stats FCarPartData
local FContractCarPartRequirement = {}



---@class FContractSlot
---@field State EState
---@field Contract USpecialContract
local FContractSlot = {}



---@class FContractType
---@field ContractType EContractType
---@field ContractClassPtr TSoftClassPtr<UContractBase>
---@field MaxAvailableNumber int32
---@field DurationRange_Seconds FFloatRange
local FContractType = {}



---@class FCustomTextVar
---@field TextVariableName FString
---@field TextVariableType ECustomTextVariableType
local FCustomTextVar = {}



---@class FCustomerShopTask
---@field TaskReference TSubclassOf<UTaskBase>
---@field PercentageChance float
local FCustomerShopTask = {}



---@class FCustomerSpawnInfo
---@field ServiceTag FGameplayTag
---@field MainTask EInteractableTaskType
local FCustomerSpawnInfo = {}



---@class FCustomizationContractChancesBasket
---@field OfficeLevel int32
---@field Chances TArray<boolean>
local FCustomizationContractChancesBasket = {}



---@class FCustomizationPart
---@field StaticMesh TSoftObjectPtr<UStaticMesh>
---@field MaterialInstance TSoftObjectPtr<UMaterialInstance>
---@field bCanBeOneSided boolean
---@field Name FText
---@field StructureType EStructureType
---@field ItemIcon TSoftObjectPtr<UTexture2D>
---@field Price int32
---@field RoofLevel TArray<FRoofLevel>
---@field bIsRoofPaintable boolean
local FCustomizationPart = {}



---@class FCustomizationRequirementsSettings
---@field bRequiresCarWreckClass boolean
---@field PossibleWrecks TArray<EJunkyardCarWreckType>
---@field bRequiresCarWreckTier boolean
---@field CarWreckTier TArray<EJunkyardPartRarity>
---@field bRequiresGears boolean
---@field RequiredStats TArray<ECarPartStat>
---@field GearsNumber FFloatRange
---@field GearScoreFractionValue float
---@field bRequiresCarPartClass boolean
---@field bRequiresCarPartTier boolean
---@field PartTiers TArray<EJunkyardPartRarity>
---@field bRequiresDecals boolean
---@field DecalsNumber FInt32Range
---@field DecalNumberExact int32
---@field PossibleDecals TArray<FName>
---@field bRequiresPaintType boolean
---@field PossiblePaintTypes TArray<ECustomizationPaintType>
---@field bRequiresColor boolean
---@field PossibleColors TArray<FName>
---@field bRequiresPaintFinish boolean
---@field PossiblePaintMasks TArray<EFinishMaskType>
local FCustomizationRequirementsSettings = {}



---@class FCustomizationTagAndIcon
---@field UnlockTag FGameplayTag
---@field Icon TSoftObjectPtr<UTexture2D>
local FCustomizationTagAndIcon = {}



---@class FDLCNews
---@field Name FString
---@field bReleased boolean
---@field URL FString
---@field Image FString
---@field DLC EDLCName
local FDLCNews = {}



---@class FDeathChanceMultipliers
---@field MaxDurabilityValue float
---@field MinDurabilityValue float
---@field DeathChanceMultiplayer float
local FDeathChanceMultipliers = {}



---@class FDecalDataRow : FTableRowBase
---@field DecalsToPick TSoftClassPtr<ADecalToPaint>
---@field Price float
---@field DecalStationLevel EDecalStationLevel
---@field DecalUnlockType EDecalUnlockType
---@field DecalTexture TSoftObjectPtr<UMaterialInterface>
---@field DecalSize FVector
---@field DecalColor EDecalColor
---@field DecalFunctionality EDecaFunctionality
---@field PaintType ECustomizationPaintType
---@field bDoesNeedDLC boolean
---@field RequiredDlc EDLCName
---@field RequiredTag FGameplayTag
local FDecalDataRow = {}



---@class FDecorationMap
---@field Name FName
local FDecorationMap = {}



---@class FDecorationStruct
---@field ItemSoftClass TSoftClassPtr<AItem>
local FDecorationStruct = {}



---@class FDeliveryBoatToRespawn
---@field BoatClass TSoftClassPtr<AActor>
---@field DeliveryCategory ECategoryFilter
local FDeliveryBoatToRespawn = {}



---@class FDeniedTradeOffer
---@field DeniedPlayerItemsNames FString
---@field DeniedPilotItemsNames FString
---@field DeniedPickedPlayerItems TArray<FGeneratedItem>
---@field DeniedPickedPilotItems TArray<FGeneratedItem>
---@field DeniedPilotTradeValue float
---@field DeniedPlayerTradeValue float
---@field DeniedPilotItemsAmount int32
local FDeniedTradeOffer = {}



---@class FDeque
---@field Items TArray<int32>
local FDeque = {}



---@class FDetailedEconomyDayInfo
---@field YieldType EEconomyGeneralYieldType
---@field DetailedYieldType EEconomyDetailedYieldType
---@field Value float
---@field Amount float
---@field TypesInfo TMap<EItemTypeCategory, FDetailedTypeInfo>
---@field GrouppedTypeInfos TArray<FDetailedTypeInfo>
local FDetailedEconomyDayInfo = {}



---@class FDetailedItemInfo
---@field ItemName FText
---@field TotalAmount int32
---@field TotalValue float
---@field DataTableAssetName FName
local FDetailedItemInfo = {}



---@class FDetailedServiceQueueData
---@field ServiceTag FGameplayTag
---@field NumberOfPeopleInQueue int32
---@field NumberOfPeopleWaiting int32
---@field NumberOfPeopleOnTheirWay int32
local FDetailedServiceQueueData = {}



---@class FDetailedTypeInfo
---@field TypeCategory EItemTypeCategory
---@field Value float
---@field Amount float
---@field KeyName FText
---@field ItemsInfo TMap<FString, FDetailedItemInfo>
local FDetailedTypeInfo = {}



---@class FDetailedYieldTypeTextStruct
---@field DetailedYieldType EEconomyDetailedYieldType
---@field Text FText
local FDetailedYieldTypeTextStruct = {}



---@class FDialogue
---@field UniqueDialogueID int32
---@field bIsHidden boolean
local FDialogue = {}



---@class FDialogue3DStruct : FTableRowBase
---@field MaleDialog FText
---@field FemaleDialog FText
---@field MaleSound TSoftObjectPtr<USoundCue>
---@field FemaleSound TSoftObjectPtr<USoundCue>
local FDialogue3DStruct = {}



---@class FDialogueGraphOwner
---@field GraphReference TSoftObjectPtr<UDialogueGraph>
---@field GameplayGraphReference UDialogueGraph
local FDialogueGraphOwner = {}



---@class FDialogueGraphWithID
---@field DialogueGraph TSoftObjectPtr<UDialogueGraph>
---@field DialogueID int32
local FDialogueGraphWithID = {}



---@class FDialogueGraphWithIDCooldown
---@field DialogueGraphWithID FDialogueGraphWithID
---@field Cooldown float
local FDialogueGraphWithIDCooldown = {}



---@class FDialogueList
---@field IDs TArray<int32>
local FDialogueList = {}



---@class FDialogueQueueItem
---@field GraphReference UDialogueGraph
---@field NodeReference UDialogueNode
local FDialogueQueueItem = {}



---@class FDifferentColorCarParts
---@field CarParts TArray<EJunkyardCarPartType>
local FDifferentColorCarParts = {}



---@class FDifficultyDescription
---@field DifficultyImage TSoftObjectPtr<UTexture2D>
---@field DifficultyText FText
local FDifficultyDescription = {}



---@class FDishesData
---@field DishType EDishType
---@field DishItemClasses TArray<TSoftClassPtr<ADishItem>>
local FDishesData = {}



---@class FDishwashingSettingsPerDifficulty
---@field Difficulty EGuestServiceDifficulty
---@field DishTypes TSet<EDishType>
---@field TotalDishesCount FInt32Range
---@field EcoBonus float
---@field EcoPlusBonus float
---@field MaxWaterFlowDuration float
local FDishwashingSettingsPerDifficulty = {}



---@class FDrawnProduct
---@field ItemToPut FProductShopStruct
---@field AmountToPut int32
---@field ProductType FText
---@field PopularityToGet int32
local FDrawnProduct = {}



---@class FDumbbellSetup
---@field Weight float
---@field DumbbellItemSoftClass TSoftClassPtr<ADumbbellItem>
---@field Amount float
local FDumbbellSetup = {}



---@class FDumbbellsSettingsPerDifficulty
---@field Difficulty EGuestServiceDifficulty
---@field TotalWeight FInt32Range
---@field LookForWeightWithAmountOfSolutions FInt32Range
---@field GriffinWeights TArray<int32>
---@field bUseDifferentWeightsForGriffins boolean
---@field SolutionsToGenerate int32
---@field SolutionsComplexity float
---@field bForbideBiggerDumbbellsOnGriffin boolean
---@field TimeLimit float
---@field CooldownBonusPerTimeLeft TMap<float, float>
local FDumbbellsSettingsPerDifficulty = {}



---@class FDumbbellsSolution
---@field Setups TArray<FDumbbellSetup>
---@field MissingWeight float
local FDumbbellsSolution = {}



---@class FDurabilityLevelIcons
---@field DurabilityStateIcon TSoftObjectPtr<UTexture2D>
---@field DurabilityValue float
local FDurabilityLevelIcons = {}



---@class FEOSLeaderboardEntry
---@field GlobalRank int32
---@field PlayerId FString
---@field PlayerNickname FString
---@field Score int32
local FEOSLeaderboardEntry = {}



---@class FEconomyDayInfo
---@field Day int32
---@field YieldType EEconomyGeneralYieldType
---@field DailyOperations TMap<EEconomyDetailedYieldType, FDetailedEconomyDayInfo>
---@field TotalValue float
local FEconomyDayInfo = {}



---@class FEconomyProduct
---@field EconomyType EEconomyType
---@field ProductClass FString
---@field AmountBought int32
---@field AmountSold int32
---@field BuyValue float
---@field SellValue float
local FEconomyProduct = {}



---@class FEmployeeByName : FTableRowBase
---@field Employees TArray<TSoftClassPtr<AAICharacterBase>>
local FEmployeeByName = {}



---@class FEmployeeSkill
---@field EmployeeSkill EEmployeeSkill
---@field SkillLevel int32
---@field Experience float
---@field TotalWorkTime float
---@field TotalMoneyEarned float
---@field MoneyMultiply float
local FEmployeeSkill = {}



---@class FEmployeeStatByLevelStruct : FTableRowBase
---@field TimeReduction float
---@field HappyPercentChance float
---@field AngryPercentChance float
---@field ExtraMoneyMultipler float
---@field ExperienceToLevelUp float
local FEmployeeStatByLevelStruct = {}



---@class FEmployeeTaskInfo
---@field TaskName FText
---@field TaskEnum EEmployeeTask
---@field TaskSkillType EEmployeeSkill
---@field Task TSoftClassPtr<UEmployeeTask>
---@field TargetActor TSoftClassPtr<AInteractableActor>
---@field RegenerateEnergyPerMinute float
---@field MoneyPerMinute float
local FEmployeeTaskInfo = {}



---@class FEmptyCarPartData : FTableRowBase
---@field CarPartType EJunkyardCarPartType
---@field WreckType EJunkyardCarWreckType
---@field PartClass TSoftClassPtr<UJunkyardCarPartBase>
local FEmptyCarPartData = {}



---@class FEventMaps
---@field Name FName
---@field MapsInfo FMapsInfo
local FEventMaps = {}



---@class FEventProgress
---@field ObjectiveName FString
---@field CurProgress int32
---@field MaxProgress int32
local FEventProgress = {}



---@class FFameDecorationStruct
---@field ItemSoftClass TSoftClassPtr<AItem>
local FFameDecorationStruct = {}



---@class FFameLevelData
---@field ExperienceRequired int32
---@field Rewards TArray<FUnlockableByFameData>
local FFameLevelData = {}



---@class FFilterStruct
---@field Icon UTexture2D
---@field FilterType EItemTypeCategory
---@field RequiredMaps TArray<FString>
local FFilterStruct = {}



---@class FFloatTrafficImpact : FTableRowBase
---@field Value float
---@field Impact int32
local FFloatTrafficImpact = {}



---@class FFuelProduct
---@field Name FString
---@field AmountBought float
---@field AmountSold float
---@field BuyValue float
---@field SellValue float
local FFuelProduct = {}



---@class FFuelSellPriceData
---@field FuelType EFuelMagazine
---@field FuelSellPrice float
local FFuelSellPriceData = {}



---@class FGSSEventTime
---@field GSSEventClass TSubclassOf<UGSSEvent>
---@field bIsEventEnabled boolean
---@field CurrentTime FTimeStruct
---@field MaxTime FTimeStruct
---@field EventsProgress TArray<FEventProgress>
local FGSSEventTime = {}



---@class FGSSStatHolder
---@field StatType EGSS_Stat
---@field Amount float
local FGSSStatHolder = {}



---@class FGameActionStruct
---@field ActionType EGameAction
---@field DialogueTreeObject UDialogueGraph
---@field DialogueID int32
---@field TargetNPC TSoftObjectPtr<AGSSNPAICharacterBase>
---@field ConversationType ENPCConversationType
---@field QuestStateToSet EQuestState
---@field OverrideNPCSoundSource boolean
local FGameActionStruct = {}



---@class FGameStateSave
---@field KeyItems TArray<FProductShopStruct>
---@field Decorations TArray<FProductShopStruct>
---@field FoodsShop TArray<FProductShopStruct>
---@field AlcoholsShop TArray<FProductShopStruct>
---@field CiggaretShop TArray<FProductShopStruct>
---@field GlassesShop TArray<FProductShopStruct>
---@field SoftDrinksShop TArray<FProductShopStruct>
---@field IceCreamShop TArray<FProductShopStruct>
---@field PastriesShop TArray<FProductShopStruct>
---@field NewsPaperShop TArray<FProductShopStruct>
---@field ProductsPreset TArray<FOrderPreset>
---@field PartsPreset TArray<FOrderPreset>
---@field IceCreamPreset TArray<FOrderPreset>
---@field PreviousOrderProducts TArray<FBasketItemStruct>
---@field PreviousOrderParts TArray<FBasketItemStruct>
---@field PreviousOrderIceCreams TArray<FBasketItemStruct>
---@field TimeStruct FTimeStruct
---@field bGasStationEnabled boolean
---@field GSSQuests TArray<TSubclassOf<UGSSQuest>>
---@field GSSQuestsSoft TArray<FSoftObjectPath>
---@field FinishedGSSQuests TArray<TSubclassOf<UGSSQuest>>
---@field FinishedGSSQuestsSoft TArray<FSoftObjectPath>
---@field GSSEventsTime TArray<FGSSEventTime>
---@field QuestHistory TArray<FQuestHistory>
---@field SlotsMagazine TArray<FSlotStruct>
---@field FuelToDelivery float
---@field AirportFuelToDelivery float
---@field FuelBoardDisplayPrice float
---@field SlotsCarCare TArray<FSlotStruct>
---@field IceCreamStandInventory TArray<FSlotStruct>
---@field CarPartsInventory TArray<FSlotStruct>
---@field ProductsInventory TArray<FSlotStruct>
---@field JerryCanFuel float
---@field TrashBagCapacity float
---@field HappyAmount int32
---@field PopularityLevel int32
---@field Strike int32
---@field PreviousStrike int32
---@field LastDistance float
---@field ThrowDistanceRecord float
---@field FuelStrike int32
---@field FuelLast float
---@field NumberOfFuelRecords float
---@field MinFuelRecordVal float
---@field RepairGameStrike int32
---@field RepairGameLastResult float
---@field RepairGameBestResult float
---@field ShovelRecord int32
---@field CashMoney float
---@field FuelEarnedMoney float
---@field FuelSpendMoney float
---@field GarageMoney float
---@field LastDesertCarTime float
---@field BestDesertCarTime float
---@field CashStrikeCounter int32
---@field bVipEventsEnabled boolean
---@field GasStationSectionDetails TArray<FSavedGasStationSectionDetails>
---@field CurrentLotteryState eLotteryState
---@field CurrentLotteryPreset int32
---@field CurrentLotteryEarnings float
---@field CurrentLotteryTime int32
---@field CurrentNameIndex int32
local FGameStateSave = {}



---@class FGameStatus
---@field CleanLevel int32
---@field HappyAngryCount int32
local FGameStatus = {}



---@class FGamepadInformation
---@field TextVariableName FString
---@field GamepadButtonName FName
local FGamepadInformation = {}



---@class FGeneralTask
---@field InteractableTaskType EInteractableTaskType
---@field Task TSoftClassPtr<UIteractableActorTask>
local FGeneralTask = {}



---@class FGeneratedItem
---@field ItemName FText
---@field ItemIcon TSoftObjectPtr<UTexture2D>
---@field Item TSoftClassPtr<AItem>
---@field ActualAmount int32
---@field TradeValue float
---@field AffectedByTradingBoost ETradingBoosts
---@field ItemIndex int32
local FGeneratedItem = {}



---@class FGeneratedLootInfo
---@field GeneratedItem FGeneratedItem
---@field bIsVisible boolean
---@field IconVisibility EItemIconVisibility
local FGeneratedLootInfo = {}



---@class FGuestServiceData : FTableRowBase
---@field ServiceTag FGameplayTag
---@field ServiceName FText
---@field LocationType EGuestServiceLocationType
---@field ChanceToSpawn float
---@field MinigameWidget TSoftClassPtr<URvMinigameWidget>
---@field MinigameIcon TSoftObjectPtr<UTexture2D>
---@field MinigameCompletedIcon TSoftObjectPtr<UTexture2D>
---@field UpgradeCost FRVUpgradeCost
---@field ServiceIncome int32
local FGuestServiceData = {}



---@class FHappyAngryThreshold : FTableRowBase
---@field HappyThreshold int32
local FHappyAngryThreshold = {}



---@class FHelpStruct
---@field ItemClass TSoftClassPtr<AActor>
---@field Actions TArray<FAction>
local FHelpStruct = {}



---@class FHireableDriver
---@field DriverImage TSoftObjectPtr<UTexture2D>
---@field Name FName
---@field Experience int32
---@field OriginState EState
---@field StateLevelDependedData TMap<int32, FStateLevelDriverData>
---@field FailCounter int32
local FHireableDriver = {}



---@class FIceCreamCones
---@field ConeMeshes TSoftObjectPtr<UStaticMesh>
---@field ConeContainerMeshes TSoftObjectPtr<UStaticMesh>
local FIceCreamCones = {}



---@class FIceCreamInfo
---@field IceCreamTexture UTexture2D
---@field FlavourName FText
local FIceCreamInfo = {}



---@class FIceCreamOrders
---@field ConeSize EIceCreamConeSize
---@field Flavours TArray<EIceCreamFlavours>
local FIceCreamOrders = {}



---@class FIceCreamPadTargetStruct
---@field GamepadTarget FVector
---@field GamepadTargetType EIceCreamPadTargetType
---@field GamepadTargetSection EIceCreamPadTargetSection
local FIceCreamPadTargetStruct = {}



---@class FIceCreamStruct
---@field Category EItemTypeCategory
---@field ItemRef TSoftClassPtr<AItem>
local FIceCreamStruct = {}



---@class FInformation3DStruct : FTableRowBase
---@field Information FText
---@field Duration float
local FInformation3DStruct = {}



---@class FIntegerTafficImpact : FTableRowBase
---@field Value int32
---@field Impact int32
local FIntegerTafficImpact = {}



---@class FInteractionRow : FTableRowBase
---@field Actions TArray<FAction>
local FInteractionRow = {}



---@class FInteractionStruct
---@field Name FName
---@field TimeInteraction float
---@field Icon UTexture2D
---@field Description FText
local FInteractionStruct = {}



---@class FInventoriesAmount
---@field MainInventoryAmount int32
---@field AirportInventoryAmount int32
local FInventoriesAmount = {}



---@class FItemRange
---@field ItemName FText
---@field ItemIcon TSoftObjectPtr<UTexture2D>
---@field Item TSoftClassPtr<AItem>
---@field MinTradeValue float
---@field MaxTradeValue float
---@field MinItemNumber int32
---@field MaxItemNumber int32
---@field bExceptionalItem boolean
---@field GasStationLevelNeeded int32
local FItemRange = {}



---@class FItemStartStruct : FTableRowBase
---@field NameItem FName
---@field Price float
---@field Weight float
---@field Description FText
---@field RestockAmount int32
---@field RestockPrice float
---@field ProductBuyPriceCurve UCurveFloat
---@field ProductClassRef TSoftClassPtr<AProduct>
---@field bDontAllowMultiples boolean
local FItemStartStruct = {}



---@class FItemStruct
---@field Texture UTexture2D
---@field TextureFix UTexture2D
---@field Price float
---@field Name FText
---@field ItemSize float
---@field AdditionalOffset FVector
---@field Capacity int32
---@field Description FText
local FItemStruct = {}



---@class FItemTestStruct : FTableRowBase
---@field NameItem FName
---@field ItemText FText
---@field Price float
---@field Weight float
---@field Description FText
---@field RestockAmount int32
---@field RestockPrice float
---@field ProductBuyPriceCurve UCurveFloat
---@field ProductClassRef TSoftClassPtr<AItem>
---@field bDontAllowMultiples boolean
---@field Icon TSoftObjectPtr<UTexture2D>
---@field Capacity int32
---@field MainCategory ECategoryFilter
---@field ItemSubCategory EItemTypeCategory
---@field DlcRequired EDLCName
---@field bIsOrderable boolean
---@field UnlockTag FGameplayTag
local FItemTestStruct = {}



---@class FItemsToRestock
---@field Product TSubclassOf<AItem>
---@field InventoryAmount FInventoriesAmount
local FItemsToRestock = {}



---@class FJoeOrderInfo
---@field OrderType EJoeOrderType
---@field RequiredItem TSoftClassPtr<AItem>
---@field RequiredAmount int32
local FJoeOrderInfo = {}



---@class FJoePlaces
---@field PlaceType EJoeTasksPlaces
---@field Actor TSoftObjectPtr<AActor>
local FJoePlaces = {}



---@class FJoeTradingInfo
---@field RequiredItem TSoftClassPtr<AItem>
---@field RequiredAmount int32
local FJoeTradingInfo = {}



---@class FJunkyardCarPartTypeArray
---@field CarPartTypes TArray<EJunkyardCarPartType>
local FJunkyardCarPartTypeArray = {}



---@class FJunkyardPartInfo
---@field PartRarity EJunkyardPartRarity
---@field CarTypeDependendTransforms TArray<FJunkyardPartTransformInfo>
local FJunkyardPartInfo = {}



---@class FJunkyardPartTransformInfo
---@field CarWreckType EJunkyardCarWreckType
---@field Transform FTransform
---@field PartSeparationValue float
local FJunkyardPartTransformInfo = {}



---@class FKeyItemAction
---@field Prefix EInteractionPrefix
---@field Sofix FText
---@field UniqueRowIndex int32
---@field CurrentMode int32
---@field PadIcon UTexture2D
---@field ActionKeyNames TArray<FName>
---@field AxisMappings TArray<FName>
---@field ActorRequiredToClick TSoftClassPtr<AActor>
local FKeyItemAction = {}



---@class FKeyItemUnlock : FTableRowBase
---@field KeyItemClass TSoftClassPtr<AItem>
---@field RequiredDlc EDLCName
---@field bUseInteractableBuilding boolean
---@field HouseRequiredToUnlock TSoftClassPtr<AHouse>
---@field InteractableBuildingRequiredToUnlock TSoftClassPtr<AInteractableBuilding>
---@field LevelRequriedToUnlock int32
---@field RequiredMoney float
---@field GameplayTagUnlock FGameplayTag
---@field RedDotTag FGameplayTag
---@field MailToSend TSubclassOf<UGSSMail>
local FKeyItemUnlock = {}



---@class FKeybindInformation
---@field TextVariableName FString
---@field KeybindName FName
---@field AxisScale float
local FKeybindInformation = {}



---@class FLevelDecrease
---@field DirtLevelRemove float
---@field ConcentrationDecrease float
---@field SlotsAmount int32
local FLevelDecrease = {}



---@class FLoadedContainersInfo
---@field Flavour EIceCreamFlavours
---@field AmountLeft int32
local FLoadedContainersInfo = {}



---@class FLoan
---@field LoanAmount float
---@field PayOffAmount float
---@field TimeToPayBack FTimeStruct
---@field VolcanoAngerIncrease int32
local FLoan = {}



---@class FLotteryPredefinedSettings : FTableRowBase
---@field Prize float
---@field Price float
---@field Chance float
---@field Popularity float
---@field MoneyMesh UStaticMesh
local FLotteryPredefinedSettings = {}



---@class FMapIndependentBuildingSublevels
---@field Level int32
---@field SubLevelsToLoad TArray<FName>
---@field SubLevelsToUnload TArray<FName>
---@field EventToDisplay TSoftClassPtr<UEventDisplay>
---@field ItemsToUnlock TArray<TSoftClassPtr<AItem>>
---@field UpgradeActions TArray<UGameAction>
local FMapIndependentBuildingSublevels = {}



---@class FMapsInfo
---@field EventMaps TArray<FName>
---@field DependingEventMapsLevelName FName
local FMapsInfo = {}



---@class FMarshalWandsMinigameDifficulty
---@field DifficultyType EMarshalWandsMinigameDifficulty
---@field MaxAllowedPlaneRotation float
---@field MinMinigameDuration float
---@field MaxMinigameDuration float
---@field TryChangeDirectionInterval float
---@field WandsStrength float
---@field PlaneWiggleSpeed float
---@field HappyStatForSuccessfullyFinishing int32
local FMarshalWandsMinigameDifficulty = {}



---@class FMaterialScalarParameterValueStruct
---@field Name FName
---@field Value float
local FMaterialScalarParameterValueStruct = {}



---@class FMaterialVectorParameterValueStruct
---@field Name FName
---@field Value FLinearColor
local FMaterialVectorParameterValueStruct = {}



---@class FMeshMaterialsStruct
---@field Material UMaterialInterface
---@field MaterialSlot int32
local FMeshMaterialsStruct = {}



---@class FMikeSectionStruct
---@field FuelingTuTDone boolean
---@field DiggerTUTDone boolean
---@field CashTuTDone boolean
---@field RCTuTDone boolean
---@field JerCanTuTDone boolean
---@field CarPartsTut boolean
---@field ProductsTut boolean
---@field GarageGameIsStillOn boolean
local FMikeSectionStruct = {}



---@class FMinMax
---@field Min float
---@field Max float
---@field DirtRemove float
local FMinMax = {}



---@class FMinigameCameraOverride
---@field VehicleClass TSoftClassPtr<AGSSWheeledVehicle>
---@field CameraRelativeLocationOverride FVector
---@field CameraRelativeRotationOverride FRotator
local FMinigameCameraOverride = {}



---@class FMinigameMaterialReplacement
---@field MaterialIndex int32
---@field Material UMaterialInterface
local FMinigameMaterialReplacement = {}



---@class FMinigameStage
---@field ValidComponentsForStage TArray<FStageComponent>
local FMinigameStage = {}



---@class FMirrorMinigameExtraData
---@field VehicleClass TSoftClassPtr<AGSSWheeledVehicle>
---@field MirrorFrameMeshReplacement UStaticMesh
---@field MirrorFixedMeshReplacement UStaticMesh
---@field FixedMirrorStartLocationOverride FTransform
---@field FixedMirrorEndLocationOverride FTransform
---@field BrokenMirrorSets TArray<FBrokenMirrorSet>
---@field GhostMaterial UMaterialInterface
local FMirrorMinigameExtraData = {}



---@class FMovementGroundSpeed : FTableRowBase
---@field MovementSpeed float
local FMovementGroundSpeed = {}



---@class FMovieParameters : FTableRowBase
---@field Title FText
---@field RenownLevel int32
---@field LengthTime float
---@field RoyaltyFee float
---@field TicketPrice float
---@field bCustom boolean
---@field MediaSource UMediaSource
---@field MovieIcon TSoftObjectPtr<UTexture>
---@field MovieDigitId FString
---@field FakeFilmImages TArray<TSoftObjectPtr<UTexture2D>>
---@field FakeTitles TArray<FText>
local FMovieParameters = {}



---@class FNodeStruct
---@field NodeCost int32
---@field NodePathPoint APathPoint
local FNodeStruct = {}



---@class FNotificationRow : FTableRowBase
---@field ItemSofix FText
---@field ItemPrefix FText
---@field Icon UTexture2D
---@field RequiredQuest TSoftClassPtr<UGSSQuest>
---@field bShowAmount boolean
local FNotificationRow = {}



---@class FOrderPreset
---@field Items TArray<FBasketItemStruct>
---@field PresetName FText
---@field Index int32
local FOrderPreset = {}



---@class FPCSelectableCard
---@field Name FText
---@field Image UTexture2D
---@field LockedImage UTexture2D
---@field background UTexture2D
---@field bExitMenuOnClicked boolean
---@field bHideCount boolean
---@field bSetCenterAlignment boolean
---@field bPlayFadeOut boolean
---@field GameplayTagUnlock FGameplayTag
---@field DLCToCheck EDLCName
---@field RedDotTag FGameplayTag
---@field TabToCreateOnClick TSoftClassPtr<UPcBaseTab>
---@field bHasTutorial boolean
---@field bTutorialType EGameActivityType
---@field bHasFirstTimeTutorial boolean
---@field bFirstTimeTutorialTag FGameplayTag
---@field BuildingType EBuildingType
---@field RequiredLevel int32
local FPCSelectableCard = {}



---@class FPaintingColor
---@field ColorName FName
---@field LevelNeeded int32
---@field CurrentLinearColor FLinearColor
---@field ColorType EColorType
---@field MaterialInstance TSoftObjectPtr<UMaterialInstance>
---@field ColorTexture UTexture2D
local FPaintingColor = {}



---@class FParkingsUpgradeLevels
---@field SpotUpgradeLevels TArray<FMapIndependentBuildingSublevels>
local FParkingsUpgradeLevels = {}



---@class FPartStruct
---@field BrokenPartClasses TArray<TSoftClassPtr<AActor>>
---@field WorkingPartClass TSoftClassPtr<AActor>
---@field PartInstance APlanePart
---@field PartType EAirplanePartType
local FPartStruct = {}



---@class FPartStructForAsyncLoad
---@field PartToSpawn FPartStruct
---@field PartIndex int32
---@field bSetNewSequance boolean
---@field ClassToSpawn TSoftClassPtr<AActor>
local FPartStructForAsyncLoad = {}



---@class FPartTooltip
---@field PartInfoRef ACarPart_Tooltip
---@field CarPartOwner UJunkyardCarPartBase
local FPartTooltip = {}



---@class FPartySoundCue
---@field NumberOfDancingNPC ENumberOfDancingNPC
---@field SoundCue TSoftObjectPtr<USoundCue>
local FPartySoundCue = {}



---@class FPathStationsBuildingUpdate
---@field MinLevel int32
---@field MaxLevel int32
---@field ActorsToAddPathStationsTo TArray<TSoftObjectPtr<AInteractableActor>>
---@field PathStationsToAdd TArray<TSoftObjectPtr<APathStation>>
local FPathStationsBuildingUpdate = {}



---@class FPhoneCallInfo
---@field Type EPhoneCallType
---@field Icon TSoftObjectPtr<UTexture2D>
---@field CallCue TSoftObjectPtr<USoundWave>
---@field Description FText
local FPhoneCallInfo = {}



---@class FPhotoModeCamera
---@field Rotation FRotator
---@field Location FVector
local FPhotoModeCamera = {}



---@class FPicnicProductOffset
---@field ProductNumber int32
---@field XOffset int32
---@field YOffset int32
local FPicnicProductOffset = {}



---@class FPicnicSettingsPerDifficulty
---@field Difficulty EGuestServiceDifficulty
---@field AmountOfProductsInBasketRequired int32
---@field ProductClasses TArray<TSoftClassPtr<APicnicProduct>>
---@field bCanShowProductListInGame boolean
---@field TimeToComplete float
---@field bLoseMinigameWhenTimeEnds boolean
---@field TimeInSecondsToShowProductsList float
---@field CooldownReduction float
local FPicnicSettingsPerDifficulty = {}



---@class FPilotItemsDiscount
---@field ItemQuantity int32
---@field TradingValueIncreaseOrDecrease float
local FPilotItemsDiscount = {}



---@class FPlaneEntriesToRemove
local FPlaneEntriesToRemove = {}


---@class FPlaneEntry
---@field CountryOfOrigin ECountryOfOrigin
---@field CallSign FString
---@field Runway ERunway
---@field TimeToArrive int32
---@field CurrentStatus ECurrentStatus
---@field GeneratedSaleLootInfo TArray<FGeneratedLootInfo>
---@field GeneratedBuyLootInfo TArray<FGeneratedLootInfo>
---@field CargoRevealPercentage FCargoRevealPercentage
---@field AffectedByTradingBoost ETradingBoosts
---@field FlagMaterial TSoftObjectPtr<UMaterialInstance>
local FPlaneEntry = {}



---@class FPlayerListOfOrdersM
---@field OrderListType EOrdersType
---@field PreviousOrderList TArray<FPreviousOrderM>
local FPlayerListOfOrdersM = {}



---@class FPlayerPartySpot
---@field PartySpotClock APartySpotClock
---@field TimeLeft FTimeStruct
---@field bIsEventActive boolean
---@field CountOfNPC int32
---@field PartyTables TArray<APartySpotTable>
local FPlayerPartySpot = {}



---@class FPlayerSave
---@field PlayerLocation FVector
---@field PlayerRotation FRotator
---@field TotalMoney float
---@field Credits float
---@field ContractPoints float
---@field LastLoanVolcanoAngerIncrease int32
---@field SavedInventory FSavedInventory
---@field TabEnabled boolean
local FPlayerSave = {}



---@class FPlayerSpeedPerDistanceTreshold
---@field DistanceFromPlayer float
---@field SpeedMultiplier float
local FPlayerSpeedPerDistanceTreshold = {}



---@class FPopularityRewardData
---@field MapsToUnlock TArray<FName>
---@field MapsToRemove TArray<FName>
---@field EventToDisplay TSubclassOf<UEventDisplay>
local FPopularityRewardData = {}



---@class FPositioningMontageConfig
---@field BaseCharacterSkeletonMontage FBaseCharacterSkeletonMontage
---@field ExtraObjectMontage UAnimMontage
---@field bShouldResetDefaultCharState boolean
---@field PlayRate float
---@field StartingSection FName
---@field bShouldPlayExtraObjectMontage boolean
---@field bShouldAttachObject boolean
local FPositioningMontageConfig = {}



---@class FPreviousOrderM
---@field ProductClass TSubclassOf<AItem>
---@field ItemAmmount int32
local FPreviousOrderM = {}



---@class FProductAmount
---@field ArrayName EProductArray
---@field RandomAmountMin int32
---@field RandomAmountMax int32
---@field PopularityPerOneItem float
local FProductAmount = {}



---@class FProductShopStruct
---@field Item TSoftClassPtr<AItem>
---@field bUnLocked boolean
local FProductShopStruct = {}



---@class FProductsLineStruct
---@field SplineComponent USplineComponent
---@field ReservedDistance float
local FProductsLineStruct = {}



---@class FProductsStruct
---@field ItemClass TSubclassOf<AItem>
---@field InstancedStaticMeshComponent UHierarchicalInstancedStaticMeshComponent
local FProductsStruct = {}



---@class FPulledTrashItem
---@field PulledActor AActor
local FPulledTrashItem = {}



---@class FQuestChallenge
---@field ChallengeType EGSS_Stat
---@field AmountNeeded int32
---@field TimeToFinish float
---@field ActiveAmount int32
---@field HappyAmountAwardOnComplete int32
local FQuestChallenge = {}



---@class FQuestContract
---@field ContractType EContractType
---@field CustomizationContractType ECustomizationContractType
---@field ContractState EState
---@field CustomizationRequirementsSettings FCustomizationRequirementsSettings
---@field Duration FTimeStruct
local FQuestContract = {}



---@class FQuestDelivery
---@field ContractType EContractType
---@field DeliveryState EState
---@field Tier EJunkyardPartRarity
---@field RewardCarName FText
---@field CarWreckReward TSoftClassPtr<AJunkyardCarWreck>
---@field CarPartRewards TArray<FCarPartReward>
---@field Duration FTimeStruct
local FQuestDelivery = {}



---@class FQuestHistory
---@field Mail TSubclassOf<UGSSMail>
---@field TimeHistory FTimeStruct
---@field Opened boolean
local FQuestHistory = {}



---@class FQuestItemCollision
---@field Actor TSoftObjectPtr<AActor>
---@field bCollisionEnabled boolean
---@field ChildActorClass TSoftClassPtr<AActor>
local FQuestItemCollision = {}



---@class FQueuedMovieToplay
---@field TimeToPlay FTimeStruct
---@field MovieIndex int32
---@field bLoop boolean
---@field bIsStarted boolean
---@field bTrendingBonus boolean
---@field bRushHourBonus boolean
---@field MovieResult FWatchedMovieResult
local FQueuedMovieToplay = {}



---@class FRVBuildingUpgradeCost
---@field Level int32
---@field UpgradeCost FRVUpgradeCost
local FRVBuildingUpgradeCost = {}



---@class FRVCampSpotUpgradeCost
---@field UpgradeCosts TArray<FRVBuildingUpgradeCost>
local FRVCampSpotUpgradeCost = {}



---@class FRVCamperData : FTableRowBase
---@field CamperClass TSoftClassPtr<AGSSWheeledVehicle>
---@field CamperDriverClass TSoftClassPtr<AAICharacterBase>
local FRVCamperData = {}



---@class FRVCompletedService
---@field ServiceTag FGameplayTag
---@field Difficulty EGuestServiceDifficulty
local FRVCompletedService = {}



---@class FRVConcertReward
---@field TrustPointReward int32
---@field MoneyMultiplier int32
local FRVConcertReward = {}



---@class FRVCousingHouseUpgradeRequirement
---@field Level int32
---@field UnlockedServicesCount int32
local FRVCousingHouseUpgradeRequirement = {}



---@class FRVEmployeeAssignment
---@field Service FGameplayTag
---@field IsAssignmentActive boolean
local FRVEmployeeAssignment = {}



---@class FRVErrorMessage : FTableRowBase
---@field ErrorMessage FText
local FRVErrorMessage = {}



---@class FRVGuestTypeProperties
---@field GuestType ERVGuestType
---@field GuestTypeName FText
---@field GuestTypeColor FLinearColor
---@field ChanceToAppear float
---@field Image TSoftObjectPtr<UTexture2D>
local FRVGuestTypeProperties = {}



---@class FRVMinigamesDifficultyUnlockThresholds
---@field AmountOfCompletedMinigamesToUnlockMediumDifficulty int32
---@field AmountOfCompletedMinigamesToUnlockHardDifficulty int32
local FRVMinigamesDifficultyUnlockThresholds = {}



---@class FRVResourceProperties
---@field Resource ERVResource
---@field ResourceName FText
---@field BuildingName FText
---@field MaxReservePerLevel TArray<int32>
---@field RegenMinutesPerLevel TArray<int32>
---@field Image TSoftObjectPtr<UTexture2D>
---@field Color FLinearColor
local FRVResourceProperties = {}



---@class FRVResourceState
---@field CurrentLevel int32
---@field CurrentAmount int32
---@field MinutesToRegenerate int32
local FRVResourceState = {}



---@class FRVResourceUpgradeCost
---@field UpgradeCosts TArray<FRVBuildingUpgradeCost>
local FRVResourceUpgradeCost = {}



---@class FRVSavedParkingData
---@field ParkingSlotIndex int32
---@field IsUnLocked boolean
---@field MaxScheduledGuest int32
local FRVSavedParkingData = {}



---@class FRVServiceCompletionExpGained
---@field ExpGained float
local FRVServiceCompletionExpGained = {}



---@class FRVServiceData
---@field ServiceTag FGameplayTag
---@field AmountCompletedEasy int32
---@field AmountCompletedMedium int32
---@field AmountCompletedHard int32
---@field ServiceWinStreak int32
---@field IsLockedFromQuest boolean
local FRVServiceData = {}



---@class FRVServiceExperienceData
---@field Completed int32
---@field WinStreak int32
---@field NewExperienceThreshold int32
---@field TrustPointsBaseGained int32
---@field TrustPointsPerWinStreakGained int32
local FRVServiceExperienceData = {}



---@class FRVSleepoverGuestData
---@field StayHours int32
---@field TrustPointIncome int32
---@field MoneyIncome int32
---@field ResourcesRequiredRange FInt32Range
local FRVSleepoverGuestData = {}



---@class FRVSpecificCustomer
---@field GuestType ERVGuestType
---@field GuestServices TArray<FGameplayTag>
---@field SleepoverGuestData FRVSleepoverGuestData
---@field ResourceCosts TMap<ERVResource, int32>
---@field LikedMusic TArray<FGameplayTag>
---@field CamperTypeIndex int32
local FRVSpecificCustomer = {}



---@class FRVUpgradeCost
---@field MoneyCost float
---@field TrustPointCost int32
---@field AdditionalUnlockTag FGameplayTag
local FRVUpgradeCost = {}



---@class FRVUpgradeInputData
---@field BuildingType ERVUpgradableBuilding
---@field CampSpotIndex int32
---@field Service FGameplayTag
---@field Resource ERVResource
local FRVUpgradeInputData = {}



---@class FRegulars : FTableRowBase
---@field ItemName FText
---@field ItemIcon TSoftObjectPtr<UTexture2D>
---@field Item TSoftClassPtr<AItem>
---@field MinTradeValue float
---@field MaxTradeValue float
---@field MinItemNumber int32
---@field MaxItemNumber int32
---@field GasStationLevelNeeded int32
---@field Region ECountryRegion
local FRegulars = {}



---@class FRenownLevelEvent
---@field RequiredLevel int32
---@field EventToDisplay TSoftClassPtr<UEventDisplay>
local FRenownLevelEvent = {}



---@class FRenownTypeAmountOverride
---@field RenownReason ERenown_Reasons
---@field Amount int32
local FRenownTypeAmountOverride = {}



---@class FRentableEquipmentInfo
---@field ItemCurrentStateIcon UTexture2D
---@field CurrentDurability float
local FRentableEquipmentInfo = {}



---@class FRentableEquipmentSlot
---@field CompatibleItemClass TSoftClassPtr<ARentableItem>
---@field AvailableEquipment FRentableEquipmentInfo
---@field RandomEq_SM TSoftObjectPtr<UStaticMesh>
---@field RandomEq_MI TSoftObjectPtr<UMaterialInstance>
---@field bIsInUse boolean
---@field bFilled boolean
---@field bShouldBreak boolean
local FRentableEquipmentSlot = {}



---@class FRepeatStruct
---@field RepeatRedDot int32
---@field TagToRepeat FGameplayTag
---@field ToCallAfterClicks FGameplayTag
local FRepeatStruct = {}



---@class FRequiredDecal
---@field RequiredDecal TSoftClassPtr<ADecalToPaint>
---@field DecalIcon TSoftObjectPtr<UMaterialInterface>
local FRequiredDecal = {}



---@class FRequiredItems
---@field Item TSoftClassPtr<AItem>
---@field Amount int32
local FRequiredItems = {}



---@class FRequiredLevel
---@field LevelRequired int32
---@field MapToSpawnOn EMapRquiredType
local FRequiredLevel = {}



---@class FRestockProductData
---@field Product TSubclassOf<AItem>
---@field ProductRestockThreshold float
local FRestockProductData = {}



---@class FRestockProductsAmount : FTableRowBase
---@field ItemsRestockedAtOnce int32
local FRestockProductsAmount = {}



---@class FRetroactiveQuest
---@field Quest UQuestBase
---@field UnlockedTag FGameplayTag
local FRetroactiveQuest = {}



---@class FRoofLevel
---@field SubLevelName FName
---@field GasStationLevel int32
local FRoofLevel = {}



---@class FRvConcertData
---@field MusicType FGameplayTag
---@field TimeLeft int32
---@field ConcertStartTime FTimeStruct
local FRvConcertData = {}



---@class FRvCustomerCampSpotPair
---@field CustomerData URVCustomerData
---@field CampSpot ARVCampSpot
local FRvCustomerCampSpotPair = {}



---@class FRvFestivalSummaryData
---@field MusicType FGameplayTag
---@field CamperCombo int32
local FRvFestivalSummaryData = {}



---@class FRvGuestServiceHandsAnimConfig
---@field Pose UAnimSequence
---@field bSpawnActor boolean
---@field ActorToSpawn TSoftClassPtr<AActor>
---@field PartToActivate FGameplayTag
---@field InTimeToSpawnMesh float
---@field BlendTime float
local FRvGuestServiceHandsAnimConfig = {}



---@class FRvGuestServiceMontageConfig
---@field Montage UAnimMontage
---@field WarpComponentTag FName
local FRvGuestServiceMontageConfig = {}



---@class FRvMinigameStageInfo
---@field Stage ERVMinigameStage
---@field TimeLeft float
---@field TimeElapsed float
---@field CompletionPercent float
local FRvMinigameStageInfo = {}



---@class FRvOvernightSummaryData
---@field GuestCountPerType TMap<int32, int32>
---@field MoneyIncome int32
---@field TrustIncome int32
local FRvOvernightSummaryData = {}



---@class FRvStopoverSummaryData
---@field ServicesCompleted TMap<FGameplayTag, FRvSummaryServiceReward>
---@field FullServiceBonusCount int32
---@field FullServiceBonusMoney int32
---@field FullServiceBonusTrustPoints int32
---@field StreakBonusCount int32
---@field StreakBonusTrustPoints int32
---@field ServiceMoneyIncome int32
---@field ServiceTrustPointsIncome int32
local FRvStopoverSummaryData = {}



---@class FRvSummaryData
---@field SummaryType ERVGuestType
---@field Guests TArray<FRvCustomerCampSpotPair>
---@field StopoverSummaryData FRvStopoverSummaryData
---@field OvernightSummaryData FRvOvernightSummaryData
---@field FestivalSummaryData FRvFestivalSummaryData
---@field BruttoMoneyIncome int32
---@field RubyTax int32
---@field NettoMoneyIncome int32
---@field TotalTrustIncome int32
local FRvSummaryData = {}



---@class FRvSummaryServiceReward
---@field Service FGameplayTag
---@field NumberCompleted int32
---@field MoneyReward int32
---@field TrustPointsReward int32
local FRvSummaryServiceReward = {}



---@class FSDComponentReferenceArrayWrapper
---@field ComponentReference FComponentReference
local FSDComponentReferenceArrayWrapper = {}



---@class FSDFighterAttributes
---@field Strength int32
---@field Defence int32
---@field Agility int32
local FSDFighterAttributes = {}



---@class FSDFighterStats : FTableRowBase
---@field FighterID FName
---@field PortraitIcon TSoftObjectPtr<UTexture2D>
---@field Name FText
---@field CharacterClass TSoftClassPtr<AAICharacterBase>
---@field FighterAttributes FSDFighterAttributes
---@field FightsWon int32
---@field FightsDrawn int32
---@field FightsLost int32
local FSDFighterStats = {}



---@class FSDGangActivitySettings
---@field GangActivitySoftClass TSoftClassPtr<USDGangActivityObjBase>
---@field ActivityEmailNotificationAction TSoftClassPtr<UGSSMail>
---@field bImmuneToShadyDealsLock boolean
---@field bEnabledByDefault boolean
---@field bManualStartOnly boolean
---@field BaseActivityCooldown float
---@field EmailNotificationTimeOffset float
local FSDGangActivitySettings = {}



---@class FSDMinigameParticipantPosition
---@field bPrepared boolean
---@field Occupant AAICharacterBase
local FSDMinigameParticipantPosition = {}



---@class FSDShadynessLevel
---@field Level int32
---@field StartPercent float
---@field EndPercent float
local FSDShadynessLevel = {}



---@class FSDShadynessModifierSettings
---@field ModifierPersistance ESDShadynessModifierPersistance
---@field Duration float
---@field ShadynessDelta float
local FSDShadynessModifierSettings = {}



---@class FSDSheriffBehaviorSettings
---@field Level int32
---@field AmountOfVisitsPerDay int32
---@field AmountOfObjectsToVisit int32
---@field bCombineActionsFromPreviousLevels boolean
---@field CatchedActions TArray<USDSheriffActionBase>
local FSDSheriffBehaviorSettings = {}



---@class FSDTimerHandleDelegatePair
---@field Handle FTimerHandle
local FSDTimerHandleDelegatePair = {}



---@class FSaleSlot
---@field CarForSale AJunkyardCarWreckCustomizable
---@field ExhibitionSlot AExhibitionSpotSlot
---@field CarPrice float
---@field CurrentTime FTimeStruct
---@field LastViewersUpdateTime FTimeStruct
---@field CurrentInterest float
---@field CurrentViewers int32
---@field bSold boolean
---@field bQuestSale boolean
---@field LastSaleCheckNumber int32
local FSaleSlot = {}



---@class FSaunaSettingsPerDifficulty
---@field Difficulty EGuestServiceDifficulty
---@field PlayerMovementSpeed float
---@field ObstacleDotsAmount int32
---@field ObstacleDotLifeTimeRange FFloatRange
---@field ObstacleDotWarmUp float
---@field TargetDotLifeTimeRange FFloatRange
---@field TargetDotWarmUp float
---@field TargetsToCollect int32
---@field AllowedMistakes int32
---@field CooldownBonusPerMistake TMap<int32, float>
---@field MinSplineTimeBetweenCollectibleDots float
---@field MinSplineTimeBetweenObstacleAndTargetDot float
---@field MinSplineTimeBetweenTargetDotAndPlayer float
---@field MinSplineTimeBetweenObstacleDots float
---@field MinSplineTimeBetweenObstacleDotsAndPlayer float
local FSaunaSettingsPerDifficulty = {}



---@class FSaveTaskStruct
---@field TaskBase TSubclassOf<UTaskBase>
---@field TaskProgress TArray<FTaskProgress>
---@field SavedDefaultActor FSavedDefaultActor
---@field ShouldFinishOnGameLoad boolean
local FSaveTaskStruct = {}



---@class FSaveTutorialManager
---@field HappyAngry_Enabled boolean
local FSaveTutorialManager = {}



---@class FSavedAICharacterAnimation
---@field bSittingInCar boolean
local FSavedAICharacterAnimation = {}



---@class FSavedAICharacters
---@field AICharacterBase TSubclassOf<AAICharacterBase>
---@field CollisionEnabledType ECollisionEnabled::Type
---@field SavedAICharacterAnimation FSavedAICharacterAnimation
---@field TasksStruct TArray<FSaveTaskStruct>
---@field PathName FString
---@field HomeName FString
---@field MovementType EMovementType
---@field Transform FTransform
---@field SavedVehicles FSavedVehicles
---@field Tags TArray<FName>
---@field LeftCooldown int32
---@field TotalWorkTime int32
---@field TotalBreakTime int32
---@field TotalMoneyEarnedForSelf float
---@field TotalMoneyEarnedForPlayer float
---@field CurrentMoneyEarned float
---@field TotalHappy int32
---@field TotalAngry int32
---@field LeftEnergy int32
---@field EmployeeSkills TArray<FEmployeeSkill>
---@field SavedInventory FSavedInventory
---@field MovementGroundType EMovementGroundType
---@field CinemaTicket FTicketData
---@field CurrentTicketState eTicketState
---@field CurrentPopcornCooldownTime float
---@field CurrentCinemaPathPointIndex int32
---@field CinemaTrashToDrop int32
---@field bIsCinemaCustomer boolean
---@field bIsRVCustomer boolean
---@field RvGuestService FGameplayTag
---@field WalkSpeedMultiplier float
local FSavedAICharacters = {}



---@class FSavedActiveQuestLine
---@field ActiveQuestLineData FSoftObjectPath
---@field ActiveQuestData FSoftObjectPath
---@field ActiveObjectiveClass TSubclassOf<UObjectiveBase>
---@field SavedObjectiveProgress int32
---@field SavedObjectiveMaxProgress int32
---@field IsCurrentQuestLine boolean
local FSavedActiveQuestLine = {}



---@class FSavedActor
---@field PathName FString
local FSavedActor = {}



---@class FSavedAirplane
---@field Airplane TSoftObjectPtr<ATradingAirplane>
---@field PlaneTransform FTransform
---@field PlaneEntry FPlaneEntry
---@field SavedAirplaneInventory FSavedAirplaneInventory
---@field TimeToTakeOff int32
---@field bCanInteract boolean
---@field PickedPlayerItems TArray<FGeneratedItem>
---@field PickedPilotItems TArray<FGeneratedItem>
---@field TotalPilotTradeValue float
---@field TotalPlayerTradeValue float
---@field ImpatienceMeter float
---@field LastPlayerTradeValue float
---@field LastPilotTradeValue float
---@field SavedDeniedTradeOffers TArray<FDeniedTradeOffer>
---@field SavedIsSameOffer boolean
---@field SavedAffectedByTradingBoost ETradingBoosts
---@field SavedSkillsUsed TArray<ETradingSkill>
---@field SavedTradeTryTut int32
---@field SavedMaterials FSavedMaterials
---@field SavedTradingPilot FSavedTradingPilot
---@field bIsUnamount boolean
local FSavedAirplane = {}



---@class FSavedAirplaneInventory
---@field Slots TArray<FSlotStruct>
---@field CurrentFuelCapacity float
local FSavedAirplaneInventory = {}



---@class FSavedAirport
---@field AirportLevel int32
---@field SavedCurrentMSSequence FSavedCurrentStripSequence
---@field SavedCurrentTSSequence FSavedCurrentStripSequence
---@field SavedAirportScheduleManager FSavedAirportScheduleManager
local FSavedAirport = {}



---@class FSavedAirportInventory
---@field Slots TArray<FSlotStruct>
---@field CurrentFuelCapacity float
---@field CurrentCapacity float
---@field MaxFuelCapacity float
---@field MaxCapacity float
local FSavedAirportInventory = {}



---@class FSavedAirportScheduleManager
---@field SavedRunway TArray<FSavedRunway>
---@field AirplanesReadyToLand TArray<FSavedAirplane>
---@field SavedCurrentCancelFlightTime int32
---@field ExcludedPlanes TArray<FPlaneEntry>
---@field SavedRevealCargoNumber int32
---@field SavedCurrentDenyCooldown int32
---@field SavedIsAS_Quest25Passed boolean
---@field SavedIsAS_Quest29Passed boolean
local FSavedAirportScheduleManager = {}



---@class FSavedAirstrip
---@field bAirstripCampaingCompleted boolean
---@field SavedIsSandstormActive boolean
---@field SavedBarn FSavedBarn
---@field SavedAirport FSavedAirport
---@field SavedTradeCenter FSavedTradeCenter
---@field SavedTowysGarage FSavedTowysGarage
---@field SavedAirstripStorage FSavedAirstripStorage
---@field SavedRadioTower FSavedRadioTower
---@field SavedDLCTradingSystemManager FSavedDLCTradingSystemManager
---@field SavedJoePlane FSavedJoePlane
---@field SavedCrashSiteManager FSavedCrashSiteManager
---@field SavedTowy FSavedTowy
---@field SavedRandomDialoguesManager FSavedRandomDialoguesManager
---@field SavedAirportInventory FSavedAirportInventory
---@field SavedJoeCrashManager FSavedJoeCrashManager
local FSavedAirstrip = {}



---@class FSavedAirstripActor
---@field Actor TSubclassOf<AActor>
---@field Transform FTransform
---@field PathtName FString
---@field bIsLoaded boolean
---@field Tags TArray<FName>
local FSavedAirstripActor = {}



---@class FSavedAirstripStorage
---@field AirstripStorageLevel int32
local FSavedAirstripStorage = {}



---@class FSavedAuctionsManager
---@field SavedSaleSlots TArray<FSavedSaleSlot>
local FSavedAuctionsManager = {}



---@class FSavedBarn
---@field BarnLevel int32
local FSavedBarn = {}



---@class FSavedBaseInteractableBuilding
---@field Level int32
---@field bIsOpened boolean
local FSavedBaseInteractableBuilding = {}



---@class FSavedBrokenPartTapes
---@field PartType EAirplanePartType
---@field TapesAttached TArray<FSavedTape>
local FSavedBrokenPartTapes = {}



---@class FSavedCarPaint
---@field PaintType ECustomizationPaintType
---@field MaskType EFinishMaskType
---@field PaintColor1 FLinearColor
---@field PaintColor2 FLinearColor
---@field PaintColor3 FLinearColor
---@field ColorIndex1 int32
---@field ColorIndex2 int32
---@field ColorIndex3 int32
---@field bMetal boolean
local FSavedCarPaint = {}



---@class FSavedCarPaintData
---@field CurrentCarPaint FSavedCarPaint
---@field PlannedCarPaint FSavedCarPaint
---@field bPaintChanged boolean
local FSavedCarPaintData = {}



---@class FSavedCarPart
---@field PartClass TSoftClassPtr<UActorComponent>
---@field PartData FCarPartData
---@field AddedDecals TArray<FSavedPlayerDecals>
---@field PartName FText
---@field PartIcon TSoftObjectPtr<UTexture2D>
---@field bGarage boolean
---@field bGhost boolean
---@field PaintData FSavedCarPaintData
---@field BasePrice float
---@field bMaskOpen boolean
local FSavedCarPart = {}



---@class FSavedCarWashStation
---@field PathName FString
---@field bIsAutomatic boolean
---@field BuildingState EBuildingPathStationState
local FSavedCarWashStation = {}



---@class FSavedCarWreck
---@field WreckClass TSoftClassPtr<AJunkyardCarWreck>
---@field WreckArea TSoftObjectPtr<ACarWreckPlaceableArea>
---@field WreckState ECarWreckState
---@field bAssemblyMode boolean
---@field bRusty boolean
---@field AddedDecals TArray<FSavedPlayerDecals>
---@field SavedPartData TMap<EJunkyardCarPartType, FSavedCarPart>
---@field SavedPaintData TArray<FSavedCarPaintData>
---@field SavedTransform FTransform
---@field SavedIsPutOnSale boolean
---@field CurrentMarking ECarWreckMarking
---@field SavedTier EJunkyardPartRarity
---@field PhotoPath FString
---@field bProjectCreatedEffectShown boolean
---@field bProjectFinishedEffectShown boolean
---@field bShowEffectOnProjectFinished boolean
---@field bTmpMagnetAttractionDisabled boolean
---@field SavedRustColor FLinearColor
local FSavedCarWreck = {}



---@class FSavedCashShop
---@field SavedDefaultActor FSavedDefaultActor
---@field SavedWayPoints TArray<FSavedWayPoint>
---@field MeshIndex int32
---@field Color FLinearColor
local FSavedCashShop = {}



---@class FSavedChallenge
---@field SavedChallenges TArray<FQuestChallenge>
---@field TimeUntilNextChallenge float
---@field TimeUntilCompletitionCheck float
---@field bIsTickEnabled boolean
local FSavedChallenge = {}



---@class FSavedChemicalBath
---@field SavedSlots TArray<FSavedChemicalSlot>
---@field SavedBath TSoftObjectPtr<AChemicalBath>
---@field bIsAutomaticChemicalEnabled boolean
---@field ConcentrationAmount float
local FSavedChemicalBath = {}



---@class FSavedChemicalSlot
---@field ItemIN FStorageCarPart
---@field SlotIndex int32
---@field bIsOccupied boolean
local FSavedChemicalSlot = {}



---@class FSavedChunchumanchu
---@field SavedVolcano FSavedVolcano
---@field SavedToilet FSavedBaseInteractableBuilding
---@field SavedShower FSavedBaseInteractableBuilding
---@field SavedScubaEqRentalBuilding FSavedEqRentalBuilding
---@field SavedSurfingEqRentalBuilding FSavedEqRentalBuilding
---@field SavedWaterVehicles TArray<FSavedWaterVehicle>
---@field SavedShark FSavedShark
---@field SavedPartyBoat FSavedPartyBoat
---@field SavedLastDeathTime FTimeStruct
---@field SavedTotalDeathsNumber int32
---@field CoconutThrowCombo int32
---@field CoconutRecord int32
---@field CurrentStreakWithoutVolcanoEruption int32
---@field LongestStreakWithoutVolcanoEruption int32
local FSavedChunchumanchu = {}



---@class FSavedCinema
---@field CinemaLevel int32
---@field CurrentCinemaRenownPoints int32
---@field RenownLevel int32
---@field RenownMultiplier float
---@field CinemaPathPointsStates TArray<boolean>
---@field CurrentProjectorState eCinemaProjectorState
---@field CurrentProjectorPreset int32
---@field CurrentMovieTime float
---@field SavedMovies TArray<FQueuedMovieToplay>
---@field SavedResults TArray<FWatchedMovieResult>
---@field CurrentPopcornMachineState ePopcornMachineState
---@field CurrentPopcornMachineCapacity int32
---@field CurrentPopcornProductionTime float
---@field PopcornCombo int32
---@field PopcornHighScore int32
---@field SavedTicketBarier FSavedTicketBarrierData
---@field VacuumSplineDistance float
---@field bVacuumActive boolean
---@field bDontShowScheduleWarning boolean
---@field bDontShowCustomMoviePopup boolean
---@field bDontShowCancelMoviePopup boolean
---@field bMovieLoopActive boolean
---@field CustomMovieParameters FMovieParameters
---@field CustomMoviePath FString
---@field CorrectTicketsCombo int32
---@field RushHourEventSelectedHour int32
---@field TrendingEventSelectedMovies TArray<int32>
local FSavedCinema = {}



---@class FSavedColorSlider
---@field SliderH float
---@field SliderS float
---@field SliderV float
local FSavedColorSlider = {}



---@class FSavedContract
---@field ContractClass TSoftClassPtr<UContractBase>
---@field SavedState EState
---@field SavedContractType EContractType
---@field SavedDifficulty int32
---@field SavedCurrentProgressState EProgressState
---@field SavedTimeLeft FTimeStruct
---@field SavedInitialTime FTimeStruct
---@field SavedSuccess boolean
---@field SavedMoneyReward float
---@field SavedContractPointsRewardf int32
local FSavedContract = {}



---@class FSavedContractSlot
---@field SavedState EState
---@field SavedContract FSavedCustomizationContract
local FSavedContractSlot = {}



---@class FSavedContractsManager
---@field SavedUnlockedStates TArray<FSavedState>
---@field SavedContractSlots TArray<FSavedContractSlot>
---@field SavedUnlockedDrivers TArray<FHireableDriver>
---@field SavedCarWrecksBasket TArray<FCarWrecksBasket>
---@field SavedNumberOfCarWrecksType int32
---@field SavedDedicatedCarParts TArray<FCarWreckPartsBasket>
---@field SavedGarageCarParts TArray<FCarWreckPartsBasket>
---@field SavedNumberOfModels TMap<EJunkyardCarPartType, int32>
---@field SavedContractAppearance TArray<FCustomizationContractChancesBasket>
---@field SavedNextDeliveriesRefresh FTimeStruct
---@field SavedNextDriversRefresh FTimeStruct
---@field SavedNextContractsRefresh FTimeStruct
local FSavedContractsManager = {}



---@class FSavedCrane
---@field WasCraneSaved boolean
---@field IsCrusherOpened boolean
---@field HideTooltips boolean
---@field HideHighlights boolean
---@field CranePosition FVector
---@field CraneYaw float
---@field ArmExtension float
local FSavedCrane = {}



---@class FSavedCrashSite
---@field CrashSiteTransform FTransform
---@field CrashSiteSoft TSoftClassPtr<ACrashSite>
local FSavedCrashSite = {}



---@class FSavedCrashSiteManager
---@field SavedCrashSites TArray<FSavedCrashSite>
---@field SmokeTransform FTransform
---@field bSmokeActive boolean
local FSavedCrashSiteManager = {}



---@class FSavedCurrentStripSequence
---@field Sequence TSoftObjectPtr<ALevelSequenceActor>
---@field Path FString
---@field Time float
---@field bLoadedFromSave boolean
---@field bPaused boolean
local FSavedCurrentStripSequence = {}



---@class FSavedCustomizationContract
---@field SavedBasicData FSavedContract
---@field SavedContractCode FName
---@field SavedCustomizationContractType ECustomizationContractType
---@field SavedRequiredCarWreckType EJunkyardCarWreckType
---@field SavedRequiredCarWreck TSoftClassPtr<AJunkyardCarWreck>
---@field SavedRequiredCarWreckTier EJunkyardPartRarity
---@field SavedRequiredCarWreckStats FCarPartData
---@field SavedCarTier EJunkyardPartRarity
---@field SavedRequiredCarParts TMap<EJunkyardCarPartType, FSavedCarPart>
---@field SavedDifferentColorCarParts TArray<EJunkyardCarPartType>
---@field SavedDecalsOfRequiredCategory TArray<TSoftClassPtr<ADecalToPaint>>
---@field SavedRequiredDecalsNumber int32
---@field SavedRequiredDecalsCategory EDecalUnlockType
---@field SavedRequiredPaintData FSavedCarPaint
---@field SavedMoneyRewardBonus float
---@field SavedContractPointsReward float
---@field SavedContractRequirements TArray<EContractRequirement>
---@field SavedArrayIndex int32
local FSavedCustomizationContract = {}



---@class FSavedDLCTradingSystemManager
---@field SavedSpawnedAirplanes TArray<FSavedAirplane>
---@field SavedUnlockedSkills TArray<FUnlockedSkill>
---@field SavedUsedSkills TArray<FUnlockedSkill>
---@field SavedUnavailableBoosts TArray<FTradingBoost>
---@field SavedActiveBoost FTradingBoost
---@field SavedCurrentSuccessfulTradesLevel FSuccessfulTradesLevel
---@field SavedCurrentSuccessfulTradesNumber int32
---@field SavedIsTutorialItemsAdded boolean
local FSavedDLCTradingSystemManager = {}



---@class FSavedDanceFloorSpots
---@field SavedDefaultActor FSavedDefaultActor
---@field SavedDanceFloorSpots TArray<FSavedSpotToDance>
local FSavedDanceFloorSpots = {}



---@class FSavedDecals
---@field SavedDefaultActor FSavedDefaultActor
local FSavedDecals = {}



---@class FSavedDecorations
---@field SavedDefaultActor FSavedDefaultActor
---@field SnapPointName FString
local FSavedDecorations = {}



---@class FSavedDefaultActor
---@field Actor TSubclassOf<AActor>
---@field Transform FTransform
---@field PathtName FString
---@field bIsLoaded boolean
---@field Tags TArray<FName>
local FSavedDefaultActor = {}



---@class FSavedDeliveryContract
---@field SavedBasicData FSavedContract
---@field SavedContractTier EJunkyardPartRarity
---@field SavedHiredDriver FHireableDriver
---@field SavedOriginBonus float
---@field SavedCustomizableWreckChance float
---@field SavedCarWreckSoftClass TSoftClassPtr<AJunkyardCarWreck>
---@field SavedCarPartRewards TArray<FCarPartReward>
local FSavedDeliveryContract = {}



---@class FSavedDoor
---@field PathName FString
---@field DoorState EDoorState
local FSavedDoor = {}



---@class FSavedEconomyData
---@field SavedDailyEconomyInfo TMap<FString, FEconomyDayInfo>
---@field TotalMoneyEarned float
---@field TotalMoneySpent float
---@field SavedPassiveIncome TArray<FSavedPassiveIncome>
local FSavedEconomyData = {}



---@class FSavedEmployee
---@field Employee TSoftClassPtr<AAICharacterBase>
---@field EmployeeTasks TArray<FAssignedTasksInfo>
---@field TargetActorsPathNames TArray<FString>
---@field AssignedShift EShiftType
---@field bAutopay boolean
---@field CurrentTaskPriority int32
local FSavedEmployee = {}



---@class FSavedEqRentalBuilding
---@field EqRentalBuildingLevel int32
---@field bIsOpened boolean
---@field SavedBuildingState EBuildingPathStationState
---@field SavedRentalSpots TArray<FSavedRentalSpot>
---@field SavedReplacementEqQueue TArray<FRentableEquipmentSlot>
---@field SavedDeathsNumber int32
---@field SavedReplacementTresholdValue float
local FSavedEqRentalBuilding = {}



---@class FSavedFameManager
---@field SavedLevel int32
---@field SavedExperience float
---@field SavedUnlockedRewards TArray<FUnlockableByFameData>
---@field ReceivedLevelsFromLastOpeningFameWidget int32
---@field ReceivedExperienceFromLastOpeningFameWidget int32
local FSavedFameManager = {}



---@class FSavedFavouritePlayerDecals
---@field SavedUnlockedDecals FName
---@field DecalType EDecalUnlockType
---@field bFavourite boolean
local FSavedFavouritePlayerDecals = {}



---@class FSavedFinishedObjectives
---@field SavedFinishedObjectivesObjectives TArray<TSoftClassPtr<UObjectiveBase>>
local FSavedFinishedObjectives = {}



---@class FSavedGasStation
---@field GasStationLevel int32
---@field GarageLevel int32
---@field MagazineLevel int32
---@field CarWashLevel int32
---@field PartySpotLevel int32
---@field PartyTimeLevel int32
---@field bGarageFirstCustomerServed boolean
---@field GasStationFloorMaterialPath FSoftObjectPath
---@field ToiletFloorMaterialPath FSoftObjectPath
---@field RoofLevelName FName
local FSavedGasStation = {}



---@class FSavedGasStationSectionDetails
---@field Tag FName
---@field State EBuildingPathStationState
local FSavedGasStationSectionDetails = {}



---@class FSavedIceCreamBuilding
---@field IceCreamStandLevel int32
---@field bIsOpened boolean
---@field SavedIceCreamContainers TArray<FSavedIceCreamContainer>
local FSavedIceCreamBuilding = {}



---@class FSavedIceCreamContainer
---@field Flavour EIceCreamFlavours
---@field AmountLeft int32
local FSavedIceCreamContainer = {}



---@class FSavedInteractableDecals
---@field SavedDefaultActor FSavedDefaultActor
---@field DecalRelativeTransform FTransform
---@field WasDecalTransformSaved boolean
---@field DecalArrayIndex int32
---@field SortOrder int32
local FSavedInteractableDecals = {}



---@class FSavedInventory
---@field Slots TArray<FSlotStruct>
---@field CurrentFuelCapacity float
---@field CurrentCapacity float
---@field MaxFuelCapacity float
---@field MaxCapacity float
---@field money float
---@field CollectiblesSlots TArray<FCollectiblesSlotStruct>
local FSavedInventory = {}



---@class FSavedJoeCrashManager
---@field HoursPassed int32
local FSavedJoeCrashManager = {}



---@class FSavedJoePlane
---@field bIsJoePlaneSaved boolean
---@field bIsPhysicsActive boolean
---@field bCanMagnetActivatePhysics boolean
---@field bCanActorGetAttracted boolean
---@field PlaneTransform FTransform
---@field SpawnPosition FTransform
---@field SavedPlaneState EJoeAirplaneState
---@field SavedPlanePartsSequance TArray<int32>
---@field SavedBrokenPartsTapes TArray<FSavedBrokenPartTapes>
---@field SavedTriggeredJoeDialogues TArray<int32>
---@field SavedJoeInventory FSavedAirplaneInventory
local FSavedJoePlane = {}



---@class FSavedJunkyard
---@field bJunkyardCampaignStarted boolean
---@field SavedCarWrecks TArray<FSavedCarWreck>
---@field WrenchMiniGameCombo int32
---@field WrenchMiniGameRecord int32
---@field SavedUncleTributeValue float
---@field SavedContractsManager FSavedContractsManager
---@field SavedAuctionsManager FSavedAuctionsManager
---@field SavedFameManager FSavedFameManager
---@field SavedJunkyardBuildings FSavedJunkyardBuildings
---@field SavedStorageCarParts TArray<FStorageCarPart>
---@field SavedChemicalSlots TArray<FSavedChemicalBath>
---@field SavedWreckAreas TArray<FSavedWreckArea>
---@field SavedCrane FSavedCrane
---@field SavedSean FSavedSean
---@field bLoadJunkyard boolean
---@field bLoadedShowRefreshWarning boolean
local FSavedJunkyard = {}



---@class FSavedJunkyardBuildings
---@field OfficeLevel int32
---@field WrecksSpotLevel int32
---@field JunkyardWorkshopLevel int32
---@field JunkyardStorageLevel int32
---@field ChemicalbathLevel int32
---@field JunkyardBase int32
---@field CarExhibition int32
local FSavedJunkyardBuildings = {}



---@class FSavedMask
---@field PathName FString
---@field MaskSlots TArray<FSlotStruct>
---@field MaskMoney float
local FSavedMask = {}



---@class FSavedMaterials
---@field DMI_1_Tint_1 FLinearColor
---@field DMI_1_Tint_2 FLinearColor
---@field DMI_1_Tint_3 FLinearColor
---@field DMI_2_Tint_1 FLinearColor
---@field DMI_2_Tint_2 FLinearColor
---@field FlagMaterial TSoftObjectPtr<UMaterialInstance>
local FSavedMaterials = {}



---@class FSavedMoneyTransfer
---@field UniqueID FGuid
---@field TimeRemaining FTimeStruct
---@field MoneyAmount int32
---@field FromLevelName FString
---@field TargetLevelName FString
local FSavedMoneyTransfer = {}



---@class FSavedNewTrash
---@field Class TSubclassOf<AActor>
---@field Location FVector
---@field Rotation FRotator
local FSavedNewTrash = {}



---@class FSavedPartyBoat
---@field bAllPassengersLeft boolean
local FSavedPartyBoat = {}



---@class FSavedPartySpot
---@field TimeLeft FTimeStruct
---@field DancingTimeLeft FTimeStruct
---@field bIsEventActive boolean
---@field bIsTimeLeft boolean
---@field bIsDanceTime boolean
---@field bIsFirstTimeEntering boolean
---@field NumberOfDancingNPC int32
---@field NumberOfNotDancingNPC int32
---@field PartyNPCAmount int32
---@field MusicDuration float
---@field SavedPartyTables TArray<FSavedPartyTables>
---@field AvailablePartyProductTypesIndexes TArray<int32>
---@field SavedCustomersNumberToSpawn int32
local FSavedPartySpot = {}



---@class FSavedPartyTables
---@field PathName FString
---@field DrawnProduct FDrawnProduct
---@field bIsFull boolean
---@field bIsBlocked boolean
---@field ProductReason EProductReason
---@field ProductAmount TArray<FProductAmount>
local FSavedPartyTables = {}



---@class FSavedPartyTime
---@field bAreLightsOnOff boolean
local FSavedPartyTime = {}



---@class FSavedPassiveIncome
---@field MoneyFromOtherLevels TMap<FString, int32>
---@field DayNumber int32
local FSavedPassiveIncome = {}



---@class FSavedPathPoint
---@field PathPoint FString
---@field IsOccupied boolean
local FSavedPathPoint = {}



---@class FSavedPickedDecal
---@field SavedFavouritePlayerDecals TArray<FSavedFavouritePlayerDecals>
---@field PickedCategoryButtons EDecalUnlockType
---@field PickedDecal TSubclassOf<ADecalToPaint>
---@field DecalText FString
---@field PickedDecalTransform FTransform
---@field DecalColor FLinearColor
---@field DecalUnlockType EDecalUnlockType
---@field ArtisticOrGeneric EDecalColor
---@field IsInShop boolean
---@field CarPaint FSavedCarPaint
local FSavedPickedDecal = {}



---@class FSavedPlayerDecals
---@field SavedDefaultActor FSavedDefaultActor
---@field SortOrder int32
---@field DecalText FString
---@field DecalColor FLinearColor
---@field DecalColor2 FLinearColor
---@field DecalColor3 FLinearColor
---@field WallLocation FVector
---@field bPreview boolean
---@field bCleaned boolean
---@field SavedDecalComponentTransform FTransform
local FSavedPlayerDecals = {}



---@class FSavedProducts
---@field PathName FString
---@field Actor TSubclassOf<AActor>
---@field Transform FTransform
---@field CollisionProfileName FName
local FSavedProducts = {}



---@class FSavedQuest
---@field GSSQuest TSubclassOf<UGSSQuest>
---@field CurrentProgress int32
---@field MaxProgress int32
local FSavedQuest = {}



---@class FSavedRVCamp
---@field SavedCampers TArray<FSavedRVCamper>
---@field SavedScheduledCamperIDs TArray<FGuid>
---@field SavedCampSpots TArray<FSavedRVCampSpot>
---@field SavedEmployees TArray<FSavedRVCampEmployee>
---@field SavedRubyData FSavedRuby
---@field SavedEventCooldown int32
---@field SavedConcert FRvConcertData
---@field SavedChallenge TArray<FSavedRVChallengeConditionData>
---@field SavedBuildingsToUpgrade FSavedRVUpgradeBuildings
---@field TotalTrustPoints int32
---@field CurrentTrustPoints int32
---@field CurrentBookingView ERVBookingView
---@field bWasBookingToolInitiated boolean
---@field bIsAutoCheckoutEnabled boolean
---@field bSkipDismissPopup boolean
---@field bSkipConcertCancelPopup boolean
---@field InterestedCustomersRefreshTime FTimeStruct
---@field InterestedCustomers TArray<FSavedRVCustomerData>
---@field CurrentBookingLevel int32
---@field bCanEverSpawnCustomerForService boolean
---@field bCanGuestsGainRelax boolean
---@field bIsUnpaid boolean
---@field bCanGenerateNewCustomers boolean
---@field bCanAutorefreshcustomers boolean
---@field SavedRVQuestline FSavedRVQuestline
---@field CurrentResourcesState TMap<ERVResource, FRVResourceState>
local FSavedRVCamp = {}



---@class FSavedRVCampEmployee
---@field EmployeeID FGuid
---@field AssignedServices TArray<FRVEmployeeAssignment>
---@field CurrentServiceTarget FGameplayTag
---@field bIsAutopayEnabled boolean
---@field bIsUnpaid boolean
---@field bIsAtConcert boolean
---@field CurrentMoneyEarned float
---@field PayCooldown FTimeStruct
local FSavedRVCampEmployee = {}



---@class FSavedRVCampSpot
---@field CampSpot TSoftObjectPtr<ARVCampSpot>
---@field BookedCustomers TArray<FSavedRVCustomerData>
---@field CustomName FString
---@field bHasCustomName boolean
local FSavedRVCampSpot = {}



---@class FSavedRVCamper
---@field CamperID FGuid
---@field CustomerID FGuid
---@field CampSpot TSoftObjectPtr<ARVCampSpot>
---@field CamperState ERVCamperState
---@field CurrentStayTime FTimeStruct
---@field CompletedServices TArray<FRVCompletedService>
---@field ServiceStreakBonuses int32
---@field bIsConcertCompleted boolean
---@field bCanLeaveCampSpot boolean
---@field ConcertCompletedMusicType FGameplayTag
local FSavedRVCamper = {}



---@class FSavedRVChallengeConditionData
---@field TimeLeft FTimeStruct
---@field TargetCurrent int32
---@field bConditionMet boolean
local FSavedRVChallengeConditionData = {}



---@class FSavedRVCustomerData
---@field CustomerID FGuid
---@field GuestName FName
---@field CamperDataName FName
---@field GuestType ERVGuestType
---@field GuestServices TArray<FGameplayTag>
---@field SleepoverGuestData FRVSleepoverGuestData
---@field ResourceCosts TMap<ERVResource, int32>
---@field LikedMusic TArray<FGameplayTag>
---@field CustomerState ERVCustomerState
---@field CamperLeftReason ERVCamperLeftReason
---@field CompletedServices TArray<FRVCompletedService>
---@field ServiceStreakBonuses int32
---@field ConcertCompletedMusicType FGameplayTag
local FSavedRVCustomerData = {}



---@class FSavedRVQuestline
---@field UnlockedServiceTag FGameplayTag
---@field bSaveRubyCamperDoors boolean
local FSavedRVQuestline = {}



---@class FSavedRVUpgradeBuildings
---@field CamperSpotsSaved TArray<FRVSavedParkingData>
---@field ServicesToSave TArray<FRVServiceData>
---@field CousinHouseLevel int32
---@field ConcertLevel int32
local FSavedRVUpgradeBuildings = {}



---@class FSavedRadioTower
---@field RadioTowerLevel int32
local FSavedRadioTower = {}



---@class FSavedRandomDialoguesManager
---@field bIsRandomCallsManagerActive boolean
---@field bIsJoeMuted boolean
---@field AmountOfBlueprintLeft int32
---@field CurrentJoeOrder FJoeOrderInfo
---@field bTradeCompleted boolean
local FSavedRandomDialoguesManager = {}



---@class FSavedRenownEntity
---@field RenownSoft TSoftClassPtr<URenownType>
---@field RenownProgress int32
---@field TimeAtWhichRenownChanges FTimeStruct
---@field RenownLevel int32
local FSavedRenownEntity = {}



---@class FSavedRentalSpot
---@field PathName FString
---@field SavedRentalSpot FRentableEquipmentSlot
---@field SavedWayPoint FSavedWayPoint
local FSavedRentalSpot = {}



---@class FSavedRepairComponent
---@field ComponentRef FComponentReference
---@field bIsBroken boolean
---@field bNeedsFixing boolean
---@field bInteractMode boolean
---@field bReplacementFailed boolean
local FSavedRepairComponent = {}



---@class FSavedRuby
---@field bNoShotGunIdle boolean
---@field bSleeping boolean
---@field bMegaphoneEquipped boolean
local FSavedRuby = {}



---@class FSavedRudy
---@field RudyTransform FTransform
---@field CurrentFuelCapacity float
---@field CurrentOverheat float
---@field TargetHoldDistance float
---@field CurrentHoldDistance float
---@field bHasSand boolean
local FSavedRudy = {}



---@class FSavedRunway
---@field PathName FString
---@field SavedCurrentAirplaneLanded TSoftObjectPtr<ATradingAirplane>
---@field SavedRunwaySchedule TArray<FPlaneEntry>
---@field SavedExtraTimeUsed boolean
---@field SavedExtraTimeLeft int32
local FSavedRunway = {}



---@class FSavedSaleSlot
---@field SavedCarForSale FSavedCarWreck
---@field SavedExhibitionSpot TSoftObjectPtr<AExhibitionSpotSlot>
---@field SavedCarPrice float
---@field SavedCurrentTime FTimeStruct
---@field SavedLastViewersUpdateTime FTimeStruct
---@field SavedCurrentInterest float
---@field SavedCurrentViewers int32
---@field SavedIsSold boolean
---@field SavedQuestSale boolean
---@field SavedLastSaleCheckNumber int32
local FSavedSaleSlot = {}



---@class FSavedSean
---@field IsWorkingOnWreck boolean
---@field IsInsideCrane boolean
---@field WreckPickedUpWithCrane boolean
---@field WreckDroppedWithCrane boolean
---@field bSeanCarSaved boolean
---@field PlayerLeftJunkyard boolean
---@field CurrentWreckArea TSoftObjectPtr<ACarWreckPlaceableArea>
---@field CurrentMoveTargetArea TSoftObjectPtr<ACarWreckPlaceableArea>
---@field CurrentMarking ECarWreckMarking
---@field SeanCarTransform FTransform
---@field PendingSpecialBarks TArray<ENPCConversationType>
---@field TimeSinceLastBark float
---@field CurrentBarkInterval float
---@field LastBarkSystemTime FDateTime
---@field WasLastBarkSystemTimeRecorded boolean
local FSavedSean = {}



---@class FSavedShark
---@field IsSharkInPreparation boolean
---@field IsSharkActive boolean
---@field Location FVector
---@field Rotation FRotator
---@field CurrentTargetPointIndex int32
---@field SavedUseTargetActor boolean
---@field SavedTurnRate float
---@field SavedMovementPlayRate float
---@field SavedHealth float
---@field SavedPreysNumberToEat int32
---@field SavedEatenCustomersNumber int32
---@field SavedCurrentSecondsToFindNextPrey float
local FSavedShark = {}



---@class FSavedShelves
---@field PathName FString
---@field Actor TSubclassOf<AActor>
---@field Slots TArray<FSlotStruct>
---@field Transform FTransform
---@field RestockData TArray<FRestockProductData>
---@field bCanBeRestocked boolean
---@field bAutoRestock boolean
---@field ShelfRestockThreshold float
---@field CurrentRestockCapacity float
---@field IsShelfBeforeRestockUpdate boolean
local FSavedShelves = {}



---@class FSavedSlotStruct
---@field uID FString
---@field IndexSlot int32
---@field SaveSlotName FText
---@field GameMapName FString
---@field RealTime FDateTime
---@field GameTime FTimeStruct
---@field ActivatedDLCs TArray<EDLCName>
---@field LevelName FString
---@field ConnectedSaveSlotsForOtherLevels TMap<FString, FString>
local FSavedSlotStruct = {}



---@class FSavedSpawnedRuin
---@field PathName FString
---@field bIsValidRuin boolean
local FSavedSpawnedRuin = {}



---@class FSavedSpawnedWeb
---@field bIsOccupiedSave boolean
---@field Index int32
local FSavedSpawnedWeb = {}



---@class FSavedSpotToDance
---@field AICharacterPathName FString
local FSavedSpotToDance = {}



---@class FSavedState
---@field SavedState EState
---@field SavedDifficulty EContractDifficulty
---@field SavedStateLevel int32
---@field SavedCompletedContractsNumber int32
---@field SavedCompletedDeliveriesNumber int32
---@field SavedDeliveries TArray<FSavedDeliveryContract>
---@field SavedContracts TArray<FSavedCustomizationContract>
local FSavedState = {}



---@class FSavedSwitch
---@field PathName FString
---@field SwitchState ESwitchState
local FSavedSwitch = {}



---@class FSavedTape
---@field Transform FTransform
---@field SplineLength float
local FSavedTape = {}



---@class FSavedTicketBarrierData
---@field bBarrierOpen boolean
---@field bAccessTicketsOnly boolean
---@field bAutomaticValidation boolean
local FSavedTicketBarrierData = {}



---@class FSavedTowy
---@field TowyTransform FTransform
---@field TowysFuel float
local FSavedTowy = {}



---@class FSavedTowysGarage
---@field TowysGarageLevel int32
local FSavedTowysGarage = {}



---@class FSavedTradeCenter
---@field TradeCenterLevel int32
local FSavedTradeCenter = {}



---@class FSavedTradingPilot
---@field SavedTradingPilotCharacter TSoftClassPtr<APilotCharacter>
---@field SavedHair TSoftObjectPtr<USkeletalMesh>
---@field SavedBeard TSoftObjectPtr<USkeletalMesh>
---@field SavedGender ENPCGender
---@field SavedLanguageAccent ENPCAccent
---@field SavedFlagMaterial TSoftObjectPtr<UMaterialInstance>
---@field SavedPilotState EMontagePilotState
local FSavedTradingPilot = {}



---@class FSavedTrashBin
---@field PathName FString
---@field Capacity float
---@field Transform FTransform
local FSavedTrashBin = {}



---@class FSavedTrashItems
---@field PathName FString
---@field Actor TSubclassOf<AActor>
---@field Transform FTransform
---@field CollisionProfileName FName
---@field CollisionEnabledType ECollisionEnabled::Type
---@field CollisionResponseContainer FCollisionResponseContainer
---@field SavedObjectType ECollisionChannel
local FSavedTrashItems = {}



---@class FSavedVIPData
---@field CurrentVIPTime float
---@field CurrentDestination EDLCName
---@field CurrentState EVIPState
---@field MapPoints TArray<FVIPDestinationPoints>
local FSavedVIPData = {}



---@class FSavedVehicles
---@field GSSWheeledVehicle TSubclassOf<AGSSWheeledVehicle>
---@field VehicleID FGuid
---@field TransformVehicle FTransform
---@field SimulatePhysics boolean
---@field bCanBeAttractedByMagnetSave boolean
---@field SavedInventory FSavedInventory
---@field VehicleOptymalizeType EVehicleOptymalizeType
---@field InteactionMode boolean
---@field bInVehicleWasFixed boolean
---@field MaskInventorySlots TArray<FSlotStruct>
---@field MaskInventoryMoney float
---@field VehiclePriorityTraffics TArray<EPriorityTraffic>
---@field PathName FString
---@field StartPathPointName FString
---@field EndPathPointName FString
---@field SavedPathPoint FSavedPathPoint
---@field SavedRepairParts TArray<FSavedRepairComponent>
---@field LockDifficulty int32
---@field AvailableLockPicks int32
---@field HoodState EVehicleHoodState
local FSavedVehicles = {}



---@class FSavedVolcano
---@field Anger EChunchumanchuAnger
---@field bErupting boolean
---@field EruptionTime float
local FSavedVolcano = {}



---@class FSavedWallInfo
---@field MaterialStructFront FSavedWallMaterialStruct
---@field MaterialStructBack FSavedWallMaterialStruct
---@field OriginalPathName FString
---@field PathName FString
---@field InteractableDecals TArray<FSavedInteractableDecals>
---@field StaticMeshPath FSoftObjectPath
---@field bWallTypeEdited boolean
---@field ClassPath FString
---@field Material0Path FSoftObjectPath
---@field Material1Path FSoftObjectPath
---@field MaterialWallpaperPath FSoftObjectPath
---@field AvaliableStructureTypeChange EStructureType
---@field Tags TArray<FName>
local FSavedWallInfo = {}



---@class FSavedWallMaterialStruct
---@field CurrentDurability float
---@field MaxDurability float
---@field WallSide EWallSide
---@field CurrentColour FLinearColor
---@field ColorType EColorType
local FSavedWallMaterialStruct = {}



---@class FSavedWaterVehicle
---@field ClassSaveIndex int32
---@field Location FVector
---@field Rotation FRotator
---@field DeliveryCategory ECategoryFilter
---@field OriginSpawnerPath FString
---@field CustomDestinationPath FString
---@field CurrentTargetPointIndex int32
---@field IsComingIn boolean
---@field Inventory FSavedInventory
local FSavedWaterVehicle = {}



---@class FSavedWayPoint
---@field WayPointTransform FTransform
---@field AICharacterPathName FString
---@field ArrowInQueuePosition int32
local FSavedWayPoint = {}



---@class FSavedWreckArea
---@field SavedArea TSoftObjectPtr<ACarWreckPlaceableArea>
---@field AreaZRotation float
local FSavedWreckArea = {}



---@class FSeanTaskRow : FTableRowBase
---@field TaskName FText
---@field CarWreckMarking ECarWreckMarking
---@field TaskClass TSoftClassPtr<UNPAITaskBase>
---@field RedDotTag FGameplayTag
---@field Icon TSoftObjectPtr<UTexture2D>
---@field RequiresCrane boolean
local FSeanTaskRow = {}



---@class FSectionStruct
---@field Building TSoftObjectPtr<AInteractableBuilding>
---@field MapTag FName
---@field RequiredDlc EDLCName
---@field MapIcon TSoftObjectPtr<UTexture2D>
---@field MapNameText FText
---@field AdditionalOffset FVector2D
local FSectionStruct = {}



---@class FShelveStruct
---@field Category EItemTypeCategory
---@field AssetRef UDecorationLevel
local FShelveStruct = {}



---@class FShiftsAvailable
---@field ShiftEnum EShiftType
---@field StartShiftHour int32
local FShiftsAvailable = {}



---@class FSlotStruct
---@field ItemClass TSoftClassPtr<AItem>
---@field QuantityItem int32
---@field SubCategory EItemTypeCategory
---@field SlotMainCategory ECategoryFilter
---@field Capacity int32
---@field Icon TSoftObjectPtr<UTexture2D>
---@field Price float
---@field Name FName
---@field Row FName
---@field bIsFavourites boolean
local FSlotStruct = {}



---@class FSoldIceCreamFlavour
---@field ItemClassString FString
---@field Flavour EIceCreamFlavours
local FSoldIceCreamFlavour = {}



---@class FSoldIceCreams
---@field Size EIceCreamConeSize
---@field SoldScoops TArray<FSoldIceCreamFlavour>
local FSoldIceCreams = {}



---@class FSpecificDLCShoppingTasks
---@field InteractableTaskType EInteractableTaskType
---@field Task TSoftClassPtr<UIteractableActorTask>
---@field RequiredBuildingLevel int32
local FSpecificDLCShoppingTasks = {}



---@class FSpecificShoppingTypeTask
---@field bDLCRequired boolean
---@field DLCRequiredName EDLCName
---@field ShoppingTasks TArray<FSpecificDLCShoppingTasks>
---@field InteractableTaskType EInteractableTaskType
---@field Task TSoftClassPtr<UIteractableActorTask>
---@field RequiredBuilding EBuildingType
---@field PercentChance float
local FSpecificShoppingTypeTask = {}



---@class FSpiderWebPosition
---@field SpiderWebReference ASpiderWebBase
---@field WebMeshToSpawn UStaticMesh
---@field bIsOccupied boolean
---@field MapAndLevelToSpawnOn TArray<FRequiredLevel>
---@field SpiderWebType ESpiderPositionType
---@field trasform FTransform
local FSpiderWebPosition = {}



---@class FSpotToDance
---@field AICharacterBase AAICharacterBase
---@field ArrowComponent UArrowComponent
local FSpotToDance = {}



---@class FStageComponent
---@field ComponentRef FComponentReference
---@field bDone boolean
local FStageComponent = {}



---@class FStateData
---@field State EState
---@field UnlockLevel int32
---@field Difficulty EContractDifficulty
---@field StateLevel int32
---@field StateCode FName
---@field ContractsSettings TArray<FContractType>
---@field ContractTierChances TMap<EJunkyardPartRarity, float>
---@field StateIcon TSoftObjectPtr<UTexture2D>
local FStateData = {}



---@class FStateLevelDriverData
---@field Chances float
---@field Cost float
---@field ContractPointsCost float
local FStateLevelDriverData = {}



---@class FStateSettings
---@field StateLevel int32
---@field WrecksTiers TMap<EJunkyardPartRarity, float>
---@field NonGaragePartsTiers TMap<EJunkyardPartRarity, float>
---@field GaragePartsTiers TMap<EJunkyardPartRarity, float>
local FStateSettings = {}



---@class FStorageCarPart
---@field PartClass TSoftClassPtr<UActorComponent>
---@field PartName FText
---@field PartIcon TSoftObjectPtr<UTexture2D>
---@field CleanedIcon TSoftObjectPtr<UTexture2D>
---@field PossibleCarPartTypes TArray<EJunkyardCarPartType>
---@field SpecificFilters TArray<EJunkyardFilters>
---@field PartData FCarPartData
---@field AddedDecals TArray<FSavedPlayerDecals>
---@field BasePrice float
local FStorageCarPart = {}



---@class FSuccessfulTradesLevel
---@field TierLevelRomanNumber FName
---@field Level int32
---@field SuccessfulTradesNumber int32
---@field CooldownReductionSeconds int32
---@field TradingValueIncrease float
local FSuccessfulTradesLevel = {}



---@class FSupplySlotStruct
---@field Name FText
---@field Icon UTexture2D
---@field Category EItemTypeCategory
---@field MainCategory ECategoryFilter
---@field RedDotTag FGameplayTag
---@field RequiredDlc EDLCName
---@field RequiredTagToUnlock FGameplayTag
---@field bUseOtherBuilding boolean
---@field RequiredBuildingClass TSoftClassPtr<AInteractableActor>
---@field OtherBuildingRequiredLevel int32
local FSupplySlotStruct = {}



---@class FSupplyStruct
---@field Level int32
---@field OtherRequiredLevel int32
---@field OtherName FText
---@field RequiredBuildingClass TSoftClassPtr<AInteractableActor>
---@field SlotsToCreate TArray<FSupplySlotStruct>
---@field bUseSecondLevel boolean
local FSupplyStruct = {}



---@class FTArrayPlayerDecals
---@field AlreadyExistingPlayerDecalsNum int32
---@field SpawnedPlayerDecalsNum int32
---@field PlayerDecals TArray<AActor>
local FTArrayPlayerDecals = {}



---@class FTargetTypeScorePair
---@field TargetType EShootingRangeDifficulty
---@field Score float
local FTargetTypeScorePair = {}



---@class FTarrayStruct
---@field MainCategory ECategoryFilter
---@field Category EItemTypeCategory
---@field Level int32
local FTarrayStruct = {}



---@class FTaskProgress
---@field TaskName FString
---@field CurProgress int32
---@field MaxProgress int32
local FTaskProgress = {}



---@class FTaskStopReason
---@field StopResult ETaskResult
---@field StopReason FString
local FTaskStopReason = {}



---@class FTaskStruct
---@field TaskBase TSubclassOf<UTaskBase>
---@field TasksProgress TArray<FTaskProgress>
---@field TargetActor AActor
---@field ShouldFinishOnGameLoad boolean
local FTaskStruct = {}



---@class FTextTexture2DPair
---@field Text FText
---@field Texture2D TSoftObjectPtr<UTexture2D>
local FTextTexture2DPair = {}



---@class FTicketData
---@field DigitId FString
---@field MovieName FText
---@field CinemaName FText
---@field FilmTime FText
---@field FilmImage TSoftObjectPtr<UTexture>
---@field FakeParameters TArray<eTicketParameters>
local FTicketData = {}



---@class FTimeStruct
---@field Minutes int32
---@field Hours int32
---@field Days int32
---@field TimeOfDay float
local FTimeStruct = {}



---@class FTradingBoost
---@field TradingBoost ETradingBoosts
---@field ChancesOfAppearing float
---@field Value float
---@field Duration int32
---@field Cooldown int32
local FTradingBoost = {}



---@class FTradingPilotInfo : FTableRowBase
---@field CountryRegion ECountryRegion
---@field FlagTexture TSoftObjectPtr<UMaterialInstance>
---@field PilotAccent ENPCAccent
local FTradingPilotInfo = {}



---@class FTradingPilots
---@field TradingPilotCharacters TArray<TSoftClassPtr<APilotCharacter>>
---@field AvailableHair TArray<TSoftObjectPtr<USkeletalMesh>>
---@field AvailableBeard TArray<TSoftObjectPtr<USkeletalMesh>>
local FTradingPilots = {}



---@class FTradingPlanesInfo : FTableRowBase
---@field CountryRegion ECountryRegion
---@field TradingPlaneInfo UTradingPlaneInfo
local FTradingPlanesInfo = {}



---@class FTradingSkill
---@field TradingSkill ETradingSkill
---@field BuildingsNeeded TArray<FTradingSkillUpgradeBuilding>
---@field Value float
---@field CooldownTimeSeconds int32
local FTradingSkill = {}



---@class FTradingSkillUpgradeBuilding
---@field BuldingNeeded EBuildingType
---@field BuildingLevelNeeded int32
local FTradingSkillUpgradeBuilding = {}



---@class FTrafficEventData : FTableRowBase
---@field ID int32
---@field Name FText
---@field Description FText
---@field Impact int32
---@field Duration int32
---@field StartingHour int32
---@field ChancesToOccur int32
---@field Image UTexture2D
local FTrafficEventData = {}



---@class FTrafficImpactToSpawnTime : FTableRowBase
---@field Impact int32
---@field Name FText
---@field CarMinSpawnTime float
---@field CarMaxSpawnTime float
---@field BoatMinSpawnTime float
---@field BoatMaxSpawnTime float
local FTrafficImpactToSpawnTime = {}



---@class FTrafficManagerData
---@field FuelSellPrices TArray<FFuelSellPriceData>
---@field CurrentTrafficEventID int32
---@field CurrentTrafficEventStartTime FTimeStruct
---@field UpcomingTrafficEventID int32
---@field UpcomingTrafficEventStartTime FTimeStruct
---@field CompletedEvents TArray<int32>
local FTrafficManagerData = {}



---@class FTruckDelivery : FTableRowBase
---@field Vehicle TSoftClassPtr<AActor>
---@field MarkerWidgetClass TSubclassOf<UUserWidget>
local FTruckDelivery = {}



---@class FTutorialData
---@field Type EGameActivityType
---@field Icon TSoftObjectPtr<UTexture2D>
---@field Title FText
---@field Description FText
---@field CustomParameters TArray<FCustomTextVar>
---@field DescriptionKeybinds TArray<FKeybindInformation>
---@field bGamepadSensitiveDescription boolean
---@field GamepadDescription FText
---@field GamepadDescriptionKeybinds TArray<FGamepadInformation>
local FTutorialData = {}



---@class FTutorialInfo : FTableRowBase
---@field Class TSoftClassPtr<AActor>
---@field TutorialType EGameActivityType
---@field TutorialTag FGameplayTag
local FTutorialInfo = {}



---@class FUiSound : FTableRowBase
---@field Cue USoundCue
local FUiSound = {}



---@class FUnblockMapStruct : FTableRowBase
---@field Sector FText
---@field Item FText
---@field Description FText
---@field Price float
---@field RequiredTag FGameplayTag
---@field MinLevelToUnlock int32
---@field NameOfDLC EDLCName
---@field CameraType ECameraType
---@field bIsExtraFeature boolean
---@field BuildingBlueprintsNumber int32
---@field bIsInteractable boolean
local FUnblockMapStruct = {}



---@class FUnlockableByFameData
---@field Name FText
---@field Description FText
---@field Image TSoftObjectPtr<UTexture2D>
---@field Category EFameRewardCategory
---@field CategoryImage TSoftObjectPtr<UTexture2D>
---@field UnlockableGameplayStuffTag FGameplayTag
local FUnlockableByFameData = {}



---@class FUnlockableGameplayStuffState
---@field Tag FGameplayTag
---@field State EUnlockableGameplayStuffState
local FUnlockableGameplayStuffState = {}



---@class FUnlockableUIState
---@field Tag FGameplayTag
---@field State EUnlockableUIState
local FUnlockableUIState = {}



---@class FUnlockedSkill
---@field TradingSkill ETradingSkill
---@field Value float
---@field CooldownTimeSeconds int32
local FUnlockedSkill = {}



---@class FUnlockedState
---@field State EState
---@field Difficulty EContractDifficulty
---@field StateLevel int32
---@field CompletedContractsNumber int32
---@field CompletedDeliveriesNumber int32
---@field AvailableContracts TArray<UContractBase>
local FUnlockedState = {}



---@class FUpgradeTrees
---@field UpgradeTree UTechnologyTree
---@field Icon TSoftObjectPtr<UTexture2D>
local FUpgradeTrees = {}



---@class FUpgradingMap
---@field Name FName
---@field UnloadMapName FName
---@field PathStations TArray<APathStation>
---@field bForceUnlockPathStation boolean
---@field RuinsToRemove TArray<ARuins>
---@field UpgradeActorTag FName
local FUpgradingMap = {}



---@class FVIPDestinationPoints
---@field DestinationName EDLCName
---@field VIPPoints int32
---@field bIsBonusActive boolean
---@field RemaningBonusTime float
local FVIPDestinationPoints = {}



---@class FVehicleCollisionBox
local FVehicleCollisionBox = {}


---@class FVehicleDriverMatchup
---@field VehicleClass TSoftClassPtr<AGSSWheeledVehicle>
---@field CustomerClass TSoftClassPtr<AAICharacterBase>
---@field NBM_CustomerClasses TArray<TSoftClassPtr<AAICharacterBase>>
local FVehicleDriverMatchup = {}



---@class FVehicleFuelData
---@field FuelType EFuelMagazine
---@field FuelPriceCurve UCurveFloat
---@field DefaultFuelSellPrice float
---@field MinFuelSellPrice float
---@field MaxFuelSellPrice float
local FVehicleFuelData = {}



---@class FViewersIncreasePerInterest
---@field InterestValueRange FFloatRange
---@field InterestText FText
---@field ViewersIncreaseRange FInt32Range
local FViewersIncreasePerInterest = {}



---@class FWallMaterialStruct
---@field DynamicMaterial UMaterialInstanceDynamic
---@field CurrentDurability float
---@field MaxDurability float
---@field WallSide EWallSide
---@field CurrentColour FLinearColor
---@field ColorType EColorType
local FWallMaterialStruct = {}



---@class FWarehouseUpgradeInfo
---@field Level int32
---@field MaxFuelCapacity float
---@field MaxInventoryCapacity int32
local FWarehouseUpgradeInfo = {}



---@class FWatchedMovieResult
---@field MovieTitle FText
---@field TicketIncome float
---@field PopcornIncome float
---@field PopcornRefill float
---@field RenownGainedTickets float
---@field RenownGainedPopcorn float
---@field RenownLost float
---@field RoyaltyFee float
---@field MovieIcon TSoftObjectPtr<UTexture>
---@field CorrectTickets int32
---@field WrongTickets int32
---@field UnvalidatedTickets int32
---@field RejectedCustomersCorrectly int32
---@field RejectedCustomersWrongly int32
---@field MovieIndex int32
local FWatchedMovieResult = {}



---@class FWaterVehicleLoadData
---@field Location FVector
---@field Rotation FRotator
---@field CurrentTargetPointIndex int32
---@field IsComingIn boolean
---@field Inventory FSavedInventory
---@field bAllPassengersLeft boolean
local FWaterVehicleLoadData = {}



---@class FWaterVehicleSpawnData
---@field VehicleClass TSoftClassPtr<AActor>
---@field DeliveryCategory ECategoryFilter
---@field CustomDestination AActor
---@field IsLoadedFromSave boolean
---@field LoadData FWaterVehicleLoadData
local FWaterVehicleSpawnData = {}



---@class FWayPoint
---@field AICharacterBase AAICharacterBase
---@field ArrowComponent UArrowComponent
local FWayPoint = {}



---@class FWetSuitColors
---@field Color1 FLinearColor
---@field Color2 FLinearColor
---@field Color3 FLinearColor
---@field Color4 FLinearColor
local FWetSuitColors = {}



---@class FWheelInfo
local FWheelInfo = {}


---@class FWheelRepairAnimations
---@field FrontLeftRepair_AnimMontage UAnimMontage
---@field FrontRightRepair_AnimMontage UAnimMontage
---@field BackLeftRepair_AnimMontage UAnimMontage
---@field BackRightRepair_AnimMontage UAnimMontage
local FWheelRepairAnimations = {}



---@class FWindsurfingBoardColors
---@field Board TSoftObjectPtr<UMaterialInstance>
---@field Sail TSoftObjectPtr<UMaterialInstance>
local FWindsurfingBoardColors = {}



---@class IElectrocity : IInterface
local IElectrocity = {}

---@return boolean
function IElectrocity:GetElectrocity() end
---@param On boolean
function IElectrocity:EnableElectrocity(On) end


---@class IInteraction : IInterface
local IInteraction = {}

---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function IInteraction:UseItem(Pawn, Throw, AimingTime) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function IInteraction:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function IInteraction:ShowTooltip(Pawn, Hit) end
function IInteraction:ShowInteractionAlertMessage() end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function IInteraction:GetPathPoint(GSSWheeledVehicle) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function IInteraction:GetInteractiveTransform(Actor, RotateToTransform) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function IInteraction:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
function IInteraction:DisableInteractionInfo(Pawn) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function IInteraction:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function IInteraction:AlternativeInteraction(Pawn, UPrimitiveComponent) end


---@class IInteractionInfo : IInterface
local IInteractionInfo = {}

---@return FName
function IInteractionInfo:GetInteractionName() end


---@class IMagnetArmAnimInstance : IInterface
local IMagnetArmAnimInstance = {}

---@param Value float
---@param MinLimitReached boolean
---@param MaxLimitReached boolean
function IMagnetArmAnimInstance:InputAxisMoveArmVertical(Value, MinLimitReached, MaxLimitReached) end
---@param Value float
---@param MinLimitReached boolean
---@param MaxLimitReached boolean
function IMagnetArmAnimInstance:InputAxisMoveArmHorizontal(Value, MinLimitReached, MaxLimitReached) end
---@param Value float
---@param MinLimitReached boolean
---@param MaxLimitReached boolean
function IMagnetArmAnimInstance:InputAxisLowerMagnet(Value, MinLimitReached, MaxLimitReached) end
---@param Value float
---@param MinLimitReached boolean
---@param MaxLimitReached boolean
function IMagnetArmAnimInstance:InputAxisExtendArm(Value, MinLimitReached, MaxLimitReached) end


---@class IMagnetForce : IInterface
local IMagnetForce = {}

---@param AttractedPrimitive UPrimitiveComponent
---@param PrimitiveToApplyForce UPrimitiveComponent
---@param AttractingActor AActor
---@param AttractingPrimitiveLocation FVector
---@param MinRequiredDistanceToSnap int32
---@param BoneName FName
---@param IgnoreDistance boolean
---@return boolean
function IMagnetForce:SnapPulledActor(AttractedPrimitive, PrimitiveToApplyForce, AttractingActor, AttractingPrimitiveLocation, MinRequiredDistanceToSnap, BoneName, IgnoreDistance) end
---@return boolean
function IMagnetForce:ShouldActorRotate() end
---@param NewIsHeldByMagnet boolean
function IMagnetForce:SetIsHeldByMagnet(NewIsHeldByMagnet) end
function IMagnetForce:PlayEventOnDeattached() end
function IMagnetForce:OnAttractedToMagnetEvent() end
---@return boolean
function IMagnetForce:HasCustomSetPhysicsEnabled() end
---@return UPrimitiveComponent
function IMagnetForce:GetPrimitiveToApplyFore() end
---@return boolean
function IMagnetForce:GetIsHeldByMagnet() end
---@return UPrimitiveComponent
function IMagnetForce:GetAttractedPrimitive() end
---@param IsPhysicsEnabled boolean
function IMagnetForce:CustomSetPhysicsEnabled(IsPhysicsEnabled) end
---@return boolean
function IMagnetForce:CanMagnetActivatePhysics() end
---@return boolean
function IMagnetForce:CanActorGetAttracted() end
---@param PoleLocation FVector
---@param AttractedPrimitive UPrimitiveComponent
---@param PrimitiveToApplyForce UPrimitiveComponent
---@param MaxDistance int32
---@param MaxForce int32
---@param DrawDebugLines boolean
function IMagnetForce:AttractToMagnet(PoleLocation, AttractedPrimitive, PrimitiveToApplyForce, MaxDistance, MaxForce, DrawDebugLines) end


---@class IOutlineInterface : IInterface
local IOutlineInterface = {}

---@param bShouldBeOutlined boolean
function IOutlineInterface:SetOutline(bShouldBeOutlined) end


---@class IPlaceable : IInterface
local IPlaceable = {}

function IPlaceable:EnableGhostMode() end
---@param bCompatibile boolean
---@param OverlapedElements TArray<AActor>
---@param Reason FName
function IPlaceable:CanBeSpawned(bCompatibile, OverlapedElements, Reason) end


---@class ITaskInformation : IInterface
local ITaskInformation = {}

---@return FTransform
function ITaskInformation:GetTaskInfoTransform() end


---@class ITaskInterface : IInterface
local ITaskInterface = {}

---@return FText
function ITaskInterface:GetTaskDescription() end


---@class IUIVisibilityInterface : IInterface
local IUIVisibilityInterface = {}

---@param PanelName FName
---@param InVisibility ESlateVisibility
function IUIVisibilityInterface:Interface_SetVisibility(PanelName, InVisibility) end


---@class UAIHelper : UBlueprintFunctionLibrary
local UAIHelper = {}

---@param SpecificAITask UDA_SpecificAITask
---@return TArray<TSoftObjectPtr<AInteractableBuilding>>
function UAIHelper:GetBuildingsFromSpecificAITask(SpecificAITask) end


---@class UAIManager : UActorComponent
---@field ComingVehicles TArray<TSubclassOf<AGSSWheeledVehicle>>
---@field VehiclesToSpawn TArray<TSoftClassPtr<AGSSWheeledVehicle>>
---@field VehiclesBannedFromGarage TArray<TSoftClassPtr<AGSSWheeledVehicle>>
---@field VehiclesBannedFromCarWash TArray<TSoftClassPtr<AGSSWheeledVehicle>>
---@field VehiclesBannedFromTidalWave TArray<TSoftClassPtr<AGSSWheeledVehicle>>
---@field VIPVehicles TArray<TSoftClassPtr<AGSSWheeledVehicle>>
---@field NormalCharactersToSpawn TArray<TSoftClassPtr<AAICharacterBase>>
---@field DeliveryCharactersToSpawn TArray<TSoftClassPtr<AAICharacterBase>>
---@field PartyCharactersToSpawn TArray<TSoftClassPtr<AAICharacterBase>>
---@field EmployeeCharactersToSpawn TArray<TSoftClassPtr<AAICharacterBase>>
---@field PoliceCharactersToSpawn TArray<TSoftClassPtr<AAICharacterBase>>
---@field PartySpotCharactersToSpawn TArray<TSoftClassPtr<AAICharacterBase>>
---@field NBM_NormalCharactersToSpawn TArray<TSoftClassPtr<AAICharacterBase>>
---@field NBM_DeliveryCharactersToSpawn TArray<TSoftClassPtr<AAICharacterBase>>
---@field NBM_PartyCharactersToSpawn TArray<TSoftClassPtr<AAICharacterBase>>
---@field NBM_EmployeeCharactersToSpawn TArray<TSoftClassPtr<AAICharacterBase>>
---@field NBM_PoliceCharactersToSpawn TArray<TSoftClassPtr<AAICharacterBase>>
---@field NBM_PartySpotCharactersToSpawn TArray<TSoftClassPtr<AAICharacterBase>>
---@field NBM_EmployeeMapping TMap<TSoftClassPtr<AAICharacterBase>, TSoftClassPtr<AAICharacterBase>>
---@field RudyClassBP TSoftClassPtr<APlayerVehicle>
---@field TowyClassBP TSoftClassPtr<APlayerVehicle>
---@field OnSpecialAICharacterBaseSpawn FAIManagerOnSpecialAICharacterBaseSpawn
---@field OnNpcSpawned FAIManagerOnNpcSpawned
---@field bCanGenerateCashRegisterTask boolean
---@field ChanceCarWash float
---@field ChanceFuel float
---@field ChanceRepair float
---@field ToiletPercent float
---@field LotteryPercent float
---@field AlcoholPercent float
---@field FoodPercent float
---@field DrugsPercent float
---@field GlassesPercent float
---@field IceCreamPercent float
---@field NewspaperPercent float
---@field PastriesPercent float
---@field SoftDrinksPercent float
---@field HatPercent float
---@field CarCarePercent float
---@field SoftToyPercent float
---@field ToyPercent float
---@field DLCAirstrip_AlcoholPercent float
---@field DLCAirstrip_HatPercent float
---@field DLCAirstrip_GlassesPercent float
---@field DLCAirstrip_CigarettesPercent float
---@field DLCAirstrip_FoodPercent float
---@field DLCAirstrip_SoftDrinkPercent float
---@field DLCAirstrip_PastryPercent float
---@field DLCAirstrip_ToyPercent float
---@field DLCAirstrip_PremiumDrinkPercent float
---@field DLCAirstrip_SoftToyPercent float
---@field TakeShowerPercent float
---@field MaxVehiclesOnMap int32
---@field MaxCinemaVehiclesOnMap int32
---@field TaskBaseClasses TArray<TSoftClassPtr<UTaskBase>>
---@field ValidCustomerShopTasks TArray<FCustomerShopTask>
---@field CurrentSpawnPoint AAISpawnPoint
---@field DeliveryBox TSoftClassPtr<AActor>
local UAIManager = {}

---@param SpawnPoint AAISpawnPoint
---@param CustomerType ECustomerType
---@param bIgnoreLimit boolean
---@return boolean
function UAIManager:TrySpawnVehicleForCustomerType(SpawnPoint, CustomerType, bIgnoreLimit) end
---@param SpawnPoint AAISpawnPoint
function UAIManager:TrySpawnVehicle(SpawnPoint) end
---@param SpawnTransform FTransform
---@param Home AActor
---@param MainTask EInteractableTaskType
function UAIManager:TrySpawnRvCustomer(SpawnTransform, Home, MainTask) end
---@param SpawnPoint ANoCarAISpawnPoint
function UAIManager:TrySpawnNoCarCustomer(SpawnPoint) end
---@param CharacterClass TSubclassOf<AAICharacterBase>
---@return TSubclassOf<AAICharacterBase>
function UAIManager:TryMapCharacterClass(CharacterClass) end
function UAIManager:SpawnVIPCustomer() end
---@param TaskTypeToGenerate ECustomerType
function UAIManager:SpawnTaskCustomer(TaskTypeToGenerate) end
---@param SpawnPoint ANoCarAISpawnPoint
function UAIManager:SpawnPanickingCustomer(SpawnPoint) end
---@param OutCharacter AAICharacterBase
---@param OutVehicle AGSSWheeledVehicle
---@param CharacterClass TSoftClassPtr<AAICharacterBase>
---@param CharacterTransform FTransform
---@param VehicleClass TSoftClassPtr<AGSSWheeledVehicle>
---@param VehicleTransform FTransform
---@param Home AActor
---@param VehicleOptymalizeType EVehicleOptymalizeType
function UAIManager:SpawnAICharacterSynchronously(OutCharacter, OutVehicle, CharacterClass, CharacterTransform, VehicleClass, VehicleTransform, Home, VehicleOptymalizeType) end
---@param OutCharacter AAICharacterBase
---@param OutVehicle AGSSWheeledVehicle
---@param CharacterClass TSoftClassPtr<AAICharacterBase>
---@param CharacterTransform FTransform
---@param VehicleClass TSoftClassPtr<AGSSWheeledVehicle>
---@param VehicleTransform FTransform
---@param Home AActor
---@param Tasks TArray<FTaskStruct>
---@param bIsParkingSpotCustomer boolean
---@param bNoCarCustomer boolean
---@param bSpecialVehicle boolean
---@param VehicleOptymalizeType EVehicleOptymalizeType
---@param HumanType EHumanType
function UAIManager:SpawnAICharacter(OutCharacter, OutVehicle, CharacterClass, CharacterTransform, VehicleClass, VehicleTransform, Home, Tasks, bIsParkingSpotCustomer, bNoCarCustomer, bSpecialVehicle, VehicleOptymalizeType, HumanType) end
---@param InICharacterBase AAICharacterBase
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return boolean
function UAIManager:SetupDeliveryCars(InICharacterBase, GSSWheeledVehicle) end
---@param NewMax int32
function UAIManager:SetMaxVehiclesOnMap(NewMax) end
---@param InSpawnPoint AAISpawnPoint
function UAIManager:SetCurrentSpawnPoint(InSpawnPoint) end
---@param Variation int32
function UAIManager:ResetFrequenceOfTasks(Variation) end
---@param OutVehicle TSoftClassPtr<AGSSWheeledVehicle>
---@param VehicleType EVehicleOptymalizeType
function UAIManager:RandomVehicle(OutVehicle, VehicleType) end
---@param Values TArray<float>
---@return int32
function UAIManager:RandomMachine(Values) end
---@param OutVehicle TSoftClassPtr<AGSSWheeledVehicle>
---@param VehicleType EVehicleOptymalizeType
---@param OutCharacter TSoftClassPtr<AAICharacterBase>
function UAIManager:RandomCustomerVehicleAndCharacter(OutVehicle, VehicleType, OutCharacter) end
---@param InitVehicle TSoftClassPtr<AGSSWheeledVehicle>
---@param OutCharacter TSoftClassPtr<AAICharacterBase>
---@param HumanType EHumanType
function UAIManager:RandomCharacter(InitVehicle, OutCharacter, HumanType) end
---@param VIPCarToLoad TSoftClassPtr<AGSSWheeledVehicle>
function UAIManager:LoadVIPCarAsync(VIPCarToLoad) end
---@param TaskType ECustomerType
---@return boolean
function UAIManager:IsBuildingQueueFree(TaskType) end
---@param RequiredDLCName EDLCName
---@param ShoppingTaskType FSpecificShoppingTypeTask
---@param GeneratedTasks TArray<TSoftClassPtr<UIteractableActorTask>>
---@param TasksToLoad TArray<FSoftObjectPath>
function UAIManager:HandleGenerateBuyDLCProductsTasks(RequiredDLCName, ShoppingTaskType, GeneratedTasks, TasksToLoad) end
---@return int32
function UAIManager:GetMaxVehiclesOnMap() end
---@return AAISpawnPoint
function UAIManager:GetCurrentSpawnPoint() end
---@param InVehicle TSoftClassPtr<AGSSWheeledVehicle>
---@param OutCharacter TSoftClassPtr<AAICharacterBase>
---@return boolean
function UAIManager:GetCharacterRequiredByVehicle(InVehicle, OutCharacter) end
---@param InTask TArray<FTaskStruct>
---@return TArray<FTaskStruct>
function UAIManager:GenerateVehicleTask(InTask) end
---@param TaskTypeToGenerate ECustomerType
---@param OutOptymalizeType EVehicleOptymalizeType
---@param OutbIsParkingSpotCustomer boolean
---@param bNoCarCustomer boolean
---@return TArray<FTaskStruct>
function UAIManager:GenerateTasks(TaskTypeToGenerate, OutOptymalizeType, OutbIsParkingSpotCustomer, bNoCarCustomer) end
---@param bNoCarCustomer boolean
---@param bIsVipCustomer boolean
---@return ECustomerType
function UAIManager:GenerateRandomTaskType(bNoCarCustomer, bIsVipCustomer) end
---@param bNoCarCustomer boolean
---@param OutOptymalizeType EVehicleOptymalizeType
---@param OutbIsParkingSpotCustomer boolean
---@param bIsVipCustomer boolean
---@return TArray<FTaskStruct>
function UAIManager:GenerateRandomTasks(bNoCarCustomer, OutOptymalizeType, OutbIsParkingSpotCustomer, bIsVipCustomer) end
---@param InTask TArray<FTaskStruct>
---@return TArray<FTaskStruct>
function UAIManager:GenerateCustomerTask(InTask) end
---@param InTask TArray<FTaskStruct>
function UAIManager:GenerateBuyProductsTasks(InTask) end
---@param TaskType EInteractableTaskType
---@return FTaskStruct
function UAIManager:CreateTaskStruct(TaskType) end


---@class UAchievementProfile : USaveGame
---@field AchievementsSaved TArray<FAchievementValue>
local UAchievementProfile = {}



---@class UAchievementWidgetBase : UUserWidget
local UAchievementWidgetBase = {}

---@param Icon UTexture2D
---@param Name FText
function UAchievementWidgetBase:SetAchievementValues(Icon, Name) end


---@class UActionManagerSubsystem : UWorldSubsystem
---@field OnNewUnlockableUIStateSet FActionManagerSubsystemOnNewUnlockableUIStateSet
---@field OnNewGameplayStuffUnlockStateChanged FActionManagerSubsystemOnNewGameplayStuffUnlockStateChanged
---@field UnlockableUIStates TArray<FUnlockableUIState>
---@field UnlockableGameplayStuffStates TArray<FUnlockableGameplayStuffState>
---@field QuestItemsCollisions TArray<FQuestItemCollision>
---@field bDelayActions boolean
---@field DelayedActions TArray<FGameActionStruct>
local UActionManagerSubsystem = {}

---@param GameActionInstigaor UObject
---@param NPCRef TSoftObjectPtr<AGSSNPAICharacterBase>
---@param DialogueGraph UDialogueGraph
---@param DialogueID int32
---@param bForceToPlayOnPlayerAudioComponent boolean
---@return boolean
function UActionManagerSubsystem:TriggerSpecificNPCDialogue(GameActionInstigaor, NPCRef, DialogueGraph, DialogueID, bForceToPlayOnPlayerAudioComponent) end
---@param GameActionInstigaor UObject
---@param NPCRef TSoftObjectPtr<AGSSNPAICharacterBase>
---@param ConversationType ENPCConversationType
---@return boolean
function UActionManagerSubsystem:TriggerRandomNPCDialogue(GameActionInstigaor, NPCRef, ConversationType) end
---@param GameActionInstigator UObject
---@param DialogueOwnerRef UDialogueGraph
---@param DialogueID int32
---@return boolean
function UActionManagerSubsystem:StartDialogue(GameActionInstigator, DialogueOwnerRef, DialogueID) end
---@param UIPartGameplayTag FGameplayTag
---@param bUnLocked boolean
function UActionManagerSubsystem:SetUnlockableUIUnlocked(UIPartGameplayTag, bUnLocked) end
---@param NewUnlockableUIState FUnlockableUIState
function UActionManagerSubsystem:SetUnlockableUIPartState(NewUnlockableUIState) end
---@param TagsContainer FGameplayTagContainer
---@param State EUnlockableUIState
function UActionManagerSubsystem:SetUnlockableUIPartsState(TagsContainer, State) end
---@param NewUnlockableGameplayStuffState FUnlockableGameplayStuffState
function UActionManagerSubsystem:SetUnlockableGameplayStuffState(NewUnlockableGameplayStuffState) end
---@param TagsContainer FGameplayTagContainer
---@param bUnLocked boolean
function UActionManagerSubsystem:SetUnlockableGameplayStuffsState(TagsContainer, bUnLocked) end
---@param UIPartGameplayTag FGameplayTag
---@return boolean
function UActionManagerSubsystem:IsUnlockableUIUnlocked(UIPartGameplayTag) end
---@param GameplayStuffTag FGameplayTag
---@return boolean
function UActionManagerSubsystem:IsGameplayStuffUnlocked(GameplayStuffTag) end
---@param Actions TArray<FGameActionStruct>
---@param GameActionInstigator UObject
function UActionManagerSubsystem:HandleDialogActions(Actions, GameActionInstigator) end
---@param ActiveAction FGameActionStruct
---@param GameActionInstigator UObject
---@return boolean
function UActionManagerSubsystem:HandleDialogAction(ActiveAction, GameActionInstigator) end
---@param GameAction UGameAction
---@param Instigator UObject
function UActionManagerSubsystem:HandleAction(GameAction, Instigator) end
---@param UIPartGameplayTag FGameplayTag
---@param UnlockableUIState EUnlockableUIState
function UActionManagerSubsystem:GetUnlockableUIState(UIPartGameplayTag, UnlockableUIState) end
---@param GameActionInstigator UObject
---@return boolean
function UActionManagerSubsystem:FireActiveQuestExternalEvent(GameActionInstigator) end
---@param GameActionInstigator UObject
---@param RelatedGraphDLC EDLCName
---@return boolean
function UActionManagerSubsystem:FinishActiveQuest(GameActionInstigator, RelatedGraphDLC) end
---@param GameActionInstigator UObject
---@return boolean
function UActionManagerSubsystem:EndConversation(GameActionInstigator) end
---@param RedDotTag FGameplayTag
function UActionManagerSubsystem:AddRedDotTagIfNotExists(RedDotTag) end


---@class UActivePromotionData : UDataAsset
---@field bActivatePromotion boolean
---@field ActivateActions TArray<UGameAction>
---@field DeactivateActions TArray<UGameAction>
local UActivePromotionData = {}



---@class UActiveQuestLine : UObject
---@field ActiveQuestLineData UQuestLineBase
---@field ActiveQuestData UQuestBase
---@field ActiveObjective UObjectiveBase
---@field ScheduledRetroactiveQuests TArray<UQuestBase>
---@field bDoingOnlyRetroactiveQuests boolean
---@field bIsQuestLineFollowed boolean
---@field bShouldCallQuestLineStartedEvent boolean
---@field bShouldCallQuestStartedEvent boolean
local UActiveQuestLine = {}



---@class UAddGasStationFuelGameAction : UGameAction
---@field FuelToAdd float
local UAddGasStationFuelGameAction = {}



---@class UAddMoneyGameAction : UGameAction
---@field MoneyToAdd float
local UAddMoneyGameAction = {}



---@class UAdditionalKeyItemWidget : UGSSGamePlayWidget
local UAdditionalKeyItemWidget = {}

function UAdditionalKeyItemWidget:ToggleWidgetCustom() end


---@class UAiCharacterComponent : UActorComponent
local UAiCharacterComponent = {}


---@class UAirStripEnums : UObject
local UAirStripEnums = {}


---@class UAirplaneHighlightAreaWidget : UUserWidget
local UAirplaneHighlightAreaWidget = {}

function UAirplaneHighlightAreaWidget:ForceShowTutorial() end


---@class UAirplaneHoleComponent : USceneComponent
---@field HoleEdge1 UBoxComponent
---@field HoleEdge2 UBoxComponent
---@field HoleEdge3 UBoxComponent
---@field HoleEdge4 UBoxComponent
---@field HoleEdge5 UBoxComponent
---@field HoleEdges int32
local UAirplaneHoleComponent = {}



---@class UAirplaneHoleWorldWidget : UUserWidget
---@field ParentSizeBox USizeBox
---@field AttachedMeshComponent UStaticMeshComponent
---@field WidgetLocationSocketName FName
---@field WorldOffset FVector
local UAirplaneHoleWorldWidget = {}



---@class UAirportFuelMinigameWidget : UUserWidget
---@field Vehicle AAirplaneBase
---@field RandomFuel float
local UAirportFuelMinigameWidget = {}



---@class UAirportInventory : UActorComponent
---@field Slots TArray<FAirportSlotStruct>
local UAirportInventory = {}

---@param ItemClass TSubclassOf<AItem>
---@param Quantity int32
---@param IgnoreLimit boolean
---@return int32
function UAirportInventory:AddAirplaneItem(ItemClass, Quantity, IgnoreLimit) end


---@class UAirportScheduleManager : UActorComponent
---@field DT_TradingAirplanesData UDataTable
---@field DT_DefaultPilotRegulars UDataTable
---@field DT_PlayerRegulars UDataTable
---@field Runways TArray<TSoftObjectPtr<ARunway>>
---@field OwnedRunways TArray<TSoftObjectPtr<ARunway>>
---@field SecondRunwayUnlockCountries TArray<FName>
---@field DefaultCountries TArray<FName>
---@field LatinAmericaCountries TArray<FName>
---@field EuropeanCountries TArray<FName>
---@field OutOfTheBoxCountries TArray<FName>
---@field AirplanesReadyToLand TArray<FSavedAirplane>
---@field BuildingBlueprint FItemRange
---@field SpecialItemChance float
---@field AdditionalStackChance float
---@field GasStationRegularsStack float
---@field OtherPlaneExclusiveChance float
---@field DefaultTimeToTakeOff int32
---@field NumberOfEntriesPerRunway int32
---@field AirplaneForAll TSoftClassPtr<ATradingAirplane>
---@field NumberOfCallSignNumbers int32
---@field DenyCooldown int32
---@field CurrentDenyCooldown int32
---@field RevealCargoStages TArray<float>
---@field RevealCargoNumber int32
---@field PlaneLifeCycleTime int32
---@field MaxTimeToArrive int32
---@field TimeDecrease float
---@field MinCancelFlightTimeMinutes int32
---@field MaxCancelFlightTimeMinutes int32
---@field CurrentCancelFlightTime int32
---@field ChancesOfFlightCanceling float
---@field ExcludedPlanes TArray<FPlaneEntry>
---@field bIsAS_Quest25Passed boolean
---@field bIsAS_Quest29Passed boolean
---@field StartPlaneArivalCountdownTag FGameplayTag
---@field IsFirstTradeTag FGameplayTag
local UAirportScheduleManager = {}

---@param TimeStruct FTimeStruct
function UAirportScheduleManager:TimeToArriveCounter(TimeStruct) end
function UAirportScheduleManager:StartCounterIfPossible() end
---@param RunwayIndex int32
function UAirportScheduleManager:SortPlanes(RunwayIndex) end
---@param CountryOrigin FName
---@param PlaneInfo FTradingPlanesInfo
function UAirportScheduleManager:SortCountryToProperRegion(CountryOrigin, PlaneInfo) end
---@param Runway ARunway
function UAirportScheduleManager:ShowRunwayCargoItems(Runway) end
function UAirportScheduleManager:ShowCargoItems() end
---@param Runway ARunway
---@param PlaneIndex int32
---@param ItemIndex int32
function UAirportScheduleManager:ShowCargoItem(Runway, PlaneIndex, ItemIndex) end
---@param TimeToSet int32
function UAirportScheduleManager:SetTimeToTakeOff(TimeToSet) end
---@param Plane ATradingAirplane
function UAirportScheduleManager:SetSpawnPilot(Plane) end
---@param RevealCargoNumberToSet int32
function UAirportScheduleManager:SetRevealCargoNumber(RevealCargoNumberToSet) end
---@param Plane ATradingAirplane
---@param SavedAirplane FSavedAirplane
function UAirportScheduleManager:SetPlaneData(Plane, SavedAirplane) end
---@param Plane ATradingAirplane
---@param Runway ERunway
---@param bLoadedFromSave boolean
function UAirportScheduleManager:SetPlane(Plane, Runway, bLoadedFromSave) end
---@param OwnedRunwaysToSet TArray<TSoftObjectPtr<ARunway>>
function UAirportScheduleManager:SetOwnedRunways(OwnedRunwaysToSet) end
---@param Runway ERunway
---@param Country ECountryOfOrigin
---@param Item TSoftClassPtr<AItem>
---@param Amount int32
---@return int32
function UAirportScheduleManager:SetItemToBuyActualAmount(Runway, Country, Item, Amount) end
---@param NewValue boolean
function UAirportScheduleManager:SetIsAS_Quest29Passed(NewValue) end
---@param NewValue boolean
function UAirportScheduleManager:SetIsAS_Quest25Passed(NewValue) end
---@param ExcludedPlanesToSet TArray<FPlaneEntry>
function UAirportScheduleManager:SetExcludedPlanes(ExcludedPlanesToSet) end
---@param DenyCooldownToSet int32
function UAirportScheduleManager:SetDenyCooldown(DenyCooldownToSet) end
---@param DenyCooldownToSet int32
function UAirportScheduleManager:SetCurrentDenyCooldown(DenyCooldownToSet) end
---@param TimeToSet int32
function UAirportScheduleManager:SetCurrentCancelFlightTime(TimeToSet) end
function UAirportScheduleManager:SetCancelFlightEvent() end
---@param AirplanesReadyToLandToSet TArray<FSavedAirplane>
function UAirportScheduleManager:SetAirplanesReadyToLand(AirplanesReadyToLandToSet) end
function UAirportScheduleManager:ResetCurrentDenyCooldown() end
---@param GeneratedSellLootInfo TArray<FGeneratedLootInfo>
---@param GeneratedPilotRegulars TArray<FName>
---@param ItemsToLoad TArray<FSoftObjectPath>
function UAirportScheduleManager:RandomPlayerRandoms(GeneratedSellLootInfo, GeneratedPilotRegulars, ItemsToLoad) end
---@param RunwayIndex int32
---@return int32
function UAirportScheduleManager:RandomPlaneToCancel(RunwayIndex) end
---@param CountryOrigin FName
---@param CountryRegion ECountryRegion
---@param GeneratedBuyLootInfo TArray<FGeneratedLootInfo>
---@param GeneratedSellLootInfo TArray<FGeneratedLootInfo>
---@param ItemsToLoad TArray<FSoftObjectPath>
function UAirportScheduleManager:RandomPlaneRandoms(CountryOrigin, CountryRegion, GeneratedBuyLootInfo, GeneratedSellLootInfo, ItemsToLoad) end
---@param PlaneExclusives TArray<FItemRange>
---@param GeneratedExclusives TArray<FGeneratedLootInfo>
---@param ItemsToLoad TArray<FSoftObjectPath>
function UAirportScheduleManager:RandomPlaneExclusives(PlaneExclusives, GeneratedExclusives, ItemsToLoad) end
---@param CountryOrigin FName
---@param CountryRegion ECountryRegion
---@param GeneratedBuyLootInfo TArray<FGeneratedLootInfo>
---@param GeneratedPilotRegulars TArray<FName>
---@param ItemsToLoad TArray<FSoftObjectPath>
function UAirportScheduleManager:RandomPilotRandoms(CountryOrigin, CountryRegion, GeneratedBuyLootInfo, GeneratedPilotRegulars, ItemsToLoad) end
---@param Info FTradingPlanesInfo
---@param ItemsToLoad TArray<FSoftObjectPath>
---@return FGeneratedLootInfo
function UAirportScheduleManager:RandomCountrySpecific(Info, ItemsToLoad) end
---@param CountryOfOrigin ECountryOfOrigin
---@param CountryShortCut FString
---@return FString
function UAirportScheduleManager:RandomCallSign(CountryOfOrigin, CountryShortCut) end
---@param RunwayIndex int32
---@param PlaneIndex int32
---@param bLandedPlane boolean
---@return boolean
function UAirportScheduleManager:PlayerDenyPlane(RunwayIndex, PlaneIndex, bLandedPlane) end
---@param NewUnlockableGameplayStuffState FUnlockableGameplayStuffState
function UAirportScheduleManager:OnNewGameplayStuffUnlockStateChanged(NewUnlockableGameplayStuffState) end
---@param bIsLoaded boolean
function UAirportScheduleManager:OnGameLoaded(bIsLoaded) end
---@param DLCName EDLCName
---@param bActivated boolean
function UAirportScheduleManager:OnDLCActivationStateChanged(DLCName, bActivated) end
function UAirportScheduleManager:OnAirportSandstormStarted() end
function UAirportScheduleManager:OnAirportSandstormFinished() end
---@return int32
function UAirportScheduleManager:GetTimeToTakeOff() end
---@return TArray<TSoftObjectPtr<ARunway>>
function UAirportScheduleManager:GetRunways() end
---@param Runway ERunway
---@return TSoftObjectPtr<ARunway>
function UAirportScheduleManager:GetRunway(Runway) end
---@return int32
function UAirportScheduleManager:GetRevealCargoNumber() end
---@return int32
function UAirportScheduleManager:GetPlaneLifeCycleTime() end
---@return TArray<TSoftObjectPtr<ARunway>>
function UAirportScheduleManager:GetOwnedRunways() end
---@return int32
function UAirportScheduleManager:GetNumberOfEntriesPerRunway() end
---@return boolean
function UAirportScheduleManager:GetIsAS_Quest29Passed() end
---@return boolean
function UAirportScheduleManager:GetIsAS_Quest25Passed() end
---@return TArray<FPlaneEntry>
function UAirportScheduleManager:GetExcludedPlanes() end
---@return int32
function UAirportScheduleManager:GetDenyCooldown() end
---@return int32
function UAirportScheduleManager:GetCurrentDenyCooldown() end
---@return int32
function UAirportScheduleManager:GetCurrentCancelFlightTime() end
---@return TArray<FName>
function UAirportScheduleManager:GetAvailableCountries() end
---@return TArray<FSavedAirplane>
function UAirportScheduleManager:GetAirplanesReadyToLand() end
---@param RunwayIndex int32
---@param PlaneIndex int32
---@param bLandedPlane boolean
---@return boolean
function UAirportScheduleManager:DenyPlane(RunwayIndex, PlaneIndex, bLandedPlane) end
---@param RunwayToSet ERunway
---@param Countries TArray<ECountryOfOrigin>
function UAirportScheduleManager:CreateQuestEntries(RunwayToSet, Countries) end
---@param CountryOrigin FName
---@param RunwayIndexToSet int32
---@param ItemsToLoad TArray<FSoftObjectPath>
---@param bShuffleGeneratedItems boolean
---@return FPlaneEntry
function UAirportScheduleManager:CreatePlaneEntry(CountryOrigin, RunwayIndexToSet, ItemsToLoad, bShuffleGeneratedItems) end
---@param RunwayIndexToSet int32
---@param NumberOfEntriesToCreate int32
---@return FPlaneEntry
function UAirportScheduleManager:CreatePlaneEntries(RunwayIndexToSet, NumberOfEntriesToCreate) end
---@param Runway ARunway
---@param PlaneIndex int32
---@param ItemIndex int32
function UAirportScheduleManager:ContinueShowCargoItem(Runway, PlaneIndex, ItemIndex) end
---@param PlaneEntry FPlaneEntry
function UAirportScheduleManager:CheckRevealCargoStage(PlaneEntry) end
function UAirportScheduleManager:CheckIfNewRunwayAvailable() end
function UAirportScheduleManager:CancelFlightEvent() end
---@param CargoRevealPercentage FCargoRevealPercentage
---@param TimeToArrive int32
---@return boolean
function UAirportScheduleManager:CalculateRevealBar(CargoRevealPercentage, TimeToArrive) end
---@param NumberOfEntriesCreated int32
---@param RunwayIndex int32
function UAirportScheduleManager:AllItemsNeededLoaded(NumberOfEntriesCreated, RunwayIndex) end
---@param Runway int32
---@param TimeToAdd float
function UAirportScheduleManager:AddTimeToAirplanes(Runway, TimeToAdd) end
---@param OwnedRunwayToAdd TSoftObjectPtr<ARunway>
function UAirportScheduleManager:AddOwnedRunway(OwnedRunwayToAdd) end
---@param Runaway ARunway
function UAirportScheduleManager:AddLine(Runaway) end


---@class UAirstripStructs : UObject
local UAirstripStructs = {}


---@class UAirstripTradeWidget : UUserWidget
---@field TradingAirplane ATradingAirplane
local UAirstripTradeWidget = {}



---@class UAnalyticsDataCollectorComponent : UActorComponent
---@field QueueDataFrequency int32
---@field GoogleAnalyticsManagerSubsystem UGoogleAnalyticsManagerSubsystem
local UAnalyticsDataCollectorComponent = {}

---@param Value float
function UAnalyticsDataCollectorComponent:OnPlayerMoved(Value) end


---@class UAuctionsManager : UActorComponent
---@field OnSaleFinished FAuctionsManagerOnSaleFinished
---@field OnCarPutOnSale FAuctionsManagerOnCarPutOnSale
---@field SaleDuration float
---@field ViewersUpdateTime float
---@field CarBasePriceInterestDefaultPercentValue float
---@field InitialSlotsNumber int32
---@field AdditionalSlotsNumber int32
---@field TrySellCarNewViewersNumber int32
---@field ViewersIncreaseSettings TArray<FViewersIncreasePerInterest>
---@field SaleSlots TArray<FSaleSlot>
local UAuctionsManager = {}

---@param SaleSlot FSaleSlot
function UAuctionsManager:UpdateViewers(SaleSlot) end
---@param InSaleSlots TArray<FSaleSlot>
function UAuctionsManager:SetSaleSlots(InSaleSlots) end
---@param CarWreck AJunkyardCarWreck
---@param SaleSettings FSaleSlot
function UAuctionsManager:SetSaleSlot(CarWreck, SaleSettings) end
---@param SaleSlot FSaleSlot
---@return boolean
function UAuctionsManager:RemoveSale(SaleSlot) end
---@param UpdatedTime FTimeStruct
function UAuctionsManager:OnGameTimeUpdated(UpdatedTime) end
---@param bGameLoaded boolean
function UAuctionsManager:OnFinishGameLoaded(bGameLoaded) end
---@param DLCName EDLCName
---@param bActivated boolean
function UAuctionsManager:OnDLCActivationStateChanged(DLCName, bActivated) end
---@return TArray<FSaleSlot>
function UAuctionsManager:GetSaleSlots() end
---@param CurrentInterest float
---@param OutInterestSettings FViewersIncreasePerInterest
---@return boolean
function UAuctionsManager:FindMatchingInterestSettings(CurrentInterest, OutInterestSettings) end
---@param CarWreck AJunkyardCarWreckCustomizable
---@param OutSaleSlot FSaleSlot
---@return boolean
function UAuctionsManager:FindCarSaleSlot(CarWreck, OutSaleSlot) end
---@param SaleSlot FSaleSlot
---@return boolean
function UAuctionsManager:ConfirmSale(SaleSlot) end
---@param CarPrice float
---@return float
function UAuctionsManager:CalculatePriceAfterUncleTribute(CarPrice) end
---@param ExhibitionSpotSlot AExhibitionSpotSlot
---@param CarSellPrice float
---@return float
function UAuctionsManager:CalculateCarSaleInterest(ExhibitionSpotSlot, CarSellPrice) end
---@param ExhibitionSpotSlot AExhibitionSpotSlot
---@param CarSellPrice float
function UAuctionsManager:ActivateSale(ExhibitionSpotSlot, CarSellPrice) end


---@class UBBQSettings : URvMinigameBaseSettings
---@field SettingsPerDifficulty TArray<FBBQSettingsPerDifficulty>
---@field MovementDuration float
---@field AutoRepeatNavigationGamepadCooldown float
---@field bEnableTutorialStep boolean
local UBBQSettings = {}



---@class UBBQSlotComponent : USphereComponent
---@field BBQItemInside TWeakObjectPtr<ABBQItem>
---@field TargetStage EBBQStage
---@field OnSetBBQItemInside FBBQSlotComponentOnSetBBQItemInside
---@field Config FBBQSlotConfig
local UBBQSlotComponent = {}

function UBBQSlotComponent:OnSelected() end
function UBBQSlotComponent:OnDeselected() end
---@return ABBQItem
function UBBQSlotComponent:GetBBQItemInside() end


---@class UBPAsyncActionLibrary : UBlueprintAsyncActionBase
---@field Tick FBPAsyncActionLibraryTick
---@field Completed FBPAsyncActionLibraryCompleted
local UBPAsyncActionLibrary = {}

function UBPAsyncActionLibrary:InternalTick() end
function UBPAsyncActionLibrary:InternalCompleted() end
---@param WorldContextObj UObject
---@param Num int32
---@return UBPAsyncActionLibrary
function UBPAsyncActionLibrary:BPAsyncNode(WorldContextObj, Num) end


---@class UBasicContract : UContractBase
---@field HiredDriver FHireableDriver
---@field OriginBonus float
---@field ContractTier EJunkyardPartRarity
local UBasicContract = {}

---@param InOriginBonus float
function UBasicContract:SetOriginBonus(InOriginBonus) end
---@param InHiredDriver FHireableDriver
function UBasicContract:SetHiredDriver(InHiredDriver) end
---@param InContractTier EJunkyardPartRarity
function UBasicContract:SetContractTier(InContractTier) end
---@return float
function UBasicContract:GetOriginBonus() end
---@return FHireableDriver
function UBasicContract:GetHiredDriver() end
---@return EJunkyardPartRarity
function UBasicContract:GetContractTier() end
---@return boolean
function UBasicContract:CheckIfEnoughSpaceForReward() end
function UBasicContract:AddRewards() end


---@class UBellAnimInstance : UAnimInstance
---@field PushBell float
local UBellAnimInstance = {}



---@class UBenchPressSettings : URvMinigameBaseSettings
---@field RequiredRepCount TMap<EGuestServiceDifficulty, int32>
---@field MaxTiltAngle float
---@field CooldownBetweenTilts FFloatRange
---@field MaxTiltCount int32
---@field TiltDuration float
---@field BarSpeed float
---@field BarTiltSpeed float
---@field TimerDuration float
---@field BarTiltSpeedEasy float
---@field BarSpeedEasy float
---@field BarSizeEasy float
---@field PlayerBarSpeedEasy float
---@field PanicBarBaseProgressEasy float
---@field PlayerTiltSpeedEasy float
---@field BarTiltSpeedMedium float
---@field BarSpeedMedium float
---@field BarSizeMedium float
---@field PlayerBarSpeedMedium float
---@field PanicBarBaseProgressMedium float
---@field PlayerTiltSpeedMedium float
---@field BarTiltSpeedHard float
---@field BarSpeedHard float
---@field BarSizeHard float
---@field PlayerBarSpeedHard float
---@field PanicBarBaseProgressHard float
---@field PlayerTiltSpeedHard float
local UBenchPressSettings = {}



---@class UBiomCustomizationsDataAsset : UDataAsset
---@field CustomizationCategories TArray<FBiomCustomizationCategory>
local UBiomCustomizationsDataAsset = {}



---@class UBiomsFunctionLibrary : UBlueprintFunctionLibrary
local UBiomsFunctionLibrary = {}

---@param WorldContextObject UObject
---@param BuildingType EBuildingType
---@return UDA_SpecificBuildingUpgrade
function UBiomsFunctionLibrary:GetSpecificBuildingUpgradesInfo(WorldContextObject, BuildingType) end
---@param WorldContextObject UObject
---@param BuildingType EBuildingType
---@param CurrentBuildingLevel int32
---@param OUT_MapsToLoad TArray<FName>
---@param OUT_MapsToUnload TArray<FName>
---@param OUT_EventToDisplay TSoftClassPtr<UEventDisplay>
---@param OUT_ItemsToUnlock TArray<TSoftClassPtr<AItem>>
---@param UpgradeActions TArray<UGameAction>
function UBiomsFunctionLibrary:GetRelevantUpgradeMaps(WorldContextObject, BuildingType, CurrentBuildingLevel, OUT_MapsToLoad, OUT_MapsToUnload, OUT_EventToDisplay, OUT_ItemsToUnlock, UpgradeActions) end
---@param WorldContextObject UObject
---@return AGSSWorldSettings
function UBiomsFunctionLibrary:GetGSSWorldSettings(WorldContextObject) end
---@param WorldContextObject UObject
---@return UDA_AITasksInfo
function UBiomsFunctionLibrary:GetCustomerTasks(WorldContextObject) end
---@param WorldContextObject UObject
---@return UDA_BuildingUpgrades
function UBiomsFunctionLibrary:GetBuildingsUpgradesDataAsset(WorldContextObject) end


---@class UBlueprintMovedEnums : UObject
local UBlueprintMovedEnums = {}


---@class UBroomWidget : UUserWidget
---@field MinigameTutorialWidget UMinigameTutorialWidget
local UBroomWidget = {}



---@class UBuildingParentWidget : UUserWidget
local UBuildingParentWidget = {}


---@class UBuyIceCream : UIteractableActorTask
---@field OrderList TArray<FIceCreamOrders>
local UBuyIceCream = {}

function UBuyIceCream:UpdateCurrentOrder() end


---@class UBuyObjective : UCountableObjectiveBase
---@field ActorClass TSubclassOf<AActor>
local UBuyObjective = {}

---@param BoughtActorClass TSubclassOf<AActor>
---@param Amount int32
function UBuyObjective:OnPlayerBought(BoughtActorClass, Amount) end


---@class UCamperStainSlot : UArrowComponent
---@field CamperStainActor TWeakObjectPtr<ACamperStainActor>
---@field CamperStainActorClass TSubclassOf<ACamperStainActor>
local UCamperStainSlot = {}

function UCamperStainSlot:DestroyStainActor() end


---@class UCamperWashingSettings : URvMinigameBaseSettings
---@field SettingsPerDifficulty TArray<FCamperWashingSettingsPerDifficulty>
---@field StainsClasses TArray<TSoftClassPtr<ACamperStainActor>>
---@field MaxWaterFlowDuration float
---@field UseWaterFlowDurationPenaltyPerSecond float
---@field CleaningSolutionFlowDurationPenalty float
local UCamperWashingSettings = {}



---@class UCampersDataAsset : UDataAsset
---@field Campers TArray<FCamperStruct>
---@field Name FText
local UCampersDataAsset = {}



---@class UCarCrusher_AnimInstance : UAnimInstance
---@field OnOpenAnimationCompleted FCarCrusher_AnimInstanceOnOpenAnimationCompleted
---@field OnCloseAnimationCompleted FCarCrusher_AnimInstanceOnCloseAnimationCompleted
---@field OnCrushingCompleted FCarCrusher_AnimInstanceOnCrushingCompleted
---@field bIsOpenCloseAnimationPlaying boolean
---@field bCrushingCar boolean
---@field bLidOpen boolean
---@field SpawnedCrushedCar AActor
local UCarCrusher_AnimInstance = {}

function UCarCrusher_AnimInstance:StartCrushing() end
---@param SpawnedActor AActor
function UCarCrusher_AnimInstance:SetSpawnedCrushedCar(SpawnedActor) end
---@param Open boolean
function UCarCrusher_AnimInstance:SetLidOpen(Open) end
---@param Crushing boolean
function UCarCrusher_AnimInstance:SetCrushing(Crushing) end
---@return boolean
function UCarCrusher_AnimInstance:IsOpenCloseAnimationPlaying() end
---@return boolean
function UCarCrusher_AnimInstance:IsOpen() end
---@return boolean
function UCarCrusher_AnimInstance:IsCrushingCar() end


---@class UCarDoorMeshComponent : UStaticMeshComponent
---@field VehiclePartToSpawnIfBroken TSubclassOf<ACarDoor>
local UCarDoorMeshComponent = {}



---@class UChallengeObjective : UObjectiveBase
---@field ObjectiveChallenges TArray<FQuestChallenge>
---@field ChallengeFinished boolean
local UChallengeObjective = {}

---@param FinishedObjective UChallengeObjective
function UChallengeObjective:OnObjectiveChallengesCompleted(FinishedObjective) end


---@class UCharacterTasksFinishedObjective : UCountableObjectiveBase
---@field ObjectiveTaskClass TSoftClassPtr<UTaskBase>
local UCharacterTasksFinishedObjective = {}

---@param AICharacter AAICharacterBase
---@param TaskClass TSubclassOf<UTaskBase>
---@param TaskResult ETaskResult
function UCharacterTasksFinishedObjective:OnAITaskFinished(AICharacter, TaskClass, TaskResult) end


---@class UChemicalBathWidget : UGSSBaseWidget
local UChemicalBathWidget = {}

---@param ChemicalRef AChemicalBath
function UChemicalBathWidget:UpdateConcentrationAmount(ChemicalRef) end
---@param Index int32
---@param PartStruct FStorageCarPart
---@param ChemicalRef AChemicalBath
function UChemicalBathWidget:UpdateCleaningSlot(Index, PartStruct, ChemicalRef) end
---@param CarWreckRef AJunkyardCarWreckCustomizable
---@param InOpenCase EStorageOpenCase
function UChemicalBathWidget:InitializeWidget(CarWreckRef, InOpenCase) end
---@param ChemicalbathRef AChemicalBath
function UChemicalBathWidget:InitializeChemicalWidget(ChemicalbathRef) end


---@class UChunchumanchuDataAsset : UDataAsset
---@field TrashPenaltyData UTrashPenaltyDataAsset
---@field DTWaterFuelCustomers UDataTable
---@field DTSavableWaterVehicles UDataTable
---@field VolcanoTutorialTag FGameplayTag
---@field RentalTutorialTag FGameplayTag
---@field RentalHighlightTag FGameplayTag
local UChunchumanchuDataAsset = {}



---@class UChunchumanchuEnums : UObject
local UChunchumanchuEnums = {}


---@class UChunchumanchuStructs : UObject
local UChunchumanchuStructs = {}


---@class UChunchumanchuSubsystem : UWorldSubsystem
---@field WaterVehiclesOnMap TArray<AWaterVehicle>
---@field CustomersInWater TArray<AWaterVehicle>
---@field WaterVehicleSpawners TArray<AWaterVehicleSpawner>
---@field WaterMovementPoints TArray<AActor>
---@field SharkSpawner ASharkSpawner
---@field bIsOnChunchumanchuIsland boolean
---@field bIsGiantWaveActive boolean
---@field WC AWC
---@field Shower AShower
---@field ScubaEquipmentRentalBuilding AScubaEquipmentRentalBuilding
---@field SurfingEquipmentRentalBuilding ASurfingEquipmentRentalBuilding
---@field Volcano TSoftObjectPtr<AVolcano>
---@field WeatherManager AActor
---@field LastDeathTime FTimeStruct
---@field TotalDeathsNumber int32
---@field CoconutCombo int32
---@field CoconutRecord int32
---@field WorldPtr UWorld
---@field FuelCustomerTimerHandle FTimerHandle
---@field DeliveryBoatsToRespawn TArray<FDeliveryBoatToRespawn>
---@field bSharkActive boolean
local UChunchumanchuSubsystem = {}

---@param ForceSpawn boolean
function UChunchumanchuSubsystem:TrySpawnFuelCustomer(ForceSpawn) end
---@param Target AWaterMovementPoint
function UChunchumanchuSubsystem:SpawnRandomFuelCustomer(Target) end
---@param DeliveryBoatClass TSoftClassPtr<AActor>
---@param DeliveryCategory ECategoryFilter
function UChunchumanchuSubsystem:SpawnDeliveryBoat(DeliveryBoatClass, DeliveryCategory) end
function UChunchumanchuSubsystem:SharkDisappeared() end
function UChunchumanchuSubsystem:SharkComingEvent() end
---@param NewValue int32
function UChunchumanchuSubsystem:SetTotalDeathsNumber(NewValue) end
---@param NewLastDeathTime FTimeStruct
function UChunchumanchuSubsystem:SetLastDeathTime(NewLastDeathTime) end
---@param InCoconutRecord int32
function UChunchumanchuSubsystem:SetCoconutRecord(InCoconutRecord) end
---@param InCoconutCombo int32
function UChunchumanchuSubsystem:SetCoconutCombo(InCoconutCombo) end
---@param StationEvent EGlobalStationEvent
function UChunchumanchuSubsystem:SendAllCustomersHome(StationEvent) end
function UChunchumanchuSubsystem:ScheduleFuelCustomerSpawn() end
function UChunchumanchuSubsystem:RespawnDeliveryBoats() end
function UChunchumanchuSubsystem:OnWorldBeginPlay() end
---@param AngerState EChunchumanchuAnger
---@param RenownProgress float
---@param ValueChanged float
function UChunchumanchuSubsystem:OnVolcanoAngerChange(AngerState, RenownProgress, ValueChanged) end
---@param DecorationCameraType EDecorationCameraType
function UChunchumanchuSubsystem:OnDecorationCameraBought(DecorationCameraType) end
---@param IsOpen boolean
function UChunchumanchuSubsystem:OnCloseOpenGasStation(IsOpen) end
---@param BuildingType EBuildingType
---@param BuildingLevel int32
---@param bLoadedFromSave boolean
function UChunchumanchuSubsystem:OnBuildingUpgraded(BuildingType, BuildingLevel, bLoadedFromSave) end
---@return boolean
function UChunchumanchuSubsystem:IsSharkAttacking() end
---@param DeliveryBoatClass TSoftClassPtr<AActor>
---@param DeliveryCategory ECategoryFilter
function UChunchumanchuSubsystem:HandleDeliveryBoatDeathWithCargo(DeliveryBoatClass, DeliveryCategory) end
---@return int32
function UChunchumanchuSubsystem:GetTotalDeathsNumber() end
---@return FTimeStruct
function UChunchumanchuSubsystem:GetLastDeathTime() end
---@return int32
function UChunchumanchuSubsystem:GetDaysAfterAccident() end
---@return int32
function UChunchumanchuSubsystem:GetCustomersInWaterNumber() end
---@return int32
function UChunchumanchuSubsystem:GetCoconutRecord() end
---@return int32
function UChunchumanchuSubsystem:GetCoconutCombo() end
function UChunchumanchuSubsystem:DestroyAllBoats() end


---@class UCircularMenuBase : UUserWidget
local UCircularMenuBase = {}

function UCircularMenuBase:SelectionMaking_Gamepad() end
function UCircularMenuBase:SelectionMaking() end
function UCircularMenuBase:Exit() end


---@class UClearRuinsObjective : UObjectiveBase
---@field bCreateObjectiveMarkerOnEachRuin boolean
---@field MarkerClass TSoftClassPtr<AObjectiveMarker>
---@field RuinsToClear TArray<TSoftObjectPtr<ARuins>>
---@field GameActions TArray<USpawnObjectiveMarkerGameAction>
local UClearRuinsObjective = {}

---@param Ruins ARuins
function UClearRuinsObjective:OnRuinsRemoved(Ruins) end
---@param RuinIndex int32
function UClearRuinsObjective:OnRuinLoaded(RuinIndex) end
---@param ObjectiveMarker AObjectiveMarker
function UClearRuinsObjective:OnMarkerSpawned(ObjectiveMarker) end


---@class UClearSmallTrashObjective : UCountableObjectiveBase
local UClearSmallTrashObjective = {}

---@param DestroyedActor AActor
function UClearSmallTrashObjective:OnActorDestroyed(DestroyedActor) end


---@class UCommunicationDeviceAnimInstance : UAnimInstance
---@field bIsOpen boolean
local UCommunicationDeviceAnimInstance = {}



---@class UComputerMenuWidget : UUserWidget
---@field bIsActive boolean
---@field AditionalkeySelected int32
local UComputerMenuWidget = {}

function UComputerMenuWidget:OnRep_AditionalkeySelected() end
function UComputerMenuWidget:AditionalkeyChanged() end


---@class UConcentrationData : UDataAsset
---@field Values TArray<FMinMax>
---@field ByLevelDecrease TArray<FLevelDecrease>
---@field PricePerOnePercent float
local UConcentrationData = {}



---@class UContractBase : UObject
---@field OnContractTimeOver FContractBaseOnContractTimeOver
---@field OnProgressStateChanged FContractBaseOnProgressStateChanged
---@field State EState
---@field ContractType EContractType
---@field Difficulty int32
---@field CurrentProgressState EProgressState
---@field TimeLeft FTimeStruct
---@field InitialTime FTimeStruct
---@field bSuccess boolean
---@field MoneyReward float
---@field ContractPointsReward float
---@field MapPositionIndex int32
local UContractBase = {}

---@param InTime FTimeStruct
function UContractBase:UpdateContract(InTime) end
---@return boolean
function UContractBase:StartContract() end
---@param InTimeLeft FTimeStruct
function UContractBase:SetTimeLeft(InTimeLeft) end
---@param InState EState
function UContractBase:SetState(InState) end
---@param InMoneyReward float
function UContractBase:SetMoneyReward(InMoneyReward) end
---@param InIsSuccess boolean
function UContractBase:SetIsSuccess(InIsSuccess) end
---@param InInitialTime FTimeStruct
function UContractBase:SetInitialTime(InInitialTime) end
---@param InDifficulty int32
function UContractBase:SetDifficulty(InDifficulty) end
---@param InCurrentProgressState EProgressState
function UContractBase:SetCurrentProgressState(InCurrentProgressState) end
---@param InContractType EContractType
function UContractBase:SetContractType(InContractType) end
---@param InContractPointsReward float
function UContractBase:SetContractPointsReward(InContractPointsReward) end
---@param bGameLoaded boolean
function UContractBase:OnGameLoaded(bGameLoaded) end
---@param InState EState
---@param InDifficulty int32
---@param InProgressState EProgressState
function UContractBase:Initialization(InState, InDifficulty, InProgressState) end
function UContractBase:HandleAfterLoading() end
---@return FTimeStruct
function UContractBase:GetTimeLeft() end
---@return EState
function UContractBase:GetState() end
---@return float
function UContractBase:GetMoneyReward() end
---@return boolean
function UContractBase:GetIsSuccess() end
---@return FTimeStruct
function UContractBase:GetInitialTime() end
---@return EContractDifficulty
function UContractBase:GetDifficultyEnum() end
---@return int32
function UContractBase:GetDifficulty() end
---@return int32
function UContractBase:GetDefinedPosition() end
---@return EProgressState
function UContractBase:GetCurrentProgressState() end
---@return EContractType
function UContractBase:GetContractType() end
---@return float
function UContractBase:GetContractPointsReward() end
function UContractBase:FinishContract() end
---@param InIndex int32
function UContractBase:DefinePosition(InIndex) end
---@return boolean
function UContractBase:CheckIfSuccess() end
function UContractBase:CancelContract() end
---@return boolean
function UContractBase:CanBeStarted() end


---@class UContractsManager : UActorComponent
---@field OnDeliveriesRefreshed FContractsManagerOnDeliveriesRefreshed
---@field OnContractsRefreshed FContractsManagerOnContractsRefreshed
---@field OnDriversRefresh FContractsManagerOnDriversRefresh
---@field ContractRegions UDA_ContractRegions
---@field Drivers TArray<UDA_HireableDriver>
---@field AdditionalDriverSlotsPerOfficeLevel TMap<int32, int32>
---@field DeliveriesDefaultRefreshTime FTimeStruct
---@field ContractsDefaultRefreshTime FTimeStruct
---@field DriversDefaultRefreshTime FTimeStruct
---@field QuestDeliveries TArray<FQuestDelivery>
---@field QuestContracts TArray<FQuestContract>
---@field WreckTowTruck_SoftPtr TSoftClassPtr<AGSSWheeledVehicle>
---@field ContractTypeSoftClasses TMap<EContractType, TSoftClassPtr<UContractBase>>
---@field ContractsInProgress TArray<USpecialContract>
---@field DeliveriesWithActiveTowTruckTask TArray<UWrecksCollectionContract>
---@field CheatSpawnedTowTrucks int32
---@field UnlockedStates TArray<FUnlockedState>
---@field UnlockedDrivers TArray<FHireableDriver>
---@field CarWrecksBasket TArray<FCarWrecksBasket>
---@field NumberOfCarWrecksType int32
---@field DedicatedCarParts TArray<FCarWreckPartsBasket>
---@field GarageCarParts TArray<FCarWreckPartsBasket>
---@field NumberOfModels TMap<EJunkyardCarPartType, int32>
---@field NextDeliveriesRefresh FTimeStruct
---@field NextContactsRefresh FTimeStruct
---@field NextDriversRefresh FTimeStruct
---@field FinishedDeliveries TArray<UWrecksCollectionContract>
---@field ContractSlots TArray<FContractSlot>
---@field ContractAppearance TArray<FCustomizationContractChancesBasket>
---@field bDeliveriesUnlocked boolean
---@field bContractsUnlocked boolean
---@field bInBoardMap boolean
local UContractsManager = {}

---@param OfficeLevel int32
function UContractsManager:UnlockStates(OfficeLevel) end
---@param InState EState
function UContractsManager:UnlockState(InState) end
---@param OfficeLevel int32
function UContractsManager:UnlockDrivers(OfficeLevel) end
---@param ContractSlot FContractSlot
---@param ContractSlotIndex int32
---@param bForce boolean
---@return boolean
function UContractsManager:TryToCreateContract(ContractSlot, ContractSlotIndex, bForce) end
---@param Contract UBasicContract
---@param DriverIndex int32
---@return boolean
function UContractsManager:StartDelivery(Contract, DriverIndex) end
---@param Contract UContractBase
---@return boolean
function UContractsManager:StartContract(Contract) end
function UContractsManager:SpawnWreckTowTruck() end
function UContractsManager:SpawnQuestDeliveries() end
function UContractsManager:SpawnQuestContracts() end
---@param Delivery UWrecksCollectionContract
---@param CarWreck AJunkyardCarWreck
function UContractsManager:SpawnDeliveryWreckCarParts(Delivery, CarWreck) end
---@param InUnlockedStates TArray<FUnlockedState>
function UContractsManager:SetUnlockedStates(InUnlockedStates) end
---@param InUnlockedDrivers TArray<FHireableDriver>
function UContractsManager:SetUnlockedDrivers(InUnlockedDrivers) end
---@param Contracts TArray<UContractBase>
---@param State EState
function UContractsManager:SetStateAvailableContracts(Contracts, State) end
---@param InNumberOfModels TMap<EJunkyardCarPartType, int32>
function UContractsManager:SetNumberOfModels(InNumberOfModels) end
---@param InNumberOfCarWrecksType int32
function UContractsManager:SetNumberOfCarWrecksType(InNumberOfCarWrecksType) end
---@param InNextRefresh FTimeStruct
function UContractsManager:SetNextDriversRefresh(InNextRefresh) end
---@param InNextRefresh FTimeStruct
function UContractsManager:SetNextDeliveriesRefresh(InNextRefresh) end
---@param InNextRefresh FTimeStruct
function UContractsManager:SetNextContractsRefresh(InNextRefresh) end
---@param InGarageCarParts TArray<FCarWreckPartsBasket>
function UContractsManager:SetGarageCarParts(InGarageCarParts) end
---@param InFinishedDeliveries TArray<UWrecksCollectionContract>
function UContractsManager:SetFinishedDeliveries(InFinishedDeliveries) end
---@param InDedicatedCarParts TArray<FCarWreckPartsBasket>
function UContractsManager:SetDedicatedCarParts(InDedicatedCarParts) end
---@param InContracts TArray<FContractSlot>
function UContractsManager:SetContractSlots(InContracts) end
---@param InContractAppearance TArray<FCustomizationContractChancesBasket>
function UContractsManager:SetContractAppearanceChances(InContractAppearance) end
---@param InCarWrecksBasket TArray<FCarWrecksBasket>
function UContractsManager:SetCarWrecksBasket(InCarWrecksBasket) end
---@param OfficeLevel int32
function UContractsManager:RefreshDrivers(OfficeLevel) end
function UContractsManager:RefreshDeliveries() end
function UContractsManager:RefreshContracts() end
---@param TierChances TMap<EJunkyardPartRarity, float>
---@param Delivery UBasicContract
function UContractsManager:RandomDeliveryTier(TierChances, Delivery) end
---@param DeliveryContract UBasicContract
function UContractsManager:RandomDeliveryRewards(DeliveryContract) end
function UContractsManager:OnUfoUsed() end
---@param BuildingType EBuildingType
---@param NewBuildingLevel int32
---@param bLoadedFromSave boolean
function UContractsManager:OnOfficeBuildingUpgraded(BuildingType, NewBuildingLevel, bLoadedFromSave) end
---@param GameplayStuffUnlocked FUnlockableGameplayStuffState
function UContractsManager:OnNewGameplayStuffUnlockStateChanged(GameplayStuffUnlocked) end
---@param NewLevel int32
function UContractsManager:OnNewFameLevelUnlocked(NewLevel) end
---@param UpdatedTime FTimeStruct
function UContractsManager:OnGameTimeUpdated(UpdatedTime) end
---@param bGameLoaded boolean
function UContractsManager:OnFinishGameLoaded(bGameLoaded) end
---@param DLCName EDLCName
---@param bActivated boolean
function UContractsManager:OnDLCActivationStateChanged(DLCName, bActivated) end
---@param TimeOverContract UContractBase
function UContractsManager:OnContractTimeOver(TimeOverContract) end
---@param bEntered boolean
function UContractsManager:OnBoardMapInteracted(bEntered) end
---@param InState EState
---@return boolean
function UContractsManager:IsStateUnlocked(InState) end
---@param Driver FHireableDriver
---@return boolean
function UContractsManager:IsDriverAvailable(Driver) end
---@param Delivery UWrecksCollectionContract
---@param CarWreck AJunkyardCarWreck
---@return FTransform
function UContractsManager:GetWreckTowtruckTransformOffset(Delivery, CarWreck) end
---@return TArray<FUnlockedState>
function UContractsManager:GetUnlockedStates() end
---@return TArray<FHireableDriver>
function UContractsManager:GetUnlockedDrivers() end
---@return TMap<EJunkyardCarPartType, int32>
function UContractsManager:GetNumberOfModels() end
---@return int32
function UContractsManager:GetNumberOfCarWrecksType() end
---@return FTimeStruct
function UContractsManager:GetNextDriversRefresh() end
---@return FTimeStruct
function UContractsManager:GetNextDeliveriesRefresh() end
---@return FTimeStruct
function UContractsManager:GetNextContractsRefresh() end
---@return TArray<FCarWreckPartsBasket>
function UContractsManager:GetGarageCarParts() end
---@return TArray<UWrecksCollectionContract>
function UContractsManager:GetFinishedDeliveries() end
---@param DriverToCheck FHireableDriver
---@return boolean
function UContractsManager:GetDriverRequiresContractPoints(DriverToCheck) end
---@return UWrecksCollectionContract
function UContractsManager:GetDeliveryToSpawnWreck() end
---@return TArray<FCarWreckPartsBasket>
function UContractsManager:GetDedicatedCarParts() end
---@param ProgressState EProgressState
---@return TArray<USpecialContract>
function UContractsManager:GetContractsWithProgress(ProgressState) end
---@return TArray<FContractSlot>
function UContractsManager:GetContractSlots() end
---@return TArray<FCustomizationContractChancesBasket>
function UContractsManager:GetContractAppearanceChances() end
---@return TArray<FCarWrecksBasket>
function UContractsManager:GetCarWrecksBasket() end
---@param DeliveryTier EJunkyardPartRarity
---@param bNonCustomizable boolean
function UContractsManager:GenerateAndPrintPartsBasket(DeliveryTier, bNonCustomizable) end
---@param ContractToDestroy UContractBase
function UContractsManager:DestroyContract(ContractToDestroy) end
---@param ContractSlotIndex int32
function UContractsManager:CreateContract(ContractSlotIndex) end
function UContractsManager:CheckForRewardsChanges() end
---@return boolean
function UContractsManager:AreDeliveriesAvailable() end
---@return boolean
function UContractsManager:AreContractsAvailable() end


---@class UConveyorBeltComponent : UBoxComponent
---@field PushDirection UArrowComponent
---@field PushForceMax float
---@field PushForce float
local UConveyorBeltComponent = {}

---@param bNewActive boolean
function UConveyorBeltComponent:SetConveyorActivity(bNewActive) end
---@return boolean
function UConveyorBeltComponent:IsConveyorActive() end
---@return TArray<UConveyorBeltSpawnLocComp>
function UConveyorBeltComponent:GetSpawnLocationsFromOwner() end


---@class UConveyorBeltSpawnLocComp : USceneComponent
local UConveyorBeltSpawnLocComp = {}


---@class UCountableObjectiveBase : UObjectiveBase
---@field CurrentProgress int32
---@field MaxProgress int32
---@field bFinishObjectiveWhenMaxProgressIsReached boolean
---@field DisplayType ECountableObjectiveDisplayType
local UCountableObjectiveBase = {}

---@param NewProgress int32
---@param bShowUpdateAnim boolean
function UCountableObjectiveBase:SetObjectiveProgress(NewProgress, bShowUpdateAnim) end
---@param NewMaxProgress int32
function UCountableObjectiveBase:SetObjectiveMaxProgress(NewMaxProgress) end
---@return boolean
function UCountableObjectiveBase:IsObjectiveProgressReached() end
---@return float
function UCountableObjectiveBase:GetObjectiveCompletionPercentage() end
---@param AddedProgress int32
---@param bShowUpdateAnim boolean
function UCountableObjectiveBase:AddObjectiveProgress(AddedProgress, bShowUpdateAnim) end


---@class UCountdownWidget : UGSSBaseWidget
---@field CountdownDuration float
---@field CountdownFinishTime float
local UCountdownWidget = {}

---@param TimeToJump float
function UCountdownWidget:PlayCountdown(TimeToJump) end
function UCountdownWidget:InitCountdown() end


---@class UCraneAnimInstance : UAnimInstance
---@field YawTurnRatio float
---@field bYawTurn boolean
---@field PitchRatio float
---@field bArmPitch boolean
---@field ArmExtendRatio float
---@field bArmExtending boolean
---@field MagnetZRatio float
---@field bMagnetTrans boolean
---@field CurrentCraneYaw float
---@field CurrentMagnetZPosition float
---@field CurrentArmPitch float
---@field CurrentarmExtension float
---@field ExtendArmSpeed float
---@field SideMovementSpeed float
---@field MoveArmVerticalSpeed float
---@field MoveArmHorizontalSpeed float
---@field SeanResetArmHorizontalSpeed float
---@field LowerMagnetSpeed float
---@field MinArmPitch float
---@field MaxArmPitch float
---@field MinArmExtension float
---@field MaxArmExtension float
---@field Epsilon float
---@field IsActive boolean
---@field IsSeanResetYawActive boolean
---@field MovementInput float
local UCraneAnimInstance = {}

---@param NewYaw float
function UCraneAnimInstance:SetCurrentCraneYaw(NewYaw) end
---@param NewArmExtension float
function UCraneAnimInstance:SetCurrentArmExtension(NewArmExtension) end
---@param Value float
---@param MinLimitReached boolean
---@param MaxLimitReached boolean
function UCraneAnimInstance:InputAxisMoveArmVertical(Value, MinLimitReached, MaxLimitReached) end
---@param Value float
---@param MinLimitReached boolean
---@param MaxLimitReached boolean
function UCraneAnimInstance:InputAxisMoveArmHorizontal(Value, MinLimitReached, MaxLimitReached) end
---@param Value float
---@param MinLimitReached boolean
---@param MaxLimitReached boolean
function UCraneAnimInstance:InputAxisLowerMagnet(Value, MinLimitReached, MaxLimitReached) end
---@param Value float
---@param MinLimitReached boolean
---@param MaxLimitReached boolean
function UCraneAnimInstance:InputAxisExtendArm(Value, MinLimitReached, MaxLimitReached) end
---@return float
function UCraneAnimInstance:GetSideMovementSpeed() end
---@return float
function UCraneAnimInstance:GetCurrentCraneYaw() end
---@return float
function UCraneAnimInstance:GetCurrentArmExtension() end


---@class UCraneCamera : UCameraComponent
---@field CameraIndex int32
---@field LimitHorizontalRotation boolean
---@field HorizontalRotationMin float
---@field HorizontalRotationMax float
---@field VerticalRotationMin float
---@field VerticalRotationMax float
---@field StartingWorldRotation FRotator
---@field StartingRelativeRotation FRotator
local UCraneCamera = {}

---@param Rotation FRotator
function UCraneCamera:RotateByRotator(Rotation) end
---@param Angle float
---@return float
function UCraneCamera:NormalizeAngle(Angle) end


---@class UCreateNotificationGameAction : UGameAction
---@field NotificationType ENotificationType
local UCreateNotificationGameAction = {}



---@class UCustomerRepairCar : UIteractableActorTask
local UCustomerRepairCar = {}


---@class UCustomizationCategory : UDataAsset
---@field Name FText
---@field Description FText
---@field CategoryIcon TSoftObjectPtr<UTexture2D>
---@field bCanBeUsedInBaseGame boolean
---@field CategoryParts TArray<FCustomizationPart>
local UCustomizationCategory = {}



---@class UCustomizeHouseActorComponent : UChildActorComponent
---@field LevelExist TArray<int32>
local UCustomizeHouseActorComponent = {}



---@class UDA_AITasksInfo : UDataAsset
---@field AITasksInfo TArray<UDA_SpecificAITask>
---@field GeneralCustomerTasks TArray<FGeneralTask>
local UDA_AITasksInfo = {}

---@param WorldContextObject UObject
---@param CustomerType ECustomerType
---@return UDA_SpecificAITask
function UDA_AITasksInfo:GetTaskByCustomerType(WorldContextObject, CustomerType) end
---@param InteractableTaskType EInteractableTaskType
---@return TSoftClassPtr<UIteractableActorTask>
function UDA_AITasksInfo:GetGeneralTaskByInteractableTaskType(InteractableTaskType) end


---@class UDA_BuildingUpgrades : UDataAsset
---@field BuildingUpgrades TArray<UDA_SpecificBuildingUpgrade>
local UDA_BuildingUpgrades = {}

---@param BuildingType EBuildingType
---@return UDA_SpecificBuildingUpgrade
function UDA_BuildingUpgrades:GetUpgradesByBuildingType(BuildingType) end


---@class UDA_CinemaCustomers : UDataAsset
---@field MinimumTimeToSpawnCustomers float
---@field SpawnCustomerAttemptCooldown float
---@field SpawnTwoCustomersChance float
---@field SpawnOneCustomerChance float
---@field SpawnEventTwoCustomersChance float
---@field SpawnEventOneCustomerChance float
---@field RenownLostOnMovieCanceledPerCustomer float
---@field MaxCinemaVehiclesOnMap int32
---@field MinTimeBeforeLeavingCinema float
---@field WaitTimeBetweenCustomersLeavingCinema float
---@field CinemaTrashItems TArray<TSubclassOf<ATrashItemBase>>
---@field CinemaTrashDecals TArray<TSubclassOf<AInteractableDecal>>
---@field TrashDropChance float
---@field SecondTrashDropChance float
---@field TrashDecalChance float
---@field TrashMultiplierModifier float
---@field SandstormTrashItemCount FInt32Range
local UDA_CinemaCustomers = {}



---@class UDA_CinemaEvents : UDataAsset
---@field ResetEventsAtHour int32
---@field TrendingEventChance float
---@field RushhourEventChance float
---@field TrendingPopcornMoneyBonus float
---@field TicketMoneyBonus float
---@field RushHourRenownBonus float
---@field TrendingMoviesRange FInt32Range
---@field RushHourTimeRange FInt32Range
local UDA_CinemaEvents = {}



---@class UDA_CinemaPopcorn : UDataAsset
---@field PopcornMoney int32
---@field PopcornRenownPoints int32
---@field ProductionCost float
---@field StartingPopcornDelay FFloatRange
---@field PopcornCooldownTime FFloatRange
---@field TimeToDestroyPopcornBox float
---@field DennisPuppetCooldown float
---@field DennisPuppetSpeed FFloatRange
local UDA_CinemaPopcorn = {}



---@class UDA_CinemaTickets : UDataAsset
---@field FakeMovieNames TArray<FText>
---@field FakeCinemaNames TArray<FText>
---@field FakeMovieImages TArray<TSoftObjectPtr<UTexture2D>>
---@field FakeTicketChance float
---@field FakeParameterChance TMap<eTicketParameters, float>
---@field NoParameterChance TMap<eTicketParameters, float>
---@field UseGlobalFakeTitlesArrayChance float
---@field UseGlobalFakeImagesArrayChance float
---@field NoTicketChance float
---@field ValidatorStuckChance float
---@field MinStuckCountClicks int32
---@field MaxStuckCountClicks int32
---@field StuckProgressLossOverTime float
---@field ValidationMoney int32
---@field ValidateCorrectTicketRenown int32
---@field ValidateWrongTicketRenown int32
---@field RejectCorrectTicketRenown int32
---@field RejectFakeTicketRenown int32
---@field ValidationInteractionDistance float
local UDA_CinemaTickets = {}



---@class UDA_ContractRegions : UDataAsset
---@field States TArray<FStateData>
---@field DeliveryRandomizationSettings TMap<EJunkyardPartRarity, FStateSettings>
---@field PartRevealCostPerOfficeLevel TMap<int32, float>
---@field PartsVisibilityPerOfficeLevel TMap<int32, int32>
---@field MapRefreshPrice float
---@field DriversRefreshPrice float
---@field ContractsRefreshPrice float
---@field DriverOriginBonus float
---@field MaxDriverFailCount int32
---@field CustomizationRequirementsPerContractType TMap<ECustomizationContractType, FCustomizationRequirementsSettings>
---@field DifferentColorCarParts TArray<FDifferentColorCarParts>
---@field ContractLevelPriceBonus TMap<ECustomizationContractType, float>
---@field ContractLevelContractPoints TMap<ECustomizationContractType, float>
---@field ContractDurationDaysSettings TMap<ECustomizationContractType, FFloatRange>
---@field UnlockContractTypePerOfficeLevel TMap<ECustomizationContractType, int32>
---@field ContractAppearationChancePerOfficeLevel TMap<int32, float>
---@field ContractFailedPointsLostCount int32
local UDA_ContractRegions = {}



---@class UDA_FuelData : UDataAsset
---@field VehiclesFuelData TArray<FVehicleFuelData>
local UDA_FuelData = {}

---@param FuelType EFuelMagazine
---@return float
function UDA_FuelData:GetMinFuelPrice(FuelType) end
---@param FuelType EFuelMagazine
---@return float
function UDA_FuelData:GetMaxFuelPrice(FuelType) end
---@param FuelType EFuelMagazine
---@return float
function UDA_FuelData:GetDefaultFuelPrice(FuelType) end
---@param FuelType EFuelMagazine
---@return UCurveFloat
function UDA_FuelData:GetBuyFuelPriceCurve(FuelType) end


---@class UDA_HireableDriver : UDataAsset
---@field Driver FHireableDriver
---@field UnlockLevel int32
local UDA_HireableDriver = {}



---@class UDA_JunkyardFame : UDataAsset
---@field DataPerLevel TMap<int32, FFameLevelData>
---@field MoneyToExperienceRatio float
---@field ExperienceToGetForCarCrash float
local UDA_JunkyardFame = {}



---@class UDA_JunkyardWrecks : UDataAsset
---@field CarWrecks TArray<FCarWreckType>
local UDA_JunkyardWrecks = {}

---@param CarWreck TSoftClassPtr<AJunkyardCarWreck>
---@return FCarWreckType
function UDA_JunkyardWrecks:FindWreckDataFromClass(CarWreck) end


---@class UDA_MainPCButton : UDataAsset
---@field background TSoftObjectPtr<UTexture2D>
---@field bCreateAsNewWidget boolean
---@field WidgetToCreate TSoftClassPtr<UPcBaseTab>
---@field bHideTitle boolean
---@field Name FText
---@field ButtonIcon UTexture2D
---@field HoverIcon UTexture2D
---@field DisabledIcon UTexture2D
---@field UnlockingTag FGameplayTag
---@field RedDotTag FGameplayTag
---@field bHasTutorial boolean
---@field bTutorialType EGameActivityType
---@field bSetFillHorizontal boolean
---@field bHasFirstTimeTutorial boolean
---@field bHideBackground boolean
---@field bHideBottomPanel boolean
---@field bFirstTimeTutorialTag FGameplayTag
local UDA_MainPCButton = {}



---@class UDA_MainPCButtons : UDataAsset
---@field Buttons TArray<UDA_MainPCButton>
---@field ButtonClass TSoftClassPtr<UPC_TopMenuButton>
local UDA_MainPCButtons = {}



---@class UDA_PartySpotProducts : UDataAsset
---@field Products TArray<FProductAmount>
---@field Factor float
local UDA_PartySpotProducts = {}



---@class UDA_RentalServiceBuilding : UDataAsset
---@field ItemsForRent TArray<UDA_SpecificItemForRent>
local UDA_RentalServiceBuilding = {}



---@class UDA_SpecificAITask : UDataAsset
---@field CustomerType ECustomerType
---@field InteractableTaskTypes TArray<EInteractableTaskType>
---@field Tasks TArray<TSoftClassPtr<UIteractableActorTask>>
---@field ShoppingTasks TArray<UDA_SpecificShoppingAITask>
---@field bCanNeedParkingSpot boolean
---@field bNeedsVehicle boolean
---@field VehicleOptymalizeType EVehicleOptymalizeType
---@field bDLCRequired boolean
---@field DLCRequiredName EDLCName
---@field Buildings TArray<TSoftObjectPtr<AInteractableBuilding>>
---@field ActorsWithBuildings TArray<FActorWithBuilding>
local UDA_SpecificAITask = {}



---@class UDA_SpecificBuildingUpgrade : UDataAsset
---@field BuildingType EBuildingType
---@field UpgradeLevels TArray<FMapIndependentBuildingSublevels>
---@field StorageUpgrades TArray<FWarehouseUpgradeInfo>
---@field bRefreshPathPoints boolean
---@field PathPointsToRefresh TArray<FPathStationsBuildingUpdate>
---@field CarWashStation TSoftObjectPtr<ACarWashStation>
---@field bStartWithTrashVolumeTickOn boolean
---@field AutomaticCarWashLevelTrigger int32
---@field CarLiftRefs TArray<TSoftObjectPtr<ACarLift>>
---@field RentalSpots TArray<TSoftObjectPtr<ARentalSpot>>
local UDA_SpecificBuildingUpgrade = {}



---@class UDA_SpecificItemForRent : UDataAsset
---@field Item TSoftClassPtr<ARentableItem>
local UDA_SpecificItemForRent = {}



---@class UDA_SpecificShoppingAITask : UDataAsset
---@field SpecificShoppingTypeTasks TArray<FSpecificShoppingTypeTask>
local UDA_SpecificShoppingAITask = {}



---@class UDLCAirstripFunctionHelper : UBlueprintFunctionLibrary
local UDLCAirstripFunctionHelper = {}

---@param WorldContextObject UObject
---@return boolean
function UDLCAirstripFunctionHelper:IsNoAirplaneInAir(WorldContextObject) end
---@param WorldContextObject UObject
---@return ADLCTradingSystemManager
function UDLCAirstripFunctionHelper:GetDLCTradingSystemManager(WorldContextObject) end
---@param WorldContextObject UObject
---@return ADLCAirstripManager
function UDLCAirstripFunctionHelper:GetDLCAirstripManager(WorldContextObject) end
---@param WorldContextObject UObject
---@return UAirportScheduleManager
function UDLCAirstripFunctionHelper:GetAirportScheduleManager(WorldContextObject) end


---@class UDLCCinemaFunctionLibrary : UBlueprintFunctionLibrary
local UDLCCinemaFunctionLibrary = {}

---@param WorldContextObject UObject
---@return ADLCDriveInCinemaManager
function UDLCCinemaFunctionLibrary:GetDLCCinemaManager(WorldContextObject) end


---@class UDLCManagerSubsystem : UWorldSubsystem
---@field OnDLCActivationStateChanged FDLCManagerSubsystemOnDLCActivationStateChanged
---@field DeactivatedDLCs TSet<EDLCName>
local UDLCManagerSubsystem = {}

---@param DLCName EDLCName
---@return boolean
function UDLCManagerSubsystem:IsDLCEnabled(DLCName) end
---@return TSet<EDLCName>
function UDLCManagerSubsystem:GetDeactivatedDLCs() end
---@param DLCName FString
function UDLCManagerSubsystem:DeactivateDLCUsingString(DLCName) end
---@param DLCName EDLCName
function UDLCManagerSubsystem:DeactivateDLC(DLCName) end
---@param DLCName FString
function UDLCManagerSubsystem:ActivateDLCUsingString(DLCName) end
---@param DLCName EDLCName
function UDLCManagerSubsystem:ActivateDLC(DLCName) end


---@class UDLCShadyDealsManager : UActorComponent
---@field LockedProducts TArray<TSoftClassPtr<AItem>>
---@field SheriffBehaviourSettingsDataAsset USDSheriffBehaviorDataAsset
---@field ShadynessManager USDShadynessManager
---@field GameplayEvents USDGameplayEvents
local UDLCShadyDealsManager = {}

function UDLCShadyDealsManager:UnlockAllProducts() end
---@param InProduct TSoftClassPtr<AItem>
---@param bLocked boolean
function UDLCShadyDealsManager:SetProductLocked(InProduct, bLocked) end
---@param Product TSoftClassPtr<AItem>
---@return boolean
function UDLCShadyDealsManager:IsProductLocked(Product) end
---@return USDSheriffBehaviorDataAsset
function UDLCShadyDealsManager:GetSheriffBehaviourDataAsset() end
---@return USDShadynessManager
function UDLCShadyDealsManager:GetShadynessManager() end
---@return TArray<TSoftClassPtr<AItem>>
function UDLCShadyDealsManager:GetLockedProducts() end
---@return USDGameplayEvents
function UDLCShadyDealsManager:GetGameplayEvents() end


---@class UDecorationLevel : UDataAsset
---@field StandingDecorations TArray<FDecorationStruct>
local UDecorationLevel = {}



---@class UDeliveryMarkerWidget : UGSSBaseWidget
---@field Owner AActor
local UDeliveryMarkerWidget = {}



---@class UDeliveryWreck : UIteractableActorTask
local UDeliveryWreck = {}

function UDeliveryWreck:OnDeliveryCancel() end


---@class UDenisTask : UGSSTask
local UDenisTask = {}

---@return ACustomizationHousePart
function UDenisTask:FindWallToPaint() end


---@class UDepartureScreensTutorial : UUserWidget
local UDepartureScreensTutorial = {}

function UDepartureScreensTutorial:ForceShowTutorial() end


---@class UDesertCarWidget : UAdditionalKeyItemWidget
local UDesertCarWidget = {}

---@param Time float
function UDesertCarWidget:UpdateTime(Time) end
---@param CurrentTraceCount int32
---@param MaxTraceCount int32
function UDesertCarWidget:UpdateScore(CurrentTraceCount, MaxTraceCount) end
---@param MetaTimer float
---@param BestScoreFlot float
---@param bNewRecord boolean
function UDesertCarWidget:ShowFinalResult(MetaTimer, BestScoreFlot, bNewRecord) end


---@class UDespawnEventGameAction : UGameAction
---@field Event TSoftClassPtr<UGSSEvent>
---@field TriggerFinishEvent boolean
local UDespawnEventGameAction = {}



---@class UDestroyActorObjective : UObjectiveBase
---@field DesiredActor TSoftObjectPtr<AActor>
local UDestroyActorObjective = {}



---@class UDialogueGraph : UGenericGraph
---@field RelatedDLC EDLCName
---@field OriginalGraphPath FName
---@field NPCName FText
---@field BG_Greeting FLinearColor
---@field BG_NPCText FLinearColor
---@field BG_NPCRespondText FLinearColor
---@field BG_PlayerText FLinearColor
---@field NPCConversationDialogueConnection FDialogueList
local UDialogueGraph = {}

---@param InConversationType ENPCConversationType
---@return int32
function UDialogueGraph:GetRandomDialogueIDByType(InConversationType) end
---@param UniqueNodeID int32
---@return UDialogueNode
function UDialogueGraph:FindDialogueNodeByID(UniqueNodeID) end
---@param DialogueTag FString
---@return UDialogueNode
function UDialogueGraph:FindDialogueNode(DialogueTag) end


---@class UDialogueNode : UGenericGraphNode
---@field CopiedInternalID int32
---@field DialogueNodeType eDialogueType
---@field line FText
---@field OverrideNPCName FText
---@field Tag FString
---@field VoiceoverLine USoundCue
---@field GameActions TArray<FGameActionStruct>
---@field bHideAfterUse boolean
---@field DialogueDuration float
---@field DialogueDelayStart float
---@field DialogueDelayEnd float
---@field bOverrideDialogueDuration boolean
---@field DialogueOverrideTime float
---@field DialogueClass EDialogueClass
---@field bIsHidden boolean
---@field TimesPlayed int32
---@field bAllowPlayerToMove boolean
local UDialogueNode = {}

---@return boolean
function UDialogueNode:IsVoicelinePresent() end
---@param Nodes TArray<UDialogueNode>
---@param bIncludeSelf boolean
function UDialogueNode:GetAllDialogueChainFromThisNodeOnwards(Nodes, bIncludeSelf) end
---@return UDialogueNode
function UDialogueNode:FindNextDialogue() end


---@class UDiggerWidget : UUserWidget
local UDiggerWidget = {}


---@class UDishwashingSettings : URvMinigameBaseSettings
---@field SettingsPerDifficulty TArray<FDishwashingSettingsPerDifficulty>
---@field ExtraWashWaterFlowDurationPenalty float
---@field EveryWashWaterFlowDurationPenalty float
---@field WrongDishStackPenalty float
---@field StainsCount FInt32Range
---@field GamepadMovementSpeed float
---@field HeldDishHeight float
---@field DishesData TArray<FDishesData>
local UDishwashingSettings = {}



---@class UDragoButton : UButton
---@field orginal FSlateBrush
local UDragoButton = {}

---@param IsPressed boolean
function UDragoButton:SetPressed(IsPressed) end
---@param IsHovered boolean
function UDragoButton:SetHovered(IsHovered) end
function UDragoButton:OnButtonClick() end
---@param NewHovered boolean
function UDragoButton:ForceButtonHovered(NewHovered) end


---@class UDragoWidget : UUserWidget
local UDragoWidget = {}

---@param bIsPressed boolean
function UDragoWidget:YButtonAction(bIsPressed) end
function UDragoWidget:YButton_Released() end
function UDragoWidget:YButton_Press() end
---@param bIsPressed boolean
function UDragoWidget:XButtonAction(bIsPressed) end
function UDragoWidget:XButton_Released() end
function UDragoWidget:XButton_Press() end
---@param InCounterValue int32
function UDragoWidget:SetStaticCounter(InCounterValue) end
---@param bIsPressed boolean
function UDragoWidget:RightTriggerAction(bIsPressed) end
function UDragoWidget:RightTrigger_Released() end
function UDragoWidget:RightTrigger_Press() end
---@param bIsPressed boolean
function UDragoWidget:RightBumperAction(bIsPressed) end
function UDragoWidget:RightBumper_Released() end
function UDragoWidget:RightBumper_Press() end
---@param bIsPressed boolean
function UDragoWidget:LeftTriggerAction(bIsPressed) end
function UDragoWidget:LeftTrigger_Released() end
function UDragoWidget:LeftTrigger_Press() end
---@param bIsPressed boolean
function UDragoWidget:LeftBumperAction(bIsPressed) end
function UDragoWidget:LeftBumper_Released() end
function UDragoWidget:LeftBumper_Press() end
function UDragoWidget:IncresCounter() end
---@return int32
function UDragoWidget:GetStaticCounter() end
---@param bIsPressed boolean
function UDragoWidget:DPadUpAction(bIsPressed) end
function UDragoWidget:DPadUp_Released() end
function UDragoWidget:DPadUp_Press() end
---@param bIsPressed boolean
function UDragoWidget:DPadRightAction(bIsPressed) end
function UDragoWidget:DPadRight_Released() end
function UDragoWidget:DPadRight_Press() end
---@param bIsPressed boolean
function UDragoWidget:DPadLeftAction(bIsPressed) end
function UDragoWidget:DPadLeft_Released() end
function UDragoWidget:DPadLeft_Press() end
---@param bIsPressed boolean
function UDragoWidget:DPadDownAction(bIsPressed) end
function UDragoWidget:DPadDown_Released() end
function UDragoWidget:DPadDown_Press() end
function UDragoWidget:DecreaseCounter() end
---@param bIsPressed boolean
function UDragoWidget:BButtonAction(bIsPressed) end
function UDragoWidget:BButton_Released() end
function UDragoWidget:BButton_Press() end
---@param bIsPressed boolean
function UDragoWidget:AButtonAction(bIsPressed) end
function UDragoWidget:AButton_Released() end
function UDragoWidget:AButton_Press() end


---@class UDumbbellSlotComponent : UBoxComponent
---@field OnSetItem FDumbbellSlotComponentOnSetItem
---@field Item TWeakObjectPtr<ADumbbellItem>
---@field OwningContainer ADumbbellsContainer
local UDumbbellSlotComponent = {}

---@return ADumbbellItem
function UDumbbellSlotComponent:GetItem() end


---@class UDumbbellsSettings : URvMinigameBaseSettings
---@field SettingsPerDifficulty TArray<FDumbbellsSettingsPerDifficulty>
---@field DumbbellsSetups TArray<FDumbbellSetup>
local UDumbbellsSettings = {}



---@class UEconomyBlueprintLibrary : UBlueprintFunctionLibrary
local UEconomyBlueprintLibrary = {}


---@class UEconomyChartButton : UUserWidget
---@field money float
local UEconomyChartButton = {}



---@class UEconomyTracker : UActorComponent
---@field ProductsManaged TArray<FEconomyProduct>
---@field FuelManaged FFuelProduct
local UEconomyTracker = {}

---@param NewFuelManaged FFuelProduct
function UEconomyTracker:SetFuelProducts(NewFuelManaged) end
---@param NewProductsManaged TArray<FEconomyProduct>
function UEconomyTracker:SetEconomyProducts(NewProductsManaged) end
---@param ProductClass UClass
---@param Amount int32
---@param ValuePerOne float
---@param ProductEconomyType EEconomyType
function UEconomyTracker:ProductSold(ProductClass, Amount, ValuePerOne, ProductEconomyType) end
---@param ProductClass UClass
---@param AmountPerSingleOrder int32
---@param Amount int32
---@param ValuePerSingleOrder float
---@param ProductEconomyType EEconomyType
function UEconomyTracker:ProductBought(ProductClass, AmountPerSingleOrder, Amount, ValuePerSingleOrder, ProductEconomyType) end
---@return FFuelProduct
function UEconomyTracker:GetFuelProducts() end
---@return TArray<FEconomyProduct>
function UEconomyTracker:GetEconomyProducts() end
---@param Amount float
---@param FuelValue float
function UEconomyTracker:FuelSold(Amount, FuelValue) end
---@param Amount float
---@param FuelValue float
function UEconomyTracker:FuelBought(Amount, FuelValue) end
---@param ProductClass UClass
---@return int32
function UEconomyTracker:FindProductIndex(ProductClass) end


---@class UEconomyTrackingSubsystem : UWorldSubsystem
---@field TotalMoneyEarned float
---@field TotalMoneySpent float
---@field PassiveIncomeFromOtherMaps TArray<FSavedPassiveIncome>
local UEconomyTrackingSubsystem = {}

---@param InputData TArray<UEconomyChartButton>
---@param bAscending boolean
---@return TArray<UEconomyChartButton>
function UEconomyTrackingSubsystem:SortChartButtonWidgets(InputData, bAscending) end
---@param NewTotalMoneySpent float
function UEconomyTrackingSubsystem:SetTotalMoneySpent(NewTotalMoneySpent) end
---@param NewTotalMoneyEarned float
function UEconomyTrackingSubsystem:SetTotalMoneyEarned(NewTotalMoneyEarned) end
---@param NewPassiveIncome TArray<FSavedPassiveIncome>
function UEconomyTrackingSubsystem:SetPassiveIncomeData(NewPassiveIncome) end
---@return TMap<FString, FEconomyDayInfo>
function UEconomyTrackingSubsystem:SaveEconomyData() end
function UEconomyTrackingSubsystem:RecievePassiveIncome() end
---@param InputArray TArray<FDetailedItemInfo>
---@return TArray<FDetailedItemInfo>
function UEconomyTrackingSubsystem:OrderItemInfo(InputArray) end
function UEconomyTrackingSubsystem:OnWorldBeginPlay() end
---@param SelectedDays TArray<int32>
---@param YieldType EEconomyGeneralYieldType
---@return float
function UEconomyTrackingSubsystem:GetTotalYieldOfSelectedDays(SelectedDays, YieldType) end
---@return float
function UEconomyTrackingSubsystem:GetTotalMoneySpent() end
---@return float
function UEconomyTrackingSubsystem:GetTotalMoneyEarned() end
---@param Days TArray<int32>
---@return int32
function UEconomyTrackingSubsystem:GetPassiveIncomeTotalFromSelectedDays(Days) end
---@return TArray<FSavedPassiveIncome>
function UEconomyTrackingSubsystem:GetPassiveIncomeData() end
---@param Days TArray<int32>
---@param GeneralYieldType EEconomyGeneralYieldType
---@param bAscending boolean
---@return TMap<EEconomyDetailedYieldType, FDetailedEconomyDayInfo>
function UEconomyTrackingSubsystem:GetGeneralEconomyData(Days, GeneralYieldType, bAscending) end
---@param Days TArray<int32>
---@param GeneralYieldType EEconomyGeneralYieldType
---@param DetailedYieldType EEconomyDetailedYieldType
---@param bAscending boolean
---@return TMap<EItemTypeCategory, FDetailedTypeInfo>
function UEconomyTrackingSubsystem:GetDetailedEconomyData(Days, GeneralYieldType, DetailedYieldType, bAscending) end
---@return TMap<FString, FEconomyDayInfo>
function UEconomyTrackingSubsystem:GetDailyEconomyInfo() end
---@param OrderedItems TArray<FBasketItemStruct>
function UEconomyTrackingSubsystem:AddNewDailyEconomyInfoOrder(OrderedItems) end
---@param OrderedItem FBasketItemStruct
function UEconomyTrackingSubsystem:AddNewDailyEconomyInfoOneOrder(OrderedItem) end
---@param Value float
---@param Amount float
---@param YieldType EEconomyDetailedYieldType
---@param TypeCategory EItemTypeCategory
---@param ItemName FText
---@param DataTableItemName FName
---@param ForcedYieldType EEconomyGeneralYieldType
---@param bAddToGroupedInfoOnly boolean
function UEconomyTrackingSubsystem:AddNewDailyEconomyInfo(Value, Amount, YieldType, TypeCategory, ItemName, DataTableItemName, ForcedYieldType, bAddToGroupedInfoOnly) end
---@param ItemName FString
---@param Price float
---@param Amount float
---@param AddToGroupedInfo boolean
function UEconomyTrackingSubsystem:AddItemToEconomySubsystem(ItemName, Price, Amount, AddToGroupedInfo) end


---@class UElvisGoToRelax : UIteractableActorTask
---@field TargetActorLocation AActor
local UElvisGoToRelax = {}



---@class UEmployeeShift : UObject
---@field NewTaskAssigned FEmployeeShiftNewTaskAssigned
---@field Employee AAICharacterBase
---@field EmployeeTasks TArray<FAssignedTasksInfo>
---@field AssignedShift EShiftType
---@field bAutopay boolean
---@field CurrentTaskPriority int32
local UEmployeeShift = {}

---@return boolean
function UEmployeeShift:TryToPaySalary() end
---@return boolean
function UEmployeeShift:TryToActivateNextTask() end
function UEmployeeShift:ShiftStarted() end
function UEmployeeShift:ShiftFinished() end
---@param TaskPriority int32
---@param bNewActiveValue boolean
---@param CurrentShift EShiftType
function UEmployeeShift:SetTaskActivePossibility(TaskPriority, bNewActiveValue, CurrentShift) end
---@param Priority int32
function UEmployeeShift:SetTargetsBinding(Priority) end
---@param Priority int32
---@param TaskToAssign EEmployeeTask
---@param NewTask TSoftClassPtr<UEmployeeTask>
---@param bActive boolean
function UEmployeeShift:SetNewEmployeeTask(Priority, TaskToAssign, NewTask, bActive) end
---@param bNewValue boolean
function UEmployeeShift:SetIfAutopay(bNewValue) end
---@param NewEmployeeTasks TArray<FAssignedTasksInfo>
function UEmployeeShift:SetEmployeeTasks(NewEmployeeTasks) end
---@param NewEmployee AAICharacterBase
function UEmployeeShift:SetEmployee(NewEmployee) end
---@param NewCurrentTaskPriority int32
function UEmployeeShift:SetCurrentTaskPriority(NewCurrentTaskPriority) end
---@param NewShiftType EShiftType
function UEmployeeShift:SetAssignedShift(NewShiftType) end
---@param ChairTransform FTransform
function UEmployeeShift:ResetLocation(ChairTransform) end
---@param RemovedTaskPriority int32
function UEmployeeShift:RemoveTask(RemovedTaskPriority) end
function UEmployeeShift:RemoveTargetsBindings() end
---@param TaskIndex int32
---@param bRemoveFromArray boolean
function UEmployeeShift:RemoveTargetActors_byIndex(TaskIndex, bRemoveFromArray) end
---@param RemovedTask TSoftClassPtr<UEmployeeTask>
---@param bRemoveFromArray boolean
function UEmployeeShift:RemoveTargetActors(RemovedTask, bRemoveFromArray) end
---@param TargetActor AInteractableBuilding
function UEmployeeShift:RemoveTargetActorBindings(TargetActor) end
---@param TargetActor AInteractableBuilding
---@param TaskIndex int32
---@param bRemoveFromArray boolean
function UEmployeeShift:RemoveTargetActor_byIndex(TargetActor, TaskIndex, bRemoveFromArray) end
---@param TargetActor AInteractableBuilding
---@param TaskIndex int32
function UEmployeeShift:RemoveTargetActor(TargetActor, TaskIndex) end
---@param RemovedBuilding AInteractableBuilding
---@param TaskType EEmployeeTask
function UEmployeeShift:RemoveAsTargetActor(RemovedBuilding, TaskType) end
---@param MainTaskPriority int32
function UEmployeeShift:OnTaskLoaded(MainTaskPriority) end
---@param TaskBase UTaskBase
function UEmployeeShift:OnInitializeTaskCharacter(TaskBase) end
function UEmployeeShift:OnFuelRestored() end
---@param LeftEmployee AAICharacterBase
---@param TargetActor AActor
function UEmployeeShift:OnEmployeeLeftQueue(LeftEmployee, TargetActor) end
---@param Customer AAICharacterBase
---@param TargetActor AActor
function UEmployeeShift:OnCustomerServed(Customer, TargetActor) end
---@param Customer AAICharacterBase
---@param TargetActor AActor
function UEmployeeShift:OnCustomerArrived(Customer, TargetActor) end
---@param TaskBase UTaskBase
---@param TaskResult ETaskResult
---@param Reason FString
function UEmployeeShift:OnBeginFinishTaskCharacter(TaskBase, TaskResult, Reason) end
---@return boolean
function UEmployeeShift:HasCurrentTaskConsent() end
---@return int32
function UEmployeeShift:HasAnyTaskActivationPossibility() end
---@param TargetActor AInteractableBuilding
---@param TaskIndex int32
---@param bRemoveFromArray boolean
function UEmployeeShift:HandleTargetActorRemoving(TargetActor, TaskIndex, bRemoveFromArray) end
function UEmployeeShift:GoHome() end
---@param Task TSoftClassPtr<UEmployeeTask>
---@return TSoftClassPtr<AInteractableActor>
function UEmployeeShift:GetTaskTargetActorClass(Task) end
---@return boolean
function UEmployeeShift:GetIfAutopay() end
---@return TArray<FAssignedTasksInfo>
function UEmployeeShift:GetEmployeeTasks() end
---@return AAICharacterBase
function UEmployeeShift:GetEmployee() end
---@return int32
function UEmployeeShift:GetCurrentTaskPriority() end
---@return EShiftType
function UEmployeeShift:GetAssignedShift() end
---@return boolean
function UEmployeeShift:ForceNextTask() end
---@param OngoingTaskPriority int32
---@param bForceActivation boolean
---@return int32
function UEmployeeShift:FindTaskToMoveTo(OngoingTaskPriority, bForceActivation) end
---@param TaskToFind TSoftClassPtr<UEmployeeTask>
---@return int32
function UEmployeeShift:FindTask(TaskToFind) end
---@param TaskPriority int32
---@param ActorToFind TSoftClassPtr<AInteractableActor>
function UEmployeeShift:FindAndAddAsTargetActor(TaskPriority, ActorToFind) end
---@param WantedTask EEmployeeTask
---@param OutTask FTaskStruct
function UEmployeeShift:FillTaskStruct(WantedTask, OutTask) end
---@param TargetActor AActor
function UEmployeeShift:DelegateFunctionCalled(TargetActor) end
---@param TaskPriority int32
---@param bForceActivation boolean
---@return boolean
function UEmployeeShift:CheckIfNextTaskAvailable(TaskPriority, bForceActivation) end
---@param TaskPriority int32
---@param bCurrentTakConsent boolean
---@return boolean
function UEmployeeShift:CheckIfCanActivateTask(TaskPriority, bCurrentTakConsent) end
---@param TaskToActivate int32
---@param bCurrentTakConsent boolean
---@return boolean
function UEmployeeShift:CanActivateNextTask(TaskToActivate, bCurrentTakConsent) end
---@param NewAssignedShift EShiftType
---@param CurrentActiveShift EShiftType
function UEmployeeShift:AssignShift(NewAssignedShift, CurrentActiveShift) end
---@param TargetActor AInteractableBuilding
function UEmployeeShift:AddTargetBinding(TargetActor) end
---@param Priority int32
---@param TargetActorToAdd TSoftObjectPtr<AInteractableBuilding>
function UEmployeeShift:AddTargetActor(Priority, TargetActorToAdd) end
---@param NewBuilding AInteractableBuilding
---@param TaskType EEmployeeTask
function UEmployeeShift:AddAsTargetActor(NewBuilding, TaskType) end
---@param Priority int32
function UEmployeeShift:ActivateNewTask(Priority) end


---@class UEmployeeShiftsHelper : UBlueprintFunctionLibrary
local UEmployeeShiftsHelper = {}

---@param WorldContextObject UObject
---@param BuldingToRemove AInteractableBuilding
---@param TaskType EEmployeeTask
function UEmployeeShiftsHelper:RemoveAsTargetActor(WorldContextObject, BuldingToRemove, TaskType) end
---@param Employee AAICharacterBase
---@param BuildingToLookForCustomers AInteractableBuilding
---@return boolean
function UEmployeeShiftsHelper:IsTargetActorWorthToGoOrAvailable(Employee, BuildingToLookForCustomers) end
---@param WorldContextObject UObject
---@param Task UTaskBase
---@return EEmployeeTask
function UEmployeeShiftsHelper:GetTaskType(WorldContextObject, Task) end
---@param WorldContextObject UObject
---@return EShiftType
function UEmployeeShiftsHelper:GetCurrentShift(WorldContextObject) end
---@param WorldContextObject UObject
---@param Employee AAICharacterBase
function UEmployeeShiftsHelper:ForceNextTaskOrHome(WorldContextObject, Employee) end
---@param WorldContextObject UObject
---@param Employee AAICharacterBase
---@return boolean
function UEmployeeShiftsHelper:ForceNextTask(WorldContextObject, Employee) end
---@param WorldContextObject UObject
---@return boolean
function UEmployeeShiftsHelper:CheckIfStationDirty(WorldContextObject) end
---@param WorldContextObject UObject
---@return boolean
function UEmployeeShiftsHelper:CheckIfShelvesNeedRestock(WorldContextObject) end
---@param WorldContextObject UObject
---@param Employee AAICharacterBase
---@param NewTaskIndex int32
---@param bCurrentTaskConsent boolean
---@return boolean
function UEmployeeShiftsHelper:CheckIfCanMoveToNextTask(WorldContextObject, Employee, NewTaskIndex, bCurrentTaskConsent) end
---@param WorldContextObject UObject
---@param NewBuilding AInteractableBuilding
---@param TaskType EEmployeeTask
function UEmployeeShiftsHelper:AddAsTargetActor(WorldContextObject, NewBuilding, TaskType) end
---@param WorldContextObject UObject
---@param Employee AAICharacterBase
---@param NewTaskIndex int32
function UEmployeeShiftsHelper:ActivateEmployeeNewTask(WorldContextObject, Employee, NewTaskIndex) end


---@class UEmployeeTask : UGSSTask
---@field RegenerateEnergyPerMinute float
---@field MoneyPerMinute float
---@field RequirementEmployeeSkill EEmployeeSkill
---@field bCanEarnMoney boolean
local UEmployeeTask = {}

---@param Time FTimeStruct
function UEmployeeTask:WorkTime(Time) end
---@param InteractableActorClass TSubclassOf<AInteractableActor>
---@param Actors TArray<AActor>
---@return AActor
function UEmployeeTask:FindAndAddAsEmployee(InteractableActorClass, Actors) end


---@class UEmployeeTasksDataAsset : UDataAsset
---@field EmployeeTasks TArray<FEmployeeTaskInfo>
---@field ShiftsInfo TArray<FShiftsAvailable>
local UEmployeeTasksDataAsset = {}

---@param TaskToFind EEmployeeSkill
---@return FEmployeeTaskInfo
function UEmployeeTasksDataAsset:GetTaskInfo_bySkill(TaskToFind) end
---@param TaskToFind UTaskBase
---@return FEmployeeTaskInfo
function UEmployeeTasksDataAsset:GetTaskInfo_byRef(TaskToFind) end
---@param TaskToFind TSoftClassPtr<UEmployeeTask>
---@return FEmployeeTaskInfo
function UEmployeeTasksDataAsset:GetTaskInfo_byPtr(TaskToFind) end
---@param TaskToFind EEmployeeTask
---@return FEmployeeTaskInfo
function UEmployeeTasksDataAsset:GetTaskInfo_byETask(TaskToFind) end
---@param ShiftType EShiftType
---@return int32
function UEmployeeTasksDataAsset:GetStartShiftHour(ShiftType) end


---@class UEmployess_hud : UGSSInnerWidget
local UEmployess_hud = {}

function UEmployess_hud:SetRefreshOwnedEmploye() end


---@class UEmptyExcavatorBucketObjective : UObjectiveBase
---@field ExcavatorInstance TSoftObjectPtr<ADigger>
local UEmptyExcavatorBucketObjective = {}

---@param Excavator ADigger
function UEmptyExcavatorBucketObjective:OnExcavatorBucketEmptied(Excavator) end


---@class UEmptyTrashContainerObjective : UCountableObjectiveBase
---@field TrashContainerClass TSoftClassPtr<ATrashBin>
local UEmptyTrashContainerObjective = {}

---@param TrashBin ATrashBin
function UEmptyTrashContainerObjective:OnTrashBinEmptied(TrashBin) end


---@class UEnableGasStationGameAction : UGameAction
---@field bEnable boolean
local UEnableGasStationGameAction = {}



---@class UEnterQuestZoneObjective : UObjectiveBase
---@field Level TSoftObjectPtr<UWorld>
local UEnterQuestZoneObjective = {}

---@param LevelName FName
function UEnterQuestZoneObjective:FOnLevelQuestZoneTriggered(LevelName) end


---@class UEnterVehicleObjective : UObjectiveBase
---@field bUseSpecificVehicle boolean
---@field VehicleInstance TSoftObjectPtr<APlayerVehicle>
---@field VehicleClass TSoftClassPtr<APlayerVehicle>
local UEnterVehicleObjective = {}

---@param PlayerCharacter AGSSPlayerCharacter
---@param PlayerVehicle APlayerVehicle
function UEnterVehicleObjective:OnPlayerEnterVehicle(PlayerCharacter, PlayerVehicle) end


---@class UEnumsEconomy : UObject
local UEnumsEconomy = {}


---@class UEventDisplay : UObject
---@field GSSGameState AGSSGameState
---@field ChameleonEffectActor TSoftObjectPtr<AActor>
---@field Duration float
local UEventDisplay = {}

---@param DeltaTime float
function UEventDisplay:TickObject(DeltaTime) end
---@param Enable boolean
function UEventDisplay:SetTickEnabled(Enable) end
---@param NewLeftTime float
function UEventDisplay:SetLeftTime(NewLeftTime) end
---@param InitGSSGameState AGSSGameState
function UEventDisplay:InitializeEventDisplay(InitGSSGameState) end
function UEventDisplay:FinishEventDisplay() end


---@class UEventElvis : UGSSEvent
---@field ElvisClass TSoftClassPtr<ACharacter>
local UEventElvis = {}



---@class UExhibitionSpotWidget : UGSSBaseWidget
---@field SellButtonClicked FExhibitionSpotWidgetSellButtonClicked
---@field OnSellConfirmed FExhibitionSpotWidgetOnSellConfirmed
---@field OnNextExhibitionSpot FExhibitionSpotWidgetOnNextExhibitionSpot
---@field OnBackButtonClicked FExhibitionSpotWidgetOnBackButtonClicked
---@field SellButton UButton
local UExhibitionSpotWidget = {}

---@param bShow boolean
---@param PickedCar AJunkyardCarWreckCustomizable
function UExhibitionSpotWidget:ShowHideCarCloseView(bShow, PickedCar) end
---@param InCarWreck AJunkyardCarWreckCustomizable
function UExhibitionSpotWidget:SetCarPrice(InCarWreck) end
---@return UButton
function UExhibitionSpotWidget:GetSellButton() end


---@class UFameDecoration : UDataAsset
---@field Decorations TArray<FFameDecorationStruct>
local UFameDecoration = {}



---@class UFameManager : UActorComponent
---@field OnNewLevelUnlocked FFameManagerOnNewLevelUnlocked
---@field OnExperienceGained FFameManagerOnExperienceGained
---@field FameSettings UDA_JunkyardFame
---@field CurrentFameLevel int32
---@field FameExperience int32
---@field UnlockedRewards TArray<FUnlockableByFameData>
---@field ReceivedLevelsFromLastOpeningFameWidget int32
---@field ReceivedExperienceFromLastOpeningFameWidget int32
local UFameManager = {}

function UFameManager:ResetReceivedLevelsFromLastOpeningFameWidget() end
function UFameManager:ResetReceivedExperienceFromLastOpeningFameWidget() end
---@return int32
function UFameManager:GetRequiredExperienceForNextLevel() end
---@param ExperienceToAdd int32
function UFameManager:AddExperience(ExperienceToAdd) end


---@class UFeatureUpgrade : UPrimaryDataAsset
---@field Name FName
---@field Description FName
---@field Building EBuildingType
---@field Cost int32
---@field Icon UTexture2D
---@field LevelOfBuildingRequired int32
---@field DlcRequired TArray<EDLCName>
---@field LevelToLoad TArray<FName>
---@field LevelToUnload TArray<FName>
local UFeatureUpgrade = {}



---@class UFinishGameActivityObjective : UObjectiveBase
---@field GameActivityType EGameActivityType
local UFinishGameActivityObjective = {}

---@param FinishedActivityType EGameActivityType
function UFinishGameActivityObjective:FOnGameActivityFinished(FinishedActivityType) end


---@class UFloatButton : UGSSButton
---@field OnClickedReferenced FFloatButtonOnClickedReferenced
---@field Value float
local UFloatButton = {}



---@class UFuelCarsObjective : UCountableObjectiveBase
local UFuelCarsObjective = {}

---@param Customer AAICharacterBase
function UFuelCarsObjective:OnCustomerCarFueled(Customer) end


---@class UFuelMinigameWidget : UUserWidget
---@field Vehicle AGSSWheeledVehicle
local UFuelMinigameWidget = {}



---@class UGSBoxComponent : UBoxComponent
local UGSBoxComponent = {}

---@param bCanAffectNavigation boolean
function UGSBoxComponent:SetCanAffectNavigation(bCanAffectNavigation) end


---@class UGSSAlertWidget : UUserWidget
local UGSSAlertWidget = {}

---@param TextToEnter FText
---@param TimeToShow float
function UGSSAlertWidget:SetAlertValues(TextToEnter, TimeToShow) end


---@class UGSSBaseWidget : UUserWidget
---@field WidgetsGameplayTag FGameplayTag
---@field bImmediatelyDestroy boolean
---@field AlertWidget UGSSAlertWidget
local UGSSBaseWidget = {}

---@param ToShow FText
---@param Duration float
function UGSSBaseWidget:ShowMessageOnScreen_Implementation(ToShow, Duration) end
---@param ToShow FText
---@param Duration float
function UGSSBaseWidget:ShowMessageOnScreen(ToShow, Duration) end
---@param InKeyEvent FKeyEvent
---@param WorldContextObject UObject
---@return FEventReply
function UGSSBaseWidget:ShouldPreviewNavigationHandleKey(InKeyEvent, WorldContextObject) end
---@param InKeyEvent FKeyEvent
---@param WorldContextObject UObject
---@return FEventReply
function UGSSBaseWidget:ShouldNavigationHandleKey(InKeyEvent, WorldContextObject) end
---@param SoundName FName
function UGSSBaseWidget:PlayUiSound(SoundName) end
function UGSSBaseWidget:OnDefaultEscape() end
---@return UGlobalEventSubsystem
function UGSSBaseWidget:GetGlobalEventSubsystem() end
function UGSSBaseWidget:CustomEscape() end
---@param InTag FGameplayTag
---@return EUnlockableUIState
function UGSSBaseWidget:CheckState(InTag) end


---@class UGSSButton : UButton
---@field OnButtonFinished FGSSButtonOnButtonFinished
---@field RedDotTags FGameplayTagContainer
---@field RedDotOffset FVector2D
---@field NavigationMoveUp UGSSButton
---@field NavigationMoveDown UGSSButton
---@field NavigationMoveLeft UGSSButton
---@field NavigationMoveRight UGSSButton
---@field bCustomCondition boolean
---@field CurrentRepeat int32
---@field bBlockUnhover boolean
---@field RedDotReps TArray<FRepeatStruct>
---@field RedDotImage UGSSBaseWidget
local UGSSButton = {}

function UGSSButton:TryCreateRedDot() end
function UGSSButton:SetUnhovered() end
function UGSSButton:SetHovered() end
---@param InEnable boolean
function UGSSButton:SetCustomCondition(InEnable) end
---@param Tags FGameplayTagContainer
---@param Offset FVector2D
function UGSSButton:OverrideDefaultRedDots(Tags, Offset) end
function UGSSButton:LockAddedRedDots() end
function UGSSButton:DestroyRedDot() end
function UGSSButton:CustomOnClicked() end
function UGSSButton:CreateRedDot() end


---@class UGSSCheckBox : UCheckBox
---@field RedDotTag FGameplayTag
---@field RedDotOffset FVector2D
---@field RedDotImage UGSSBaseWidget
local UGSSCheckBox = {}

function UGSSCheckBox:TryCreateRedDot() end
function UGSSCheckBox:DestroyRedDot() end
---@param State boolean
function UGSSCheckBox:CustomOnStateChanged(State) end
function UGSSCheckBox:CreateRedDot() end


---@class UGSSChildActorComponent : UChildActorComponent
local UGSSChildActorComponent = {}


---@class UGSSComboBoxString : UComboBoxString
---@field RedDotTag FGameplayTag
---@field RedDotOffset FVector2D
---@field RedDotImage UGSSBaseWidget
local UGSSComboBoxString = {}

function UGSSComboBoxString:TryCreateRedDot() end
function UGSSComboBoxString:DestroyRedDot() end
function UGSSComboBoxString:CreateRedDot() end


---@class UGSSDeveloperSettings : UDeveloperSettings
---@field AchievementDataTable TSoftObjectPtr<UDataTable>
---@field AchievementWidgetClass TSubclassOf<UUserWidget>
---@field CarWreckTooltipClass TSubclassOf<ACarWreckTooltip>
---@field CarPartTooltipClass TSubclassOf<ACarPart_Tooltip>
---@field CarWreckHighlightTooltipClass TSubclassOf<ACarWreck_Tooltip>
---@field WrenchMinigameClass TSoftClassPtr<UWrenchMiniGame>
---@field PartSelectionClass TSoftClassPtr<UPartSelection>
---@field CarMaskWidgetClass TSubclassOf<UJunkyardWreckMaskWidget>
---@field MoveCarToPlatformWidgetClass TSoftClassPtr<UMoveCarToPlatformWidget>
---@field BindingWidgetClass TSoftClassPtr<UKeyItemWidget>
---@field AlertWidgetClass TSoftClassPtr<UGSSAlertWidget>
---@field AchievementManagerClass TSubclassOf<AAchievementManager>
---@field bUseNewUI boolean
---@field UiSoundsDataTable TSoftObjectPtr<UDataTable>
---@field DennisQuestTag FGameplayTag
---@field PopularityUnlockQuestTag FGameplayTag
---@field BikerBeatUpQuestTag FGameplayTag
---@field SandstormQuestTag FGameplayTag
---@field EndOfGameQuestTag FGameplayTag
---@field BackToHomeTaskClass TSoftClassPtr<UTaskBase>
---@field MainGameQuestline TSoftObjectPtr<UQuestLineBase>
---@field AirStripQuestLine TSoftObjectPtr<UQuestLineBase>
---@field JunkyardQuestLine TSoftObjectPtr<UQuestLineBase>
---@field CustomerTaskList TSubclassOf<UIteractableActorTask>
---@field FishTrashClass TSubclassOf<ATrashItemBase>
---@field LeaderboardManagerClass TSubclassOf<ALeaderboardManager>
---@field QueuePointClass TSubclassOf<AEditableQueuePoint>
---@field VehicleDrivers TArray<FVehicleDriverMatchup>
---@field PartySpotBusRef TSoftClassPtr<AGSSWheeledVehicle>
---@field AccentConnector TArray<FAccentConnection>
---@field bLoadTrashMeshesOnConstruction boolean
local UGSSDeveloperSettings = {}



---@class UGSSEvent : UObject
---@field PlayerController APlayerController
---@field OnEventDestroyed FGSSEventOnEventDestroyed
---@field GSSEventTime FGSSEventTime
---@field WorldPtr UWorld
---@field TickEnabled boolean
local UGSSEvent = {}

---@param NewEventProgress FEventProgress
---@return boolean
function UGSSEvent:UpdateEventProgress(NewEventProgress) end
---@param DeltaTime float
function UGSSEvent:TickObject(DeltaTime) end
---@param Enable boolean
function UGSSEvent:SetTickEnabled(Enable) end
---@param EventProgress FEventProgress
function UGSSEvent:SetEventProgress(EventProgress) end
---@param CurrentTime FTimeStruct
---@param OutCurrentTime FTimeStruct
function UGSSEvent:SetCurrenTime(CurrentTime, OutCurrentTime) end
function UGSSEvent:LoadGameEvent() end
---@param World UWorld
---@param bEventEnabled boolean
function UGSSEvent:InitializeEventWorld(World, bEventEnabled) end
---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UGSSEvent:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param ObjectiveName FString
---@param MaxProgress int32
---@return int32
function UGSSEvent:GetEventProgress(ObjectiveName, MaxProgress) end
---@return FTimeStruct
function UGSSEvent:GetCurrenTime() end
function UGSSEvent:FinishEvent() end
---@param bEventEnabled boolean
function UGSSEvent:ActivateEvent(bEventEnabled) end


---@class UGSSFunctionLibrary : UBlueprintFunctionLibrary
local UGSSFunctionLibrary = {}

---@param StructTime FTimeStruct
---@param Minute int32
---@param Hours int32
---@param OutTime FTimeStruct
function UGSSFunctionLibrary:UpdateTime(StructTime, Minute, Hours, OutTime) end
---@param WorldContextObject UObject
---@param TraceLengthMultiplier int32
---@param ComponentsToIgnore TArray<UPrimitiveComponent>
---@param ActorsToIgnore TArray<AActor>
---@param ObjectTypes TArray<EObjectTypeQuery>
---@return FHitResult
function UGSSFunctionLibrary:TraceObjectsFromMouseCursor(WorldContextObject, TraceLengthMultiplier, ComponentsToIgnore, ActorsToIgnore, ObjectTypes) end
---@param WorldContextObject UObject
---@param TraceLengthMultiplier int32
---@param ComponentsToIgnore TArray<UPrimitiveComponent>
---@param ActorsToIgnore TArray<AActor>
---@param CollisionChannel ECollisionChannel
---@return FHitResult
function UGSSFunctionLibrary:TraceFromMouseCursor(WorldContextObject, TraceLengthMultiplier, ComponentsToIgnore, ActorsToIgnore, CollisionChannel) end
---@param ComponentToSet UPrimitiveComponent
---@param bEnable boolean
function UGSSFunctionLibrary:ToggleNavigationAffect(ComponentToSet, bEnable) end
---@param Task UTaskBase
---@param QuestClass TSoftClassPtr<UGSSQuest>
---@return boolean
function UGSSFunctionLibrary:TaskWaitTooLong(Task, QuestClass) end
---@param Pawn APawn
---@return UGSSQuest
function UGSSFunctionLibrary:SpawnGSSQuest(Pawn) end
---@param World UWorld
---@param EventClass TSoftClassPtr<UGSSEvent>
---@param bEnableEvent boolean
function UGSSFunctionLibrary:SpawnEventFromClass_Loaded(World, EventClass, bEnableEvent) end
---@param World UWorld
---@param EventClass TSoftClassPtr<UGSSEvent>
---@param bEnableEvent boolean
function UGSSFunctionLibrary:SpawnEventFromClass(World, EventClass, bEnableEvent) end
---@param PlayerController APlayerController
---@param GSSEventTime FGSSEventTime
---@return UGSSEvent
function UGSSFunctionLibrary:SpawnEvent(PlayerController, GSSEventTime) end
---@param CharacterOwner ACharacter
---@param SpawnLocation FVector
---@return AAttachmentPoint
function UGSSFunctionLibrary:SpawnAttachmentPoint(CharacterOwner, SpawnLocation) end
---@param AICharacter AAICharacterBase
---@return UTaskBase
function UGSSFunctionLibrary:SpawnAITask(AICharacter) end
---@param WorldContextObject UObject
---@param ActorClass TSoftClassPtr<AActor>
---@param LocationSpawn FVector
---@param RotationSpawn FRotator
---@param SpawnCollisionHandlingOverride ESpawnActorCollisionHandlingMethod
---@param Owner ACharacter
---@return AActor
function UGSSFunctionLibrary:SpawnActorOfSoftClass(WorldContextObject, ActorClass, LocationSpawn, RotationSpawn, SpawnCollisionHandlingOverride, Owner) end
---@param ActorClass TSubclassOf<AActor>
---@param LocationSpawn FVector
---@param RotationSpawn FRotator
---@param Owner AActor
---@return AActor
function UGSSFunctionLibrary:SpawnActorFromClass_K2(ActorClass, LocationSpawn, RotationSpawn, Owner) end
---@param Items TArray<TSubclassOf<AItem>>
---@param Inventory UInventoryComponent
---@param DontSort boolean
---@param Ascending boolean
---@return TArray<TSubclassOf<AItem>>
function UGSSFunctionLibrary:SortItemsByQuantity(Items, Inventory, DontSort, Ascending) end
---@param GS AGSSGameState
---@param QuestClass TSoftClassPtr<UGSSQuest>
function UGSSFunctionLibrary:SkipToQuest(GS, QuestClass) end
---@param WorldContextObject UObject
function UGSSFunctionLibrary:ShowUI(WorldContextObject) end
---@param WorldContextObject UObject
---@param NewWaterPressureValue float
function UGSSFunctionLibrary:SetCarWashWaterPressure(WorldContextObject, NewWaterPressureValue) end
---@param SequencePlayer UUMGSequencePlayer
function UGSSFunctionLibrary:ReverseUMGSequence(SequencePlayer) end
---@param WorldContextObject UObject
---@return boolean
function UGSSFunctionLibrary:ResetTowy(WorldContextObject) end
---@param WorldContextObject UObject
---@param bTriggerAchievement boolean
---@return boolean
function UGSSFunctionLibrary:ResetDigger(WorldContextObject, bTriggerAchievement) end
---@param WorldContextObject UObject
---@param RequiredItems TArray<FRequiredItems>
function UGSSFunctionLibrary:RemoveUpgradeItems(WorldContextObject, RequiredItems) end
---@param WorldContextObject UObject
function UGSSFunctionLibrary:RemoveRoofDecorationsBackToInvenotry(WorldContextObject) end
---@param WorldContextObject UObject
---@param Item TSoftClassPtr<AItem>
---@param Amount int32
---@param StorageType EStorageType
---@return boolean
function UGSSFunctionLibrary:RemoveFromSpecifiedPlayerInventory(WorldContextObject, Item, Amount, StorageType) end
---@param WorldContextObject UObject
---@param Item TSoftClassPtr<AItem>
---@param Amount int32
---@return boolean
function UGSSFunctionLibrary:RemoveFromPlayerInventories(WorldContextObject, Item, Amount) end
---@param File FString
function UGSSFunctionLibrary:PrintData(File) end
---@param WorldContextObject UObject
---@param bDestroyAllCars boolean
---@param bDestroyAllCustomers boolean
---@param bRestartDigger boolean
---@param bStopCarSpawn boolean
function UGSSFunctionLibrary:PrepareMapForCinematic(WorldContextObject, bDestroyAllCars, bDestroyAllCustomers, bRestartDigger, bStopCarSpawn) end
---@param WorldContextObject UObject
---@return UUserWidget
function UGSSFunctionLibrary:OpenFilePickerPlugin(WorldContextObject) end
---@param DialogTitle FString
---@param DefaultPath FString
---@param FileTypes FString
---@param OutFilenames TArray<FString>
function UGSSFunctionLibrary:OpenFileDialog(DialogTitle, DefaultPath, FileTypes, OutFilenames) end
---@param ComboBox UComboBoxString
---@param bOpen boolean
function UGSSFunctionLibrary:OpenComboBox(ComboBox, bOpen) end
---@param WorldContextObject UObject
---@param bUnblockCarSpawn boolean
---@param OverrideMaxVehiclesOnMap boolean
---@param NewMaxVehicles int32
function UGSSFunctionLibrary:OnCinematicEnd(WorldContextObject, bUnblockCarSpawn, OverrideMaxVehiclesOnMap, NewMaxVehicles) end
---@param TaskClass TSoftClassPtr<UTaskBase>
---@return TSubclassOf<UTaskBase>
function UGSSFunctionLibrary:LoadTaskIfNeeded(TaskClass) end
---@param QuestClass TSoftClassPtr<UGSSQuest>
---@return TSubclassOf<UGSSQuest>
function UGSSFunctionLibrary:LoadQuestIfNeeded(QuestClass) end
---@param AssetClass TSoftClassPtr<UObject>
---@return UClass
function UGSSFunctionLibrary:LoadAssetIfNeeded(AssetClass) end
---@param GS AGSSGameState
---@param CustomerType ECustomerType
---@return boolean
function UGSSFunctionLibrary:IsQueueFree(GS, CustomerType) end
---@param Instaginator UObject
---@param PathStart FVector
---@param Position FVector
---@return boolean
function UGSSFunctionLibrary:IsPositionReachable(Instaginator, PathStart, Position) end
---@param GS AGSSGameState
---@param QuestClass TSoftClassPtr<UGSSQuest>
---@return boolean
function UGSSFunctionLibrary:IsOnQuest(GS, QuestClass) end
---@param WorldContextObject UObject
---@param EventName FString
---@return boolean
function UGSSFunctionLibrary:IsEventActive(WorldContextObject, EventName) end
---@param WorldContextObject UObject
---@param DLCName EDLCName
---@return boolean
function UGSSFunctionLibrary:IsDLCEnabled(WorldContextObject, DLCName) end
---@param WorldContextObject UObject
---@return boolean
function UGSSFunctionLibrary:IsCollectibleItemsPluginActivated(WorldContextObject) end
---@param WorldContextObject UObject
---@param FuelTypes TArray<EFuelMagazine>
---@return boolean
function UGSSFunctionLibrary:IsAnyFuelStationOpen(WorldContextObject, FuelTypes) end
---@param WorldContextObject UObject
---@param ActorLocation FVector
---@return boolean
function UGSSFunctionLibrary:IsActorVisibleOnScreen(WorldContextObject, ActorLocation) end
---@param WorldContextObject UObject
function UGSSFunctionLibrary:HideUI(WorldContextObject) end
---@param GS AGSSGameState
---@param QuestClass TSoftClassPtr<UGSSQuest>
---@return boolean
function UGSSFunctionLibrary:HasPassedQuest(GS, QuestClass) end
---@param PC APlayerController
---@param RequiredMoney float
---@return boolean
function UGSSFunctionLibrary:HasEnoughMoney(PC, RequiredMoney) end
---@param GS AGSSGameState
---@param QuestClass TSoftClassPtr<UGSSQuest>
---@return boolean
function UGSSFunctionLibrary:HasAllowQuest(GS, QuestClass) end
---@param Target AInteractableActor
---@return boolean
function UGSSFunctionLibrary:HasAllowPlayerAndCustomer(Target) end
---@param WorldContextObject UObject
---@return UWorld
function UGSSFunctionLibrary:GetWorldPointer(WorldContextObject) end
---@param AICharacterBase TSubclassOf<AAICharacterBase>
---@param EmployeeTask TSubclassOf<UEmployeeTask>
---@param DTEmplyeeStatByLevel UDataTable
---@return float
function UGSSFunctionLibrary:GetWorkCostPerHourClass(AICharacterBase, EmployeeTask, DTEmplyeeStatByLevel) end
---@return FString
function UGSSFunctionLibrary:GetUserVideosPath() end
---@return TArray<FString>
function UGSSFunctionLibrary:GetUserDrives() end
---@return FString
function UGSSFunctionLibrary:GetUserDownloadsPath() end
---@return FString
function UGSSFunctionLibrary:GetUserDesktopPath() end
---@param WorldContextObject UObject
---@return AUIQuickAccess
function UGSSFunctionLibrary:GetUIQuickAccess(WorldContextObject) end
---@param Category EItemTypeCategory
---@return FText
function UGSSFunctionLibrary:GetTextForCategory(Category) end
---@param ShelfItemCategory EItemTypeCategory
---@return EInteractableTaskType
function UGSSFunctionLibrary:GetTakeProductTaskForShelfType(ShelfItemCategory) end
---@param Actor AActor
---@return FName
function UGSSFunctionLibrary:GetStreamingLevelNameFromActor(Actor) end
---@param WorldContextObject UObject
---@return UStatKeeper
function UGSSFunctionLibrary:GetStatKeeper(WorldContextObject) end
---@param InSpline USplineComponent
---@param InputKeyFloat float
---@return float
function UGSSFunctionLibrary:GetSplineLengthByInputKey(InSpline, InputKeyFloat) end
---@param InSpline USplineComponent
---@param InWorldLocation FVector
---@return float
function UGSSFunctionLibrary:GetSplineLenghtByTransform(InSpline, InWorldLocation) end
---@param OriginActor AActor
---@param OtherActor AActor
---@param ReturnAmount ERelativeDirectionReturnAmount
---@return ERelativeDirection
function UGSSFunctionLibrary:GetRelativeDirection(OriginActor, OtherActor, ReturnAmount) end
---@param Range FInt32Range
---@return int32
function UGSSFunctionLibrary:GetRandomInt32InRange(Range) end
---@param Range FFloatRange
---@return float
function UGSSFunctionLibrary:GetRandomFloatInRange(Range) end
---@param MeshComponent UProceduralMeshComponent
---@return float
function UGSSFunctionLibrary:GetProceduralMeshVolume(MeshComponent) end
---@param CharacterBase AAICharacterBase
---@param TagToCheck FGameplayTag
---@param Configs TArray<FPositioningMontageConfig>
---@param OutConfig FPositioningMontageConfig
---@return boolean
function UGSSFunctionLibrary:GetPositioningMontageConfigBasedOnSkeleton(CharacterBase, TagToCheck, Configs, OutConfig) end
---@param Item TSoftClassPtr<AItem>
---@return FString
function UGSSFunctionLibrary:GetNameForItem(Item) end
---@param CharacterBase ACharacter
---@param TagToCheck FGameplayTag
---@param MontagesSkeletons TArray<FBaseCharacterSkeletonMontage>
---@return UAnimMontage
function UGSSFunctionLibrary:GetMontageToPlayBasedOnSkeleton(CharacterBase, TagToCheck, MontagesSkeletons) end
---@param WorldContextObject UObject
---@return ALeaderboardManager
function UGSSFunctionLibrary:GetLeaderboardManager(WorldContextObject) end
---@param InKey FKey
---@return FString
function UGSSFunctionLibrary:GetKeyAsString(InKey) end
---@param InKey FKey
---@return FName
function UGSSFunctionLibrary:GetKeyAsName(InKey) end
---@param Cleaner AActor
---@param Distance ERelativeDistance
---@return AActor
function UGSSFunctionLibrary:GetItemToClean(Cleaner, Distance) end
---@param WorldContextObject UObject
---@return boolean
function UGSSFunctionLibrary:GetIsGamePadConnected(WorldContextObject) end
---@param WorldContextObject UObject
---@return AGSSWorldSettings
function UGSSFunctionLibrary:GetGSSWorldSettings(WorldContextObject) end
---@param WorldContextObject UObject
---@return AGSSPlayerState
function UGSSFunctionLibrary:GetGSSPlayerState(WorldContextObject) end
---@param WorldContextObject UObject
---@return AGSSPlayerController
function UGSSFunctionLibrary:GetGSSPlayerController(WorldContextObject) end
---@param WorldContextObject UObject
---@return AGSSPlayerCharacter
function UGSSFunctionLibrary:GetGSSPlayerCharacter(WorldContextObject) end
---@param WorldContextObject UObject
---@return AGSS_NewHud
function UGSSFunctionLibrary:GetGSSHUD(WorldContextObject) end
---@param WorldContextObject UObject
---@return AGSSGameState
function UGSSFunctionLibrary:GetGSSGameState(WorldContextObject) end
---@param WorldContextObject UObject
---@return UGSSGameInstance
function UGSSFunctionLibrary:GetGSSGameInstance(WorldContextObject) end
---@param WorldContextObject UObject
---@return FString
function UGSSFunctionLibrary:GetGameVersion(WorldContextObject) end
---@param WorldContextObject UObject
---@param EventClass TSoftClassPtr<UGSSEvent>
---@return UGSSEvent
function UGSSFunctionLibrary:GetEventFromClass(WorldContextObject, EventClass) end
---@param WorldContextObject UObject
---@return UEmployeeTasksDataAsset
function UGSSFunctionLibrary:GetEmployeeTasksDataAsset(WorldContextObject) end
---@param WorldContextObject UObject
---@return UEconomyTracker
function UGSSFunctionLibrary:GetEconomyTracker(WorldContextObject) end
---@param WorldContextObject UObject
---@return boolean
function UGSSFunctionLibrary:GetDebugMode(WorldContextObject) end
---@param WorldContextObject UObject
---@param Type ECustomTextVariableType
---@return FText
function UGSSFunctionLibrary:GetCustomTextArg(WorldContextObject, Type) end
---@param Instaginatorlocation FVector
---@param Actors TArray<AActor>
---@return AActor
function UGSSFunctionLibrary:GetClosestTrashToLocation(Instaginatorlocation, Actors) end
---@param Instaginatorlocation FVector
---@param Actors TArray<AActor>
---@return AActor
function UGSSFunctionLibrary:GetClosestDirtDecalToLocation(Instaginatorlocation, Actors) end
---@param Instaginatorlocation FVector
---@param Actors TArray<AActor>
---@return AActor
function UGSSFunctionLibrary:GetClosestActorToLocation(Instaginatorlocation, Actors) end
---@param ParentClass UClass
---@return TArray<UClass>
function UGSSFunctionLibrary:GetChildsPackageClasses(ParentClass) end
---@param WorldContextObject UObject
---@return AQuestChallengeManager
function UGSSFunctionLibrary:GetChallengeManager(WorldContextObject) end
---@param WorldContextObject UObject
---@param BuildingToFind EBuildingType
---@return AInteractableActor
function UGSSFunctionLibrary:GetBuilding(WorldContextObject, BuildingToFind) end
---@param WorldContextObject UObject
---@return TArray<FAvailableFeature>
function UGSSFunctionLibrary:GetAvailableFeautures(WorldContextObject) end
---@param Instigator AActor
---@param TargetActor AActor
---@param DeltaRotation FRotator
function UGSSFunctionLibrary:GetAngleBetweenActor(Instigator, TargetActor, DeltaRotation) end
---@param WorldContextObject UObject
---@param Item TSoftClassPtr<AItem>
---@return int32
function UGSSFunctionLibrary:GetAmountOfItemFromPlayerInventories(WorldContextObject, Item) end
---@param WorldContextObject UObject
---@param Shelfs TArray<AShelf>
---@param ItemClass TSubclassOf<AItem>
function UGSSFunctionLibrary:GetAllShelfsCompatibileToItem(WorldContextObject, Shelfs, ItemClass) end
---@param WorldContextObject UObject
---@param ObjectClass TSoftClassPtr<UObject>
---@param OutObjects TArray<UObject>
function UGSSFunctionLibrary:GetAllObjectsOfSoftClass(WorldContextObject, ObjectClass, OutObjects) end
---@param WorldContextObject UObject
---@return TArray<AAICharacterBase>
function UGSSFunctionLibrary:GetAllCustomers(WorldContextObject) end
---@param WorldContextObject UObject
---@param ActorClass TSoftClassPtr<AActor>
---@param OutActors TArray<AActor>
function UGSSFunctionLibrary:GetAllActorsOfSoftClass(WorldContextObject, ActorClass, OutActors) end
---@param LevelStreaming ULevelStreaming
---@return TArray<AActor>
function UGSSFunctionLibrary:GetAllActorsFromLevelMap(LevelStreaming) end
---@param Instaginatorlocation FVector
---@param Range float
---@param Actors TArray<AActor>
---@param SortByClosest boolean
---@return TArray<AActor>
function UGSSFunctionLibrary:GetActorsInRange(Instaginatorlocation, Range, Actors, SortByClosest) end
---@param InActors TArray<AActor>
---@param Instaginatorlocation FVector
---@param Range float
---@param SortByClosest boolean
---@return TArray<AActor>
function UGSSFunctionLibrary:GetActorsInDistance(InActors, Instaginatorlocation, Range, SortByClosest) end
---@param WorldContextObject UObject
---@param ActorClass TSoftClassPtr<AActor>
---@return AActor
function UGSSFunctionLibrary:GetActorOfSoftClass(WorldContextObject, ActorClass) end
---@param WorldContextObject UObject
---@return AAchievementManager
function UGSSFunctionLibrary:GetAchievementManager(WorldContextObject) end
---@param WorldContextObject UObject
---@param TequilaClass TSoftClassPtr<AItem>
---@return boolean
function UGSSFunctionLibrary:FixMissingTequila(WorldContextObject, TequilaClass) end
---@param Hit FHitResult
---@param UV FVector2D
---@return boolean
function UGSSFunctionLibrary:FindCollisionUVFromHit(Hit, UV) end
---@param ActorClasses TArray<TSubclassOf<AActor>>
---@param SubClass TSubclassOf<AActor>
---@return TArray<TSubclassOf<AActor>>
function UGSSFunctionLibrary:FiltrClassBySubClass(ActorClasses, SubClass) end
---@param Actors TArray<AActor>
---@param SubClass TSubclassOf<AActor>
---@return TArray<AActor>
function UGSSFunctionLibrary:FiltrBySubClass(Actors, SubClass) end
---@param Actors TArray<AActor>
---@param TargetLocation FVector
---@param Distance float
---@return TArray<AActor>
function UGSSFunctionLibrary:FiltrActorByDistance(Actors, TargetLocation, Distance) end
---@param Instaginator UObject
---@param MapName FName
---@param ShowPostprocess boolean
---@param Color UMaterialParameterCollection
function UGSSFunctionLibrary:EnablePostprocess(Instaginator, MapName, ShowPostprocess, Color) end
---@param Actor AActor
---@param Enable boolean
function UGSSFunctionLibrary:EnableActor(Actor, Enable) end
---@param DialogTitle FString
---@param DefaultPath FString
---@param DefaultFile FString
---@param FileTypeDescription FString
---@param FileType FString
---@param AllowMultiple boolean
---@param OutFilenames TArray<FString>
---@return boolean
function UGSSFunctionLibrary:EFD_SaveFileDialog(DialogTitle, DefaultPath, DefaultFile, FileTypeDescription, FileType, AllowMultiple, OutFilenames) end
---@param DialogTitle FString
---@param DefaultPath FString
---@param OutFolderName FString
---@return boolean
function UGSSFunctionLibrary:EFD_OpenFolderDialog(DialogTitle, DefaultPath, OutFolderName) end
---@param DialogTitle FString
---@param DefaultPath FString
---@param DefaultFile FString
---@param FileTypes FString
---@param AllowMultiple boolean
---@param OutFilenames TArray<FString>
---@return boolean
function UGSSFunctionLibrary:EFD_OpenFileDialog(DialogTitle, DefaultPath, DefaultFile, FileTypes, AllowMultiple, OutFilenames) end
---@param Object UObject
function UGSSFunctionLibrary:DestroyObject(Object) end
---@param WorldContextObject UObject
---@param IgnoreActorClasses TArray<TSubclassOf<AActor>>
function UGSSFunctionLibrary:DestroyAllVehicleCustomers(WorldContextObject, IgnoreActorClasses) end
---@param WorldContextObject UObject
function UGSSFunctionLibrary:DestroyAllCustomers(WorldContextObject) end
---@param World UWorld
---@param EventClass TSoftClassPtr<UGSSEvent>
---@param TriggerFinishEvent boolean
function UGSSFunctionLibrary:DespawnEvent(World, EventClass, TriggerFinishEvent) end
---@param Instaginator UObject
---@param ObjectiveMarkerClass TSubclassOf<AObjectiveMarker>
---@param SpawnTransform FTransform
---@param Actor AActor
---@param Outline float
---@param Marker float
---@param DelayActivated float
---@return AObjectiveMarker
function UGSSFunctionLibrary:CreateObjectiveMarker(Instaginator, ObjectiveMarkerClass, SpawnTransform, Actor, Outline, Marker, DelayActivated) end
---@param WorldContextObject UObject
---@param Percentage float
---@return FString
function UGSSFunctionLibrary:ConvertFloatToPercentageString(WorldContextObject, Percentage) end
---@param PC APlayerController
function UGSSFunctionLibrary:ClearUserFocus(PC) end
---@param WorldContextObject UObject
---@param RequiredItems TArray<FRequiredItems>
---@return boolean
function UGSSFunctionLibrary:CheckIfLevelUpgradePossible(WorldContextObject, RequiredItems) end
---@param WorldContextObject UObject
---@param RowName FName
---@param LevelOfBuldingReq boolean
---@param AmountOfMoneyReq boolean
---@param DLCReq boolean
---@return boolean
function UGSSFunctionLibrary:CheckIfFeatureUpgradePossible(WorldContextObject, RowName, LevelOfBuldingReq, AmountOfMoneyReq, DLCReq) end
---@param WorldContextObject UObject
function UGSSFunctionLibrary:CheckGamepadConnected(WorldContextObject) end
---@param WorldContextObject UObject
---@param PackageName FString
---@return boolean
function UGSSFunctionLibrary:CheckDLCForQuest(WorldContextObject, PackageName) end
---@param WorldContextObject UObject
---@param DlcRequired EDLCName
---@param BuildingType EBuildingType
---@param LevelRequired int32
---@param MoneyRequired float
---@param ContractPointsRequired float
---@param UseInvertedTag boolean
---@param ItemRequired TArray<FRequiredItems>
---@param UnlockTagRequired FGameplayTag
---@param bEnoughMoney boolean
---@param bEnoughContractPoints boolean
---@param bTagUnlocked boolean
---@param bBuildingLevelGood boolean
---@param bEnoughItems boolean
---@param bDLCEnabled boolean
---@return boolean
function UGSSFunctionLibrary:CanBePaid_Tag(WorldContextObject, DlcRequired, BuildingType, LevelRequired, MoneyRequired, ContractPointsRequired, UseInvertedTag, ItemRequired, UnlockTagRequired, bEnoughMoney, bEnoughContractPoints, bTagUnlocked, bBuildingLevelGood, bEnoughItems, bDLCEnabled) end
---@param WorldContextObject UObject
---@param DlcRequired EDLCName
---@param BuildingType EBuildingType
---@param LevelRequired int32
---@param MoneyRequired float
---@param ItemRequired TArray<FRequiredItems>
---@param UnlockedGameplayTag FGameplayTag
---@param QuestRequired TSoftClassPtr<UGSSQuest>
---@param bEnoughMoney boolean
---@param bQuestCompleted boolean
---@param bBuildingLevelGood boolean
---@param bEnoughItems boolean
---@param bDLCEnabled boolean
---@return boolean
function UGSSFunctionLibrary:CanBePaid(WorldContextObject, DlcRequired, BuildingType, LevelRequired, MoneyRequired, ItemRequired, UnlockedGameplayTag, QuestRequired, bEnoughMoney, bQuestCompleted, bBuildingLevelGood, bEnoughItems, bDLCEnabled) end
---@param AICharacterBase AAICharacterBase
---@param Instaginator ACharacter
---@param bIgnoreCustomerState boolean
---@return boolean
function UGSSFunctionLibrary:CanAssistant(AICharacterBase, Instaginator, bIgnoreCustomerState) end
---@param OriginalVolume float
---@param CuttedPieceVolume float
---@param OutFirstRatio float
---@param OutSecondRatio float
function UGSSFunctionLibrary:CalculateCuttingRatio(OriginalVolume, CuttedPieceVolume, OutFirstRatio, OutSecondRatio) end
---@param WorldContextObject UObject
---@param Item TSoftClassPtr<AItem>
---@param Quantity int32
---@param IgnoreLimit boolean
---@return boolean
function UGSSFunctionLibrary:AddToPlayerInventories(WorldContextObject, Item, Quantity, IgnoreLimit) end
---@param Actor AActor
---@param Item TSoftClassPtr<AItem>
---@param Quantity int32
---@param IgnoreLimit boolean
---@return boolean
function UGSSFunctionLibrary:AddToActorInventory(Actor, Item, Quantity, IgnoreLimit) end


---@class UGSSGameInstance : UGameInstance
---@field bIsGameLoading boolean
---@field IsAnyBuildingLoading boolean
---@field bDebugMode boolean
---@field bIsGameLoadingScreenShown boolean
---@field bChangedMap boolean
---@field bUseNewNpcModels boolean
---@field ConnectedSaveSlotsForOtherLevels TMap<FString, FString>
---@field SaveGameInstance UGSSSaveGame
---@field SaveSlots USaveSlot
---@field bIsPCWidgetOpen boolean
---@field VIPTravelingTime float
---@field VIPHomeRestingTime float
---@field VIPAwaitingTime float
---@field VIPBonusDuration float
---@field VIPBonusPointsTriggerTreshold int32
---@field VIPTravelDestinations TArray<EDLCName>
---@field VIPSystemUnlockTag FGameplayTag
---@field MapsToInstantLoad TArray<FName>
---@field GSSGameState AGSSGameState
---@field LotteryMachine ALotteryMachine
---@field SaveGameVersion int32
---@field LanguageFixApplied int32
---@field OnLoadGameProgressUpdated FGSSGameInstanceOnLoadGameProgressUpdated
---@field OnSaveGameProgressUpdated FGSSGameInstanceOnSaveGameProgressUpdated
---@field OnStartGameLoad FGSSGameInstanceOnStartGameLoad
---@field OnFinishGameLoaded FGSSGameInstanceOnFinishGameLoaded
---@field OnQuestLoaded FGSSGameInstanceOnQuestLoaded
---@field OnWidgetLoaded FGSSGameInstanceOnWidgetLoaded
---@field OnMapsLoaded FGSSGameInstanceOnMapsLoaded
---@field OnGameVersionChanged FGSSGameInstanceOnGameVersionChanged
---@field OnCinemaManagerSpawned FGSSGameInstanceOnCinemaManagerSpawned
---@field LastQuestInMainQuestLineInOldSystem TSoftClassPtr<UGSSQuest>
---@field AirStripQuestLine UQuestLineBase
---@field JunkyardQuestLine UQuestLineBase
---@field CinemaQuestline UQuestLineBase
---@field RVCampQuestline UQuestLineBase
---@field FinishedMainGameCampain FGameplayTag
---@field FinishedAirStripCampain FGameplayTag
---@field FinishedJunkyardCampain FGameplayTag
---@field FinishedCinemaCampain FGameplayTag
---@field NumberOfQuestLinesToLoad int32
---@field bDecorationsLoaded boolean
---@field bEnableInEditor boolean
---@field DLCCustomizationPluginName FString
---@field DLCPartyTimePluginName FString
---@field DLCAirstripPluginName FString
---@field DLCParadiseIslandPluginName FString
---@field DLCCarJunkyardPluginName FString
---@field DLCDriveInCinemaPluginName FString
---@field DLCRVCampPluginName FString
---@field bDLCCustomizationEnabled boolean
---@field bDLCPartyTimeEnabled boolean
---@field bDLCAirstripEnabled boolean
---@field bDLCParadiseIslandEnabled boolean
---@field bDLCShadyDealsEnabled boolean
---@field bDLCCarJunkyardEnabled boolean
---@field bDLCDriveInCinemaEnabled boolean
---@field bDLCRVCampEnabled boolean
---@field DA_LevelTeleporter ULevelTeleporterDataAsset
---@field OnDLCOwnershipDataUpdated FGSSGameInstanceOnDLCOwnershipDataUpdated
---@field DLCOwnershipData TArray<FDLCOwnershipData>
---@field ActiveGamepadType EGamePadType
---@field OnGamepadChanged FGSSGameInstanceOnGamepadChanged
---@field GameVersion FText
---@field CachedStreamingLevelsNames TArray<FString>
---@field EmployeesTemp TArray<AAICharacterBase>
---@field EmployeesWithoutAssignedHome TArray<AAICharacterBase>
---@field bShownAdvertMenuInThisSession boolean
local UGSSGameInstance = {}

function UGSSGameInstance:UnmuteAllMusic() end
---@return boolean
function UGSSGameInstance:TryRegenerateSaveSlots() end
---@param SavedGSSQuest FSavedQuest
---@param NewQuest UQuestBase
---@param OutMaxProgress int32
---@param OutCurrentProgress int32
---@return TSoftClassPtr<UObjectiveBase>
function UGSSGameInstance:TranslateOldQuestToNew_Blueprint(SavedGSSQuest, NewQuest, OutMaxProgress, OutCurrentProgress) end
---@param SavedGSSQuest FSavedQuest
---@param bIgnoreStartingNewQuestLine boolean
function UGSSGameInstance:TranslateOldQuestToNew(SavedGSSQuest, bIgnoreStartingNewQuestLine) end
function UGSSGameInstance:StartLoadingGame() end
---@param WallClass TSubclassOf<ACustomizationHousePart>
---@param Transform FTransform
---@param SavedWallInfo FSavedWallInfo
---@param MoveToLevel ULevel
function UGSSGameInstance:SpawnEditedWall(WallClass, Transform, SavedWallInfo, MoveToLevel) end
---@param bCondition boolean
---@param MapToOpen FName
function UGSSGameInstance:ShowLoadScreen(bCondition, MapToOpen) end
---@param NewGamepadType EGamePadType
function UGSSGameInstance:SetGamepadType(NewGamepadType) end
function UGSSGameInstance:SaveWorldObjects() end
function UGSSGameInstance:SaveWidgetPlayerDecals() end
function UGSSGameInstance:SaveWalls() end
function UGSSGameInstance:SaveVIPData() end
function UGSSGameInstance:SaveTutorialManager() end
function UGSSGameInstance:SaveTrashBins() end
function UGSSGameInstance:SaveTrafficManager() end
function UGSSGameInstance:SaveSpawnedWebs() end
function UGSSGameInstance:SaveShelves() end
function UGSSGameInstance:SaveSettings() end
function UGSSGameInstance:SaveRVChallenges() end
function UGSSGameInstance:SaveRuins() end
function UGSSGameInstance:SaveRudy() end
function UGSSGameInstance:SaveRenownSystem() end
function UGSSGameInstance:SaveQuestProgress() end
function UGSSGameInstance:SavePlayerTools() end
function UGSSGameInstance:SavePlayerDecals() end
function UGSSGameInstance:SavePlayer() end
function UGSSGameInstance:SaveNPCs() end
function UGSSGameInstance:SaveNPAIData() end
function UGSSGameInstance:SaveNewTrash() end
function UGSSGameInstance:SaveNewQuestProgress() end
function UGSSGameInstance:SaveMoneyTransfer() end
function UGSSGameInstance:SaveMiniGames() end
function UGSSGameInstance:SaveMikeSection() end
---@param SavedAICharacter FSavedAICharacters
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@param bIsSpawned boolean
function UGSSGameInstance:SaveMask(SavedAICharacter, GSSWheeledVehicle, bIsSpawned) end
function UGSSGameInstance:SaveMarketProducts() end
function UGSSGameInstance:SaveMaps() end
function UGSSGameInstance:SaveItems() end
function UGSSGameInstance:SaveGasStation() end
function UGSSGameInstance:SaveGarageData() end
function UGSSGameInstance:SaveGameState() end
---@param GameMapName FString
---@param AutoSave boolean
---@return boolean
function UGSSGameInstance:SaveGame(GameMapName, AutoSave) end
function UGSSGameInstance:SaveEmployees() end
function UGSSGameInstance:SaveEconomySubsystemData() end
function UGSSGameInstance:SaveEconomyData() end
function UGSSGameInstance:SaveDecorations() end
function UGSSGameInstance:SaveDecals() end
function UGSSGameInstance:SaveCollectibleCards() end
function UGSSGameInstance:SaveChallenges() end
function UGSSGameInstance:SaveCashShop() end
function UGSSGameInstance:SaveCashMeshAndColor() end
function UGSSGameInstance:SaveCarWashData() end
function UGSSGameInstance:SaveAverageIncome() end
function UGSSGameInstance:SaveAdditionalUprades() end
function UGSSGameInstance:SaveActionManagerSubsystem() end
function UGSSGameInstance:SaveAchievementData() end
function UGSSGameInstance:RemoveDuplicatesOfUniqueCharacters() end
---@param SavedQuestLines TArray<FSavedActiveQuestLine>
function UGSSGameInstance:RemoveDuplicatedCinemaQuestLines(SavedQuestLines) end
---@param LotteryMachineToSet ALotteryMachine
function UGSSGameInstance:RegisterLotteryMachine(LotteryMachineToSet) end
function UGSSGameInstance:RebuildNavmesh() end
function UGSSGameInstance:RebindPartyBusHome() end
---@param bWasSuccessful boolean
---@param UserNickname FString
function UGSSGameInstance:OnLoginCompleted(bWasSuccessful, UserNickname) end
function UGSSGameInstance:LoadWorldObjects() end
function UGSSGameInstance:LoadWidgetPlayerDecals() end
---@param CustomizationHousePart ACustomizationHousePart
---@param StaticMeshRef UStaticMesh
---@param Material0Ref UMaterialInstance
---@param Material1Ref UMaterialInstance
---@param WallPaperMaterial UMaterialInstance
function UGSSGameInstance:LoadWallStaticMesh(CustomizationHousePart, StaticMeshRef, Material0Ref, Material1Ref, WallPaperMaterial) end
function UGSSGameInstance:LoadWalls() end
---@param bMapChanged boolean
function UGSSGameInstance:LoadVIPData(bMapChanged) end
function UGSSGameInstance:LoadTutorialManager() end
---@param TrashBin ATrashBin
function UGSSGameInstance:LoadTrashBin(TrashBin) end
function UGSSGameInstance:LoadTrafficManager() end
function UGSSGameInstance:LoadSpawnedWebs() end
function UGSSGameInstance:LoadShelves() end
function UGSSGameInstance:LoadSettings() end
function UGSSGameInstance:LoadRVChallenges() end
function UGSSGameInstance:LoadRuins() end
function UGSSGameInstance:LoadRudy() end
function UGSSGameInstance:LoadRenownSystem() end
function UGSSGameInstance:LoadQuestProgress() end
function UGSSGameInstance:LoadQuest() end
function UGSSGameInstance:LoadPlayerTools() end
---@param DecalsToLoad TArray<FSavedPlayerDecals>
---@param bDeleteOldDecals boolean
---@return TArray<ADecalToPaint>
function UGSSGameInstance:LoadPlayerDecals(DecalsToLoad, bDeleteOldDecals) end
function UGSSGameInstance:LoadPlayer() end
function UGSSGameInstance:LoadNPCs() end
function UGSSGameInstance:LoadNPAIData() end
function UGSSGameInstance:LoadNewTrash() end
function UGSSGameInstance:LoadNewQuestProgress() end
function UGSSGameInstance:LoadMoneyTransfer() end
function UGSSGameInstance:LoadMiniGames() end
function UGSSGameInstance:LoadMikeSection() end
---@param SavedAICharacter FSavedAICharacters
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@param bIsSpawned boolean
function UGSSGameInstance:LoadMask(SavedAICharacter, GSSWheeledVehicle, bIsSpawned) end
function UGSSGameInstance:LoadMarketProducts() end
function UGSSGameInstance:LoadMaps() end
function UGSSGameInstance:LoadLastIndexMap() end
function UGSSGameInstance:LoadItems() end
---@param InteractableBuilding AInteractableBuilding
function UGSSGameInstance:LoadGasStationSections(InteractableBuilding) end
function UGSSGameInstance:LoadGasStation() end
function UGSSGameInstance:LoadGarageData() end
function UGSSGameInstance:LoadGameState() end
---@param FloorMaterial TSoftObjectPtr<UMaterialInstance>
---@param ToiletFloorMaterial TSoftObjectPtr<UMaterialInstance>
function UGSSGameInstance:LoadFloorMaterial(FloorMaterial, ToiletFloorMaterial) end
---@param Employees TArray<AAICharacterBase>
function UGSSGameInstance:LoadEmployees(Employees) end
function UGSSGameInstance:LoadEconomySubsystemData() end
function UGSSGameInstance:LoadEconomyData() end
function UGSSGameInstance:LoadDecorations() end
function UGSSGameInstance:LoadDecals() end
function UGSSGameInstance:LoadCollectibleCards() end
function UGSSGameInstance:LoadChallenges() end
function UGSSGameInstance:LoadCashShop() end
function UGSSGameInstance:LoadCashMeshAndColor() end
function UGSSGameInstance:LoadCarWashData() end
function UGSSGameInstance:LoadAverageIncome() end
function UGSSGameInstance:LoadAdditionalUpgrades() end
function UGSSGameInstance:LoadActionManagerSubsystem() end
function UGSSGameInstance:LoadAchievementData() end
---@return boolean
function UGSSGameInstance:IsMainCampainFinishedInOldQuestSystem() end
---@return boolean
function UGSSGameInstance:IsAlreadyLoading() end
---@param USaveGame FString
function UGSSGameInstance:InitLoadGame(USaveGame) end
---@param DLCName EDLCName
---@return boolean
function UGSSGameInstance:HasSaveConnectedToDLC(DLCName) end
---@param GameMapName FString
---@return int32
function UGSSGameInstance:GetSaveSlotIndex(GameMapName) end
---@return int32
function UGSSGameInstance:GetSaveGameVersion() end
---@param bRelative boolean
---@return FString
function UGSSGameInstance:GetPathToLatestSave(bRelative) end
---@return FSavedSlotStruct
function UGSSGameInstance:GetLastSaveGame() end
function UGSSGameInstance:FinishLoadingGame() end
---@param LevelName FName
---@return boolean
function UGSSGameInstance:DoesLevelFileExist(LevelName) end
---@param bSuccesfull boolean
---@param OwnershipData TArray<FDLCOwnershipData>
function UGSSGameInstance:DLCQueryFinished(bSuccesfull, OwnershipData) end
function UGSSGameInstance:DeleteSaveGameInstance() end
---@param SavedSlot FSavedSlotStruct
---@return int32
function UGSSGameInstance:DeleteSaveGame(SavedSlot) end
---@param DecalActor ADecalToPaint
---@return FSavedPlayerDecals
function UGSSGameInstance:CreateSavedDecalData(DecalActor) end
---@param InventoryComponent UInventoryComponent
function UGSSGameInstance:ConvertInventoryToNewSystem(InventoryComponent) end
---@param LoadedGameMapName FString
---@param LevelNameToAdd FString
---@param GameMapNameToAdd FString
function UGSSGameInstance:ConnectOtherLevelsToSaveSlot(LoadedGameMapName, LevelNameToAdd, GameMapNameToAdd) end
function UGSSGameInstance:CheckLevelsVisibility() end
function UGSSGameInstance:CheckForMissingPathStation() end
function UGSSGameInstance:CacheStreamingLevelsNames() end


---@class UGSSGamePlayWidget : UGSSBaseWidget
local UGSSGamePlayWidget = {}


---@class UGSSInnerWidget : UGSSBaseWidget
---@field ParentWidgetREF UUserWidget
local UGSSInnerWidget = {}

---@return UUserWidget
function UGSSInnerWidget:GetParentOfWidget() end


---@class UGSSMail : UObject
---@field Title FText
---@field Description FText
---@field Objectives TArray<FText>
---@field Tips TArray<FText>
---@field Rewards TArray<FText>
---@field RedDotTag FGameplayTag
local UGSSMail = {}



---@class UGSSNavigationSystem : UNavigationSystemV1
local UGSSNavigationSystem = {}


---@class UGSSOverlay : UUserWidget
---@field PointerWidgetRef UImage
---@field CircularMenuBaseRef UCircularMenuBase
local UGSSOverlay = {}

---@param bShow boolean
function UGSSOverlay:ShowUI_Code(bShow) end
---@param bShow boolean
function UGSSOverlay:ShowTabHolder(bShow) end
---@param bShow boolean
function UGSSOverlay:ShowCrosshair(bShow) end
function UGSSOverlay:QuestsFadeOut() end
function UGSSOverlay:QuestsFadeIn() end
function UGSSOverlay:HideUIImmediately() end
---@param ActorRef AActor
function UGSSOverlay:HandleActor(ActorRef) end
---@param bIsOpen boolean
function UGSSOverlay:GasSignOpenClose(bIsOpen) end
function UGSSOverlay:FadeUIFromScreen() end
---@param bFadeIn boolean
function UGSSOverlay:FadeBlackScreen(bFadeIn) end
function UGSSOverlay:CollapseUIScreen() end
function UGSSOverlay:BringBackUI() end


---@class UGSSPostProcessSettings : UDataAsset
---@field ExposureCompensation float
---@field AutoExposureMinBrightness float
---@field AutoExposureMaxBrightness float
local UGSSPostProcessSettings = {}



---@class UGSSProjectileMovementComponent : UProjectileMovementComponent
---@field OnStartPhysic FGSSProjectileMovementComponentOnStartPhysic
local UGSSProjectileMovementComponent = {}



---@class UGSSQuest : UObject
---@field OwnerPawn APawn
---@field OnQuestUpdated FGSSQuestOnQuestUpdated
---@field ObjectiveMarkerClass TSubclassOf<AObjectiveMarker>
---@field ObjectiveMarkers TArray<AObjectiveMarker>
---@field PartOfQuestLineInNewSystem UQuestLineBase
---@field EquivalentQuestInNewSystem UQuestBase
---@field AllowSaveGameDuringQuest boolean
---@field QuestShowType EQuestShowType
---@field TeleportPlayerOnSavePosition boolean
---@field CurrentProgress int32
---@field MaxProgress int32
---@field QuestTitle FText
---@field QuestDescription FText
---@field Tips TArray<FText>
---@field MailClass TSubclassOf<UGSSMail>
---@field bQuestHasChallenge boolean
---@field QuestChallenge TArray<FQuestChallenge>
local UGSSQuest = {}

---@param NewCurrentNumber int32
---@return boolean
function UGSSQuest:UpdateQuestStatus(NewCurrentNumber) end
---@param Pawn APawn
function UGSSQuest:UpdateQuest(Pawn) end
---@param DeltaTime float
function UGSSQuest:TickObject(DeltaTime) end
---@param Enable boolean
function UGSSQuest:SetTickEnabled(Enable) end
---@return float
function UGSSQuest:QuestProgress() end
function UGSSQuest:LoadQuestStats() end
---@param QuestRef UGSSQuest
---@return boolean
function UGSSQuest:IsChallengeCompleted(QuestRef) end
---@param Pawn APawn
function UGSSQuest:InitializeQuest(Pawn) end
---@param QuestState EQuestState
function UGSSQuest:FinishQuest(QuestState) end
---@param Actor AActor
function UGSSQuest:DestroyMarker(Actor) end


---@class UGSSSaveGame : USaveGame
---@field SaveGameVersion int32
---@field LanguageFixApplied int32
---@field SaveTutorialManager FSaveTutorialManager
---@field EnabledDLCs TArray<EDLCName>
---@field NPAIData FNPAIData
---@field LastDesertCarTime float
---@field BestDesertCarTime float
---@field FuelStrike int32
---@field FuelLast float
---@field NumberOfFuelRecords float
---@field MinFuelRecordVal float
---@field BoughtDecorationAmount int32
---@field SavedWalls TArray<FSavedWallInfo>
---@field UnlockedMaps TArray<FName>
---@field UnlockedFeatures TArray<FName>
---@field DecorationsHidden TArray<FName>
---@field MapsToUnload TArray<FName>
---@field SavedAICharacters TArray<FSavedAICharacters>
---@field PlayerSave FPlayerSave
---@field GameStateSave FGameStateSave
---@field SavedRuin TArray<FSavedActor>
---@field SavedRuinSpawner TArray<FSavedSpawnedRuin>
---@field TrashItems TArray<FSavedTrashItems>
---@field SavedProducts TArray<FSavedProducts>
---@field SavedSpawnedWebs TArray<FSavedSpawnedWeb>
---@field SavedDecals TArray<FSavedDecals>
---@field SavedInteractableDecals TArray<FSavedInteractableDecals>
---@field SavedPlayerDecals TArray<FSavedPlayerDecals>
---@field SavedPickedDecal FSavedPickedDecal
---@field SavedDanceFloorSpots FSavedDanceFloorSpots
---@field SavedPartySpot FSavedPartySpot
---@field SavedPartyTime FSavedPartyTime
---@field SavedCollectibleCards TArray<TSoftObjectPtr<ACollectibleCard>>
---@field ComingVehicles TArray<TSubclassOf<AGSSWheeledVehicle>>
---@field bCanGenerateCashRegisterTask boolean
---@field SavedMask TArray<FSavedMask>
---@field SavedShelves TArray<FSavedShelves>
---@field SavedDecorations TArray<FSavedDecorations>
---@field SavedTrashBin TArray<FSavedTrashBin>
---@field SavedCashShop TArray<FSavedCashShop>
---@field SavedChallenges FSavedChallenge
---@field MikeSectionStruct FMikeSectionStruct
---@field SavedGasStation FSavedGasStation
---@field SavedQuest FSavedQuest
---@field SavedQuestLines TArray<FSavedActiveQuestLine>
---@field SavedQuestLinesNum int32
---@field RetroactiveQuestReturns TArray<FSoftObjectPath>
---@field SavedFinishedObjectives FSavedFinishedObjectives
---@field SavedUnlockableUITags TArray<FUnlockableUIState>
---@field SavedUnlockableGameplayStuffTags TArray<FUnlockableGameplayStuffState>
---@field SavedQuestItemCollision TArray<FQuestItemCollision>
---@field SavedEconomyProducts TArray<FEconomyProduct>
---@field SavedFuelProducts FFuelProduct
---@field SavedRudy FSavedRudy
---@field CurrentWaterPressure float
---@field PressureSinceTrash float
---@field CarWashFirstCustomerServed boolean
---@field SavedIsCarLiftLiftedUp TArray<boolean>
---@field SavedSwitches TArray<FSavedSwitch>
---@field SavedDoors TArray<FSavedDoor>
---@field SavedNewTrash TArray<FSavedNewTrash>
---@field SavedCarWashStations TArray<FSavedCarWashStation>
---@field SavedIceCreamBuilding FSavedIceCreamBuilding
---@field SavedAirstrip FSavedAirstrip
---@field SaveAllPlayerOrders FAllPlayerOrders
---@field SavedEmployees TArray<FSavedEmployee>
---@field SavedEconomyData FSavedEconomyData
---@field SavedRenowns TArray<FSavedRenownEntity>
---@field SavedChunchumanchu FSavedChunchumanchu
---@field SavedMoneyTransfers TArray<FSavedMoneyTransfer>
---@field SavedVIPData FSavedVIPData
---@field SavedJunkyard FSavedJunkyard
---@field TrafficManagerSave FTrafficManagerData
---@field SavedCinema FSavedCinema
---@field SavedRVCamp FSavedRVCamp
---@field SavedDeactivatedDLCs TSet<EDLCName>
local UGSSSaveGame = {}

---@param Path FString
---@return FSavedSwitch
function UGSSSaveGame:FindSavedSwitchInfo(Path) end
---@param Path FString
---@return FSavedDoor
function UGSSSaveGame:FindSavedDoorInfo(Path) end
---@param Path FString
---@return FSavedCarWashStation
function UGSSSaveGame:FindSavedCarWashStationInfo(Path) end


---@class UGSSStatSave : USaveGame
---@field PlayerId FString
---@field Stats TArray<FGSSStatHolder>
---@field EconomyProducts TArray<FEconomyProduct>
---@field FuelProduct FFuelProduct
local UGSSStatSave = {}



---@class UGSSTask : UTaskBase
local UGSSTask = {}


---@class UGSSThrowMiniGame : UGSS_HUD_BaseWidget
local UGSSThrowMiniGame = {}


---@class UGSSWidget : UUserWidget
---@field bIsActive boolean
local UGSSWidget = {}



---@class UGSS_HUD_BaseWidget : UGSSBaseWidget
local UGSS_HUD_BaseWidget = {}

function UGSS_HUD_BaseWidget:NativePreConstruct() end


---@class UGSS_InteractionManager : UGSS_HUD_BaseWidget
---@field InteractionDataTable UDataTable
---@field InteractionIcons UDataTable
---@field Interaction_Info_1 UInteractionInfoWidget
---@field Interaction_Info_2 UInteractionInfoWidget
---@field Interaction_Info_3 UInteractionInfoWidget
---@field ObjectiveMarkerClass TSubclassOf<AObjectiveMarker>
---@field Player AGSSPlayerCharacter
---@field PlayerController AGSSPlayerController
---@field HUD AGSS_NewHud
---@field Widgets TArray<UInteractionInfoWidget>
---@field ProgressBarWidgets TArray<UInteractionInfoWidget>
---@field CurrentMode int32
---@field TrashBinMarkers TArray<AObjectiveMarker>
local UGSS_InteractionManager = {}

---@param WidgetToUpdate UInteractionInfoWidget
---@param DataToUpdate FAction
function UGSS_InteractionManager:UpdateInteractionInfoWidget(WidgetToUpdate, DataToUpdate) end
---@param InteractionCountToToggle int32
---@param bToggle boolean
function UGSS_InteractionManager:ToggleInteractions(InteractionCountToToggle, bToggle) end
---@param InMode int32
function UGSS_InteractionManager:SetCurrentMode(InMode) end
---@param Actor AActor
function UGSS_InteractionManager:OnHandleActorUpdated(Actor) end
---@param TimeToHold float
function UGSS_InteractionManager:HoldedInteractionStart(TimeToHold) end
---@param bHoldedInteractionSuccess boolean
function UGSS_InteractionManager:HoldedInteractionEnd(bHoldedInteractionSuccess) end


---@class UGSS_Notification_Manager : UGSS_HUD_BaseWidget
---@field Side_Notification_BOX UVerticalBox
---@field Notifications TArray<USideNotification>
---@field TrashTag FGameplayTag
---@field FuelTag FGameplayTag
local UGSS_Notification_Manager = {}

---@param bShow boolean
---@param NotificationType ENotificationType
---@param CharacterType ESpecialCharacterType
function UGSS_Notification_Manager:RemoveOrCreateNotification(bShow, NotificationType, CharacterType) end
---@param Notification USideNotification
function UGSS_Notification_Manager:RemoveNotification(Notification) end
---@param FuelState EFuelState
function UGSS_Notification_Manager:OnFuelStatusChanged(FuelState) end
---@param NotificationType ENotificationType
---@param SpecialCharacterType ESpecialCharacterType
function UGSS_Notification_Manager:OnCreateNotification(NotificationType, SpecialCharacterType) end
---@param bShow boolean
---@param NotificationType ENotificationType
---@param CharacterType ESpecialCharacterType
function UGSS_Notification_Manager:CreateNotification(bShow, NotificationType, CharacterType) end
---@param NotificationType ENotificationType
---@param SpecialCharacterType ESpecialCharacterType
---@return USideNotification
function UGSS_Notification_Manager:CheckAndGetNotification(NotificationType, SpecialCharacterType) end


---@class UGSS_PlayerOverlay : UGSS_HUD_BaseWidget
---@field bCanShow boolean
---@field WBP_Crosshair UGSSInnerWidget
---@field SharkHealthBarHolder UHorizontalBox
---@field SharkNotificationHolder UHorizontalBox
---@field TabWidget UGSSInnerWidget
---@field Station_Closed_WBP UGSSInnerWidget
---@field Employees_hud_WBP UEmployess_hud
---@field DisplayItemInfo_Overlay UOverlay
---@field Debug_Print_LogTracedActor boolean
---@field OneTimePopupWidget UUserWidget
---@field QuestAndChallengesHolder UWidget
---@field PlayerController AGSSPlayerController
---@field PlayerCharacter AGSSPlayerCharacter
---@field PointerWidgetRef UImage
---@field OpenCloseGasStationTag FGameplayTag
---@field IsQuesHolderVisible boolean
local UGSS_PlayerOverlay = {}

---@param Actor AActor
function UGSS_PlayerOverlay:UpdateHandleActor(Actor) end
function UGSS_PlayerOverlay:UnhideQuestAndChallenges() end
function UGSS_PlayerOverlay:ToggleTrafficMeterDebug() end
---@param bVisible boolean
function UGSS_PlayerOverlay:ToggleCinemaInteractionInfo(bVisible) end
function UGSS_PlayerOverlay:ShowVolcanoTutorial() end
---@param bEnable boolean
function UGSS_PlayerOverlay:ShowTabHolder(bEnable) end
function UGSS_PlayerOverlay:ShowRentalTutorial() end
---@param bVisible boolean
function UGSS_PlayerOverlay:ShowLeftCornerBindings(bVisible) end
---@param Character APawn
function UGSS_PlayerOverlay:ShowHideCrossOnPossessed(Character) end
---@param bShow boolean
function UGSS_PlayerOverlay:ShowCrosshair(bShow) end
function UGSS_PlayerOverlay:RefreshRunway() end
---@param InVisibility ESlateVisibility
function UGSS_PlayerOverlay:HideWhitePointer(InVisibility) end
function UGSS_PlayerOverlay:HideQuestAndChallenges() end
---@param bIsOpen boolean
function UGSS_PlayerOverlay:GasSignOpenClose(bIsOpen) end
function UGSS_PlayerOverlay:FoldQuestAndChallengesHolder() end


---@class UGSS_QuestManager : UGSS_HUD_BaseWidget
local UGSS_QuestManager = {}


---@class UGainRatingObjective : UCountableObjectiveBase
local UGainRatingObjective = {}

---@param AddedRating float
function UGainRatingObjective:AddProgress(AddedRating) end


---@class UGameAction : UObject
---@field bShouldPlayOnGameLoaded boolean
local UGameAction = {}



---@class UGameManagerLibrary : UBlueprintFunctionLibrary
local UGameManagerLibrary = {}

---@param WorldContextObject UObject
---@return UTutorialManager
function UGameManagerLibrary:GetTutorialManager(WorldContextObject) end
---@param WorldContextObject UObject
---@return AGlobalGameEventManager
function UGameManagerLibrary:GetGGEM(WorldContextObject) end
---@param WorldContextObject UObject
---@return ADialogueManager
function UGameManagerLibrary:GetDialogueManager(WorldContextObject) end
---@param WorldContextObject UObject
---@return UAIManager
function UGameManagerLibrary:GetAIManager(WorldContextObject) end
---@param WorldContextObject UObject
---@return AActionManager
function UGameManagerLibrary:GetActionManager(WorldContextObject) end
---@param WorldContextObject UObject
---@param Quest UGSSQuest
---@param ForceSave boolean
function UGameManagerLibrary:AutoSave(WorldContextObject, Quest, ForceSave) end


---@class UGameplayHelper : UBlueprintFunctionLibrary
local UGameplayHelper = {}

---@param WorldContextObject UObject
---@param ItemSoft TSoftClassPtr<AItem>
---@return int32
function UGameplayHelper:GetItemAmountOnShelves(WorldContextObject, ItemSoft) end
---@param WorldContextObject UObject
---@param ProductClass TSubclassOf<AProduct>
---@return int32
function UGameplayHelper:GetAmountOfItemOnShelf(WorldContextObject, ProductClass) end


---@class UGarageHUDBase : UUserWidget
local UGarageHUDBase = {}

---@param GameType EGarageMinigame
---@param bMinigameStarted boolean
function UGarageHUDBase:SwitchHints(GameType, bMinigameStarted) end
---@param bShow boolean
function UGarageHUDBase:Show(bShow) end
---@param TypeOfBrokenPart EGarageNotification
function UGarageHUDBase:NotificationOfBroken(TypeOfBrokenPart) end


---@class UGarageSkeletalMeshComponent : USkeletalMeshComponent
---@field GarageMontage UAnimMontage
---@field GarageMontageInverse UAnimMontage
local UGarageSkeletalMeshComponent = {}



---@class UGarageStaticMeshComponent : UStaticMeshComponent
---@field Direction EMeshMovementDirection
---@field StartPosition FVector
---@field EndPosition FVector
---@field StartRotation FRotator
---@field EndRotation FRotator
---@field TimeToMove float
---@field bIsMoving boolean
---@field curTime float
---@field BrokenPartMaterial FMinigameMaterialReplacement
---@field FixedPartMaterial FMinigameMaterialReplacement
---@field InteractionSound USoundCue
---@field MoveLoopForwardSound USoundCue
---@field MoveLoopBackwardSound USoundCue
---@field MoveFinishedForwardSound USoundCue
---@field MoveFinishedBackwardSound USoundCue
---@field MoveLoopManualSound USoundCue
local UGarageStaticMeshComponent = {}

---@param NewDirection EMeshMovementDirection
function UGarageStaticMeshComponent:StartMoving(NewDirection) end
---@return float
function UGarageStaticMeshComponent:GetTimeToMove() end


---@class UGenericEnums : UObject
local UGenericEnums = {}


---@class UGlobalEventSubsystem : UWorldSubsystem
---@field OnPlayerEnterVehicle FGlobalEventSubsystemOnPlayerEnterVehicle
---@field OnMailSend FGlobalEventSubsystemOnMailSend
---@field CoconutMiss FGlobalEventSubsystemCoconutMiss
---@field ItemSacrified FGlobalEventSubsystemItemSacrified
---@field CustomerDie FGlobalEventSubsystemCustomerDie
---@field OnLevelQuestZoneTriggered FGlobalEventSubsystemOnLevelQuestZoneTriggered
---@field OnSpawnedQuestZoneTriggered FGlobalEventSubsystemOnSpawnedQuestZoneTriggered
---@field OnShowerDirtyLevelUpdated FGlobalEventSubsystemOnShowerDirtyLevelUpdated
---@field ContractPointsUpdated FGlobalEventSubsystemContractPointsUpdated
---@field OnPlayerInteraction FGlobalEventSubsystemOnPlayerInteraction
---@field OnFuelLevelReached FGlobalEventSubsystemOnFuelLevelReached
---@field OnJunkyardPhotoTake FGlobalEventSubsystemOnJunkyardPhotoTake
---@field OnMainMenuEnter FGlobalEventSubsystemOnMainMenuEnter
---@field OnJerryCanRefueled FGlobalEventSubsystemOnJerryCanRefueled
---@field OnChemicalsRefreshed FGlobalEventSubsystemOnChemicalsRefreshed
---@field OnResetCarWrecks FGlobalEventSubsystemOnResetCarWrecks
---@field OnCustomerCarFueled FGlobalEventSubsystemOnCustomerCarFueled
---@field OnExcavatorBucketEmptied FGlobalEventSubsystemOnExcavatorBucketEmptied
---@field OnRuinsRemoved FGlobalEventSubsystemOnRuinsRemoved
---@field OnGameActivityFinished FGlobalEventSubsystemOnGameActivityFinished
---@field OnGameLoadingStarted FGlobalEventSubsystemOnGameLoadingStarted
---@field OnWreckMoveToPhotoPlatform FGlobalEventSubsystemOnWreckMoveToPhotoPlatform
---@field OnFuelOrdered FGlobalEventSubsystemOnFuelOrdered
---@field OnTrashBinEmptied FGlobalEventSubsystemOnTrashBinEmptied
---@field OnTrashContainerTrashAmountChanged FGlobalEventSubsystemOnTrashContainerTrashAmountChanged
---@field OnTrashTruckOrdered FGlobalEventSubsystemOnTrashTruckOrdered
---@field OnDenisSpawned FGlobalEventSubsystemOnDenisSpawned
---@field OnDenisDecalPaintedOver FGlobalEventSubsystemOnDenisDecalPaintedOver
---@field OnPlayerBought FGlobalEventSubsystemOnPlayerBought
---@field OnTutorialFinished FGlobalEventSubsystemOnTutorialFinished
---@field OnGamePauseChanged FGlobalEventSubsystemOnGamePauseChanged
---@field OnPlaceableActorInitialized FGlobalEventSubsystemOnPlaceableActorInitialized
---@field OnPlaceableActorDeInitialized FGlobalEventSubsystemOnPlaceableActorDeInitialized
---@field OnAITaskFinished FGlobalEventSubsystemOnAITaskFinished
---@field OnPrologEndSequanceFinished FGlobalEventSubsystemOnPrologEndSequanceFinished
---@field OnWarehouseDoorUnlocked FGlobalEventSubsystemOnWarehouseDoorUnlocked
---@field OnEmployeeTaskStarted FGlobalEventSubsystemOnEmployeeTaskStarted
---@field OnEmployeeWorkTimeIncreased FGlobalEventSubsystemOnEmployeeWorkTimeIncreased
---@field OnEmployeePaid FGlobalEventSubsystemOnEmployeePaid
---@field OnCustomerArrivedAtCarWash FGlobalEventSubsystemOnCustomerArrivedAtCarWash
---@field OnCarWashOpenStateChanged FGlobalEventSubsystemOnCarWashOpenStateChanged
---@field OnFirstTimeElectrictyTurnedOn FGlobalEventSubsystemOnFirstTimeElectrictyTurnedOn
---@field ForceSpawnDenis FGlobalEventSubsystemForceSpawnDenis
---@field OnJoeAirplaneCrashed FGlobalEventSubsystemOnJoeAirplaneCrashed
---@field OnJoeAirplaneDetachedFromTowy FGlobalEventSubsystemOnJoeAirplaneDetachedFromTowy
---@field OnJoeAirplaneAttachedToTowy FGlobalEventSubsystemOnJoeAirplaneAttachedToTowy
---@field OnDialogRequestFinishActiveObjective FGlobalEventSubsystemOnDialogRequestFinishActiveObjective
---@field OnDialogRequestFireExternalEvent FGlobalEventSubsystemOnDialogRequestFireExternalEvent
---@field OnSpiderWebDestroyed FGlobalEventSubsystemOnSpiderWebDestroyed
---@field OnPlaneDenied FGlobalEventSubsystemOnPlaneDenied
---@field OnTradingAirPlaneArrived FGlobalEventSubsystemOnTradingAirPlaneArrived
---@field OnJoeTradeCompleted FGlobalEventSubsystemOnJoeTradeCompleted
---@field OnMailOpened FGlobalEventSubsystemOnMailOpened
---@field OnBuildingUpgraded FGlobalEventSubsystemOnBuildingUpgraded
---@field OnMarshalWandsMinigameFinishedGlobal FGlobalEventSubsystemOnMarshalWandsMinigameFinishedGlobal
---@field OnMaskOpened FGlobalEventSubsystemOnMaskOpened
---@field OnMinigameStateChanged FGlobalEventSubsystemOnMinigameStateChanged
---@field OnLoanEventTimeRunsOut FGlobalEventSubsystemOnLoanEventTimeRunsOut
---@field OnInteractableDecalDestroyed FGlobalEventSubsystemOnInteractableDecalDestroyed
---@field OnSpawnVIPCustomer FGlobalEventSubsystemOnSpawnVIPCustomer
---@field OnVIPCustomerSpawnedSuccessfully FGlobalEventSubsystemOnVIPCustomerSpawnedSuccessfully
---@field OnVIPBonusStarted FGlobalEventSubsystemOnVIPBonusStarted
---@field ONVIPBonusEnded FGlobalEventSubsystemONVIPBonusEnded
---@field OnVIPSpawnedOnMap FGlobalEventSubsystemOnVIPSpawnedOnMap
---@field OnVIPProgressEarned FGlobalEventSubsystemOnVIPProgressEarned
---@field OnVIPServiceMessedUp FGlobalEventSubsystemOnVIPServiceMessedUp
---@field OnEventCreated FGlobalEventSubsystemOnEventCreated
---@field OnDecoractionCameraBought FGlobalEventSubsystemOnDecoractionCameraBought
---@field OnMovableDecorationPlaced FGlobalEventSubsystemOnMovableDecorationPlaced
---@field OnMovableDecorationRemoved FGlobalEventSubsystemOnMovableDecorationRemoved
---@field OnDebugCamerasActivated FGlobalEventSubsystemOnDebugCamerasActivated
---@field OnDebugCamerasDeactivated FGlobalEventSubsystemOnDebugCamerasDeactivated
---@field OnTeleportUsed FGlobalEventSubsystemOnTeleportUsed
---@field OnSandstormStarted FGlobalEventSubsystemOnSandstormStarted
---@field OnSandstormEnded FGlobalEventSubsystemOnSandstormEnded
---@field OnWaterPointReserved FGlobalEventSubsystemOnWaterPointReserved
---@field OnWaterPointFreed FGlobalEventSubsystemOnWaterPointFreed
---@field OnBoatSpawned FGlobalEventSubsystemOnBoatSpawned
---@field OnChunchumanchuAngerChange FGlobalEventSubsystemOnChunchumanchuAngerChange
---@field OnRentalServiceStarted FGlobalEventSubsystemOnRentalServiceStarted
---@field OnEquipmentRentalSpotFree FGlobalEventSubsystemOnEquipmentRentalSpotFree
---@field OnRentalEquipmentReplaced FGlobalEventSubsystemOnRentalEquipmentReplaced
---@field OnRentalEquipmentBroken FGlobalEventSubsystemOnRentalEquipmentBroken
---@field OnCustomerEaten FGlobalEventSubsystemOnCustomerEaten
---@field OnCraneEntered FGlobalEventSubsystemOnCraneEntered
---@field OnCraneExited FGlobalEventSubsystemOnCraneExited
---@field OnSaleTabEnter FGlobalEventSubsystemOnSaleTabEnter
---@field OnSaleTutorialFinish FGlobalEventSubsystemOnSaleTutorialFinish
---@field OnJunkyardWreckMarked FGlobalEventSubsystemOnJunkyardWreckMarked
---@field OnJunkyardWreckAttractedToMagnet FGlobalEventSubsystemOnJunkyardWreckAttractedToMagnet
---@field OnWreckPlayerProcessingStarted FGlobalEventSubsystemOnWreckPlayerProcessingStarted
---@field OnWreckPlacedOnArea FGlobalEventSubsystemOnWreckPlacedOnArea
---@field OnWreckRemovedFromArea FGlobalEventSubsystemOnWreckRemovedFromArea
---@field OnAreaReservedBySeanUpdated FGlobalEventSubsystemOnAreaReservedBySeanUpdated
---@field OnContractTaken FGlobalEventSubsystemOnContractTaken
---@field OnContractCompleted FGlobalEventSubsystemOnContractCompleted
---@field OnCarSentToExhibition FGlobalEventSubsystemOnCarSentToExhibition
---@field OnJunkyardStorageOpen FGlobalEventSubsystemOnJunkyardStorageOpen
---@field OnItemTakeFromChemicalbath FGlobalEventSubsystemOnItemTakeFromChemicalbath
---@field OnItemPutIntoChemicalBath FGlobalEventSubsystemOnItemPutIntoChemicalBath
---@field OnPartAddedToWreck FGlobalEventSubsystemOnPartAddedToWreck
---@field OnWreckBodyPainted FGlobalEventSubsystemOnWreckBodyPainted
---@field OnGrinderPickedUp FGlobalEventSubsystemOnGrinderPickedUp
---@field OnMultiToolPickedUp FGlobalEventSubsystemOnMultiToolPickedUp
---@field OnMultiToolPutDown FGlobalEventSubsystemOnMultiToolPutDown
---@field OnTowTruckSpawned FGlobalEventSubsystemOnTowTruckSpawned
---@field OnCarPartAddedToStorage FGlobalEventSubsystemOnCarPartAddedToStorage
---@field OnSeanCarLightsOn FGlobalEventSubsystemOnSeanCarLightsOn
---@field OnWreckCustomizationStarted FGlobalEventSubsystemOnWreckCustomizationStarted
---@field OnGoHomeTaskInitialized FGlobalEventSubsystemOnGoHomeTaskInitialized
---@field OnCannonHitStarted FGlobalEventSubsystemOnCannonHitStarted
---@field OnCannonHitEnded FGlobalEventSubsystemOnCannonHitEnded
---@field LiftBoxPlacedDelegate FGlobalEventSubsystemLiftBoxPlacedDelegate
---@field OnCinemaCustomMovieUploaded FGlobalEventSubsystemOnCinemaCustomMovieUploaded
---@field OnTechnologyUnlocked FGlobalEventSubsystemOnTechnologyUnlocked
local UGlobalEventSubsystem = {}



---@class UGoToEquipmentRentalBuilding : UIteractableActorTask
local UGoToEquipmentRentalBuilding = {}

function UGoToEquipmentRentalBuilding:SetBindings() end
---@param Building AInteractableActor
---@param Spot ARentalSpot
function UGoToEquipmentRentalBuilding:OnRentalSpotAvailabe(Building, Spot) end
---@return boolean
function UGoToEquipmentRentalBuilding:HasAnyFreeSpot() end
---@param CustomerType ECustomerType
---@return AInteractableActor
function UGoToEquipmentRentalBuilding:AddAsCustomer(CustomerType) end


---@class UGoToGuestService : UIteractableActorTask
---@field UpdateAutocompletionTimer FTimerHandle
---@field AutocompletionUpdateInterval float
---@field Autocompleted boolean
---@field bMinigameCompleted boolean
local UGoToGuestService = {}

function UGoToGuestService:UpdateAutocompletion() end
function UGoToGuestService:SetBindings() end
---@param GuestMontageTag FGameplayTag
---@param OutPlayingMontage UAnimMontage
function UGoToGuestService:PlayGuestMontage(GuestMontageTag, OutPlayingMontage) end
---@param GuestHandsAnimConfigTag FGameplayTag
function UGoToGuestService:PlayGuestHandsAnim(GuestHandsAnimConfigTag) end
---@param MinigameInWorld ARvMinigameInWorld
function UGoToGuestService:OnMinigameStarted(MinigameInWorld) end
---@param MinigameTag FGameplayTag
---@param CompletedServiceSpot ARvGuestServiceSpot
---@param bSuccess boolean
function UGoToGuestService:OnMinigameCompleted(MinigameTag, CompletedServiceSpot, bSuccess) end
---@param GuestMontageTag FGameplayTag
---@return boolean
function UGoToGuestService:IsPlayingMontage(GuestMontageTag) end
---@return boolean
function UGoToGuestService:IsMinigameCompleted() end
---@return boolean
function UGoToGuestService:IsAutocompleted() end
---@return TArray<UAnimMontage>
function UGoToGuestService:GetPlayingGuestServiceMontages() end
function UGoToGuestService:FinishAutocompleteService() end
function UGoToGuestService:BeginAutocompleteService() end
---@param TargetBuilding ARvGuestServiceSpot
---@param TargetService FGameplayTag
---@return boolean
function UGoToGuestService:AreLocationRequirementsMet(TargetBuilding, TargetService) end
---@return boolean
function UGoToGuestService:AdjustCharacterLook() end
---@param CustomerType ECustomerType
---@param TargetService FGameplayTag
---@return AInteractableActor
function UGoToGuestService:AddAsCustomer(CustomerType, TargetService) end


---@class UGreeting_DialogueNode : UDialogueNode
local UGreeting_DialogueNode = {}


---@class UGuiarPlayerFunctionLibrary : UBlueprintFunctionLibrary
local UGuiarPlayerFunctionLibrary = {}


---@class UHammerBuildingCategoryWidget : UUserWidget
local UHammerBuildingCategoryWidget = {}


---@class UHammerBuildingWidget : UUserWidget
---@field HammerInstence AHammer
local UHammerBuildingWidget = {}



---@class UHammerWidget : UUserWidget
---@field HammerInstence AHammer
---@field QueueInfo UVerticalBox
---@field BuildInfo UVerticalBox
---@field LastSelectedInfo UVerticalBox
---@field Price_TXT UTextBlock
---@field BuildingName_TXT UTextBlock
---@field LastQueuePointNotificationText UTextBlock
---@field Building_IMG UImage
---@field QuickAccesPartEnabled boolean
local UHammerWidget = {}

function UHammerWidget:ShowLastSelectedInfo() end
---@param StructureType EStructureType
---@param ItemType EHammerEditType
function UHammerWidget:ChangeInfoSegment(StructureType, ItemType) end


---@class UHumanAnimInstance : UHumanSharedAnimInstance
---@field bRagdoll boolean
---@field bLookAt boolean
---@field bCheckNPCLookAtDistance boolean
---@field BlinkOffset float
---@field Turn float
---@field bTurning boolean
---@field bWaitingTooLong boolean
---@field WaitingAnimType int32
---@field bInCar boolean
---@field bTalkingOnPhone boolean
---@field PhoneAlpha float
---@field bMotorbike boolean
---@field LArmLayerPose UAnimSequence
---@field UpperBodyLayerPose UAnimSequence
---@field LeftArmLayerAlpha float
---@field UpperBodyLayerAlpha float
---@field LeftArmLayerActive boolean
---@field RightArmLayerActive boolean
---@field LayerPose UAnimSequence
---@field HandsLayerBlendTime float
---@field CurrentLayerIndex int32
---@field CurrentHandSocketSpawnTimer float
---@field SpawnInHandSocketTimeTreshold float
---@field CurrentHandSocketDestroyTime float
---@field DestroyInHandSocketTimeTreshold float
---@field bLayerSpawnActorTimerOn boolean
---@field bAnyLayerActive boolean
---@field bWasAnyLayerActiveWhenMontagePlayed boolean
---@field HandLayerActorToSpawn TSubclassOf<AActor>
---@field bBenchPressing boolean
---@field BenchPressUp float
---@field BenchPressTilt float
---@field LayerSocketName FName
---@field StoredPartToActivate FGameplayTag
---@field LayerSpawnedActors TArray<AActor>
---@field bDestroyLayerSpawnedActors boolean
---@field NotifySpawnedActors TArray<AActor>
---@field CurrentIdlePoseID int32
---@field bVariantIdle boolean
---@field bNoShotGunIdle boolean
---@field bSleeping boolean
---@field bRLegForward boolean
---@field bLLegForward boolean
---@field bRLegForwardArms boolean
---@field bSaunaSitting boolean
---@field bMegaphone boolean
local UHumanAnimInstance = {}

---@param CurrentVehicle AActor
function UHumanAnimInstance:VehicleEnteringFinished(CurrentVehicle) end
function UHumanAnimInstance:StopHandsLayerForMontage() end
---@param NewValue boolean
function UHumanAnimInstance:SetRagdoll(NewValue) end
---@param Active boolean
function UHumanAnimInstance:SetNPCLookAt(Active) end
---@param bActive boolean
---@param Pose UAnimSequence
---@param ActorToSpawn TSubclassOf<AActor>
---@param InTimeToSpawnMesh float
function UHumanAnimInstance:OnLeftArmLayerStateChange(bActive, Pose, ActorToSpawn, InTimeToSpawnMesh) end
---@param Pose UAnimSequence
---@param bSpawnActor boolean
---@param ActorToSpawn TSubclassOf<AActor>
---@param PartToActivate FGameplayTag
---@param InTimeToSpawnMesh float
---@param BlendTime float
function UHumanAnimInstance:OnHandsLayerStateChange(Pose, bSpawnActor, ActorToSpawn, PartToActivate, InTimeToSpawnMesh, BlendTime) end
function UHumanAnimInstance:DeactivateRandomQueueIdlePose() end
---@param InTimeToDestroyMesh float
---@param BlendOutTime float
function UHumanAnimInstance:DeactivateHandsLayer(InTimeToDestroyMesh, BlendOutTime) end
function UHumanAnimInstance:ActivateRandomQueueIdlePose() end


---@class UInteractionDefines : UObject
local UInteractionDefines = {}

---@return TArray<FName>
function UInteractionDefines:GetAxisMappings() end
---@return TArray<FName>
function UInteractionDefines:GetAllInputs() end


---@class UInteractionInfoWidget : UGSSBaseWidget
---@field PREFIX_TXT UTextBlock
---@field ButtonTxt UTextBlock
---@field KeyBindedAction UKeyBindedAction
---@field SOFIX_TXT UTextBlock
---@field ActionIcon UImage
---@field GamePadIcon UTexture2D
---@field ProgressBar UImage
local UInteractionInfoWidget = {}

---@param InteractionStruct FAction
function UInteractionInfoWidget:UpdateInfo(InteractionStruct) end
---@param InVisibility ESlateVisibility
function UInteractionInfoWidget:SetImageVisibility(InVisibility) end
---@param InteractionTime float
function UInteractionInfoWidget:ProgressBarStartDisplay(InteractionTime) end
---@param InteractionSuccesfull boolean
function UInteractionInfoWidget:ProgressBarEndDisplay(InteractionSuccesfull) end


---@class UInteractionObjective : UObjectiveBase
---@field ActorToInteractWith TSoftObjectPtr<AActor>
local UInteractionObjective = {}

---@param Actor AActor
function UInteractionObjective:OnInteraction(Actor) end


---@class UInventoryComponent : UActorComponent
---@field bIsPlayerStateInventory boolean
---@field OnInventoryUpdated FInventoryComponentOnInventoryUpdated
---@field OnFuelUpdated FInventoryComponentOnFuelUpdated
---@field OnFuelStatusChanged FInventoryComponentOnFuelStatusChanged
---@field OnMoneyStatuedUpdated FInventoryComponentOnMoneyStatuedUpdated
---@field InventoryName FName
---@field Slots TArray<FSlotStruct>
---@field NotFoundItems TArray<FSlotStruct>
---@field CurrentCapacity int32
---@field MaxCapacity int32
---@field MaxFuelCapacity float
---@field CurrentFuelCapacity float
---@field FuelState EFuelState
---@field money float
local UInventoryComponent = {}

function UInventoryComponent:UpdateFuelStatus() end
---@param ItemToSell FSlotStruct
---@param Quantity int32
---@return int32
function UInventoryComponent:SellItem(ItemToSell, Quantity) end
---@param ItemSoftClass TSoftClassPtr<AItem>
---@param Quantity int32
---@return int32
function UInventoryComponent:RemoveSoftItem(ItemSoftClass, Quantity) end
---@param Item TSoftClassPtr<AItem>
---@param Amount int32
function UInventoryComponent:RemoveFromInventorySoft(Item, Amount) end
---@param bGameLoaded boolean
function UInventoryComponent:LoadGameBeginPlay(bGameLoaded) end
---@return boolean
function UInventoryComponent:IsEmpty() end
---@param ItemStruct FSlotStruct
---@return boolean
function UInventoryComponent:InventoryhasItem(ItemStruct) end
---@param KeyItemClass TSoftClassPtr<AKeyItem>
---@return boolean
function UInventoryComponent:HasKeyItem(KeyItemClass) end
---@param SubCategory EItemTypeCategory
---@return TArray<TSoftClassPtr<AItem>>
function UInventoryComponent:GetItemsOfSubCategory(SubCategory) end
---@param Category ECategoryFilter
---@return TArray<TSoftClassPtr<AItem>>
function UInventoryComponent:GetItemsOfCategory(Category) end
---@param ItemToFind FSlotStruct
---@return FSlotStruct
function UInventoryComponent:GetItemFromInventory(ItemToFind) end
---@param Category ECategoryFilter
---@return int32
function UInventoryComponent:GetItemCountOfCategory(Category) end
---@return float
function UInventoryComponent:GetCapacityCondition() end
---@return int32
function UInventoryComponent:GetAvailableCapacity() end
---@param ItemClass TSoftClassPtr<AItem>
---@return int32
function UInventoryComponent:GetAmountOfItemSoftClass(ItemClass) end
---@param ItemClass TSoftClassPtr<AItem>
---@return boolean
function UInventoryComponent:FindSoftItem(ItemClass) end
---@param OtherInventory UInventoryComponent
---@param IgnoreLimit boolean
function UInventoryComponent:ExportInventoryItems(OtherInventory, IgnoreLimit) end
function UInventoryComponent:CleanInventory() end
---@param Slot FSlotStruct
---@param Change boolean
function UInventoryComponent:ChangeFavourite(Slot, Change) end
---@return int32
function UInventoryComponent:CalculateAndGetCurrentCappacity() end
---@param ItemSoftClass TSoftClassPtr<AItem>
---@param Quantity int32
---@param IgnoreLimit boolean
---@return int32
function UInventoryComponent:AddSoftItem(ItemSoftClass, Quantity, IgnoreLimit) end
---@param NewMoney float
function UInventoryComponent:AddMoneyInventory(NewMoney) end
---@param Amount float
---@return float
function UInventoryComponent:AddFuel(Amount) end


---@class UInventoryWidget : UGSSBaseWidget
---@field CurrentCategoryTypes TArray<EItemTypeCategory>
---@field CurrentSortType ESortType
---@field CurrentItems TArray<FSlotStruct>
---@field InventoryType EInventoryChildType
local UInventoryWidget = {}

---@param SortType ESortType
---@param FilteredItems TArray<FSlotStruct>
---@return TArray<FSlotStruct>
function UInventoryWidget:SortInventory(SortType, FilteredItems) end
---@param InCurrentSortType ESortType
function UInventoryWidget:SetCurrentSortType(InCurrentSortType) end
---@param InCurrentItems TArray<FSlotStruct>
function UInventoryWidget:SetCurrentItems(InCurrentItems) end
function UInventoryWidget:SetAllButtonsNormalState() end
---@param InItemTypeCategory EItemTypeCategory
function UInventoryWidget:RemoveCategory(InItemTypeCategory) end
function UInventoryWidget:RefreshInventory_Code() end
function UInventoryWidget:PlayCategoryRefreshAnimation() end
---@param SourceInventory UInventoryComponent
---@param TargetInventory UInventoryComponent
---@param Item FSlotStruct
---@param Quantity int32
---@return int32
function UInventoryWidget:MoveItemBeetwenInventories(SourceInventory, TargetInventory, Item, Quantity) end
---@param ItemsToCheckIn TArray<FSlotStruct>
---@param InItem FSlotStruct
---@return boolean
function UInventoryWidget:IsItemInInventory(ItemsToCheckIn, InItem) end
---@return ESortType
function UInventoryWidget:GetCurrentSortType() end
---@return TArray<FSlotStruct>
function UInventoryWidget:GetCurrentItems() end
---@return TArray<EItemTypeCategory>
function UInventoryWidget:GetCurrentCategories() end
---@param SortType ESortType
---@return TArray<FSlotStruct>
function UInventoryWidget:FilterInventory(SortType) end
function UInventoryWidget:ClearCategories() end
---@param ItemsToCheckIn TArray<FSlotStruct>
---@param InItem FSlotStruct
---@param Slot_out FSlotStruct
---@param boo boolean
function UInventoryWidget:CheckAndGetItemFromInventory(ItemsToCheckIn, InItem, Slot_out, boo) end
---@param InItemTypeCategory EItemTypeCategory
function UInventoryWidget:AddToCategory(InItemTypeCategory) end
---@param ItemsArray TArray<FSlotStruct>
---@param ToAdd FSlotStruct
---@param QuantityToAdd int32
---@return TArray<FSlotStruct>
function UInventoryWidget:AddQuantityToItem(ItemsArray, ToAdd, QuantityToAdd) end


---@class UIteractableActorTask : UGSSTask
---@field DependentTaskToRemove TSubclassOf<UIteractableActorTask>
local UIteractableActorTask = {}

---@param InteractableActorClass TSubclassOf<AInteractableActor>
---@param Actors TArray<AActor>
---@param bByClosest boolean
---@return AInteractableActor
function UIteractableActorTask:FindAndAddAsCustomer(InteractableActorClass, Actors, bByClosest) end


---@class UJunkyardCarMaskBox : UJunkyardCarPartCustomizable
---@field bOpen boolean
---@field MaskOpenDuration float
---@field MaskMeshWithoutTurbo UStaticMesh
---@field MaskMeshWithTurbo UStaticMesh
local UJunkyardCarMaskBox = {}

function UJunkyardCarMaskBox:OnOwningWreckModified() end
---@return FName
function UJunkyardCarMaskBox:GetInteractionName() end


---@class UJunkyardCarPartBase : UStaticMeshComponent
---@field CarPartType EJunkyardCarPartType
---@field SpecificPartType TArray<EJunkyardFilters>
---@field AdditionalDataPerType TMap<EJunkyardCarPartType, FCarPartAdditionalDataPerType>
---@field MatchingTypeModels TArray<TSoftClassPtr<UJunkyardCarPartBase>>
---@field SpawnedSecondaryCarParts TArray<UActorComponent>
---@field OnInteraction FJunkyardCarPartBaseOnInteraction
---@field IsSidePart boolean
---@field bGhost boolean
---@field bInspectMode boolean
---@field WrecksSettings UJunkyardWrecksDataAsset
local UJunkyardCarPartBase = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function UJunkyardCarPartBase:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function UJunkyardCarPartBase:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
function UJunkyardCarPartBase:DisableInteractionInfo(Pawn) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function UJunkyardCarPartBase:CanBeInteractable(Pawn, UPrimitiveComponent) end


---@class UJunkyardCarPartCustomizable : UJunkyardCarPartBase
---@field CarPartData FCarPartData
---@field CarPartName FText
---@field Icon TSoftObjectPtr<UTexture2D>
---@field bGarage boolean
---@field BasePrice float
---@field bInsidePart boolean
---@field TooltipOffset float
---@field SpawnedDecals TArray<ADecalToPaint>
---@field PaintData FCarPaintData
---@field OnHovered FJunkyardCarPartCustomizableOnHovered
---@field OnEffectFinished FJunkyardCarPartCustomizableOnEffectFinished
---@field SpawnedCarPaintParticle UNiagaraComponent
local UJunkyardCarPartCustomizable = {}

---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function UJunkyardCarPartCustomizable:ShowTooltip(Pawn, Hit) end
---@param TouchedComponent UPrimitiveComponent
function UJunkyardCarPartCustomizable:OnEndMouseOver(TouchedComponent) end
---@param TouchedComponent UPrimitiveComponent
function UJunkyardCarPartCustomizable:OnBeginMouseOver(TouchedComponent) end


---@class UJunkyardCarPartHidden : USceneComponent
---@field CarPartType EJunkyardCarPartType
---@field CarPartData FCarPartData
---@field CarPartName FText
---@field Icon TSoftObjectPtr<UTexture2D>
local UJunkyardCarPartHidden = {}



---@class UJunkyardEventSubsystem : UWorldSubsystem
local UJunkyardEventSubsystem = {}


---@class UJunkyardFunctionLibrary : UBlueprintFunctionLibrary
local UJunkyardFunctionLibrary = {}

---@param PartsToSort TArray<FCarPartReward>
---@return TArray<FCarPartReward>
function UJunkyardFunctionLibrary:SortPartsByVisibility(PartsToSort) end
---@param SlotsToSort TArray<ACarWreckPlaceableArea>
---@return TArray<ACarWreckPlaceableArea>
function UJunkyardFunctionLibrary:SortExhibitionSlots(SlotsToSort) end
---@param WorldContextObject UObject
---@param SortType EJunkyardSortings
---@param CarParts TArray<FStorageCarPart>
---@param WreckType EJunkyardCarWreckType
---@return TArray<FStorageCarPart>
function UJunkyardFunctionLibrary:SortCarParts_PlatformPanel(WorldContextObject, SortType, CarParts, WreckType) end
---@param SortType EJunkyardSortings
---@param CarParts TArray<FStorageCarPart>
---@return TArray<FStorageCarPart>
function UJunkyardFunctionLibrary:SortCarParts(SortType, CarParts) end
---@param WorldContextObject UObject
---@param OutFreeSpot AExhibitionSpotSlot
---@return boolean
function UJunkyardFunctionLibrary:IsEnoughSpaceInExhibition(WorldContextObject, OutFreeSpot) end
---@param WorldContextObject UObject
---@return TArray<EJunkyardCarWreckType>
function UJunkyardFunctionLibrary:GetUnlockedCarWrecks(WorldContextObject) end
---@param WorldContextObject UObject
---@return AActor
function UJunkyardFunctionLibrary:GetSeanCar(WorldContextObject) end
---@param WorldContextObject UObject
---@return boolean
function UJunkyardFunctionLibrary:GetPlayerEquippedWrench(WorldContextObject) end
---@param WorldContextObject UObject
---@param CurrentExhibitionSpotSlot AExhibitionSpotSlot
---@param bNext boolean
---@return AExhibitionSpotSlot
function UJunkyardFunctionLibrary:GetNextCarExhibitionSpotSlot(WorldContextObject, CurrentExhibitionSpotSlot, bNext) end
---@param WorldContextObject UObject
---@return UJunkyardWrecksDataAsset
function UJunkyardFunctionLibrary:GetJunkyardWrecksDataAsset(WorldContextObject) end
---@param WorldContextObject UObject
---@return AJunkyardManager
function UJunkyardFunctionLibrary:GetDLCJunkyardManager(WorldContextObject) end
---@param WorldContextObject UObject
---@return UDA_ContractRegions
function UJunkyardFunctionLibrary:GetContractRegionsDataAsset(WorldContextObject) end
---@param WorldContextObject UObject
---@param AreaType ECarWreckPlaceableAreaType
---@param OutCarWreckAreas TArray<ACarWreckPlaceableArea>
function UJunkyardFunctionLibrary:GetCarWreckPlaceableAreasByEnum(WorldContextObject, AreaType, OutCarWreckAreas) end
---@param WorldContextObject UObject
---@param PlacedCar AJunkyardCarWreck
---@return AExhibitionSpotSlot
function UJunkyardFunctionLibrary:FindPlacedCarExhibitionSpot(WorldContextObject, PlacedCar) end
---@param FilterType TArray<EJunkyardFilters>
---@param CarParts TArray<FStorageCarPart>
---@return TArray<FStorageCarPart>
function UJunkyardFunctionLibrary:FilterCarParts(FilterType, CarParts) end


---@class UJunkyardPlatformPanel : UGSSBaseWidget
---@field SelectedDecal ADecalToPaint
---@field LastUsedDecalTransform FTransform
---@field LastUsedDecalSize FVector
local UJunkyardPlatformPanel = {}

---@param bShow boolean
function UJunkyardPlatformPanel:ShowDecalInputs(bShow) end
---@param DecalClass TSubclassOf<ADecalToPaint>
---@param TargetWreck AJunkyardCarWreckCustomizable
function UJunkyardPlatformPanel:SelectDecal(DecalClass, TargetWreck) end
---@param NewColor FLinearColor
---@param Index int32
function UJunkyardPlatformPanel:ChangeDecalColor(NewColor, Index) end


---@class UJunkyardWreckMaskWidget : UGSSBaseWidget
local UJunkyardWreckMaskWidget = {}

---@param CarWreck AJunkyardCarWreckCustomizable
function UJunkyardWreckMaskWidget:Setup(CarWreck) end


---@class UJunkyardWrecksDataAsset : UDataAsset
---@field CarWrecks TMap<EJunkyardCarWreckType, FCarWreckType>
---@field WreckTooltipZOffset float
---@field LogoIcons TMap<EJunkyardCarWreckType, TSoftObjectPtr<UTexture2D>>
---@field WrecksColors TArray<FLinearColor>
---@field PlayerRustClearingDuration float
---@field SeanRustClearingDuration float
---@field DedicatedCarPartsTable TMap<EJunkyardCarWreckType, UDataTable>
---@field UniversalCarPartsTable UDataTable
---@field EmptyCarParts UDataTable
---@field EmptyCarPartCustomDepthStencilValue int32
---@field InspectedCustomDepthStencilValue int32
---@field InstalledCustomDepthStencilValue int32
---@field DedicatedPartTypes TArray<EJunkyardCarPartType>
---@field UiOnlyPartTypes TArray<EJunkyardCarPartType>
---@field DecalAcceptingPartTypes TArray<EJunkyardCarPartType>
---@field PaintAcceptingPartTypes TArray<EJunkyardCarPartType>
---@field PerformancePartTypes TArray<EJunkyardCarPartType>
---@field UninteractablePartTypes TArray<EJunkyardCarPartType>
---@field MountablePartTypes TArray<EJunkyardCarPartType>
---@field MetalPartTypes TArray<EJunkyardCarPartType>
---@field PaintStyleAcceptingPartTypes TArray<EJunkyardCarPartType>
---@field SimplePartsIcons TMap<EJunkyardCarPartType, TSoftObjectPtr<UTexture2D>>
---@field StatsPerPartType TMap<EJunkyardCarPartType, FCarStatArray>
---@field CustomizableWreckPartSpawnChance float
---@field NonCustomizableWreckPartSpawnChance float
---@field SpawnedPartIsRustyChance float
---@field PartRustPercentageRange FFloatRange
---@field PartPreviewCarRotationZ TMap<EJunkyardCarPartType, float>
---@field ShaderParameterValuePerTier TMap<EJunkyardPartRarity, float>
---@field CustomizableMaterialPerPart TMap<EJunkyardCarPartType, TSoftObjectPtr<UMaterialInterface>>
---@field CustomizableMetalMaterial UMaterialInterface
---@field RequiredPartsPerPart TMap<EJunkyardCarPartType, FJunkyardCarPartTypeArray>
---@field AllowedPartsPerWreck TMap<EJunkyardCarWreckType, FJunkyardCarPartTypeArray>
---@field CarRotationZInPlaftormPerPart TMap<EJunkyardCarPartType, float>
---@field PlatformCameraRotateLength float
---@field ProjectCreatedRequiredPartsForEffect int32
---@field bProjectCreatedEffectShowOnce boolean
---@field ProjectFinishedRequiredPartsForEffect int32
---@field bProjectFinishedEffectShowOnce boolean
---@field EmissiveParts TArray<EJunkyardCarPartType>
---@field SpawnOffsetPerPart TMap<EJunkyardCarPartType, FTransform>
---@field DecalOffsetSpawn FVector
---@field PartPaintEffectDuration float
---@field PartAddEffectDuration float
---@field PartRemoveEffectDuration float
---@field BodyPaintEffectDuration float
---@field DecalAddEffectDuration float
---@field DecalDitherStartDuration float
---@field DecalDitherEndDuration float
---@field EmissiveEffectDuration float
---@field PaintingEffectRequiredAddingPartProgress float
---@field DecalEffectRequiredPaintingProgress float
---@field DecalInterpolateFunction EFunctionType
---@field AddingPartInterpolateFunction EFunctionType
---@field RemovePartInterpolateFunction EFunctionType
---@field PaintInterpolateFunction EFunctionType
---@field EmissiveInterpolateFunction EFunctionType
---@field CarPaintParticle UNiagaraSystem
---@field PartAddParticle UNiagaraSystem
---@field GhostMaterial UMaterialInterface
---@field RarityPerPartsAverageValue TMap<EJunkyardPartRarity, FFloatRange>
---@field GearScoreRangePerRarity TMap<EJunkyardPartRarity, FFloatRange>
---@field GearScoreFractionValue float
---@field MaxGearScoreValue float
---@field MoneyPerDecal float
---@field MoneyPerPartPainted float
---@field MoneyPerGearScoreValue TMap<float, float>
---@field MoneyPerCarTier TMap<EJunkyardPartRarity, float>
---@field CarPartPriceMultiplierPerTier TMap<EJunkyardPartRarity, float>
---@field CarPriceMultiplierPerTier TMap<EJunkyardPartRarity, float>
---@field TierColors TMap<EJunkyardPartRarity, FLinearColor>
---@field MaxUncleTributeValue float
---@field MinUncleTributeValue float
---@field UncleTributeReductionValue float
---@field PartSellPercentage float
---@field GarageParts TMap<EJunkyardCarPartType, TSoftClassPtr<AItem>>
---@field UniversalPartsInGarageWrecks TArray<EJunkyardCarPartType>
---@field PaintMasks TMap<EFinishMaskType, FCustomizationTagAndIcon>
---@field PaintStyles TMap<ECustomizationPaintType, FCustomizationTagAndIcon>
---@field CarColors UDataTable
---@field CarDecalTypes TArray<EDecalUnlockType>
---@field CarDecalIcons TMap<EDecalUnlockType, TSoftObjectPtr<UTexture2D>>
local UJunkyardWrecksDataAsset = {}

---@param WreckType EJunkyardCarWreckType
---@return boolean
function UJunkyardWrecksDataAsset:IsWreckCustomizable(WreckType) end
---@param PartType EJunkyardCarPartType
---@return boolean
function UJunkyardWrecksDataAsset:IsPerfomancePart(PartType) end
---@param PartType EJunkyardCarPartType
---@return boolean
function UJunkyardWrecksDataAsset:IsPartUniversal(PartType) end
---@param PartType EJunkyardCarPartType
---@return boolean
function UJunkyardWrecksDataAsset:IsPartUiOnly(PartType) end
---@param PartType EJunkyardCarPartType
---@param WreckType EJunkyardCarWreckType
---@return TSoftClassPtr<UJunkyardCarPartBase>
function UJunkyardWrecksDataAsset:GetEmptyCarPartForWreckType(PartType, WreckType) end
---@param Color FLinearColor
---@return FText
function UJunkyardWrecksDataAsset:GetCarColorName(Color) end
---@param CarWreckClass TSoftClassPtr<AJunkyardCarWreck>
---@param CarWreck FCarWreckType
---@return boolean
function UJunkyardWrecksDataAsset:FindWreckDataFromClass(CarWreckClass, CarWreck) end
---@param PartClass TSoftClassPtr<UActorComponent>
---@param JunkyardWreckType EJunkyardCarWreckType
---@return boolean
function UJunkyardWrecksDataAsset:CheckPartMatchWreckType(PartClass, JunkyardWreckType) end
---@param PartType EJunkyardCarPartType
---@return boolean
function UJunkyardWrecksDataAsset:CanDecal(PartType) end


---@class UKeyBindedAction : UGSSBaseWidget
---@field IsHavingAxisScale boolean
local UKeyBindedAction = {}

---@param ActionKeyName FName
---@param AxisScale float
function UKeyBindedAction:UpdateKeyInfo(ActionKeyName, AxisScale) end
function UKeyBindedAction:CheckKeyInfo_CPP() end


---@class UKeyItemBindWidget : UGSSInnerWidget
---@field PREFIX_TXT UTextBlock
---@field KeyBindedAction UKeyBindedAction
---@field SOFIX_TXT UTextBlock
---@field AdditionalHorizontal UHorizontalBox
---@field KeyBindedAction_Additional UKeyBindedAction
---@field BindedActionClass TSubclassOf<UKeyBindedAction>
local UKeyItemBindWidget = {}

---@param KeyItemAction FKeyItemAction
function UKeyItemBindWidget:UpdateInfo(KeyItemAction) end
function UKeyItemBindWidget:CheckKeyInfos() end


---@class UKeyItemWidget : UGSSGamePlayWidget
---@field KeyItemBindClass TSoftClassPtr<UKeyItemBindWidget>
---@field BindingsHorizontal UVerticalBox
---@field MainCanvas UCanvasPanel
---@field MiniGames_Tutorial UMinigameTutorialWidget
---@field Overlay_ConstructionSnap UOverlay
---@field MainKeyWidget UAdditionalKeyItemWidget
---@field BindWidgets TArray<UKeyItemBindWidget>
---@field CurrentRow FBindingRow
---@field CurrentMode int32
local UKeyItemWidget = {}

function UKeyItemWidget:UpdateTutorialWidgetVisibility() end
---@param InCurrentMode int32
function UKeyItemWidget:SetCurrentMode(InCurrentMode) end
---@param bSetDefault boolean
function UKeyItemWidget:ResetBindings(bSetDefault) end
function UKeyItemWidget:OnWidgetActivate() end
function UKeyItemWidget:OnKeybindingsReset() end
---@param ActionName FName
function UKeyItemWidget:OnKeybindingChange(ActionName) end
---@param CurrentInteraction TSoftClassPtr<AActor>
function UKeyItemWidget:OnInteractCreateBindings(CurrentInteraction) end
---@return FString
function UKeyItemWidget:GetKeyItemRowName() end
---@param KeyItemName FString
function UKeyItemWidget:GetAndSetBindingData(KeyItemName) end
---@param OwnerObject AActor
function UKeyItemWidget:CreateTutorial(OwnerObject) end
function UKeyItemWidget:CreateBasicBindings() end
---@param NewValue int32
function UKeyItemWidget:ChangeSnapRotationValue(NewValue) end
---@param NewValue float
function UKeyItemWidget:ChangeSnapDistanceValue(NewValue) end
---@param KeyItemName FString
function UKeyItemWidget:ChangeBindings(KeyItemName) end


---@class ULaundrySettings : URvMinigameBaseSettings
---@field CooldownBonusPerMistakeCount TMap<int32, float>
---@field LeverStartSpeed float
---@field LeverHitSpeedIncreaseEasy float
---@field LeverHitSpeedIncreaseMedium float
---@field LeverHitSpeedIncreaseHard float
---@field HitTargetSizeInDegreesNormal float
---@field HitTargetSizeInDegreesMedium float
---@field HitTargetSizeInDegreesHard float
---@field WashProgressPerRotation float
---@field WashProgressIncrement float
---@field LeverBoostSpeed float
---@field LeverBoostOverTime float
---@field AfterFailDelay float
local ULaundrySettings = {}



---@class ULevelTeleporterDataAsset : UDataAsset
---@field MoneyCostPerTargetMap TMap<FString, float>
---@field EventClass TSubclassOf<UGSSEvent>
---@field TransferTimeAmount FTimeStruct
---@field TransferFeePercentage float
---@field LevelNameToText TMap<FString, FText>
---@field IncomeFeePercentage float
---@field AverageIncomeDayCount int32
---@field AverageIncomeRecievedFluctuation FFloatRange
---@field PassiveIncomePopup TSoftClassPtr<UPassiveIncomePopup>
local ULevelTeleporterDataAsset = {}



---@class ULoadLevelGameAction : UGameAction
---@field LevelName FName
local ULoadLevelGameAction = {}



---@class ULoansDataAsset : UDataAsset
---@field Loans TArray<FLoan>
local ULoansDataAsset = {}

---@param LoanToFind FString
---@param OUT_Loan FLoan
---@return boolean
function ULoansDataAsset:GetLoan(LoanToFind, OUT_Loan) end


---@class ULockUnlockGameplayStufGameAction : UGameAction
---@field Tags FGameplayTagContainer
---@field State EUnlockableGameplayStuffState
local ULockUnlockGameplayStufGameAction = {}



---@class ULockUnlockItemGameAction : UGameAction
---@field ParentActor TSoftObjectPtr<AItem>
---@field bLockItem boolean
local ULockUnlockItemGameAction = {}



---@class UMagnetArmComponent : UActorComponent
---@field bIsMagnetInUse boolean
---@field bIsMagnetAttracting boolean
---@field bShouldAttractedActorRotate boolean
---@field AttractedActor AActor
---@field MagnetState EMagnetState
---@field MainActorMesh USkeletalMeshComponent
---@field ActionRange UStaticMeshComponent
---@field SnapLocation UArrowComponent
---@field HorizontalBlockBoxComponent UBoxComponent
---@field VerticalBlockBoxComponent UBoxComponent
---@field AnimInstance UAnimInstance
---@field bHasAnimInstance boolean
---@field CurrentActorRotation FRotator
---@field CurrentSnapBoxRelativeLocation FVector
---@field PreviousSnapBoxRelativeLocation FVector
---@field LerpPercent float
---@field ReactivateMagnetCooldownActive boolean
---@field DetachCooldownActive boolean
---@field LastAttractedActorPosition FVector
---@field AttachToSocket boolean
---@field DrawDebugLines boolean
---@field OnlyZRotation boolean
---@field StopAttractingOnExit boolean
---@field AttractEventIfNotInUse boolean
---@field DettachVelocityMultiplier float
---@field MagnetBoneName FName
---@field IgnoreCollisionTypeAfterSnap ECollisionChannel
---@field MaxForce int32
---@field MaxDistance int32
---@field MinRequiredDistanceToSnap int32
---@field AdjustActorRotationLerpStep float
---@field AdjustActorLerpStep float
---@field MinimalDistanceToDropOffPlane float
---@field ForceToApplayWhenSnapped FVector
---@field ForceToApplayWhenReleasingMagnet int32
---@field TimerFloatForChangingCollisionResponseChannel float
---@field ForceToApplayWhenLosingBalance FVector
---@field LimitMaxReleaseVelocity boolean
---@field MaxReleaseVelocity float
---@field DetachCooldown float
---@field CompatibileClasses TArray<UClass>
---@field RequireDroppableAreas boolean
---@field DetachErrors TMap<EMagnetDetachErrorReason, FText>
---@field DetachErrorMessageDuration float
---@field OnActivateMagnet FMagnetArmComponentOnActivateMagnet
---@field OnMoveArmVertical FMagnetArmComponentOnMoveArmVertical
---@field OnMoveArmHorizontal FMagnetArmComponentOnMoveArmHorizontal
---@field OnExtendArm FMagnetArmComponentOnExtendArm
---@field OnLowerMagnet FMagnetArmComponentOnLowerMagnet
---@field OnActorSnappedToMagnet FMagnetArmComponentOnActorSnappedToMagnet
---@field OnActorDetachedFromMagnet FMagnetArmComponentOnActorDetachedFromMagnet
---@field OnInputAxisMoveArmVertical FMagnetArmComponentOnInputAxisMoveArmVertical
---@field OnInputAxisMoveArmHorizontal FMagnetArmComponentOnInputAxisMoveArmHorizontal
---@field OnInputAxisExtendArm FMagnetArmComponentOnInputAxisExtendArm
---@field OnInputAxisLowerMagnet FMagnetArmComponentOnInputAxisLowerMagnet
---@field OnEventMaxExtendArm FMagnetArmComponentOnEventMaxExtendArm
---@field OnEventMaxMoveArmVertical FMagnetArmComponentOnEventMaxMoveArmVertical
---@field OnEventMaxMoveArmHorizontal FMagnetArmComponentOnEventMaxMoveArmHorizontal
---@field OnEventMaxMagnetDown FMagnetArmComponentOnEventMaxMagnetDown
---@field ActivateVehicleCollision FTimerHandle
local UMagnetArmComponent = {}

function UMagnetArmComponent:UI_PlaneTooClose() end
---@param bNewIsMagnetInUse boolean
function UMagnetArmComponent:SetIsMagnetInUse(bNewIsMagnetInUse) end
---@param Actor AActor
function UMagnetArmComponent:OnActorSnapped(Actor) end
---@param Value float
function UMagnetArmComponent:MoveArmVertical(Value) end
---@param Value float
function UMagnetArmComponent:MoveArmHorizontal(Value) end
---@param Value float
function UMagnetArmComponent:LowerMagnet(Value) end
---@param CheckedActor AActor
---@return boolean
function UMagnetArmComponent:IsActorCompatible(CheckedActor) end
---@param Value float
function UMagnetArmComponent:InputAxisMoveArmVertical(Value) end
---@param Value float
function UMagnetArmComponent:InputAxisMoveArmHorizontal(Value) end
---@param Value float
function UMagnetArmComponent:InputAxisLowerMagnet(Value) end
---@param Value float
function UMagnetArmComponent:InputAxisExtendArm(Value) end
---@param bPressed boolean
function UMagnetArmComponent:InputActionActivateMagnet(bPressed) end
---@param MainMesh USkeletalMeshComponent
---@param ActionRangeMesh UStaticMeshComponent
---@param SnapLocationArrow UArrowComponent
---@param HorizontalBlockBox UBoxComponent
---@param VerticalBlockBox UBoxComponent
function UMagnetArmComponent:InitMagnetArm(MainMesh, ActionRangeMesh, SnapLocationArrow, HorizontalBlockBox, VerticalBlockBox) end
---@param Actor AActor
function UMagnetArmComponent:ForceSnapToMagnet(Actor) end
---@param Value float
function UMagnetArmComponent:ExtendArm(Value) end
---@param bMaxPlatformMove boolean
function UMagnetArmComponent:EventMaxMoveArmVertical(bMaxPlatformMove) end
---@param bMaxPlatformElevate boolean
function UMagnetArmComponent:EventMaxMoveArmHorizontal(bMaxPlatformElevate) end
---@param bMaxMagnetDown boolean
function UMagnetArmComponent:EventMaxMagnetDown(bMaxMagnetDown) end
---@param bMaxExtend boolean
function UMagnetArmComponent:EventMaxExtendArm(bMaxExtend) end
---@param bIsMagnetOn boolean
function UMagnetArmComponent:EventMagnetStartsAttracing(bIsMagnetOn) end
function UMagnetArmComponent:EventAddForceAtSnap() end
function UMagnetArmComponent:EndDetachCooldown() end
---@return AActor
function UMagnetArmComponent:DetachAttractedActor() end
function UMagnetArmComponent:ChangeCollisionResponseChannelForThrownObject() end
---@param ErrorReason EMagnetDetachErrorReason
---@return boolean
function UMagnetArmComponent:CanDetachActor(ErrorReason) end
function UMagnetArmComponent:ApplyInfluence() end
---@param DeltaSeconds float
function UMagnetArmComponent:AdjustPulledActorRotation(DeltaSeconds) end
function UMagnetArmComponent:ActivateMagnet_Released() end
function UMagnetArmComponent:ActivateMagnet_Pressed() end


---@class UMainPC : UGSSBaseWidget
---@field Buttons TArray<UPC_TopMenuButton>
---@field CurrentTab UPcBaseTab
---@field Overlay_0 UOverlay
---@field MainBackground UImage
---@field ButtonsHolder UHorizontalBox
---@field Cards_WrapBorder UBorder
---@field Title UTextBlock
---@field Border_0 UBorder
---@field MiniGames_Tutorial UMinigameTutorialWidget
---@field Bottom_Overlay UOverlay
---@field FullScreenOverlay UOverlay
---@field OnFadedOut FMainPCOnFadedOut
---@field bIsTabLoading boolean
local UMainPC = {}

---@param HasTutorial boolean
---@param TutorialType EGameActivityType
function UMainPC:UpdateTutorial(HasTutorial, TutorialType) end
---@param TutorialTag FGameplayTag
---@param HasTutorial boolean
function UMainPC:TryForceOpenTutorial(TutorialTag, HasTutorial) end
---@param BackgroundImager TSoftObjectPtr<UTexture2D>
function UMainPC:SetBackGroundAsync(BackgroundImager) end
---@param ClassToSearch TSoftClassPtr<UPcBaseTab>
function UMainPC:OpenTabByTabToCreate(ClassToSearch) end
function UMainPC:NotificationOnTabChange() end
---@return UPcBaseTab
function UMainPC:GetCurrentTab() end
---@return TArray<UPC_TopMenuButton>
function UMainPC:GetButtons() end
function UMainPC:FillButtons() end
function UMainPC:CustomFadeOut() end
function UMainPC:CustomFadeIn() end
---@param TabClass TSoftClassPtr<UPcBaseTab>
---@param bSetCenterFill boolean
function UMainPC:CreateTabAsync(TabClass, bSetCenterFill) end
---@param ButtonClass TSoftClassPtr<UPC_TopMenuButton>
---@param InButtons TArray<UDA_MainPCButton>
function UMainPC:CreateButtons(ButtonClass, InButtons) end
---@param bIsPressed boolean
function UMainPC:ClosePC(bIsPressed) end
---@param TabRef UPC_Base_Card
function UMainPC:ChangeTabByCard(TabRef) end
---@param ButtonREF UPC_TopMenuButton
function UMainPC:ChangeTab(ButtonREF) end


---@class UMarshalDifficultyWidget : UUserWidget
---@field MinigameInstance AMinigame_MarshalWands
local UMarshalDifficultyWidget = {}



---@class UMinigameBaseWidget : UDragoWidget
local UMinigameBaseWidget = {}

---@param bShow boolean
function UMinigameBaseWidget:Show(bShow) end


---@class UMinigameCoolantCheckWidget : UMinigameBaseWidget
local UMinigameCoolantCheckWidget = {}

---@param MinVal float
---@param MaxVal float
function UMinigameCoolantCheckWidget:SetMinigameValues(MinVal, MaxVal) end
---@param CurVal float
function UMinigameCoolantCheckWidget:SetCurrentValue(CurVal) end


---@class UMinigameEnums : UBlueprintFunctionLibrary
local UMinigameEnums = {}


---@class UMinigameMarshalWandsWidget : UUserWidget
---@field MinigameInstance AMinigame_MarshalWands
---@field AllertWidgetClass TSoftClassPtr<UUserWidget>
local UMinigameMarshalWandsWidget = {}

function UMinigameMarshalWandsWidget:UpdateWidgetValues() end


---@class UMinigameOilCheckWidget : UMinigameBaseWidget
local UMinigameOilCheckWidget = {}

---@param MinVal float
---@param MaxVal float
function UMinigameOilCheckWidget:SetMinigameValues(MinVal, MaxVal) end
---@param CurVal float
function UMinigameOilCheckWidget:SetCurrentValue(CurVal) end


---@class UMinigameTutorialWidget : UGSSWidget
---@field bIsGamepad boolean
---@field HUD AGSS_NewHud
---@field OnMinigameWidgetClosed FMinigameTutorialWidgetOnMinigameWidgetClosed
---@field OnMinigameWidgetOpened FMinigameTutorialWidgetOnMinigameWidgetOpened
---@field bCanBeOpened boolean
---@field TutorialType EGameActivityType
---@field Tutorial_IMG UImage
---@field TutorialTitle_TXT UTextBlock
---@field TutorialDescription_TXT UTextBlock
---@field TutorialDescription_Reach URichTextBlock
---@field GameStateRef AGSSGameState
local UMinigameTutorialWidget = {}

---@param NewValue boolean
function UMinigameTutorialWidget:SetIsPlayerOverlayTutorial(NewValue) end
function UMinigameTutorialWidget:RemoveFromHUD() end
function UMinigameTutorialWidget:RefreshTutorialDescription() end
---@param InKeyEvent FKeyEvent
---@return boolean
function UMinigameTutorialWidget:IsTipButton(InKeyEvent) end
---@param Force boolean
function UMinigameTutorialWidget:ForceTutorialOpened(Force) end
---@param TutorialData FTutorialData
---@param bCreateTutorial boolean
function UMinigameTutorialWidget:FillWidgets(TutorialData, bCreateTutorial) end
---@param _TutorialType EGameActivityType
---@param bCreateTutorial boolean
function UMinigameTutorialWidget:FillTutorialInfo(_TutorialType, bCreateTutorial) end
---@param _TutorialType EGameActivityType
function UMinigameTutorialWidget:CreateTutorialAndSetType(_TutorialType) end
function UMinigameTutorialWidget:CreateTutorial() end
function UMinigameTutorialWidget:CloseTutorialIfOpened() end
---@param IsGamepad boolean
function UMinigameTutorialWidget:ChangeInputDevice(IsGamepad) end
function UMinigameTutorialWidget:AddToHUD() end


---@class UMinigolfBallComponent : UStaticMeshComponent
local UMinigolfBallComponent = {}


---@class UMobileRepairContract : UBasicContract
local UMobileRepairContract = {}


---@class UMoneyTransferEvent : UGSSEvent
---@field UniqueID FGuid
---@field Amount int32
---@field TargetLevelName FString
---@field FromLevelName FString
local UMoneyTransferEvent = {}



---@class UMoveCarToPlatformWidget : UGSSBaseWidget
---@field PickedCar AJunkyardCarWreckCustomizable
local UMoveCarToPlatformWidget = {}

function UMoveCarToPlatformWidget:SetupWidget() end


---@class UNPCAnimationManagerBase : UActorComponent
---@field StartTransform FTransform
---@field EndTransform FTransform
local UNPCAnimationManagerBase = {}

---@param SittingTarget AActor
function UNPCAnimationManagerBase:StartSitting(SittingTarget) end
---@param AnimMontage UAnimMontage
---@param PlayRate float
---@param StartPosition float
---@param StartingSection FName
---@param TransA FTransform
---@param TransB FTransform
---@param NoMontageTime float
---@param ExtraTime float
---@param MontageStatus EMontageStatus::Type
---@param LatentInfo FLatentActionInfo
function UNPCAnimationManagerBase:PlayMontageGSS(AnimMontage, PlayRate, StartPosition, StartingSection, TransA, TransB, NoMontageTime, ExtraTime, MontageStatus, LatentInfo) end
---@param MovementType EMovementGroundType
function UNPCAnimationManagerBase:PartyTrigger(MovementType) end
---@param WorldContextObject UObject
---@param Duration float
---@param LatentInfo FLatentActionInfo
function UNPCAnimationManagerBase:GSSDelay(WorldContextObject, Duration, LatentInfo) end
---@param NoMontageTime float
---@param ExtraTime float
---@return float
function UNPCAnimationManagerBase:GetMontageLenght(NoMontageTime, ExtraTime) end
---@return UAnimInstance
function UNPCAnimationManagerBase:GetAnimInstance() end
function UNPCAnimationManagerBase:EndSitting() end


---@class UNPCEnums : UObject
local UNPCEnums = {}


---@class UNPCTextResponse_DialogueNode : UDialogueNode
local UNPCTextResponse_DialogueNode = {}


---@class UNPCText_DialogueNode : UDialogueNode
---@field SpecificNPCReference TSoftObjectPtr<AGSSNPAICharacterBase>
---@field SpecificObjectReference TSoftObjectPtr<AActor>
---@field ForceToPlayOnPlayerAudioComponent boolean
---@field NPCHeadMontage UAnimMontage
---@field NPCBodyMontage UAnimMontage
local UNPCText_DialogueNode = {}

---@return UAnimMontage
function UNPCText_DialogueNode:GetNPCHeadMontage() end
---@return UAnimMontage
function UNPCText_DialogueNode:GetNPCBodyMontage() end


---@class UNPC_MontageManager : UActorComponent
---@field CurrentPositioningStep UAnimMontage
---@field CurrentActionMontage UAnimMontage
---@field CurrentSittingStartMontage UAnimMontage
---@field CurrentSittingEndMontage UAnimMontage
---@field CurrentExtraObject AActor
---@field CurrentExtraObjectMontage UAnimMontage
---@field CurrentlyAttachedActors TArray<UActorComponent>
---@field CurrentObjectToAttach UActorComponent
---@field StartingAttachedObjectTransforms TArray<FTransform>
---@field CurrentExtraObjectSkelMeshComp USkeletalMeshComponent
---@field CurrentlySpawnedActorsInHands TArray<AActor>
---@field CurrentHandsLayerPose TSoftObjectPtr<UAnimSequence>
local UNPC_MontageManager = {}

---@param ActorToSpawn TSubclassOf<AActor>
---@param SocketName FName
---@param SocketTransform FTransform
function UNPC_MontageManager:SpawnActorInHands(ActorToSpawn, SocketName, SocketTransform) end
---@param PlayRate float
function UNPC_MontageManager:SittingHitReact(PlayRate) end
---@param SittingWarpTarget USceneComponent
---@param PlayRate float
---@param StartingSection FName
function UNPC_MontageManager:PlaySittingMontage(SittingWarpTarget, PlayRate, StartingSection) end
function UNPC_MontageManager:PlaySittingEnd() end
---@param CurrentRV AActor
---@param PlayRate float
function UNPC_MontageManager:PlayRVSpawningAnimation(CurrentRV, PlayRate) end
function UNPC_MontageManager:PlayRVMinigameMainSKMAnimation() end
---@param WarpTarget USceneComponent
---@param MontageToPlayAfterPositioning UAnimMontage
---@param ExtraObject AActor
---@param ExtraObjectMontage UAnimMontage
---@param ObjectToAttach UPrimitiveComponent
---@param bShouldResetDefaultCharState boolean
---@param PlayRate float
---@param StartingSection FName
---@param bShouldPlayExtraObjectMontage boolean
---@param bShouldAttachObject boolean
---@param ExtraObjectSkelMeshComp USkeletalMeshComponent
function UNPC_MontageManager:PlayPositioningStepMontage(WarpTarget, MontageToPlayAfterPositioning, ExtraObject, ExtraObjectMontage, ObjectToAttach, bShouldResetDefaultCharState, PlayRate, StartingSection, bShouldPlayExtraObjectMontage, bShouldAttachObject, ExtraObjectSkelMeshComp) end
---@param ActorReference AActor
---@param ExtraObjectMontageToPlay UAnimMontage
function UNPC_MontageManager:PlayExtraObjectMontage(ActorReference, ExtraObjectMontageToPlay) end
---@param MontageToPlay UAnimMontage
---@param bShouldResetDefaultCharState boolean
---@param PlayRate float
---@param ExtraObjectMontageToPlay UAnimMontage
function UNPC_MontageManager:PlayEndMontage(MontageToPlay, bShouldResetDefaultCharState, PlayRate, ExtraObjectMontageToPlay) end
---@param ActorToSpawn TSubclassOf<AActor>
---@param SocketName FName
function UNPC_MontageManager:GuestServiceSpawnActorInHand(ActorToSpawn, SocketName) end
function UNPC_MontageManager:FinishPositioningIfActive() end
function UNPC_MontageManager:EndAfterPositioningMontage() end
function UNPC_MontageManager:DetachObjectFromHand() end
function UNPC_MontageManager:DespawnSpawnedActosInHands() end
function UNPC_MontageManager:DeactivateHandsLayer() end
---@param ObjectToAttach UActorComponent
---@param SocketName FName
function UNPC_MontageManager:AttachObjectToHand(ObjectToAttach, SocketName) end
---@param CarryingPose FGameplayTag
function UNPC_MontageManager:ActivateHandLayer(CarryingPose) end


---@class UNewVehicleMovementComponent : UActorComponent
---@field OnVehicleTeleportCompete FNewVehicleMovementComponentOnVehicleTeleportCompete
---@field IsNewVehicleMovementEnabled boolean
---@field MaxDriveSpeed float
---@field ExtraDriveHeight float
---@field TurnSlowDownRate float
---@field MaxRotationSpeed float
---@field MaxSlowRate float
---@field MaxZMovementSpeed float
---@field DestinationStopRadius float
---@field DecelerationDistance float
---@field MinDecelerationStartSpeed float
---@field ObstacleStopDistance float
---@field VehicleStopDistance float
---@field ObstacleCheckTimeInterval float
---@field ObstacleCheckForwardDistance float
---@field ObstacleCheckBackDistance float
---@field ObstacleCheckExtraWidth float
---@field ObstacleCheckHeight float
---@field TurnCheckDistance float
---@field TurnSlowSpeedTreshold float
---@field VehicleVehiclesCheckRadius float
---@field VehicleCollisionCheckCount int32
---@field NewModeVehicleCollisionCheckInterval float
---@field NewModeVehicleCollisionCheckMinSpeed float
---@field TireRotationCheckExtraSplineDistance float
---@field TireRotationCheckExtraForwardDistance float
---@field TireRotationCheckDistanceSpeedMultiplier float
---@field TireRotationMultiplier float
---@field TimeToHonkAtCar float
---@field MinSystemChangeTimeAfterBroom float
---@field MinSystemChangeRecoveryDistance float
---@field MinSystemChangeRecoveryInterval float
---@field DriveFasterWhenFarAwayFromPlayer boolean
---@field PlayerDistanceSpeedTresholds TArray<FPlayerSpeedPerDistanceTreshold>
---@field ObstacleTypes TArray<ECollisionChannel>
---@field StopTriggerClass TSoftClassPtr<AActor>
---@field AccelerationCurve UCurveFloat
---@field DecelerationCurve UCurveFloat
---@field TurnSpeedCurve UCurveFloat
---@field ShowObstacleCollisionDebug boolean
---@field ShowVehicleCollisionDebug boolean
---@field PlayerCharacter AGSSPlayerCharacter
---@field OwnerVehicle AGSSWheeledVehicle
---@field WheelInfos TArray<FWheelInfo>
---@field DriveState EDriveState
---@field bStoppedByObstacle boolean
---@field DefaultMaxDriveSpeed float
---@field DefaultMaxRotationSpeed float
---@field DefaultMaxZMovementSpeed float
---@field TimeSinceDriveStateChange float
---@field SpeedAtLastDriveStateChange float
---@field SplineDistanceAtLastDriveStateChange float
---@field CurrentSpeed float
---@field TurnMaxSpeed float
---@field TimeSinceLastObstacleCheck float
---@field CurrentObstacleStopDistance float
---@field TimeObstructedByVehicle float
---@field CurrentObstacleVehicle AGSSWheeledVehicle
---@field TryTeleportTimerHandle FTimerHandle
---@field UpdateMaxSpeedInterval float
---@field TimeToTryTeleportAgain float
local UNewVehicleMovementComponent = {}

function UNewVehicleMovementComponent:UpdateMaxDriveSpeed() end
---@param NewState EDriveState
function UNewVehicleMovementComponent:UpdateDriveState(NewState) end
function UNewVehicleMovementComponent:TryStopDriving() end
function UNewVehicleMovementComponent:TryStartDriving() end
---@param VehicleCollisionBox FVehicleCollisionBox
---@param Color FColor
function UNewVehicleMovementComponent:TryDrawDebugVehicleCollisionBox(VehicleCollisionBox, Color) end
function UNewVehicleMovementComponent:TryDestroyActorOnRoadEnd() end
---@param TeleportLocation FVector
function UNewVehicleMovementComponent:TeleportToLocationInternal(TeleportLocation) end
---@param TeleportLocation FVector
function UNewVehicleMovementComponent:TeleportToLocation(TeleportLocation) end
function UNewVehicleMovementComponent:ResetMaxDriveSpeed() end
---@param Corners TArray<FVector2D>
---@param Axis FVector2D
---@param OutMin float
---@param OutMax float
function UNewVehicleMovementComponent:OBB2D_ProjectOntoAxis(Corners, Axis, OutMin, OutMax) end
---@param Box1 FVehicleCollisionBox
---@param Box2 FVehicleCollisionBox
---@return boolean
function UNewVehicleMovementComponent:OBB2D_Intersect(Box1, Box2) end
---@param Box FVehicleCollisionBox
---@return TArray<FVector2D>
function UNewVehicleMovementComponent:OBB2D_GetCorners(Box) end
---@return boolean
function UNewVehicleMovementComponent:NewSystemIsSpecialCar() end
---@param ReachedDestination boolean
---@param DeltaTime float
function UNewVehicleMovementComponent:MoveAlongSpline(ReachedDestination, DeltaTime) end
---@return boolean
function UNewVehicleMovementComponent:GetStoppedByObstacle() end
---@return float
function UNewVehicleMovementComponent:GetMaxDriveSpeed() end
---@return EDriveState
function UNewVehicleMovementComponent:GetDriveState() end
---@return float
function UNewVehicleMovementComponent:GetCurrentSpeed() end
---@return AGSSWheeledVehicle
function UNewVehicleMovementComponent:GetCurrentObstacleVehicle() end
---@param Time float
---@return FVehicleCollisionBox
function UNewVehicleMovementComponent:GetCollisionBoxAfterTime(Time) end
---@param Distance float
---@return FVehicleCollisionBox
function UNewVehicleMovementComponent:GetCollisionBoxAfterDistance(Distance) end
---@param SensorSplineLength float
---@return boolean
function UNewVehicleMovementComponent:CheckForTurnSlow(SensorSplineLength) end
---@return boolean
function UNewVehicleMovementComponent:CheckForOtherCars() end
---@param SensorLocation FVector
---@return boolean
function UNewVehicleMovementComponent:CheckForObstacles(SensorLocation) end
---@param Curve UCurveFloat
---@param Value float
---@param Accurracy float
---@param MinTime float
---@param MaxTime float
---@return float
function UNewVehicleMovementComponent:CalculateCurveTimeByValueRecursive(Curve, Value, Accurracy, MinTime, MaxTime) end
---@param Curve UCurveFloat
---@param Value float
---@param Accurracy float
---@return float
function UNewVehicleMovementComponent:CalculateCurveTimeByValue(Curve, Value, Accurracy) end
---@return FTransform
function UNewVehicleMovementComponent:CalculateCurrentSplineTransform() end


---@class UNewsfeedFunctionLibrary : UBlueprintFunctionLibrary
local UNewsfeedFunctionLibrary = {}

---@param JsonObjectWrapper FJsonObjectWrapper
---@param UsedPlatform EUsedPlatform
---@return TArray<FDLCNews>
function UNewsfeedFunctionLibrary:GetDLCNewsFromJson(JsonObjectWrapper, UsedPlatform) end
---@param JsonObjectWrapper FJsonObjectWrapper
---@param UsedPlatform EUsedPlatform
---@return TArray<FChangelogNews>
function UNewsfeedFunctionLibrary:GetChangelogNewsFromJson(JsonObjectWrapper, UsedPlatform) end
---@param JsonObjectWrapper FJsonObjectWrapper
---@param UsedPlatform EUsedPlatform
---@return FAdvertNews
function UNewsfeedFunctionLibrary:GetAdvertNewsFromJson(JsonObjectWrapper, UsedPlatform) end


---@class UNozzleData : UDataAsset
---@field NumberOfTraces int32
---@field TraceOffset float
---@field WashingStrength float
---@field VFXSpread boolean
---@field NozzleMesh UStaticMesh
---@field NozzleStartSound USoundCue
---@field NozzleLoopSound USoundCue
---@field NozzleEndSound USoundCue
local UNozzleData = {}



---@class UObjectiveBase : UObject
---@field StartActions TArray<UGameAction>
---@field FinishActions TArray<UGameAction>
---@field ObjectiveMarkers TArray<AObjectiveMarker>
---@field bAreMarkersVisible boolean
---@field WorldPtr UWorld
---@field ObjectiveName FText
---@field BaseRedDotsTag FGameplayTag
local UObjectiveBase = {}

---@param bVisible boolean
function UObjectiveBase:ToggleRedDotsVisibility(bVisible) end
---@param bVisible boolean
function UObjectiveBase:ToggleDynamicObjectiveMarkersVisibility_Implementation(bVisible) end
---@param bVisible boolean
function UObjectiveBase:ToggleDynamicObjectiveMarkersVisibility(bVisible) end
---@param World UWorld
---@param bWasLoadedFromSave boolean
function UObjectiveBase:StartObjective_Implementation(World, bWasLoadedFromSave) end
---@param World UWorld
---@param bWasLoadedFromSave boolean
function UObjectiveBase:StartObjective(World, bWasLoadedFromSave) end
---@param World UWorld
function UObjectiveBase:SetWorld(World) end
function UObjectiveBase:FinishObjective_Implementation() end
function UObjectiveBase:FinishObjective() end
function UObjectiveBase:ExternallyTriggeredEvent() end
---@param Actor AActor
function UObjectiveBase:DestroyMarker(Actor) end
function UObjectiveBase:Debug_FinishObjective() end


---@class UObjectiveLogicBase : UObject
local UObjectiveLogicBase = {}


---@class UOnPlayerSpawnActorObjective : UObjectiveBase
---@field DesiredActorClass TSoftClassPtr<AActor>
local UOnPlayerSpawnActorObjective = {}

---@param Actor AActor
function UOnPlayerSpawnActorObjective:OnSpawnPlayerActor(Actor) end


---@class UOpenMailObjective : UObjectiveBase
---@field MailClassToOpen TSubclassOf<UGSSMail>
local UOpenMailObjective = {}

---@param MailClass TSubclassOf<UGSSMail>
function UOpenMailObjective:OnMailOpened(MailClass) end


---@class UPCBaseSupplyTab : UPcBaseTab
---@field Icon UTexture2D
---@field bCreateOrderList boolean
---@field OrderListClass TSoftClassPtr<UPC_OrderList>
---@field OrderListRef UPC_OrderList
---@field MainCategory ECategoryFilter
---@field WBP_ShopOrder_Animation UPC_DeliveryStatus
---@field VehicleToSpawn FName
local UPCBaseSupplyTab = {}

function UPCBaseSupplyTab:NativeConstruct() end
---@param ItemToBuy FBasketItemStruct
function UPCBaseSupplyTab:DirectBuy(ItemToBuy) end


---@class UPC_BankTab : UPcBaseTab
---@field DebtAmmount UTextBlock
---@field EventClass TSubclassOf<UGSSEvent>
---@field Loans ULoansDataAsset
---@field SelectedLoan FLoan
local UPC_BankTab = {}

function UPC_BankTab:ShowValueToReturn() end
---@param SelectedItem FString
function UPC_BankTab:RequestLoan(SelectedItem) end
---@param SelectedItem FString
function UPC_BankTab:PickLoan(SelectedItem) end
---@param Amount float
function UPC_BankTab:PayLoan(Amount) end


---@class UPC_Base_Card : UGSSInnerWidget
---@field TabToCreate TSoftClassPtr<UPcBaseTab>
---@field NameTag FString
---@field Image UTexture2D
---@field CardName FText
---@field LockedImage UTexture2D
---@field OnButtonClickedEvent FPC_Base_CardOnButtonClickedEvent
---@field background UTexture2D
---@field bExitMenuOnClicked boolean
---@field bPlayFadeOut boolean
---@field bHasTutorial boolean
---@field bSetCenterAlignment boolean
---@field bTutorialType EGameActivityType
---@field bHasFirstTimeTutorial boolean
---@field bFirstTimeTutorialTag FGameplayTag
local UPC_Base_Card = {}



---@class UPC_DeliveryStatus : UGSSInnerWidget
---@field Vehicle TSoftClassPtr<AActor>
local UPC_DeliveryStatus = {}

---@param IsDeliveryOnTheRoad boolean
---@param bRoadBack boolean
function UPC_DeliveryStatus:StartDeliveryAnimation(IsDeliveryOnTheRoad, bRoadBack) end
---@param InVehicle TSoftClassPtr<AActor>
function UPC_DeliveryStatus:OnVehicleLoaded(InVehicle) end
function UPC_DeliveryStatus:NativeConstruct() end
---@param VehicleName FName
function UPC_DeliveryStatus:InitializeDeliveryStatus(VehicleName) end
---@param Time FTimeStruct
function UPC_DeliveryStatus:CheckForDeliveryStatus(Time) end


---@class UPC_FuelOrder : UPcBaseTab
---@field Button100 UFloatButton
---@field Button200 UFloatButton
---@field Button500 UFloatButton
---@field WBP_ShopOrder_Animation UPC_DeliveryStatus
---@field ReFuelButton UGSSButton
---@field ResetOrderButton UGSSButton
---@field PriceChartButton UButton
---@field GalonsAmmountTXT UTextBlock
---@field ToPayAmmount_TXT UTextBlock
---@field FuelAmmountAirport UTextBlock
---@field FuelAmmountGasStation UTextBlock
---@field TodayPrice_TXT UTextBlock
---@field VehicleToSpawn FName
---@field AmountToOrder float
---@field TodayCost float
---@field MagazineType EFuelMagazine
---@field TargetInventory UInventoryComponent
local UPC_FuelOrder = {}

function UPC_FuelOrder:UpdateTexts() end
---@param InValue float
function UPC_FuelOrder:UpdateStationFuel(InValue) end
---@param InValue float
function UPC_FuelOrder:UpdateAirportFuel(InValue) end
function UPC_FuelOrder:TryOrderFuel() end
function UPC_FuelOrder:ShowPriceChart() end
function UPC_FuelOrder:SetTargetInventory() end
---@param InFuel EFuelMagazine
function UPC_FuelOrder:SetCurrentFuelType(InFuel) end
function UPC_FuelOrder:ResetOrder() end
---@param Vehicle TSoftClassPtr<AActor>
function UPC_FuelOrder:OrderFuel(Vehicle) end
---@param InValue float
function UPC_FuelOrder:OnFuelAdded(InValue) end
---@return EFuelMagazine
function UPC_FuelOrder:GetCurentFuelType() end


---@class UPC_GarbageDeliveryTab : UPcBaseTab
---@field WBP_ShopOrder_Animation UPC_DeliveryStatus
---@field VehicleRowName FName
---@field GarbageTruckButton UButton
local UPC_GarbageDeliveryTab = {}

function UPC_GarbageDeliveryTab:TryOrderGarbageCollector() end
---@param Vehicle TSoftClassPtr<AActor>
function UPC_GarbageDeliveryTab:OrderGarbageCollector(Vehicle) end
function UPC_GarbageDeliveryTab:NativeConstruct() end


---@class UPC_Mail : UPcBaseTab
---@field ClassToCreate TSoftClassPtr<UPC_Mail_Position>
---@field MailsWrapBox UWrapBox
---@field MailDescription UPC_Mail_Description
local UPC_Mail = {}

---@param Button URefButton
---@param Mail UUserWidget
function UPC_Mail:OpenMail(Button, Mail) end


---@class UPC_Mail_Description : UGSSInnerWidget
---@field Title_TXT UTextBlock
---@field MAIL_DESCRIPTION UTextBlock
local UPC_Mail_Description = {}

---@param MailClass TSubclassOf<UGSSMail>
function UPC_Mail_Description:SetDescription(MailClass) end
function UPC_Mail_Description:NativeConstruct() end


---@class UPC_Mail_Position : UGSSInnerWidget
---@field MailStruct FQuestHistory
---@field TIME_TXT UTextBlock
---@field TXT_Day UTextBlock
---@field NAME_TXT UTextBlock
---@field TIME_TXT_MINUTES UTextBlock
---@field Visual_Respond_Open UImage
---@field Visual_Respond_Close UImage
---@field Action_ButtonRef URefButton
---@field Index int32
local UPC_Mail_Position = {}

---@param InMailStruct FQuestHistory
---@param InIndex int32
function UPC_Mail_Position:SetData(InMailStruct, InIndex) end
function UPC_Mail_Position:RefreshImage() end
function UPC_Mail_Position:InitializeData() end


---@class UPC_MoneyTransfer : UPcBaseTab
local UPC_MoneyTransfer = {}

---@param Amount int32
---@param TargetLevelName FString
function UPC_MoneyTransfer:TransferMoney(Amount, TargetLevelName) end


---@class UPC_OrderList : UGSSInnerWidget
---@field OrderBasket TArray<FBasketItemStruct>
---@field OrderCards TArray<FCollectibleCardStruct>
---@field OrderListScroll UScrollBox
---@field BuyButton UButton
---@field OrderCost UTextBlock
---@field CappacityRef UTextBlock
---@field TotalSpaceRef UTextBlock
---@field MagazineCapacityRef UTextBlock
---@field AirportTotalSpaceRef UTextBlock
---@field AirportMagazineCapacityRef UTextBlock
---@field DeliveryCost int32
---@field DeliveryTreshold int32
---@field OnBuyButton FPC_OrderListOnBuyButton
---@field OrderPositionClass TSoftClassPtr<UPC_OrderList_Position>
---@field VehicleToSpawn FName
---@field Category ECategoryFilter
local UPC_OrderList = {}

---@param DisplayFee boolean
---@param DisplayNoFee boolean
function UPC_OrderList:UpdateDeliveryFee(DisplayFee, DisplayNoFee) end
function UPC_OrderList:UpdateCardScroll() end
function UPC_OrderList:UpdateBasket() end
function UPC_OrderList:TryOrderProducts() end
---@param OrderPresetButton UPC_OrderPreset
function UPC_OrderList:SavePreset(OrderPresetButton) end
---@param CardStruct FCollectibleCardStruct
function UPC_OrderList:RemoveCard(CardStruct) end
---@param Vehicle TSoftClassPtr<AActor>
---@param PlayerState AGSSPlayerState
---@param Player AGSSPlayerCharacter
function UPC_OrderList:OrderProducts(Vehicle, PlayerState, Player) end
function UPC_OrderList:NativeDestruct() end
function UPC_OrderList:NativeConstruct() end
function UPC_OrderList:LoadPreviousPreset() end
---@param OrderPresetButton UPC_OrderPreset
function UPC_OrderList:LoadPreset(OrderPresetButton) end
---@return TArray<FBasketItemStruct>
function UPC_OrderList:GetItemsInBasket() end
---@return TArray<FCollectibleCardStruct>
function UPC_OrderList:GetCardsBasket() end
---@param WasFeeAdded boolean
---@return int32
function UPC_OrderList:GetBasketCost(WasFeeAdded) end
---@return int32
function UPC_OrderList:GetBasketCapacity() end
function UPC_OrderList:BuyCards() end
---@param ItemToAdd FBasketItemStruct
function UPC_OrderList:AddToShoppingBasket(ItemToAdd) end
function UPC_OrderList:AddNewBasketPosition() end
---@param CardStruct FCollectibleCardStruct
---@param Collectible TSubclassOf<ACollectible>
function UPC_OrderList:AddCardToShopingBasket(CardStruct, Collectible) end


---@class UPC_OrderList_Position : UGSSInnerWidget
---@field OnAmmountChanged FPC_OrderList_PositionOnAmmountChanged
---@field OnCardRemoved FPC_OrderList_PositionOnCardRemoved
local UPC_OrderList_Position = {}

---@param Item FBasketItemStruct
function UPC_OrderList_Position:UpdatePosition(Item) end
---@param Card FCollectibleCardStruct
function UPC_OrderList_Position:UpdateCardPosition(Card) end


---@class UPC_OrderPreset : UGSSInnerWidget
---@field OrderPreset FOrderPreset
---@field ButtonIndex int32
local UPC_OrderPreset = {}

function UPC_OrderPreset:UpdateText() end
---@param BasketItems TArray<FBasketItemStruct>
function UPC_OrderPreset:SetPreset(BasketItems) end
---@return FOrderPreset
function UPC_OrderPreset:GetOrderPreset() end


---@class UPC_PaintingTab : UPcBaseTab
---@field GarbageTruckButton UButton
---@field PaintingCost UTextBlock
---@field RepaintCost float
---@field WBP_ShopOrder_Animation UPC_DeliveryStatus
---@field VehicleRowName FName
local UPC_PaintingTab = {}

function UPC_PaintingTab:TryOrderPainting() end
---@param Vehicle TSoftClassPtr<AActor>
---@param PS AGSSPlayerState
function UPC_PaintingTab:OrderPainting(Vehicle, PS) end
function UPC_PaintingTab:NativeConstruct() end


---@class UPC_ScoresTab : UPcBaseTab
local UPC_ScoresTab = {}


---@class UPC_Tool : UGSSInnerWidget
---@field Price UTextBlock
---@field ToolIcon UImage
---@field ToolName UTextBlock
---@field Main_Button UGSSButton
---@field ToolStruct FBasketItemStruct
---@field KeyItemStruct FKeyItemUnlock
local UPC_Tool = {}

function UPC_Tool:TryUnlockItem() end
---@param InToolStruct FBasketItemStruct
function UPC_Tool:SetWidgetData(InToolStruct) end
---@param bIsUnlocked EToolItemState
function UPC_Tool:OnStateChecked(bIsUnlocked) end
---@param Item FBasketItemStruct
function UPC_Tool:OnItemUnlocked(Item) end
---@return boolean
function UPC_Tool:CheckIsUnlockedInGameState() end
---@return EToolItemState
function UPC_Tool:CheckIsItemUnlocked() end
---@return boolean
function UPC_Tool:CheckAllowQuest() end
---@return boolean
function UPC_Tool:CheckAllowBuildingLevel() end


---@class UPC_ToolsTab : UPcBaseTab
---@field ToolWidgetClass TSoftClassPtr<UPC_Tool>
---@field ToolsWrap UWrapBox
local UPC_ToolsTab = {}

function UPC_ToolsTab:CreateToolWidgets() end


---@class UPC_TopMenuButton : UGSSInnerWidget
---@field ButtonsData UDA_MainPCButton
---@field Menu_Button UGSSButton
---@field TabName UTextBlock
---@field Icon_IMG UImage
---@field OnButtonClicked FPC_TopMenuButtonOnButtonClicked
local UPC_TopMenuButton = {}

---@param bIsActive boolean
function UPC_TopMenuButton:SetSelectedButton(bIsActive) end
---@param bIsHovered boolean
function UPC_TopMenuButton:SetHovered(bIsHovered) end
---@param InData UDA_MainPCButton
function UPC_TopMenuButton:SetButtonsData(InData) end
function UPC_TopMenuButton:CustomOnClicked() end
function UPC_TopMenuButton:CheckForCreateRedDot() end


---@class UPC_Upgrades : UPcBaseTab
local UPC_Upgrades = {}

---@param bInLmbDown boolean
function UPC_Upgrades:SetLMBState(bInLmbDown) end
---@param TechnologyToHightLight UTechnologyAsset
function UPC_Upgrades:HightlightSpecificUpgrade(TechnologyToHightLight) end


---@class UPartSelection : UGSSBaseWidget
---@field SlotType EJunkyardCarPartType
---@field bIsAssembling boolean
---@field OnPartSelected FPartSelectionOnPartSelected
---@field OpenCase EStorageOpenCase
local UPartSelection = {}

---@param CarWreckRef AJunkyardCarWreckCustomizable
---@param InOpenCase EStorageOpenCase
function UPartSelection:InitializeWidget(CarWreckRef, InOpenCase) end


---@class UPartsDisassemblyContract : UBasicContract
local UPartsDisassemblyContract = {}


---@class UPassiveIncomePopup : UUserWidget
local UPassiveIncomePopup = {}

---@param RecievedIncome FSavedPassiveIncome
function UPassiveIncomePopup:SetupPopup(RecievedIncome) end


---@class UPcBaseTab : UGSSBaseWidget
---@field UseFullScreenOverlay boolean
---@field MainPCREF UMainPC
local UPcBaseTab = {}

function UPcBaseTab:ResetFocuse() end
function UPcBaseTab:OnTabOpened() end
function UPcBaseTab:OnTabChangedToAnother() end
function UPcBaseTab:OnTabChanged() end
function UPcBaseTab:GamePadLevelUpButton() end


---@class UPhoneCallInfoDataAsset : UDataAsset
---@field CallWidget TSoftClassPtr<UPhoneNotificationWidget>
---@field PhoneCalls TArray<FPhoneCallInfo>
local UPhoneCallInfoDataAsset = {}



---@class UPhoneCallObjective : UInteractionObjective
---@field CallType EPhoneCallType
---@field PhoneBooth TSoftObjectPtr<APhoneBooth>
---@field PhoneCallInfoDataAsset UPhoneCallInfoDataAsset
---@field bShowUncleShelfeAnimation boolean
---@field CachedSoundWave USoundWave
---@field CashedCallWidget TSubclassOf<UPhoneNotificationWidget>
---@field bCanSpawnWidget boolean
local UPhoneCallObjective = {}

function UPhoneCallObjective:StartRinging() end
---@param SoundWaveSoft TSoftObjectPtr<USoundWave>
---@param CallWidgetSoft TSoftClassPtr<UPhoneNotificationWidget>
function UPhoneCallObjective:CasheLoadedAssets(SoundWaveSoft, CallWidgetSoft) end


---@class UPhoneEnums : UObject
local UPhoneEnums = {}


---@class UPhoneNotificationWidget : UUserWidget
---@field CallType EPhoneCallType
---@field PhoneCallInfoDataAsset UPhoneCallInfoDataAsset
---@field bShowUncleShelfeAnimation boolean
---@field PhoneCall_IMG UImage
---@field PhoneCallDescription_TXT UTextBlock
local UPhoneNotificationWidget = {}

---@param PhoneCallType EPhoneCallType
---@param _bShowUncleShelfeAnimation boolean
function UPhoneNotificationWidget:InitializeWidget(PhoneCallType, _bShowUncleShelfeAnimation) end
---@param PhoneCallData FPhoneCallInfo
function UPhoneNotificationWidget:FillWidgets(PhoneCallData) end
---@param PhoneCallType EPhoneCallType
function UPhoneNotificationWidget:FillPhoneCallInfo(PhoneCallType) end


---@class UPilotsAnimInstance : UNopeAnimInstance
---@field ActionRepeatAmount int32
---@field JoeSittingState EJoeSittingState
---@field PilotMontageState EMontagePilotState
---@field MontageCancelReason EMontageCancelReason
---@field WaterMovementPlayRate float
local UPilotsAnimInstance = {}

---@param NewSpeed float
function UPilotsAnimInstance:SetWaterMovementPlayRate(NewSpeed) end
---@param NewState EJoeSittingState
function UPilotsAnimInstance:SetJoeSittingState(NewState) end
---@param NewInt int32
function UPilotsAnimInstance:SetActionRepeatAmount(NewInt) end
function UPilotsAnimInstance:OnMontageStateChanged() end
---@param CancelReason EMontageCancelReason
function UPilotsAnimInstance:OnMontageCancelled(CancelReason) end
---@return float
function UPilotsAnimInstance:GetWaterMovementPlayRate() end
---@return EMontagePilotState
function UPilotsAnimInstance:GetPilotMontageState() end
---@return EMontageCancelReason
function UPilotsAnimInstance:GetMontageCancleReason() end
---@return EJoeSittingState
function UPilotsAnimInstance:GetJoeSittingState() end
---@return int32
function UPilotsAnimInstance:GetActionRepeatAmount() end
---@param NewPilotMontageState EMontagePilotState
function UPilotsAnimInstance:ChangePilotMontageState(NewPilotMontageState) end


---@class UPlayCooKooGameAction : UGameAction
---@field CooKooClock TSoftObjectPtr<ADecorationBase>
local UPlayCooKooGameAction = {}



---@class UPlayLevelSequanceGameAction : UGameAction
local UPlayLevelSequanceGameAction = {}


---@class UPlayerAnimInstance : UAnimInstance
---@field bStinkbomb boolean
---@field StartingLocation FVector
---@field DesiredLocation FVector
---@field StartingRotation FRotator
---@field DesiredRotation FRotator
---@field StoredForwardVector FVector
---@field StoredRightVector FVector
---@field StoredUpVector FVector
---@field SpawnedActor AActor
local UPlayerAnimInstance = {}

---@param NewVector FVector
function UPlayerAnimInstance:SetStoredUpVector(NewVector) end
---@param NewVector FVector
function UPlayerAnimInstance:SetStoredRightVector(NewVector) end
---@param NewVector FVector
function UPlayerAnimInstance:SetStoredForwardVector(NewVector) end
---@param bNewState boolean
function UPlayerAnimInstance:SetStinkbomb(bNewState) end
---@param NewRotation FRotator
function UPlayerAnimInstance:SetStartingRotation(NewRotation) end
---@param NewLocation FVector
function UPlayerAnimInstance:SetStartingLocation(NewLocation) end
---@param NewActor AActor
function UPlayerAnimInstance:SetSpawnedActor(NewActor) end
---@param NewRotation FRotator
function UPlayerAnimInstance:SetDesiredRotation(NewRotation) end
---@param NewLocation FVector
function UPlayerAnimInstance:SetDesiredLocation(NewLocation) end
---@return FVector
function UPlayerAnimInstance:GetStoredUpVector() end
---@return FVector
function UPlayerAnimInstance:GetStoredRightVector() end
---@return FVector
function UPlayerAnimInstance:GetStoredForwardVector() end
---@return boolean
function UPlayerAnimInstance:GetStinkbomb() end
---@return FRotator
function UPlayerAnimInstance:GetStartingRotation() end
---@return FVector
function UPlayerAnimInstance:GetStartingLocation() end
---@return AActor
function UPlayerAnimInstance:GetSpawnedActor() end
---@return FRotator
function UPlayerAnimInstance:GetDesiredRotation() end
---@return FVector
function UPlayerAnimInstance:GetDesiredLocation() end


---@class UPlayerAnimationManagerBase : UActorComponent
local UPlayerAnimationManagerBase = {}

function UPlayerAnimationManagerBase:SecondBikerTrigger() end
function UPlayerAnimationManagerBase:PrologueEnd() end
function UPlayerAnimationManagerBase:FirstBikerTrigger() end


---@class UPlayerText_DialogueNode : UDialogueNode
local UPlayerText_DialogueNode = {}


---@class UPopularityRewardsDataAsset : UDataAsset
---@field RewardPerLevel TMap<int32, FPopularityRewardData>
local UPopularityRewardsDataAsset = {}



---@class UPostGameChallengesDataAsset : UDataAsset
---@field LateGameChallengesLowPopularity TArray<FQuestChallenge>
---@field LateGameChallengesHighPopularity TArray<FQuestChallenge>
---@field UseHighPopularityChallenges boolean
---@field HighPopularityLevelTreshold int32
---@field MinTimeBetweenPostGameChallenges float
---@field MaxTimeBetweenPostGameChallenges float
---@field TimeUntilFirstChallenge float
local UPostGameChallengesDataAsset = {}



---@class UPostapoEnums_Actions : UObject
local UPostapoEnums_Actions = {}


---@class UPostapoEnums_Dialogues : UObject
local UPostapoEnums_Dialogues = {}


---@class UPostapoSkeletalMeshComponent : USkeletalMeshComponent
---@field ChosenMeshFOV float
local UPostapoSkeletalMeshComponent = {}



---@class UPrintStringGameAction : UGameAction
---@field Message FString
---@field TimeOnScreen float
local UPrintStringGameAction = {}



---@class UQuestBase : UDataAsset
---@field QuestName FText
---@field QuestDescription FText
---@field CustomParameters TArray<FCustomTextVar>
---@field DescriptionKeybinds TArray<FKeybindInformation>
---@field DescriptionGamepadKeybinds TArray<FGamepadInformation>
---@field QuestTip FText
---@field TipDescriptionKeybinds TArray<FKeybindInformation>
---@field TipGamepadKeybinds TArray<FGamepadInformation>
---@field ObjectiveOrder TArray<TSoftClassPtr<UObjectiveBase>>
---@field bCanTriggerRetroactiveQuest boolean
local UQuestBase = {}



---@class UQuestEnums : UBlueprintFunctionLibrary
local UQuestEnums = {}


---@class UQuestHolderWidget : UUserWidget
local UQuestHolderWidget = {}

---@param QuestStarted UQuestBase
function UQuestHolderWidget:OnQuestStarted(QuestStarted) end
---@param QuestFinished UQuestBase
function UQuestHolderWidget:OnQuestFinished(QuestFinished) end
---@param ObjectiveStarted UObjectiveBase
function UQuestHolderWidget:OnObjectiveStarted(ObjectiveStarted) end
---@param ObjectiveFinished UObjectiveBase
function UQuestHolderWidget:OnObjectiveFinished(ObjectiveFinished) end


---@class UQuestInfoWidget : UUserWidget
---@field CurrentQuest UQuestBase
---@field CurrentObjective UObjectiveBase
---@field ProgressHorizontalBox UHorizontalBox
---@field CurrentProgressText UTextBlock
---@field DescriptionText UTextBlock
---@field DescriptionTextRich URichTextBlock
---@field ObjectiveProgressBar UProgressBar
---@field PlusOneAnimation UWidgetAnimation
local UQuestInfoWidget = {}

---@param _CurrentQuest UQuestBase
function UQuestInfoWidget:SetQuestInfo(_CurrentQuest) end
function UQuestInfoWidget:RefreshQuestInfo() end
---@param CountableObjective UCountableObjectiveBase
---@param CurrentValue int32
---@param bShowAnim boolean
function UQuestInfoWidget:OnCountableObjectiveProgressUpdated(CountableObjective, CurrentValue, bShowAnim) end
---@param _CurrentQuest UQuestBase
function UQuestInfoWidget:InitializeWidget(_CurrentQuest) end


---@class UQuestLineBase : UDataAsset
---@field RelatedDLC EDLCName
---@field QuestLineName FText
---@field QuestlineIcon TSoftObjectPtr<UTexture2D>
---@field QuestOrder TArray<UQuestBase>
---@field RetroactiveQuestOrder TArray<FRetroactiveQuest>
local UQuestLineBase = {}



---@class UQuestSubsystem : UWorldSubsystem
---@field OnQuestLineStarted FQuestSubsystemOnQuestLineStarted
---@field OnQuestLineFinished FQuestSubsystemOnQuestLineFinished
---@field OnQuestStarted FQuestSubsystemOnQuestStarted
---@field OnQuestFinished FQuestSubsystemOnQuestFinished
---@field OnObjectiveStarted FQuestSubsystemOnObjectiveStarted
---@field OnObjectiveFinished FQuestSubsystemOnObjectiveFinished
---@field OnCountableObjectiveProgressUpdated FQuestSubsystemOnCountableObjectiveProgressUpdated
---@field OnNewQuestLineFollowed FQuestSubsystemOnNewQuestLineFollowed
---@field OnAllQuestLinesFinished FQuestSubsystemOnAllQuestLinesFinished
---@field OnAllQuestLinesLoaded FQuestSubsystemOnAllQuestLinesLoaded
---@field OnQuestsLoaded FQuestSubsystemOnQuestsLoaded
---@field OnSystemInitialized FQuestSubsystemOnSystemInitialized
---@field OnAnyQuestLoaded FQuestSubsystemOnAnyQuestLoaded
---@field ActiveQuestLines TArray<UActiveQuestLine>
---@field FinishedObjectives TArray<TSoftClassPtr<UObjectiveBase>>
---@field RetroactiveQuestReturns TArray<TSoftClassPtr<UQuestBase>>
---@field bIsSystemInitialized boolean
---@field bIsMainQuestLineCompleted boolean
---@field bDoingOnlyRetroactiveQuestLines boolean
---@field WorldPtr UWorld
---@field QuestlinesToLoadAmount int32
local UQuestSubsystem = {}

---@return boolean
function UQuestSubsystem:TryToSetCurrentQuestLine() end
---@param QuestLineBase UQuestLineBase
function UQuestSubsystem:TryStartRetroactiveQuestLine(QuestLineBase) end
---@param QuestLine UQuestLineBase
---@param bRunStartQuestLineAction boolean
function UQuestSubsystem:TranslateQuestLineAfterFinished(QuestLine, bRunStartQuestLineAction) end
---@param InQuestlinesToLoad int32
function UQuestSubsystem:SetAmountOfLoadedQuestlines(InQuestlinesToLoad) end
function UQuestSubsystem:OnWorldBeginPlay() end
---@param QuestStarted UQuestBase
function UQuestSubsystem:OnQuestStartedInternal(QuestStarted) end
---@param NewSaveSystemQuestLinesToLoad TArray<FSoftObjectPath>
function UQuestSubsystem:OnQuestsLoadedFromSave(NewSaveSystemQuestLinesToLoad) end
---@param QuestFinished UQuestBase
function UQuestSubsystem:OnQuestFinishedInternal(QuestFinished) end
---@param ObjectiveStarted UObjectiveBase
function UQuestSubsystem:OnObjectiveStartedInternal(ObjectiveStarted) end
---@param ObjectiveFinished UObjectiveBase
function UQuestSubsystem:OnObjectiveFinishedInternal(ObjectiveFinished) end
function UQuestSubsystem:OnGameLoadingStarted() end
---@param DlcQuestline EDLCName
---@return boolean
function UQuestSubsystem:IsQuestlineStarted(DlcQuestline) end
---@param DlcQuestline EDLCName
---@return boolean
function UQuestSubsystem:IsQuestlineFinished(DlcQuestline) end
---@param Quest UQuestBase
---@return boolean
function UQuestSubsystem:IsQuestCurrentlyFollowed(Quest) end
---@param Objective UObjectiveBase
---@return boolean
function UQuestSubsystem:IsObjectiveFollowedInAnyQuestline(Objective) end
---@param Objective UObjectiveBase
---@return boolean
function UQuestSubsystem:IsObjectiveCurrentlyFollowed(Objective) end
---@param QuestToCheck UQuestBase
---@return boolean
function UQuestSubsystem:HasQuestBeenCompletedNoHistory(QuestToCheck) end
---@param QuestToCheck UQuestBase
---@return boolean
function UQuestSubsystem:HasQuestBeenCompleted(QuestToCheck) end
---@param ObjectiveToCheck TSoftClassPtr<UObjectiveBase>
---@return boolean
function UQuestSubsystem:HasObjectiveBeenCompleted(ObjectiveToCheck) end
---@param QuestToCheck UQuestBase
---@return boolean
function UQuestSubsystem:HasMainQuestBeenCompletedInThePast(QuestToCheck) end
---@param bQuestlineFinished boolean
function UQuestSubsystem:HandleDLCsQuestLinesForFinishedGame(bQuestlineFinished) end
---@return UActiveQuestLine
function UQuestSubsystem:GetFollowedQuestLine() end
---@return UQuestBase
function UQuestSubsystem:GetFollowedQuest() end
---@param Quest UQuestBase
---@return UObjectiveBase
function UQuestSubsystem:GetActiveObjective(Quest) end
---@param DlcQuestline EDLCName
---@return boolean
function UQuestSubsystem:FollowQuestLine(DlcQuestline) end
---@param Objective UObjectiveBase
function UQuestSubsystem:FollowObjectiveQuestline(Objective) end
---@return boolean
function UQuestSubsystem:FollowNextQuestLine() end
---@param QuestLineToFollow UQuestLineBase
function UQuestSubsystem:FollowActiveQuestLine(QuestLineToFollow) end
function UQuestSubsystem:Debug_SkipQuest() end


---@class UQuestTipWidget : UUserWidget
---@field TipDescriptionText UTextBlock
---@field TipDescriptionRich URichTextBlock
---@field GameStateRef AGSSGameState
---@field TipPrefix FText
---@field TipQuest UQuestBase
local UQuestTipWidget = {}

---@param NewTipQuest UQuestBase
function UQuestTipWidget:SetTipInfo(NewTipQuest) end
function UQuestTipWidget:RefreshTipInfo() end


---@class URVBookingManager : UActorComponent
---@field OnInterestedCustomersUpdated FRVBookingManagerOnInterestedCustomersUpdated
---@field OnBookingViewUpdated FRVBookingManagerOnBookingViewUpdated
---@field OnBookedCustomersUpdated FRVBookingManagerOnBookedCustomersUpdated
---@field OnCheckOutNeeded FRVBookingManagerOnCheckOutNeeded
---@field OnSummaryClaimed FRVBookingManagerOnSummaryClaimed
---@field OnCustomerCheckedOut FRVBookingManagerOnCustomerCheckedOut
---@field OnPressedInterestedCustomerAccept FRVBookingManagerOnPressedInterestedCustomerAccept
---@field OnCustomerBookedIn FRVBookingManagerOnCustomerBookedIn
---@field OnPressedBookedCustomerDismiss FRVBookingManagerOnPressedBookedCustomerDismiss
---@field OnBookingActionError FRVBookingManagerOnBookingActionError
---@field OnBookingCampSpotSelected FRVBookingManagerOnBookingCampSpotSelected
---@field OnInterestedCustomersRefreshTimeUpdated FRVBookingManagerOnInterestedCustomersRefreshTimeUpdated
---@field InterestedCustomers TArray<URVCustomerData>
---@field CurrentBookingLevel int32
---@field bIsSummaryWindowOpen boolean
---@field bWereCustomerNamesLoaded boolean
---@field bWasBookingToolInitiated boolean
---@field bIsAutoCheckoutEnabled boolean
---@field bCanAutorefreshcustomers boolean
---@field bSkipDismissPopup boolean
---@field bCanGenerateNewCustomers boolean
---@field bCanGenerateNewCustomersAfterBooking boolean
---@field CustomerNamePool TArray<FName>
---@field FreedCustomerNames TArray<FName>
---@field SummaryCustomerData URVCustomerData
---@field SummaryCampSpot ARVCampSpot
---@field InterestedCustomersRefreshTime FTimeStruct
---@field CurrentBookingView ERVBookingView
---@field RVCampManager ARVCampManager
---@field BookingSettings URVBookingSettings
---@field PlayerState AGSSPlayerState
---@field AutoBookingLoopTimerHandle FTimerHandle
---@field AutoBookingLoopInterval float
local URVBookingManager = {}

---@param Success boolean
function URVBookingManager:TryRefreshInterestedCustomers(Success) end
function URVBookingManager:TryPerformCheckOut() end
function URVBookingManager:TryInitBookingTool() end
---@param CustomerData URVCustomerData
---@param CampSpot ARVCampSpot
---@param Success boolean
---@param bSkipPenalty boolean
function URVBookingManager:TryDismissCustomer(CustomerData, CampSpot, Success, bSkipPenalty) end
---@param Success boolean
---@param bSkipPenalty boolean
function URVBookingManager:TryDismissAllCustomers(Success, bSkipPenalty) end
---@param CustomerData URVCustomerData
---@param CampSpot ARVCampSpot
---@param Success boolean
function URVBookingManager:TryBookCustomer(CustomerData, CampSpot, Success) end
---@param NewBookingView ERVBookingView
function URVBookingManager:SetCurrentBookingView(NewBookingView) end
function URVBookingManager:SendAllCampersHome() end
---@param CustomerData URVCustomerData
---@param CampSpot ARVCampSpot
function URVBookingManager:ScheduleCamperSpawn(CustomerData, CampSpot) end
---@param UpdatedTime FTimeStruct
function URVBookingManager:OnTimeUpdated(UpdatedTime) end
---@param DLCName EDLCName
---@param bNewActivated boolean
function URVBookingManager:OnDLCActivationStateChanged(DLCName, bNewActivated) end
---@return boolean
function URVBookingManager:IsCheckOutNeeded() end
---@param CustomerData URVCustomerData
---@param CampSpot ARVCampSpot
---@param Camper URVCamperComponent
---@param Reason ERVCamperLeftReason
function URVBookingManager:HandleCamperLeft(CustomerData, CampSpot, Camper, Reason) end
---@param CustomerData URVCustomerData
---@param CampSpot ARVCampSpot
---@param Camper URVCamperComponent
function URVBookingManager:HandleCamperArrived(CustomerData, CampSpot, Camper) end
function URVBookingManager:HandleBookingUpgraded() end
---@return ERVBookingView
function URVBookingManager:GetCurrentBookingView() end
---@param SpecificCustomers TArray<FRVSpecificCustomer>
---@param FillRandomCustomers boolean
---@return TArray<URVCustomerData>
function URVBookingManager:GenerateSpecificCustomers(SpecificCustomers, FillRandomCustomers) end
---@param SpecificCustomer FRVSpecificCustomer
---@return URVCustomerData
function URVBookingManager:GenerateSpecificCustomer(SpecificCustomer) end
---@param SleepoverGuestData FRVSleepoverGuestData
---@return TMap<ERVResource, int32>
function URVBookingManager:GenerateRandomResourceCosts(SleepoverGuestData) end
---@param MusicCount int32
---@return TArray<FGameplayTag>
function URVBookingManager:GenerateRandomMusicTypes(MusicCount) end
---@param ServiceCount int32
---@return TArray<FGameplayTag>
function URVBookingManager:GenerateRandomGuestServices(ServiceCount) end
function URVBookingManager:GenerateRandomCustomers() end
---@return URVCustomerData
function URVBookingManager:GenerateRandomCustomer() end
---@return ERVGuestType
function URVBookingManager:GenerateGuestType() end
---@return FName
function URVBookingManager:GenerateGuestName() end
function URVBookingManager:EnableDebugAutoBooking() end
function URVBookingManager:DisableDebugAutoBooking() end
---@param SummaryData FRvSummaryData
---@param IsSummaryValid boolean
function URVBookingManager:CollectSummaryData(SummaryData, IsSummaryValid) end
---@param SummaryData FRvSummaryData
function URVBookingManager:ClaimSummary(SummaryData) end
---@param CustomerData URVCustomerData
---@param CampSpot ARVCampSpot
---@return boolean
function URVBookingManager:CanBookCustomer(CustomerData, CampSpot) end
function URVBookingManager:AutoBookingLoop() end


---@class URVBookingSettings : UPrimaryDataAsset
---@field GuestCampers UDataTable
---@field InterestedGuestsCountPerLevel TArray<int32>
---@field InterestedGuestsRefreshTimeHours int32
---@field RefreshCustomersCost int32
---@field DismissCustomersPenalty int32
---@field RubyTributePercentage float
---@field GuestTypeProperties FRVGuestTypeProperties
---@field FullServiceMoneyBonus int32
---@field FullServiceTrustPointsBonus int32
---@field OvernightGuestTypes TArray<FRVSleepoverGuestData>
---@field MinMaxResourceRequiredRange FInt32Range
---@field BaseConcertMoneyReward int32
---@field ConcertComboRewards TArray<FRVConcertReward>
---@field ServiceCountRange FInt32Range
---@field MusicLikesCountRange FInt32Range
---@field GuestNames TArray<FName>
local URVBookingSettings = {}

---@return int32
function URVBookingSettings:GetMaxGuestCountLevel() end
---@return int32
function URVBookingSettings:GetMaxGuestCount() end
---@param GuestType ERVGuestType
---@return FRVGuestTypeProperties
function URVBookingSettings:GetGuestTypeProperties(GuestType) end
---@param Level int32
---@return int32
function URVBookingSettings:GetGuestCountAtLevel(Level) end


---@class URVCampFunctionLibrary : UBlueprintFunctionLibrary
local URVCampFunctionLibrary = {}

---@param WorldContextObject UObject
---@return ARVServiceUpgrader
function URVCampFunctionLibrary:GetServiceUpgrader(WorldContextObject) end
---@param Camper AActor
---@return URVCamperComponent
function URVCampFunctionLibrary:GetRVCamperComponent(Camper) end
---@param WorldContextObject UObject
---@return ARVCampManager
function URVCampFunctionLibrary:GetDLCRVCampManager(WorldContextObject) end
---@param WorldContextObject UObject
---@return ARVBuildingLocalizer
function URVCampFunctionLibrary:GetBuildingLocalizer(WorldContextObject) end
---@param WorldContextObject UObject
---@param OutTag FGameplayTag
---@return boolean
function URVCampFunctionLibrary:GetActiveMinigameTag(WorldContextObject, OutTag) end
---@param WorldContextObject UObject
---@param GuestServiceTag FGameplayTag
---@return URvMinigameBaseSettings
function URVCampFunctionLibrary:FindSettings(WorldContextObject, GuestServiceTag) end


---@class URVCamperComponent : UActorComponent
---@field OnCamperStateChanged FRVCamperComponentOnCamperStateChanged
---@field OnGuestServiceCompleted FRVCamperComponentOnGuestServiceCompleted
---@field OnConcertCompleted FRVCamperComponentOnConcertCompleted
---@field OnCurrentStayTimeUpdated FRVCamperComponentOnCurrentStayTimeUpdated
---@field CustomerData URVCustomerData
---@field CampSpot ARVCampSpot
---@field CamperVehicle AGSSWheeledVehicle
---@field CamperDriver AAICharacterBase
---@field bJustLeftCampSpot boolean
---@field IsCampSpotReached boolean
---@field bCanLeaveCampSpot boolean
---@field ServiceStreakBonuses int32
---@field CompletedServices TArray<FRVCompletedService>
---@field bIsConcertCompleted boolean
---@field ConcertCompletedMusicType FGameplayTag
---@field CurrentStayTime FTimeStruct
---@field CamperState ERVCamperState
---@field RVCampManager ARVCampManager
---@field GameState AGSSGameState
---@field ServiceUpgrader ARVServiceUpgrader
local URVCamperComponent = {}

---@param NewStayTime FTimeStruct
function URVCamperComponent:UpdateCurrentStayTime(NewStayTime) end
function URVCamperComponent:TryStopReserveCampSpot() end
function URVCamperComponent:SpawnCustomersForServices() end
---@param CamperCustomerData URVCustomerData
---@param Driver AAICharacterBase
function URVCamperComponent:SetUpAfterSpawn(CamperCustomerData, Driver) end
---@param CamperCustomerData URVCustomerData
---@param Driver AAICharacterBase
function URVCamperComponent:SetUpAfterLoad(CamperCustomerData, Driver) end
---@param IsConcertCompleted boolean
---@param MusicType FGameplayTag
function URVCamperComponent:SetIsConcertCompleted(IsConcertCompleted, MusicType) end
---@param UpdatedTime FTimeStruct
function URVCamperComponent:OnTimeUpdated(UpdatedTime) end
---@param CamperLeftReason ERVCamperLeftReason
function URVCamperComponent:OnConcertStopped(CamperLeftReason) end
function URVCamperComponent:OnConcertStarted() end
function URVCamperComponent:OnCampSpotReached() end
---@param Reason ERVCamperLeftReason
function URVCamperComponent:LeaveCampSpot(Reason) end
---@param Service FGameplayTag
---@return boolean
function URVCamperComponent:IsServiceCompleted(Service) end
---@param Hours int32
---@param Minutes int32
function URVCamperComponent:GetRemainingStayTimeInHours(Hours, Minutes) end
---@return FTimeStruct
function URVCamperComponent:GetRemainingStayTime() end
---@return boolean
function URVCamperComponent:GetIsConcertCompleted() end
---@param Hours int32
---@param Minutes int32
function URVCamperComponent:GetCurrentStayTimeInHours(Hours, Minutes) end
---@return FTimeStruct
function URVCamperComponent:GetCurrentStayTime() end
---@return FGameplayTag
function URVCamperComponent:GetConcertCompletedMusicType() end
---@return TArray<FRVCompletedService>
function URVCamperComponent:GetCompletedServices() end
---@return ERVCamperState
function URVCamperComponent:GetCamperState() end
---@param Service FGameplayTag
---@param Difficulty EGuestServiceDifficulty
---@param bStreakBonus boolean
---@param bAutocomplete boolean
function URVCamperComponent:CompleteService(Service, Difficulty, bStreakBonus, bAutocomplete) end
---@param NewState ERVCamperState
function URVCamperComponent:ChangeCamperState(NewState) end


---@class URVCampersSettings : UDataAsset
---@field CampersClasses TArray<TSoftClassPtr<AGSSWheeledVehicle>>
local URVCampersSettings = {}



---@class URVChallenge : UObjectiveBase
---@field ChallengeConditions TArray<URVChallengeCondition>
---@field ChallengeFinished boolean
---@field bInitialized boolean
local URVChallenge = {}

---@param UpdatedCondition URVChallengeCondition
function URVChallenge:OnConditionUpdated(UpdatedCondition) end
---@param FinishedCondition URVChallengeCondition
function URVChallenge:OnConditionCompleted(FinishedCondition) end


---@class URVChallengeCondition : UObject
---@field TimeLeft FTimeStruct
---@field TargetCurrent int32
---@field bConditionMet boolean
---@field OnChallengeUpdated FRVChallengeConditionOnChallengeUpdated
---@field OnChallengeFinished FRVChallengeConditionOnChallengeFinished
---@field CamperAmount int32
---@field TimeTrackType ERVChallengeTimeTrackType
---@field ChallengeTarget ERVChallengeTarget
---@field UpdateInterval int32
---@field TimeHours float
---@field StartTime FTimeStruct
---@field TrackedCampers TArray<URVCamperComponent>
---@field WorldPtr UWorld
local URVChallengeCondition = {}

function URVChallengeCondition:UpdateCondition() end
---@param World UWorld
function URVChallengeCondition:StartCondition(World) end
---@param Camper URVCamperComponent
function URVChallengeCondition:OnCamperLeft(Camper) end
---@param Camper URVCamperComponent
function URVChallengeCondition:OnCamperArrived(Camper) end
---@param bSuccess boolean
function URVChallengeCondition:FinishCondition(bSuccess) end


---@class URVChallengeCondition_EarnSomeMoney : URVChallengeCondition
---@field MoneyNeeded float
local URVChallengeCondition_EarnSomeMoney = {}

---@param CharacterMoney float
---@param Difference float
---@param YieldType EEconomyDetailedYieldType
function URVChallengeCondition_EarnSomeMoney:TrackAqquiredMoney(CharacterMoney, Difference, YieldType) end


---@class URVChallenge_CompleteGuestService : URVChallengeCondition
---@field RequiredServiceTag FGameplayTag
---@field Amount int32
local URVChallenge_CompleteGuestService = {}

---@param ServiceTag FGameplayTag
function URVChallenge_CompleteGuestService:TrackCompletedServices(ServiceTag) end


---@class URVConcertManager : UActorComponent
---@field OnConcertStarted FRVConcertManagerOnConcertStarted
---@field OnConcertStopped FRVConcertManagerOnConcertStopped
---@field ConcertData FRvConcertData
---@field bSkipConcertCancelPopup boolean
---@field RVCampManager ARVCampManager
---@field ConcertSettings URVConcertSettings
local URVConcertManager = {}

---@param CamperLeftReason ERVCamperLeftReason
function URVConcertManager:StopConcert(CamperLeftReason) end
---@param ConcertType FGameplayTag
function URVConcertManager:StartConcert(ConcertType) end
---@param GameTime FTimeStruct
function URVConcertManager:OnGameTimeUpdated(GameTime) end
---@param DLCName EDLCName
---@param bNewActivated boolean
function URVConcertManager:OnDLCActivationStateChanged(DLCName, bNewActivated) end
---@return boolean
function URVConcertManager:IsConcertActive() end
---@param MusicType FGameplayTag
---@return int32
function URVConcertManager:GetHighestAmountOfCustomersForAnyMusicTypes(MusicType) end
---@param MusicType FGameplayTag
---@return int32
function URVConcertManager:GetAmountOfMusicCampersOfType(MusicType) end
function URVConcertManager:BindConcertToGameUpdate() end


---@class URVConcertSettings : UPrimaryDataAsset
---@field ConcertTypes TMap<FGameplayTag, FConcertDetails>
---@field Duration int32
---@field Cost int32
---@field MoneyGain float
---@field TrustPointsGain uint16
local URVConcertSettings = {}

---@param WorldContextObject UObject
---@param Tag FGameplayTag
---@return boolean
function URVConcertSettings:IsConcertAvailable(WorldContextObject, Tag) end
---@param ConcertLevel int32
---@return TArray<FGameplayTag>
function URVConcertSettings:GetConcertTypesUnlockedAtLevel(ConcertLevel) end
---@param WorldContextObject UObject
---@return TArray<FGameplayTag>
function URVConcertSettings:GetAvailableConcertTypes(WorldContextObject) end
---@param AmountOfCustomers int32
---@return int32
function URVConcertSettings:GetAmountOfTrustPointsGained(AmountOfCustomers) end
---@param AmountOfCustomers int32
---@return float
function URVConcertSettings:GetAmountOfCashToGain(AmountOfCustomers) end
---@return TArray<FGameplayTag>
function URVConcertSettings:GetAllConcertTypes() end


---@class URVCustomerData : UObject
---@field CustomerID FGuid
---@field GuestName FName
---@field CamperDataName FName
---@field GuestType ERVGuestType
---@field GuestServices TArray<FGameplayTag>
---@field SleepoverGuestData FRVSleepoverGuestData
---@field ResourceCosts TMap<ERVResource, int32>
---@field LikedMusic TArray<FGameplayTag>
---@field CustomerState ERVCustomerState
---@field CamperLeftReason ERVCamperLeftReason
---@field CompletedServices TArray<FRVCompletedService>
---@field ServiceStreakBonuses int32
---@field ConcertCompletedMusicType FGameplayTag
local URVCustomerData = {}

---@param Service FGameplayTag
---@return boolean
function URVCustomerData:IsServiceCompleted(Service) end
---@param WorldContextObject UObject
---@param MoneyIncome int32
---@param TrustPointsIncome int32
function URVCustomerData:GetMaxIncome(WorldContextObject, MoneyIncome, TrustPointsIncome) end
---@param WorldContextObject UObject
---@return FRVCamperData
function URVCustomerData:GetCamperData(WorldContextObject) end


---@class URVEmployeeConfig : UPrimaryDataAsset
---@field EmployeeName FName
---@field EmployeeDescription FText
---@field EmployeeImage TSoftObjectPtr<UTexture2D>
local URVEmployeeConfig = {}



---@class URVEmployeeManager : UActorComponent
---@field OnRVEmployeeSpawned FRVEmployeeManagerOnRVEmployeeSpawned
---@field OnAutomatedServicesUpdated FRVEmployeeManagerOnAutomatedServicesUpdated
---@field EmployeeSpawnPoint TSoftObjectPtr<AActor>
---@field LastPerformedServiceAutomatedMap TMap<FGameplayTag, boolean>
---@field RVEmployees TArray<ARVCampEmployee>
---@field AutomatedServices TArray<FGameplayTag>
---@field NotAutomatedServices TArray<FGameplayTag>
---@field RVCampManager ARVCampManager
---@field ServiceUpgrader ARVServiceUpgrader
local URVEmployeeManager = {}

---@param Service FGameplayTag
---@return boolean
function URVEmployeeManager:WasLastPerformedServiceAutomated(Service) end
---@return ARVCampEmployee
function URVEmployeeManager:SpawnRVEmployee() end
---@param Service FGameplayTag
---@param AutomationStatus boolean
function URVEmployeeManager:SetPerformedServiceAutomationStatus(Service, AutomationStatus) end
---@param Employee ARVCampEmployee
function URVEmployeeManager:RemoveRVEmployee(Employee) end
function URVEmployeeManager:PopulateNotAutomatedServices() end
---@param Employee ARVCampEmployee
---@param NewAssignment FRVEmployeeAssignment
---@param PreviousAssignment FRVEmployeeAssignment
---@param SlotIndex int32
function URVEmployeeManager:OnEmployeeAssignmentUpdated(Employee, NewAssignment, PreviousAssignment, SlotIndex) end
---@param Service FGameplayTag
---@return boolean
function URVEmployeeManager:IsServiceAutomated(Service) end
---@param Assignment FRVEmployeeAssignment
---@return boolean
function URVEmployeeManager:IsAssignmentActive(Assignment) end
---@return TArray<ARVCampEmployee>
function URVEmployeeManager:GetSortedRVEmployees() end
---@param Service FGameplayTag
---@param IsAutomated boolean
---@param IsPaid boolean
function URVEmployeeManager:GetServiceAutomationStatus(Service, IsAutomated, IsPaid) end
---@return TArray<ARVCampEmployee>
function URVEmployeeManager:GetRVEmployees() end
---@return TArray<FGameplayTag>
function URVEmployeeManager:GetNotAutomatedServices() end
---@return FTransform
function URVEmployeeManager:GetEmployeeSpawnTransform() end
---@param Service FGameplayTag
---@return float
function URVEmployeeManager:GetEmployeeServiceCost(Service) end
---@return TArray<FGameplayTag>
function URVEmployeeManager:GetAutomatedServices() end
---@param Service FGameplayTag
---@param RequireActiveCustomer boolean
---@return ARvGuestServiceSpot
function URVEmployeeManager:FindTargetServiceSpot(Service, RequireActiveCustomer) end
---@param Employee ARVCampEmployee
function URVEmployeeManager:AddRVEmployee(Employee) end


---@class URVEmployeesSettings : UPrimaryDataAsset
---@field MaxEmployeeAssignments int32
---@field EmployeePayCooldownHours int32
---@field EmployeeSalaryPercent float
---@field EmployeesClasses TArray<TSoftClassPtr<ARVCampEmployee>>
local URVEmployeesSettings = {}



---@class URVEventManager : UActorComponent
---@field EventCooldownInHours int32
---@field RVCampManager ARVCampManager
---@field EventSettings URVEventSettings
local URVEventManager = {}

function URVEventManager:UpdateEventCooldown() end
function URVEventManager:TryStartNewEvent() end
---@param Hour int32
function URVEventManager:OnHourUpdated(Hour) end


---@class URVEventSettings : UPrimaryDataAsset
---@field events TMap<ERVEventType, TSoftClassPtr<UGSSEvent>>
---@field EventCooldown FInt32Range
---@field DennisCamperTargetCount int32
local URVEventSettings = {}



---@class URVGuestBookWidget : UGSSBaseWidget
local URVGuestBookWidget = {}


---@class URVGuestServiceSettings : UPrimaryDataAsset
---@field GuestServicesDataTable UDataTable
---@field ServiceRelaxBonus float
---@field ServiceMinigameEndedWidget TSoftClassPtr<URvGuestServiceEndedPopUp>
---@field MinigameSettings TMap<FGameplayTag, URvMinigameBaseSettings>
local URVGuestServiceSettings = {}



---@class URVPicnicBasketSettings : URvMinigameBaseSettings
---@field SettingsPerDifficulty TArray<FPicnicSettingsPerDifficulty>
---@field ProductOffsetsInBasket TArray<FPicnicProductOffset>
local URVPicnicBasketSettings = {}



---@class URVResourceManager : UActorComponent
---@field OnResourceAmountUpdated FRVResourceManagerOnResourceAmountUpdated
---@field OnResourceStateUpdated FRVResourceManagerOnResourceStateUpdated
---@field bCanRegenerateResources boolean
---@field CurrentResourcesState TMap<ERVResource, FRVResourceState>
---@field RVCampManager ARVCampManager
---@field ResourceSettings URVResourceSettings
local URVResourceManager = {}

---@param Resource ERVResource
---@param NewState FRVResourceState
function URVResourceManager:UpdateCurrentResourceState(Resource, NewState) end
---@param Success boolean
function URVResourceManager:TryRefillResources(Success) end
---@param Amounts TMap<ERVResource, int32>
function URVResourceManager:RemoveResources(Amounts) end
---@param Resource ERVResource
---@param Amount int32
function URVResourceManager:RemoveResource(Resource, Amount) end
---@param UpdatedTime FTimeStruct
function URVResourceManager:OnTimeUpdated(UpdatedTime) end
function URVResourceManager:InitResources() end
---@param Resource ERVResource
---@return FRVResourceState
function URVResourceManager:GetCurrentResourceState(Resource) end
---@return TMap<ERVResource, FRVResourceState>
function URVResourceManager:GetCurrentResourcesState() end
---@param Resource ERVResource
---@return int32
function URVResourceManager:GetCurrentResourceAmount(Resource) end
---@param Amounts TMap<ERVResource, int32>
---@return boolean
function URVResourceManager:CanAffordResources(Amounts) end
---@param Resource ERVResource
---@param Amount int32
---@return boolean
function URVResourceManager:CanAffordResource(Resource, Amount) end
---@param Amounts TMap<ERVResource, int32>
function URVResourceManager:AddResources(Amounts) end
---@param Resource ERVResource
---@param Amount int32
function URVResourceManager:AddResource(Resource, Amount) end
---@param AddRemoveAmounts TMap<ERVResource, int32>
function URVResourceManager:AddRemoveResources(AddRemoveAmounts) end
---@param Resource ERVResource
---@param AddRemoveAmount int32
function URVResourceManager:AddRemoveResource(Resource, AddRemoveAmount) end


---@class URVResourceSettings : UPrimaryDataAsset
---@field ResourceProperties FRVResourceProperties
---@field RefillResourcesCost int32
local URVResourceSettings = {}

---@param Resource ERVResource
---@param Level int32
---@return int32
function URVResourceSettings:GetResourceRegenMinutesAtLevel(Resource, Level) end
---@param Resource ERVResource
---@return FRVResourceProperties
function URVResourceSettings:GetResourceProperties(Resource) end
---@param Resource ERVResource
---@param Level int32
---@return int32
function URVResourceSettings:GetMaxResourceReserveAtLevel(Resource, Level) end


---@class URVTalkToEmployeeWidget : UGSSBaseWidget
local URVTalkToEmployeeWidget = {}

---@param Employee ARVCampEmployee
function URVTalkToEmployeeWidget:InitWidget(Employee) end


---@class URVTrustPointManager : UActorComponent
---@field TotalTrustPoints int32
---@field CurrentTrustPoints int32
---@field RVCampManager ARVCampManager
---@field OnRVTrustPointsUpdated FRVTrustPointManagerOnRVTrustPointsUpdated
---@field TrustPointsSettings UTrustPointsData
local URVTrustPointManager = {}

---@param MinigameTag FGameplayTag
---@return int32
function URVTrustPointManager:GetTrustPointsToAddPerWinStreak(MinigameTag) end
---@param MinigameTag FGameplayTag
---@param Difficulty EGuestServiceDifficulty
---@return int32
function URVTrustPointManager:GetTotalTrustPointsToAdd(MinigameTag, Difficulty) end
---@return int32
function URVTrustPointManager:GetTotalTrustPoints() end
---@return int32
function URVTrustPointManager:GetCurrentTrustPoints() end
---@param MinigameTag FGameplayTag
---@param Difficulty EGuestServiceDifficulty
---@return int32
function URVTrustPointManager:GetBaseTrustPointsToAdd(MinigameTag, Difficulty) end
---@param CustomerData URVCustomerData
function URVTrustPointManager:AddTrustPointsOnTurnoutEnd(CustomerData) end
---@param PointsToAdd int32
---@param DetailedYieldType EEconomyDetailedYieldType
---@return int32
function URVTrustPointManager:AddRVTrustPoints(PointsToAdd, DetailedYieldType) end


---@class URVUpgradeCostsSettings : UPrimaryDataAsset
---@field GuestServicesData UDataTable
---@field ParkingSpotCostsData TArray<FRVCampSpotUpgradeCost>
---@field ConcertBuildingCostsData TArray<FRVBuildingUpgradeCost>
---@field CousinHouseCostsData TArray<FRVBuildingUpgradeCost>
---@field CousinHouseExtraRequirements TArray<FRVCousingHouseUpgradeRequirement>
---@field BookingCostsData TArray<FRVBuildingUpgradeCost>
---@field ResourceUpgradeCostsData TMap<ERVResource, FRVResourceUpgradeCost>
---@field CampSpotsUpgradeThumbnails TMap<int32, TSoftObjectPtr<UTexture2D>>
---@field ServiceUpgradeThumbnails TMap<FGameplayTag, TSoftObjectPtr<UTexture2D>>
---@field ResourceUpgradeThumbnails TMap<ERVResource, TSoftObjectPtr<UTexture2D>>
---@field CousinHouseUpgradeThumbnail TSoftObjectPtr<UTexture2D>
---@field RubyOfficeUpgradeThumbnail TSoftObjectPtr<UTexture2D>
---@field ConcertUpgradeThumbnail TSoftObjectPtr<UTexture2D>
local URVUpgradeCostsSettings = {}

---@param CousinHouseLevel int32
---@return int32
function URVUpgradeCostsSettings:GetServiceNumForCousinUpgrade(CousinHouseLevel) end
---@param WorldContextObject UObject
---@param ServiceTag FGameplayTag
---@param BuildingCost FRVUpgradeCost
---@return boolean
function URVUpgradeCostsSettings:GetRVServiceCost(WorldContextObject, ServiceTag, BuildingCost) end
---@param WorldContextObject UObject
---@param Resource ERVResource
---@param BuildingCost FRVUpgradeCost
---@return boolean
function URVUpgradeCostsSettings:GetRVResourceUpgradeCost(WorldContextObject, Resource, BuildingCost) end
---@param WorldContextObject UObject
---@param ParkingSpotNumber int32
---@param BuildingCost FRVUpgradeCost
---@return boolean
function URVUpgradeCostsSettings:GetRVParkingUpgradeCost(WorldContextObject, ParkingSpotNumber, BuildingCost) end
---@param WorldContextObject UObject
---@param BuildingCost FRVUpgradeCost
---@return boolean
function URVUpgradeCostsSettings:GetRVCousinUpgradeCost(WorldContextObject, BuildingCost) end
---@param WorldContextObject UObject
---@param BuildingCost FRVUpgradeCost
---@return boolean
function URVUpgradeCostsSettings:GetRVConcertUpgradeCost(WorldContextObject, BuildingCost) end
---@param WorldContextObject UObject
---@param BuildingCost FRVUpgradeCost
---@return boolean
function URVUpgradeCostsSettings:GetBookingUpgradeCost(WorldContextObject, BuildingCost) end


---@class URV_ChallengeCondition_TrackRelax : URVChallengeCondition
---@field RelaxThreshold float
local URV_ChallengeCondition_TrackRelax = {}

---@param CurrentRelax float
function URV_ChallengeCondition_TrackRelax:CheckRelax(CurrentRelax) end


---@class URV_MapAndEventsUpgradeData : UDataAsset
---@field CousinHouseUpgradeLevels TArray<FMapIndependentBuildingSublevels>
---@field ConcertUpgradeLevels TArray<FMapIndependentBuildingSublevels>
---@field ServicesUpgradeLevels TMap<FGameplayTag, FMapIndependentBuildingSublevels>
---@field ParkingUpgradeLevels TArray<FParkingsUpgradeLevels>
local URV_MapAndEventsUpgradeData = {}



---@class URadialInventory : UGSSGamePlayWidget
local URadialInventory = {}


---@class UReachFuelCapacityObjective : UObjectiveBase
---@field bInGasStation boolean
---@field AirStripFuel boolean
---@field VehicleInstance TSoftObjectPtr<AGSSWheeledVehicle>
---@field DesiredFuelCapacity float
---@field FuelObjectiveType ERefuelObjectiveType
local UReachFuelCapacityObjective = {}

---@param PlayerVehicle AGSSWheeledVehicle
---@param CurrentFuel float
---@param bGasStation boolean
function UReachFuelCapacityObjective:OnFuelLevelReached(PlayerVehicle, CurrentFuel, bGasStation) end


---@class URedDotsManager : UActorComponent
---@field HudRef AGSS_NewHud
---@field RedDotsCurrentTag FGameplayTag
local URedDotsManager = {}

---@param InHudRef AGSS_NewHud
function URedDotsManager:SetGSSHudRef(InHudRef) end
---@return AGSS_NewHud
function URedDotsManager:GetGSSHUD() end
---@param Widget UGSSBaseWidget
function URedDotsManager:CreateRedDots(Widget) end


---@class URefButton : UGSSButton
---@field OnClickedReferenced FRefButtonOnClickedReferenced
---@field WidgetParent UUserWidget
local URefButton = {}



---@class URefuelJerryCanObjective : UObjectiveBase
local URefuelJerryCanObjective = {}


---@class URenderTargetComponent : UActorComponent
---@field OnReachedTarget FRenderTargetComponentOnReachedTarget
---@field LowResCaptureComponent USceneCaptureComponent2D
---@field TimeSinceLastCheck float
---@field DirtPerc float
---@field Dirt float
---@field StartingDirt float
---@field bFirstTimeCount boolean
---@field bPrepared boolean
---@field MainMeshesForInteraction TArray<UStaticMeshComponent>
---@field LowResPlane UStaticMeshComponent
---@field DebugPlane UStaticMeshComponent
---@field DebugTextRender UTextRenderComponent
---@field DynamicBrushMaterialInstance UMaterialInstanceDynamic
---@field DynamicDisplayMaterial UMaterialInstanceDynamic
---@field DynamicCalculationMaterial UMaterialInstanceDynamic
---@field DynamicDebugMaterial UMaterialInstanceDynamic
---@field MainMaterial UMaterialInterface
---@field RenderTargetData URenderTargetData
---@field bUseDynamicRenderTarget boolean
---@field DynamicMaterialPropertyNameForHighResRenderTarget FName
---@field HighResRenderTarget UTextureRenderTarget2D
---@field HighResRenderTargetWidth int32
---@field HighResRenderTargetHight int32
---@field HighResFormat ETextureRenderTargetFormat
---@field HighResClearColor FLinearColor
---@field bHighResAutoGenerateMipMaps boolean
---@field LowResRenderTarget UTextureRenderTarget2D
---@field LowResRenderTargetWidth int32
---@field LowResRenderTargetHight int32
---@field LowResFormat ETextureRenderTargetFormat
---@field LowResClearColor FLinearColor
---@field bLowResAutoGenerateMipMaps boolean
---@field bUseAdditionalFadingTrailRenderTarget boolean
---@field FadingTrailRenderTarget UTextureRenderTarget2D
---@field FadingTrailRenderTargetWidth int32
---@field FadingTrailRenderTargetHight int32
---@field FadingTrailFormat ETextureRenderTargetFormat
---@field FadingTrailClearColor FLinearColor
---@field bFadingTrailAutoGenerateMipMaps boolean
---@field FadingTrailBrushMaterial UMaterialInterface
---@field FadingColorValue FLinearColor
---@field DynamicFadingTrailBrushMaterialInstance UMaterialInstanceDynamic
---@field LowResPlaneMesh UStaticMesh
---@field BrushMaterial UMaterialInterface
---@field BrushSize float
---@field ProgressCheckInterval float
---@field ProgressCheckResolution int32
---@field DirtPercToReach float
---@field bAllowCalculation boolean
---@field MainMaterialIndex int32
---@field DisplayMaterialScalarParams TArray<FMaterialScalarParameterValueStruct>
---@field DisplayMaterialVectorParams TArray<FMaterialVectorParameterValueStruct>
---@field CalculationMaterialScalarParams TArray<FMaterialScalarParameterValueStruct>
---@field CalculationMaterialVectorParams TArray<FMaterialVectorParameterValueStruct>
---@field bCalculationDebug boolean
---@field bOutputLogCalculationDebug boolean
---@field bTextRenderDebug boolean
---@field DebugMaterial UMaterialInstance
local URenderTargetComponent = {}

---@param MainMeshComp UStaticMeshComponent
function URenderTargetComponent:SetMainMeshForInteraction(MainMeshComp) end
function URenderTargetComponent:PrepareRenderTarget() end
function URenderTargetComponent:InitializeMaxProgress() end
---@return UMaterialInstanceDynamic
function URenderTargetComponent:GetDynamicDisplayMaterial() end
---@return UMaterialInstanceDynamic
function URenderTargetComponent:GetDynamicCalculationMaterial() end
---@return UMaterialInstanceDynamic
function URenderTargetComponent:GetDynamicBrushMaterial() end
---@return float
function URenderTargetComponent:GetCleaningProgressPerc() end
---@param Color FLinearColor
function URenderTargetComponent:FullyPaintHighResRenderTarget(Color) end
function URenderTargetComponent:CalculateProgress() end
---@param UV FVector2D
function URenderTargetComponent:ApplyBrush(UV) end


---@class URenderTargetData : UDataAsset
---@field HighResTextureTarget UTextureRenderTarget2D
---@field LowResTextureTarget UTextureRenderTarget2D
local URenderTargetData = {}



---@class URenownLevelingType : URenownType
---@field DisplayEventsPerLevel TArray<FRenownLevelEvent>
---@field RenownLevel int32
---@field RenownLevelCap int32
local URenownLevelingType = {}

---@param EventToLoad TSoftClassPtr<UEventDisplay>
function URenownLevelingType:LoadEventDisplay(EventToLoad) end


---@class URenownPopularity : URenownLevelingType
---@field DTHappyAngryThreshold UDataTable
local URenownPopularity = {}



---@class URenownSubsystem : UWorldSubsystem
---@field InitializeRenowns FRenownSubsystemInitializeRenowns
---@field ApplicableRenowns TArray<URenownType>
---@field RenownPopularity URenownPopularity
---@field AreRenownsInitialized boolean
local URenownSubsystem = {}

function URenownSubsystem:TryInitRenowns() end
function URenownSubsystem:StartGame() end
---@return TArray<FSavedRenownEntity>
function URenownSubsystem:SaveRenowns() end
function URenownSubsystem:OnWorldBeginPlay() end
---@param RenownsToLoad TArray<FSavedRenownEntity>
function URenownSubsystem:LoadRenowns(RenownsToLoad) end
---@param Amount int32
---@param Instiginator UObject
---@param SourceOfRenown ERenown_Reasons
---@param Reason FString
---@return int32
function URenownSubsystem:HandleRenownChange(Amount, Instiginator, SourceOfRenown, Reason) end
---@param Progress int32
---@param Level int32
function URenownSubsystem:HandlePopularityRenownSaveConversion(Progress, Level) end
---@return URenownPopularity
function URenownSubsystem:GetRenownPopularity() end
---@param RenownClass TSubclassOf<URenownType>
---@return URenownType
function URenownSubsystem:GetRenownByClass(RenownClass) end
---@return TArray<URenownType>
function URenownSubsystem:GetApplicableRenowns() end
function URenownSubsystem:ForceSetMaxRenown() end


---@class URenownSystemLibrary : UBlueprintFunctionLibrary
local URenownSystemLibrary = {}


---@class URenownTidalWave : URenownTimeBasedType
---@field ChanceToAngerVolcano int32
---@field ChanceToPleaseVolcano int32
---@field ReasonsToAdditionalPercentageChanceCheck TArray<ERenown_Reasons>
---@field HighAngerTreshold int32
---@field LowAngerTreshold int32
---@field HappyTreshold int32
---@field EnableRenownChangeInTimeTag FGameplayTag
local URenownTidalWave = {}



---@class URenownTimeBasedType : URenownType
---@field ChangeAmount int32
---@field TimeToTriggerInterval FTimeStruct
---@field TimeAtWhichRenownChangeTriggers FTimeStruct
local URenownTimeBasedType = {}

function URenownTimeBasedType:RenownChangedByTime() end
---@param Time FTimeStruct
function URenownTimeBasedType:OnGameTimeUpdated(Time) end
---@return boolean
function URenownTimeBasedType:AdditionalTimeAmountChangeConditions() end


---@class URenownType : UObject
---@field RenownProgressUpperCap int32
---@field RenownProgressLowerCap int32
---@field AllowedSourcesOfRenown TArray<ERenown_Reasons>
---@field PositiveRenownOverride TArray<FRenownTypeAmountOverride>
---@field NegativeRenownOverride TArray<FRenownTypeAmountOverride>
---@field RenownProgress int32
local URenownType = {}

function URenownType:TryShowVolcanoTutorial() end
function URenownType:StartGameRenown() end
---@param ValueChanged float
function URenownType:PostRenownChangeEvent(ValueChanged) end
function URenownType:InitializeRenown() end
---@param NewCount int32
function URenownType:ForceSetRenownProgress(NewCount) end
---@param Count int32
---@param Instiginator UObject
---@param SourceOfRenown ERenown_Reasons
---@param Reason FString
---@return int32
function URenownType:AddRenownProgress(Count, Instiginator, SourceOfRenown, Reason) end


---@class URentEquipment : UIteractableActorTask
local URentEquipment = {}

---@param Building AInteractableActor
---@param Spot ARentalSpot
---@param Customer AAICharacterBase
function URentEquipment:OnRentalEquipmentBroken(Building, Spot, Customer) end
---@param Spot ARentalSpot
function URentEquipment:HandleCustomerService(Spot) end
---@param CustomerType ECustomerType
---@return AInteractableActor
function URentEquipment:AddToSpot(CustomerType) end


---@class URentalServiceValues : UDataAsset
---@field MinRentalDuration int32
---@field MaxRentalDuration int32
---@field CompatibleItem TSoftClassPtr<ARentableItem>
---@field bMultipleEqDurabilityStages boolean
---@field EqDuraibilityLevels TArray<FDurabilityLevelIcons>
---@field DefaultEqDurabilityIcon TSoftObjectPtr<UTexture2D>
---@field WornOutEqLevel FDurabilityLevelIcons
---@field EquipmentDurabilityDownValuePerSetTime float
---@field EquipmentDurabilityDownPerSetSecondsValue int32
---@field RentalServicePriceUpValuePerSetTime float
---@field RentalServicePriceUpPerSetSecondsValue int32
---@field MaxCustomersInQueue int32
---@field DeathChanceMultipliers TArray<FDeathChanceMultipliers>
---@field EquipmentShelvesMeshes TArray<TSoftObjectPtr<UStaticMesh>>
---@field Equipment_SMs TArray<TSoftObjectPtr<UStaticMesh>>
---@field Equipment_MIs TArray<TSoftObjectPtr<UMaterialInstance>>
---@field EmptyRentalSpotMesh TSoftObjectPtr<UStaticMesh>
---@field MaxCapacityPerLvl TArray<int32>
local URentalServiceValues = {}

---@return int32
function URentalServiceValues:RandomRentingDuration() end
---@return TSoftObjectPtr<UStaticMesh>
function URentalServiceValues:RandomEquipmentMesh() end
---@return TSoftObjectPtr<UMaterialInstance>
function URentalServiceValues:RandomEquipmentMaterial() end
---@param CurrentBuildingLevel int32
---@return int32
function URentalServiceValues:GetMaxContainerCapacity(CurrentBuildingLevel) end
---@param Durability float
---@return TSoftObjectPtr<UTexture2D>
function URentalServiceValues:GetItemIcon(Durability) end
---@param CurrentEqDurability float
---@return float
function URentalServiceValues:GetDeathChanceMultiplier(CurrentEqDurability) end
---@param CurrentEqDurability float
---@return float
function URentalServiceValues:GetDeathChance(CurrentEqDurability) end


---@class URoofType : UObject
---@field Name FText
---@field Description FText
---@field RoofIcon UTexture2D
---@field RoofLevels TArray<FRoofLevel>
---@field Price int32
local URoofType = {}



---@class URootMotionMovementLibrary : UBlueprintFunctionLibrary
local URootMotionMovementLibrary = {}

---@param SkeletalMeshComponent USkeletalMeshComponent
---@param bIsPlayingRootMotion boolean
---@return FTransform
function URootMotionMovementLibrary:GetRootMotionTransform(SkeletalMeshComponent, bIsPlayingRootMotion) end


---@class URushHourEvent : UGSSEvent
---@field SelectedHour int32
local URushHourEvent = {}

function URushHourEvent:PickRandomHour() end
---@return int32
function URushHourEvent:GetSelectedHour() end
function URushHourEvent:CheckAnyMovieIsSetinSelectedHour() end


---@class URvGuestServiceEndedPopUp : UGSSBaseWidget
---@field ResultWidget TSoftClassPtr<URvGuestServiceResult>
---@field MinigameWidgetRef URvMinigameWidget
---@field ServiceSpotRef ARvGuestServiceSpot
---@field bSuccess boolean
---@field ExperienceData FRVServiceExperienceData
local URvGuestServiceEndedPopUp = {}

function URvGuestServiceEndedPopUp:Init() end


---@class URvGuestServiceResult : UGSSBaseWidget
---@field MinigameWidgetRef URvMinigameWidget
---@field bSuccess boolean
local URvGuestServiceResult = {}



---@class URvLevelingSettings : URvMinigameBaseSettings
---@field PressDelay_Easy float
---@field PressDelay_Medium float
---@field PressDelay_Hard float
---@field PressDelayInitial_Easy float
---@field PressDelayInitial_Medium float
---@field PressDelayInitial_Hard float
---@field FillBarDuration_Easy float
---@field FillBarDuration_Medium float
---@field FillBarDuration_Hard float
---@field EasyLevelRange float
---@field MediumLevelRange float
---@field HardLevelRange float
---@field TargetRangeOffset FFloatRange
---@field AccelerationForward_Easy float
---@field AccelerationForward_Medium float
---@field AccelerationForward_Hard float
---@field Deccelaration float
---@field AccelerationBackward float
---@field AccelerationBackward_Medium float
---@field AccelerationBackward_Hard float
---@field EngineRPMFillDuration float
---@field EngineRPMLoweringSmoothRate float
---@field EngineRPMRisingSmoothRate float
local URvLevelingSettings = {}



---@class URvMinigameBaseSettings : UPrimaryDataAsset
---@field CooldownBonusPerDifficulty TMap<EGuestServiceDifficulty, float>
---@field ResultWidget TSoftClassPtr<URvGuestServiceResult>
---@field bUseDefaultDifficulty boolean
---@field DefaultDifficulty EGuestServiceDifficulty
---@field LateStartDelay float
---@field CountdownWidget TSoftClassPtr<UCountdownWidget>
---@field LateEndDelay float
---@field bOverrideCameraFOV boolean
---@field CameraFOV float
---@field DifficultyDescriptionEasy FDifficultyDescription
---@field DifficultyDescriptionMedium FDifficultyDescription
---@field DifficultyDescriptionHard FDifficultyDescription
---@field GuestHandsAnimConfigs TMap<FGameplayTag, FRvGuestServiceHandsAnimConfig>
---@field PositioningMontagesConfigs TArray<FPositioningMontageConfig>
---@field OverrideCharacterLookPresets TArray<FCharacterLookOverride>
---@field AutocompleteDuration float
---@field TutorialType EGameActivityType
local URvMinigameBaseSettings = {}



---@class URvMinigameWidget : UGSSBaseWidget
---@field OnRvMinigameWidgetClosed FRvMinigameWidgetOnRvMinigameWidgetClosed
---@field GuestServiceTag FGameplayTag
---@field ServiceSpotRef ARvGuestServiceSpot
---@field DifficultySelected EGuestServiceDifficulty
---@field bTutorialOpened boolean
---@field CurrentPhase FName
local URvMinigameWidget = {}

---@param ServiceTag FGameplayTag
---@param TargetServiceSpot ARvGuestServiceSpot
---@param Difficulty EGuestServiceDifficulty
function URvMinigameWidget:StartMiniGame(ServiceTag, TargetServiceSpot, Difficulty) end
---@param bOpen boolean
function URvMinigameWidget:SetTutorialOpened(bOpen) end
---@param Phase FName
function URvMinigameWidget:SetPhase(Phase) end
---@return boolean
function URvMinigameWidget:IsTutorialOpened() end
---@return FName
function URvMinigameWidget:GetCurrentPhase() end
---@return float
function URvMinigameWidget:GetCooldownPercentageBonus() end
---@param bSuccess boolean
---@param ExperienceData FRVServiceExperienceData
function URvMinigameWidget:EndMinigame(bSuccess, ExperienceData) end


---@class USDApplyPenaltyAction : USDSheriffActionBase
---@field PenaltyType ESDPenaltyType
---@field PenaltyPercent int32
---@field FixedPenalty float
local USDApplyPenaltyAction = {}



---@class USDCasinoGangActivity : USDGangActivityObjBase
local USDCasinoGangActivity = {}


---@class USDCheatManager : UCheatManager
---@field bShadynessModifierDebugEnabled boolean
local USDCheatManager = {}

function USDCheatManager:UnlockAllDeliveryProducts() end
function USDCheatManager:ToggleShadynessModifiersDebug() end
---@param GangActivityTypeEnumAsByte uint8
function USDCheatManager:StartGangActivity(GangActivityTypeEnumAsByte) end
---@param Percent int32
function USDCheatManager:SetShadynessPercent(Percent) end
function USDCheatManager:PrintShadynessModifierState() end
function USDCheatManager:DebugUnlockAllGangActivities() end
function USDCheatManager:DebugPrintGangActivitiesState() end
function USDCheatManager:DebugPrintGangActivitiesLockState() end
function USDCheatManager:DebugForceEnableShadyDealsDLC() end
---@param money float
function USDCheatManager:DebugAddMoney(money) end


---@class USDCloseObjectAction : USDSheriffActionBase
---@field TimeObjectClosedFor int32
local USDCloseObjectAction = {}



---@class USDDirtyMoneyComponent : UActorComponent
---@field DirtyMoneyBags TArray<ASDMoneyBag>
---@field DirtyMoneyCaches TArray<ASDDirtyMoneyCache>
local USDDirtyMoneyComponent = {}

---@param InCache ASDDirtyMoneyCache
function USDDirtyMoneyComponent:RegisterDirtyMoneyCache(InCache) end
---@param InBag ASDMoneyBag
function USDDirtyMoneyComponent:RegisterDirtyMoneyBag(InBag) end
---@param DestroyedActor AActor
function USDDirtyMoneyComponent:OnDirtyMoneyBagDestroyed(DestroyedActor) end
---@param bCountInactive boolean
---@return int32
function USDDirtyMoneyComponent:GetNumOfFilledMoneyCaches(bCountInactive) end
---@param bCountInactive boolean
---@return float
function USDDirtyMoneyComponent:GetDirtyMoneyEquivalent(bCountInactive) end
---@return TArray<ASDDirtyMoneyCache>
function USDDirtyMoneyComponent:GetDirtyMoneyCaches() end
---@return TArray<ASDMoneyBag>
function USDDirtyMoneyComponent:GetDirtyMoneyBags() end
---@return TArray<ASDDirtyMoneyCache>
function USDDirtyMoneyComponent:GetActiveMoneyCaches() end


---@class USDEmptyDirtyMoneyCachesAction : USDSheriffActionBase
local USDEmptyDirtyMoneyCachesAction = {}


---@class USDEmptyObjectFromNPC : USDSheriffActionBase
local USDEmptyObjectFromNPC = {}


---@class USDFightClubActivity : USDGangActivityObjBase
---@field CurrentAttackerZone ESDFightClubZone
---@field MaxClashNum int32
---@field RedZoneLockerMinigame ASDFightClubLockerMinigame
---@field BlueZoneLockerMinigame ASDFightClubLockerMinigame
---@field CurrentClashNum int32
---@field RedFighterHP int32
---@field BlueFighterHP int32
---@field RedDiceThrowRes int32
---@field BlueDiceThrowRes int32
---@field BlueJudgesPointsSum int32
---@field RedJudgesPointsSum int32
---@field FightClubBuilding ASDFightClub
---@field RedFighterFinalAttrs FSDFighterAttributes
---@field BlueFighterFinalAttrs FSDFighterAttributes
local USDFightClubActivity = {}

function USDFightClubActivity:StartClash() end
function USDFightClubActivity:PredictAttackResult() end
function USDFightClubActivity:OnClashStarted() end
---@param Result ESDFightClubAttackResult
function USDFightClubActivity:OnAttackResultPredicted(Result) end
---@param InZone ESDFightClubZone
---@return int32
function USDFightClubActivity:GetFighterHP(InZone) end
---@param InZone ESDFightClubZone
---@return FSDFighterAttributes
function USDFightClubActivity:GetFighterFinalAttrs(InZone) end
---@return ESDFightClubZone
function USDFightClubActivity:GetDefenderZone() end
---@return ESDFightClubZone
function USDFightClubActivity:GetAttackerZone() end
---@param Winner ESDFightClubZone
---@param WinReason ESDFightClubWinReason
function USDFightClubActivity:EndFight(Winner, WinReason) end
---@param Result ESDFightClubAttackResult
function USDFightClubActivity:ApplyAttackResult(Result) end


---@class USDGameplayEvents : UObject
---@field CasinoOpenStateChangedDelegate FSDGameplayEventsCasinoOpenStateChangedDelegate
---@field CharacterStartedPlayingArcadeDelegate FSDGameplayEventsCharacterStartedPlayingArcadeDelegate
---@field ArcadeMachinePlayedDelegate FSDGameplayEventsArcadeMachinePlayedDelegate
---@field CasinoAlarmTriggeredDelegate FSDGameplayEventsCasinoAlarmTriggeredDelegate
---@field SheriffCaughtShadyDealDelegate FSDGameplayEventsSheriffCaughtShadyDealDelegate
---@field SheriffPatrolStartedDelegate FSDGameplayEventsSheriffPatrolStartedDelegate
---@field FightClubNewFightersAssignedDelegate FSDGameplayEventsFightClubNewFightersAssignedDelegate
---@field FightClubInitialized FSDGameplayEventsFightClubInitialized
---@field FightEndedGlobalDelegate FSDGameplayEventsFightEndedGlobalDelegate
---@field DirtyMoneyCacheBagUpdatedDelegate FSDGameplayEventsDirtyMoneyCacheBagUpdatedDelegate
---@field DirtyMoneyCacheActivityStateChangedDelegate FSDGameplayEventsDirtyMoneyCacheActivityStateChangedDelegate
local USDGameplayEvents = {}



---@class USDGangActivityManager : UActorComponent
---@field PreGangActivityInitializedDelegate FSDGangActivityManagerPreGangActivityInitializedDelegate
---@field GangActivityInitializedDelegate FSDGangActivityManagerGangActivityInitializedDelegate
---@field PreGangActivityStartedDelegate FSDGangActivityManagerPreGangActivityStartedDelegate
---@field GangActivityStartedDelegate FSDGangActivityManagerGangActivityStartedDelegate
---@field GangActivityEndedDelegate FSDGangActivityManagerGangActivityEndedDelegate
---@field GangActivityPenaltyIssuedDelegate FSDGangActivityManagerGangActivityPenaltyIssuedDelegate
---@field GangActivityPenaltyEndedDelegate FSDGangActivityManagerGangActivityPenaltyEndedDelegate
---@field GangActivityEnableStateChangedDelegate FSDGangActivityManagerGangActivityEnableStateChangedDelegate
---@field ShadyDealsLockStateChanged FSDGangActivityManagerShadyDealsLockStateChanged
---@field AvailableGangActivities TMap<ESDGangActivityType, FSDGangActivitySettings>
---@field ActivitiesRelatedActors TArray<AActor>
---@field CurrentActivities TArray<USDGangActivityObjBase>
---@field CooldownTimers TArray<FSDTimerHandleDelegatePair>
---@field NotifyTimers TArray<FSDTimerHandleDelegatePair>
---@field bShadyDealsLocked boolean
local USDGangActivityManager = {}

---@param ActivityType ESDGangActivityType
---@param bForce boolean
function USDGangActivityManager:StartActivity(ActivityType, bForce) end
---@param bLocked boolean
function USDGangActivityManager:SetShadyDealsLocked(bLocked) end
---@param Activity ESDGangActivityType
---@param bEnabled boolean
function USDGangActivityManager:SetActivityEnabled(Activity, bEnabled) end
---@param InActor AActor
function USDGangActivityManager:RegisterAsActivityRelatedActor(InActor) end
---@param InVehicle AGSSWheeledVehicle
---@param Activity ESDGangActivityType
function USDGangActivityManager:RegisterActivityRelatedVehicle(InVehicle, Activity) end
---@param ActivityType ESDGangActivityType
function USDGangActivityManager:OnEmailNotificationLoaded(ActivityType) end
---@param InActivityType ESDGangActivityType
function USDGangActivityManager:OnActivityPenaltyEnd(InActivityType) end
---@param LoadedActivityClass TSoftClassPtr<USDGangActivityObjBase>
---@param ActivityType ESDGangActivityType
function USDGangActivityManager:OnActivityLoaded(LoadedActivityClass, ActivityType) end
---@param ActivityObj USDGangActivityObjBase
---@param Result ESDGangActivityResult
function USDGangActivityManager:OnActivityEnded(ActivityObj, Result) end
---@param InActivityType ESDGangActivityType
---@param InPenaltyTime float
function USDGangActivityManager:IssueGangActivityPenalty(InActivityType, InPenaltyTime) end
---@param Activity ESDGangActivityType
---@return boolean
function USDGangActivityManager:IsActivityEnabled(Activity) end
---@param OutWaypoints TArray<ASDSheriffPatrolWaypoint>
function USDGangActivityManager:GetSheriffPatrolWaypoints(OutWaypoints) end
---@param DesiredClass TSubclassOf<AActor>
---@param OutFoundActors TArray<AActor>
function USDGangActivityManager:GetActivityRelatedActorsByClass(DesiredClass, OutFoundActors) end
---@return TArray<AActor>
function USDGangActivityManager:GetActivityRelatedActors() end
---@param InActivityType ESDGangActivityType
---@return float
function USDGangActivityManager:GetActivityPenaltyTimeLeft(InActivityType) end
---@param InActivityType ESDGangActivityType
---@return USDGangActivityObjBase
function USDGangActivityManager:GetActivity(InActivityType) end
---@param Activity ESDGangActivityType
function USDGangActivityManager:ForceStartActivity(Activity) end
---@param RelatedActorClass TSubclassOf<AActor>
---@param OutFoundActor AActor
function USDGangActivityManager:FindActivityRelatedActorByClass(RelatedActorClass, OutFoundActor) end
---@param InActivityType ESDGangActivityType
---@return boolean
function USDGangActivityManager:DoesActivityExist(InActivityType) end
---@return boolean
function USDGangActivityManager:AreShadyDealsLocked() end
---@param InActivityType ESDGangActivityType
---@return boolean
function USDGangActivityManager:ActivityHasPenalty(InActivityType) end


---@class USDGangActivityObjBase : UObject
---@field ActivityType ESDGangActivityType
---@field ActivityVehicles TArray<AGSSWheeledVehicle>
---@field ShadynessOutcome TMap<ESDGangActivityResult, FSDShadynessModifierSettings>
local USDGangActivityObjBase = {}

---@param InVehicle AGSSWheeledVehicle
function USDGangActivityObjBase:RegisterVehicle(InVehicle) end
---@param ActivityResult ESDGangActivityResult
function USDGangActivityObjBase:ProcessShadynessOutcome(ActivityResult) end
---@param bForce boolean
function USDGangActivityObjBase:OnStart(bForce) end
---@param Result ESDGangActivityResult
function USDGangActivityObjBase:OnEnd(Result) end
function USDGangActivityObjBase:InitializeActivity() end
---@return TArray<AGSSWheeledVehicle>
function USDGangActivityObjBase:GetActivityVehicles() end
---@return ESDGangActivityType
function USDGangActivityObjBase:GetActivityType() end
---@param InResult ESDGangActivityResult
function USDGangActivityObjBase:EndActivity(InResult) end
---@return boolean
function USDGangActivityObjBase:CanBeCaughtBySheriff() end


---@class USDHighlightHelperComponent : UActorComponent
---@field MeshComponentsToIgnore TArray<FSDComponentReferenceArrayWrapper>
local USDHighlightHelperComponent = {}

---@param InIgnoredMesh UMeshComponent
function USDHighlightHelperComponent:RemoveComponetToIgnore(InIgnoredMesh) end
---@param InStaticMesh UMeshComponent
---@return boolean
function USDHighlightHelperComponent:IsComponentIgnored(InStaticMesh) end
---@return TArray<UMeshComponent>
function USDHighlightHelperComponent:GetIgnoredMeshComponents() end
---@param InMeshToIgnore UMeshComponent
function USDHighlightHelperComponent:AddComponetToIgnore(InMeshToIgnore) end


---@class USDMinigameBasedGangActivity : USDGangActivityObjBase
---@field AvailableVehiclesClasses TArray<TSubclassOf<AGSSWheeledVehicle>>
---@field ActivityMinigameObj ASDShadyDealsMinigameBase
---@field DesiredMinigameClass TSubclassOf<AActor>
local USDMinigameBasedGangActivity = {}

---@param LoadedActivityClass TSoftClassPtr<AGSSWheeledVehicle>
function USDMinigameBasedGangActivity:OnVehicleClassLoaded(LoadedActivityClass) end
---@param minigame ASDMinigameBase
---@param EndReason ESDMinigameEndReason
function USDMinigameBasedGangActivity:OnActivityMinigameEnded(minigame, EndReason) end
---@return ASDShadyDealsMinigameBase
function USDMinigameBasedGangActivity:GetActivityMinigame() end


---@class USDMinigameMouseTraceComponent : USceneComponent
---@field MouseCursorTraceResult FHitResult
---@field ComponentHoveredDelegate FSDMinigameMouseTraceComponentComponentHoveredDelegate
---@field ComponentUnhoveredDelegate FSDMinigameMouseTraceComponentComponentUnhoveredDelegate
---@field bTraceOnlyOwnerComponents boolean
---@field TraceCollisionChannel ECollisionChannel
---@field TraceDistance int32
---@field HoveredComponentCustomDepthStencil int32
---@field MouseTraceComponentsToIgnore TArray<UPrimitiveComponent>
---@field MouseTraceActorsToIgnore TArray<AActor>
---@field LastTracedComponent UPrimitiveComponent
local USDMinigameMouseTraceComponent = {}

---@param InStencilValue int32
function USDMinigameMouseTraceComponent:SetHoverDepthStencil(InStencilValue) end
---@param Component UPrimitiveComponent
function USDMinigameMouseTraceComponent:RemoveIgnoreComponent(Component) end
---@param Actor AActor
function USDMinigameMouseTraceComponent:RemoveIgnoreActor(Actor) end
---@param UnhoveredComp UPrimitiveComponent
function USDMinigameMouseTraceComponent:OnComponentUnhovered(UnhoveredComp) end
---@param HoveredComp UPrimitiveComponent
function USDMinigameMouseTraceComponent:OnComponentHovered(HoveredComp) end
---@return UPrimitiveComponent
function USDMinigameMouseTraceComponent:GetLastTracedComponent() end
---@param Component UPrimitiveComponent
function USDMinigameMouseTraceComponent:AddIgnoreComponent(Component) end
---@param Actor AActor
function USDMinigameMouseTraceComponent:AddIgnoreActor(Actor) end


---@class USDMinigameParticipantComponent : USceneComponent
---@field ParticipantPreparedDelegate FSDMinigameParticipantComponentParticipantPreparedDelegate
---@field ParticipantsReadyDelegate FSDMinigameParticipantComponentParticipantsReadyDelegate
---@field ParticipantPositions TMap<AActor, TSoftClassPtr<AGSSWheeledVehicle>>
---@field ReservedPositions TArray<AActor>
---@field PosParticipantsPairs TMap<AActor, FSDMinigameParticipantPosition>
local USDMinigameParticipantComponent = {}

---@param InParticipant AAICharacterBase
---@param bSuccess boolean
---@return AActor
function USDMinigameParticipantComponent:ReserveParticipantPos(InParticipant, bSuccess) end
---@param InParticipant AAICharacterBase
function USDMinigameParticipantComponent:PrepareParticipant(InParticipant) end
---@return TArray<AAICharacterBase>
function USDMinigameParticipantComponent:GetParticipants() end
---@return TMap<AActor, FSDMinigameParticipantPosition>
function USDMinigameParticipantComponent:GetParticipantPositions() end
---@return AActor
function USDMinigameParticipantComponent:GetFreeParticipantPos() end
---@param InPosition AActor
---@return TSoftClassPtr<AGSSWheeledVehicle>
function USDMinigameParticipantComponent:GetDesiredVehicleForPosition(InPosition) end
---@return int32
function USDMinigameParticipantComponent:GetDesiredParticipantsNum() end
---@param bOrderToGoHome boolean
function USDMinigameParticipantComponent:FreeParticipantPoses(bOrderToGoHome) end
---@param InParticipant AAICharacterBase
---@return AActor
function USDMinigameParticipantComponent:FindParticipantPosition(InParticipant) end
---@return boolean
function USDMinigameParticipantComponent:AreAllParticipantsReady() end


---@class USDMinigameWidget : UUserWidget
---@field ParentMinigame ASDMinigameBase
local USDMinigameWidget = {}

---@param InMinigame ASDMinigameBase
function USDMinigameWidget:SetParentMinigame(InMinigame) end
function USDMinigameWidget:InitializeMinigameWidget() end


---@class USDParkingDealActivity : USDMinigameBasedGangActivity
---@field MoneyBagNum int32
---@field MoneyBagNumMin int32
---@field MoneyBagNumMax int32
local USDParkingDealActivity = {}

---@return int32
function USDParkingDealActivity:InitializeMoneyBugNum() end
---@return int32
function USDParkingDealActivity:GetMoneyBagNum() end


---@class USDPlacementBoxTrigger : UBoxComponent
---@field ProductPlacedDelegate FSDPlacementBoxTriggerProductPlacedDelegate
---@field ProductOverlappedDelegate FSDPlacementBoxTriggerProductOverlappedDelegate
---@field ProductRemovedDelegate FSDPlacementBoxTriggerProductRemovedDelegate
---@field bEnabled boolean
---@field bAutoPlaceOverlappedProduct boolean
---@field bAllowProductDetach boolean
---@field bDestroyAttachedProduct boolean
---@field AcceptableProducts TArray<TSubclassOf<AProduct>>
---@field PlacedProduct AProduct
local USDPlacementBoxTrigger = {}

---@param bInEnabled boolean
function USDPlacementBoxTrigger:SetEnabled(bInEnabled) end
---@param bAutoPlace boolean
function USDPlacementBoxTrigger:SetAutoPlaceOverlappedProduct(bAutoPlace) end
---@param bAllowDetach boolean
function USDPlacementBoxTrigger:SetAllowDetach(bAllowDetach) end
---@param InProduct AProduct
---@param bForcePlace boolean
function USDPlacementBoxTrigger:PlaceProduct(InProduct, bForcePlace) end
---@param Actor AActor
function USDPlacementBoxTrigger:OnPlayerPickedUp(Actor) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function USDPlacementBoxTrigger:OnPlacementBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@return boolean
function USDPlacementBoxTrigger:IsEnabled() end
---@return AProduct
function USDPlacementBoxTrigger:GetPlacedProduct() end
---@param bForceDetach boolean
---@return AProduct
function USDPlacementBoxTrigger:DetachProduct(bForceDetach) end
---@param InProduct AProduct
---@return boolean
function USDPlacementBoxTrigger:CanAcceptProduct(InProduct) end


---@class USDPlacementTriggersManager : UActorComponent
---@field ProductPlacedDelegate FSDPlacementTriggersManagerProductPlacedDelegate
---@field ProductPrePlacedDelegate FSDPlacementTriggersManagerProductPrePlacedDelegate
---@field ProductTakenDelegate FSDPlacementTriggersManagerProductTakenDelegate
---@field bOverlapAutoPlaceProduct boolean
---@field bEnableTriggersByDefault boolean
---@field PlacementTriggers TArray<USDPlacementBoxTrigger>
local USDPlacementTriggersManager = {}

---@param bCanPickUp boolean
function USDPlacementTriggersManager:SetCanPickUpProducts(bCanPickUp) end
---@param Trigger USDPlacementBoxTrigger
---@param Product AProduct
function USDPlacementTriggersManager:OnProductTaken(Trigger, Product) end
---@param Trigger USDPlacementBoxTrigger
---@param PlacedProduct AProduct
function USDPlacementTriggersManager:OnProductPlaced(Trigger, PlacedProduct) end
---@param Trigger USDPlacementBoxTrigger
---@param OverlappedProduct AProduct
function USDPlacementTriggersManager:OnProductOverlapped(Trigger, OverlappedProduct) end
---@param InProduct AProduct
---@param FoundBoxTrigger USDPlacementBoxTrigger
---@return boolean
function USDPlacementTriggersManager:IsProductPlaced(InProduct, FoundBoxTrigger) end
---@return TArray<AProduct>
function USDPlacementTriggersManager:GetProducts() end
---@return TArray<USDPlacementBoxTrigger>
function USDPlacementTriggersManager:GetPlacementTriggers() end
---@return USDPlacementBoxTrigger
function USDPlacementTriggersManager:GetEmptyPlacementBox() end
---@return boolean
function USDPlacementTriggersManager:DoesContainProducts() end


---@class USDPrisonBusActivity : USDGangActivityObjBase
---@field PrisonersNum int32
---@field PrisonBusSoftClass TSoftClassPtr<AGSSWheeledVehicle>
local USDPrisonBusActivity = {}

---@return int32
function USDPrisonBusActivity:GetPrisonersNum() end


---@class USDShadyDealsSettings : UDeveloperSettings
---@field FightersPoolPath FSoftObjectPath
---@field FightersNumber int32
---@field PauseBetweenFights float
---@field TrainingPhaseDuration float
---@field PauseBeforeFight float
---@field RedTrainingVehicleClassPath FSoftClassPath
---@field BlueTrainingVehicleClassPath FSoftClassPath
---@field RedFightVehicleClassPath FSoftClassPath
---@field BlueFightVehicleClassPath FSoftClassPath
---@field DirtyMoneyBagCapacity float
---@field GangActivityDisplayNames FText
local USDShadyDealsSettings = {}

---@param InGangActivity ESDGangActivityType
---@return FText
function USDShadyDealsSettings:GetGangActivityName(InGangActivity) end


---@class USDShadynessManager : UActorComponent
---@field ShadynessChangedDelegate FSDShadynessManagerShadynessChangedDelegate
---@field PreModifierAddedDelegate FSDShadynessManagerPreModifierAddedDelegate
---@field PostModifierAddedDelegate FSDShadynessManagerPostModifierAddedDelegate
---@field PreModifierRemovedDelegate FSDShadynessManagerPreModifierRemovedDelegate
---@field ShadynessLevelChangedDelegate FSDShadynessManagerShadynessLevelChangedDelegate
---@field ShadynessLockStateChangedDelegate FSDShadynessManagerShadynessLockStateChangedDelegate
---@field ShadynessMax float
---@field ShadynessStaticDrop float
---@field ShadynessStaticDropRate float
---@field ShadynessModifiersTickRate float
---@field ShadynessModifiers TArray<USDShadynessModifierBase>
---@field ShadynessLevels TArray<FSDShadynessLevel>
---@field ShadynessLevelsAmount int32
---@field Shadyness float
---@field CachedShadynesLevel int32
---@field bShadynessDropEnabled boolean
---@field bShadynessLocked boolean
---@field TimerHandle_ShadynessModifiersTick FTimerHandle
---@field TimerHandle_ShadynessStaticDropTick FTimerHandle
---@field EMPTY_SHADYNESS_LEVEL FSDShadynessLevel
local USDShadynessManager = {}

function USDShadynessManager:TickShadynessModifiers() end
function USDShadynessManager:ShadynessStaticDropTick() end
---@param InNewValue float
---@param bForce boolean
function USDShadynessManager:SetShadynessValue(InNewValue, bForce) end
---@param InNewPercent int32
---@param bForce boolean
function USDShadynessManager:SetShadynessPercent(InNewPercent, bForce) end
---@param bInLocked boolean
function USDShadynessManager:SetShadynessLocked(bInLocked) end
---@param bEnabled boolean
function USDShadynessManager:SetShadynessDropEnabled(bEnabled) end
---@param InAmount int32
function USDShadynessManager:SetLevelsAmount(InAmount) end
---@param InLevel int32
---@param InStartPercent float
---@param InEndPercent float
function USDShadynessManager:SetLevel(InLevel, InStartPercent, InEndPercent) end
---@param InModifier USDShadynessModifierBase
function USDShadynessManager:RemoveShadynessModifier(InModifier) end
---@param InNewPercent float
function USDShadynessManager:ModifyShadynessValue(InNewPercent) end
---@param InNewPercent int32
function USDShadynessManager:ModifyShadynessPercent(InNewPercent) end
---@return boolean
function USDShadynessManager:IsShadynessLocked() end
---@return float
function USDShadynessManager:GetShadynessValue() end
---@return int32
function USDShadynessManager:GetShadynessPercent() end
---@return TArray<USDShadynessModifierBase>
function USDShadynessManager:GetShadynessModifiers() end
---@param InLevel int32
---@return FSDShadynessLevel
function USDShadynessManager:GetShadynessLevelStruct(InLevel) end
---@return int32
function USDShadynessManager:GetShadynessLevelsAmount() end
---@return TArray<FSDShadynessLevel>
function USDShadynessManager:GetShadynessLevels() end
---@return int32
function USDShadynessManager:GetShadynessLevel() end
---@return float
function USDShadynessManager:GetMaxShadynessValue() end
function USDShadynessManager:ClearLevelsArray() end
---@param InModifier USDShadynessModifierBase
---@return boolean
function USDShadynessManager:ApplyShadynessModifier(InModifier) end
---@param InLevel int32
---@param InStartPercent float
---@param InEndPercent float
function USDShadynessManager:AddLevel(InLevel, InStartPercent, InEndPercent) end


---@class USDShadynessModifierBase : UObject
---@field ModifierSettings FSDShadynessModifierSettings
---@field DurationLeft float
local USDShadynessModifierBase = {}

---@return boolean
function USDShadynessModifierBase:IsDurationExceeded() end
---@param InModifierSettings FSDShadynessModifierSettings
function USDShadynessModifierBase:Initialize(InModifierSettings) end
---@return float
function USDShadynessModifierBase:GetShadynessDelta() end
---@return ESDShadynessModifierPersistance
function USDShadynessModifierBase:GetModifierPersistance() end
---@return float
function USDShadynessModifierBase:GetDurationLeft() end
---@return float
function USDShadynessModifierBase:GetDuration() end


---@class USDSheriffActionBase : UObject
local USDSheriffActionBase = {}

---@return FText
function USDSheriffActionBase:GetActionDescription() end
---@param InSheriffTrigger USDStandaloneSheriffTrigger
function USDSheriffActionBase:Execute(InSheriffTrigger) end


---@class USDSheriffBehaviorDataAsset : UDataAsset
---@field MinimalSheriffSpawnDelay float
---@field SheriffBehaviorSettings TArray<FSDSheriffBehaviorSettings>
local USDSheriffBehaviorDataAsset = {}

---@param InLevel int32
---@return FSDSheriffBehaviorSettings
function USDSheriffBehaviorDataAsset:GetBehaviourSettings(InLevel) end


---@class USDSheriffPatrolGangActivity : USDGangActivityObjBase
---@field SheriffCharacterClass TSoftClassPtr<AAICharacterBase>
---@field SheriffVehicleClass TSoftClassPtr<AGSSWheeledVehicle>
---@field PatrolWaypoins TArray<ASDSheriffPatrolWaypoint>
---@field SheriffVehicle AGSSWheeledVehicle
---@field SheriffCharacter AAICharacterBase
local USDSheriffPatrolGangActivity = {}

---@param InWaypointIndex int32
function USDSheriffPatrolGangActivity:SetWaypointReachedIndex(InWaypointIndex) end
---@param InWaypoint ASDSheriffPatrolWaypoint
function USDSheriffPatrolGangActivity:SetWaypointReached(InWaypoint) end
---@param InSheriffVehicle AGSSWheeledVehicle
function USDSheriffPatrolGangActivity:SetSheriffVehicle(InSheriffVehicle) end
---@param InSheriffChar AAICharacterBase
function USDSheriffPatrolGangActivity:SetSheriffCharacter(InSheriffChar) end
---@param DestroyedActor AActor
function USDSheriffPatrolGangActivity:OnSheriffActorDestroyed(DestroyedActor) end
---@param ActivityWaypoint ESDGangActivityType
---@param Index int32
---@return boolean
function USDSheriffPatrolGangActivity:MoveWaypointToIndex(ActivityWaypoint, Index) end
---@param InWaypointIndex int32
---@return boolean
function USDSheriffPatrolGangActivity:IsWaypointReachedIndex(InWaypointIndex) end
---@param InWaypoint ASDSheriffPatrolWaypoint
---@return boolean
function USDSheriffPatrolGangActivity:IsWaypointReached(InWaypoint) end
---@return boolean
function USDSheriffPatrolGangActivity:IsPatrollEnded() end
---@param Index int32
---@param InWaypoint ASDSheriffPatrolWaypoint
function USDSheriffPatrolGangActivity:InsertPatrolWaypoint(Index, InWaypoint) end
---@return AGSSWheeledVehicle
function USDSheriffPatrolGangActivity:GetSheriffVehicle() end
---@return AAICharacterBase
function USDSheriffPatrolGangActivity:GetSheriffCharacter() end
---@return TArray<ASDSheriffPatrolWaypoint>
function USDSheriffPatrolGangActivity:GetPatrolWaypoints() end
---@param WaypointIndex int32
---@return ASDSheriffPatrolWaypoint
function USDSheriffPatrolGangActivity:GetFirstUnreachedWaypoint(WaypointIndex) end


---@class USDStandaloneSheriffTrigger : UBoxComponent
---@field bUseCustomCatchActions boolean
---@field CatchActions TArray<USDSheriffActionBase>
---@field bGangActivityRelated boolean
---@field RelatedGangActivity ESDGangActivityType
---@field bCanCatch boolean
local USDStandaloneSheriffTrigger = {}

---@param bInCanBeCaught boolean
function USDStandaloneSheriffTrigger:SetCanBeCaught(bInCanBeCaught) end
---@return ESDGangActivityType
function USDStandaloneSheriffTrigger:GetRelatedGangActivityType() end
---@return TArray<USDSheriffActionBase>
function USDStandaloneSheriffTrigger:GetCatchActions() end
---@return boolean
function USDStandaloneSheriffTrigger:CanBeCatchedBySheriff() end


---@class USDWarehouseGangActivity : USDMinigameBasedGangActivity
---@field TimerHandle_OrderPickup FTimerHandle
---@field OrderPickupDelayMin int32
---@field OrderPickupDelayMax int32
---@field BoxNum int32
---@field PickUpVanClass TSubclassOf<AGSSWheeledVehicle>
local USDWarehouseGangActivity = {}

function USDWarehouseGangActivity:StartSpawnPickUpVanTimer() end
function USDWarehouseGangActivity:OnPickUpVanSpawned() end
function USDWarehouseGangActivity:OnPickUpVanLoaded() end
function USDWarehouseGangActivity:OnDeliveryVanUnloaded() end
function USDWarehouseGangActivity:OnDeliveryVanSpawned() end
function USDWarehouseGangActivity:ClearSpawnPickUpVanTimer() end


---@class USD_AiCharacterComponent : UAiCharacterComponent
---@field Drunkenness float
---@field BarCustmerType EBarCustomerNativeType
local USD_AiCharacterComponent = {}



---@class USD_Generic_Lib_Functions : UBlueprintFunctionLibrary
local USD_Generic_Lib_Functions = {}

---@return boolean
function USD_Generic_Lib_Functions:IsGameShipping() end


---@class USaunaSettings : URvMinigameBaseSettings
---@field SettingsPerDifficulty TArray<FSaunaSettingsPerDifficulty>
---@field CollectibleDotsSpawnSplineTimeRange FFloatRange
---@field SpawnCollectibleDotsInitDelay float
---@field MistakeModeDuration float
local USaunaSettings = {}



---@class USaveGameAirstripActorComponent : USaveGameDLCActorComponent
local USaveGameAirstripActorComponent = {}

---@param Plane ATradingAirplane
---@param SavedTradingPilot FSavedTradingPilot
function USaveGameAirstripActorComponent:SaveTradingPilot(Plane, SavedTradingPilot) end
---@param SavedTowy FSavedTowy
---@param SavedJoePlane FSavedJoePlane
function USaveGameAirstripActorComponent:SaveTowy(SavedTowy, SavedJoePlane) end
---@param SavedDLCTradingSystemManager FSavedDLCTradingSystemManager
function USaveGameAirstripActorComponent:SaveSpawnedAirplanes(SavedDLCTradingSystemManager) end
---@param SavedAirport FSavedAirport
function USaveGameAirstripActorComponent:SaveSequences(SavedAirport) end
---@param SavedAirportScheduleManager FSavedAirportScheduleManager
function USaveGameAirstripActorComponent:SaveRunways(SavedAirportScheduleManager) end
---@param SavedRandomDialogues FSavedRandomDialoguesManager
function USaveGameAirstripActorComponent:SaveRandomDialoguesManager(SavedRandomDialogues) end
---@param SavedJoePlane FSavedJoePlane
function USaveGameAirstripActorComponent:SaveJoePlane(SavedJoePlane) end
---@param SavedDLCTradingSystemManager FSavedDLCTradingSystemManager
function USaveGameAirstripActorComponent:SaveDLCTradingSystemManager(SavedDLCTradingSystemManager) end
---@param SavedCrashSite FSavedCrashSiteManager
function USaveGameAirstripActorComponent:SaveCrashSiteManager(SavedCrashSite) end
function USaveGameAirstripActorComponent:SaveAirstrip() end
---@param SavedAirport FSavedAirportInventory
function USaveGameAirstripActorComponent:SaveAirportInventory(SavedAirport) end
---@param SavedAirport FSavedAirport
function USaveGameAirstripActorComponent:SaveAirport(SavedAirport) end
---@param Plane ATradingAirplane
---@param SavedTradingPilot FSavedTradingPilot
function USaveGameAirstripActorComponent:LoadTradingPilot(Plane, SavedTradingPilot) end
---@param SavedTowy FSavedTowy
function USaveGameAirstripActorComponent:LoadTowy(SavedTowy) end
---@param SavedAirport FSavedAirport
function USaveGameAirstripActorComponent:LoadSequences(SavedAirport) end
---@param SavedAirportScheduleManager FSavedAirport
function USaveGameAirstripActorComponent:LoadRunways(SavedAirportScheduleManager) end
---@param SavedRandomDialogues FSavedRandomDialoguesManager
function USaveGameAirstripActorComponent:LoadRandomDialoguesManager(SavedRandomDialogues) end
---@param ItemsToCheck TArray<FGeneratedLootInfo>
function USaveGameAirstripActorComponent:LoadNeededItems(ItemsToCheck) end
---@param SavedJoePlane FSavedJoePlane
function USaveGameAirstripActorComponent:LoadJoePlane(SavedJoePlane) end
function USaveGameAirstripActorComponent:LoadFixAirplanes() end
---@param SavedDLCTradingSystemManager FSavedDLCTradingSystemManager
function USaveGameAirstripActorComponent:LoadDLCTradingSystemManager(SavedDLCTradingSystemManager) end
---@param SavedCrashSiteManager FSavedCrashSiteManager
function USaveGameAirstripActorComponent:LoadCrashSiteManager(SavedCrashSiteManager) end
function USaveGameAirstripActorComponent:LoadAirstrip() end
---@param SavedAirstrip FSavedAirstrip
---@param SaveGameVersion int32
function USaveGameAirstripActorComponent:LoadAirportInventory(SavedAirstrip, SaveGameVersion) end
---@param SavedAirport FSavedAirport
---@param SavedDLCTradingSystemManager FSavedDLCTradingSystemManager
function USaveGameAirstripActorComponent:LoadAirport(SavedAirport, SavedDLCTradingSystemManager) end
---@param SavedDLCTradingSystemManager FSavedDLCTradingSystemManager
function USaveGameAirstripActorComponent:LoadAirplanes(SavedDLCTradingSystemManager) end


---@class USaveGameCinemaActorComponent : USaveGameDLCActorComponent
local USaveGameCinemaActorComponent = {}

function USaveGameCinemaActorComponent:SaveCinemaManager() end
function USaveGameCinemaActorComponent:LoadCinemaManager() end


---@class USaveGameDLCActorComponent : UActorComponent
local USaveGameDLCActorComponent = {}


---@class USaveGameInstanceSubsystem : UGameInstanceSubsystem
---@field SaveGameDataActor ASaveGameDataActor
local USaveGameInstanceSubsystem = {}



---@class USaveGameJunkyardActorComponent : USaveGameDLCActorComponent
---@field OnCarSpawnedFromSave FSaveGameJunkyardActorComponentOnCarSpawnedFromSave
---@field PartsLoadedCount TMap<AJunkyardCarWreck, int32>
local USaveGameJunkyardActorComponent = {}

---@param SavedData FSavedCarWreck
function USaveGameJunkyardActorComponent:SpawnCarWreckFromSavedData(SavedData) end
function USaveGameJunkyardActorComponent:SaveWrenchComboRecord() end
function USaveGameJunkyardActorComponent:SaveWreckAreas() end
function USaveGameJunkyardActorComponent:SaveSean() end
---@param SavedSaleSlots TArray<FSavedSaleSlot>
function USaveGameJunkyardActorComponent:SaveSaleSlots(SavedSaleSlots) end
function USaveGameJunkyardActorComponent:SaveJunkyardStorage() end
function USaveGameJunkyardActorComponent:SaveJunkyardManager() end
function USaveGameJunkyardActorComponent:SaveFameManager() end
function USaveGameJunkyardActorComponent:SaveCrane() end
---@param SavedStatesData TArray<FSavedState>
---@param UnlockedStates TArray<FUnlockedState>
function USaveGameJunkyardActorComponent:SaveContractsStates(SavedStatesData, UnlockedStates) end
function USaveGameJunkyardActorComponent:SaveContractsManager() end
---@param SavedContractSlots TArray<FSavedContractSlot>
---@param ContractSlots TArray<FContractSlot>
function USaveGameJunkyardActorComponent:SaveContractSlots(SavedContractSlots, ContractSlots) end
---@param Contracts TArray<UContractBase>
---@param SavedState FSavedState
function USaveGameJunkyardActorComponent:SaveContracts(Contracts, SavedState) end
function USaveGameJunkyardActorComponent:SaveChemicalBaths() end
function USaveGameJunkyardActorComponent:SaveCarWrecks() end
---@param CarWreck AJunkyardCarWreck
---@param SavedCarWreckData FSavedCarWreck
function USaveGameJunkyardActorComponent:SaveCarParts(CarWreck, SavedCarWreckData) end
function USaveGameJunkyardActorComponent:SaveBuildings() end
function USaveGameJunkyardActorComponent:SaveAuctionsManager() end
---@param LoadedWreck AJunkyardCarWreck
---@param WreckData FSavedCarWreck
function USaveGameJunkyardActorComponent:OnCarWreckPartLoaded(LoadedWreck, WreckData) end
---@param LoadedWreck AJunkyardCarWreck
---@param WreckData FSavedCarWreck
function USaveGameJunkyardActorComponent:OnCarWreckFullyLoaded(LoadedWreck, WreckData) end
function USaveGameJunkyardActorComponent:LoadWrenchComboRecord() end
function USaveGameJunkyardActorComponent:LoadWreckAreas() end
function USaveGameJunkyardActorComponent:LoadSean() end
---@param SavedSaleSlots TArray<FSavedSaleSlot>
function USaveGameJunkyardActorComponent:LoadSaleSlots(SavedSaleSlots) end
function USaveGameJunkyardActorComponent:LoadJunkyardStorage() end
function USaveGameJunkyardActorComponent:LoadJunkyardManager() end
function USaveGameJunkyardActorComponent:LoadFameManager() end
function USaveGameJunkyardActorComponent:LoadCrane() end
---@param UnlockedStates TArray<FUnlockedState>
---@param SavedStatesData TArray<FSavedState>
function USaveGameJunkyardActorComponent:LoadContractsStates(UnlockedStates, SavedStatesData) end
function USaveGameJunkyardActorComponent:LoadContractsManager() end
---@param ContractSlots TArray<FContractSlot>
---@param SavedContractSlots TArray<FSavedContractSlot>
function USaveGameJunkyardActorComponent:LoadContractSlots(ContractSlots, SavedContractSlots) end
---@param SavedState FSavedState
function USaveGameJunkyardActorComponent:LoadContracts(SavedState) end
function USaveGameJunkyardActorComponent:LoadChemicalBaths() end
function USaveGameJunkyardActorComponent:LoadCarWrecks() end
---@param CarWreck AJunkyardCarWreck
---@param SavedCarWreckData FSavedCarWreck
function USaveGameJunkyardActorComponent:LoadCarParts(CarWreck, SavedCarWreckData) end
function USaveGameJunkyardActorComponent:LoadBuildings() end
function USaveGameJunkyardActorComponent:LoadAuctionsManager() end
---@param CarWreck AJunkyardCarWreck
---@return FSavedCarWreck
function USaveGameJunkyardActorComponent:GetSavedCarWreck(CarWreck) end


---@class USaveGameParadiseActorComponent : USaveGameDLCActorComponent
---@field Volcano TSoftObjectPtr<AVolcano>
---@field ScubaEquipmentRentalBuilding TSoftObjectPtr<AScubaEquipmentRentalBuilding>
---@field SurfingEquipmentRentalBuilding TSoftObjectPtr<ASurfingEquipmentRentalBuilding>
---@field ShowerBuilding TSoftObjectPtr<AShower>
---@field WcBuilding TSoftObjectPtr<AWC>
local USaveGameParadiseActorComponent = {}

function USaveGameParadiseActorComponent:SaveWaterVehicles() end
function USaveGameParadiseActorComponent:SaveVolcanoStreak() end
function USaveGameParadiseActorComponent:SaveVolcano() end
function USaveGameParadiseActorComponent:SaveToilet() end
function USaveGameParadiseActorComponent:SaveSurfingEqRentalBuilding() end
function USaveGameParadiseActorComponent:SaveShower() end
function USaveGameParadiseActorComponent:SaveShark() end
function USaveGameParadiseActorComponent:SaveScubaEqRentalBuilding() end
---@param SavedEqRentalBuilding FSavedEqRentalBuilding
---@param EqRentalBuilding AEquipmentRentalBuilding
function USaveGameParadiseActorComponent:SaveEqRentalBuilding(SavedEqRentalBuilding, EqRentalBuilding) end
function USaveGameParadiseActorComponent:SaveDeathsData() end
function USaveGameParadiseActorComponent:SaveCombo() end
function USaveGameParadiseActorComponent:LoadWaterVehicles() end
function USaveGameParadiseActorComponent:LoadVolcanoStreak() end
function USaveGameParadiseActorComponent:LoadVolcano() end
function USaveGameParadiseActorComponent:LoadToilet() end
function USaveGameParadiseActorComponent:LoadSurfingEqRentalBuilding() end
function USaveGameParadiseActorComponent:LoadShower() end
function USaveGameParadiseActorComponent:LoadShark() end
function USaveGameParadiseActorComponent:LoadScubaEqRentalBuilding() end
---@param LoadEqRentalBuilding FSavedEqRentalBuilding
---@param EqRentalBuilding AEquipmentRentalBuilding
function USaveGameParadiseActorComponent:LoadEqRentalBuilding(LoadEqRentalBuilding, EqRentalBuilding) end
function USaveGameParadiseActorComponent:LoadDeathsData() end
function USaveGameParadiseActorComponent:LoadCombo() end


---@class USaveGamePartyTimeActorComponent : USaveGameDLCActorComponent
local USaveGamePartyTimeActorComponent = {}

function USaveGamePartyTimeActorComponent:SavePartyTime() end
function USaveGamePartyTimeActorComponent:SavePartyTables() end
function USaveGamePartyTimeActorComponent:SaveIceCreamBuilding() end
function USaveGamePartyTimeActorComponent:LoadPartyTime() end
function USaveGamePartyTimeActorComponent:LoadPartyTables() end
function USaveGamePartyTimeActorComponent:LoadIceCreamBuilding() end


---@class USaveGameRVCampActorComponent : USaveGameDLCActorComponent
local USaveGameRVCampActorComponent = {}

function USaveGameRVCampActorComponent:SaveRVSpawner() end
function USaveGameRVCampActorComponent:SaveRVManagers() end
function USaveGameRVCampActorComponent:SaveRVEmployees() end
function USaveGameRVCampActorComponent:SaveRVCampSpots() end
function USaveGameRVCampActorComponent:SaveRVCampers() end
function USaveGameRVCampActorComponent:SaveRVBuildingsToUpgrade() end
function USaveGameRVCampActorComponent:SaveRuby() end
function USaveGameRVCampActorComponent:LoadRVSpawner() end
function USaveGameRVCampActorComponent:LoadRVManagers() end
function USaveGameRVCampActorComponent:LoadRVEmployees() end
function USaveGameRVCampActorComponent:LoadRVCampSpots() end
function USaveGameRVCampActorComponent:LoadRVCampers() end
function USaveGameRVCampActorComponent:LoadRVBuildingsToUpgrade() end
function USaveGameRVCampActorComponent:LoadRuby() end
---@param CustomerData URVCustomerData
---@return FSavedRVCustomerData
function USaveGameRVCampActorComponent:GetSavedRVCustomerData(CustomerData) end
---@param CustomerDataStruct FSavedRVCustomerData
---@return URVCustomerData
function USaveGameRVCampActorComponent:GetLoadedRVCustomerData(CustomerDataStruct) end


---@class USaveSlot : USaveGame
---@field SavedSlotStruct TArray<FSavedSlotStruct>
---@field IDSlots TArray<int32>
local USaveSlot = {}



---@class USeObjectiveMarkertVisibilityGaAc : UGameAction
local USeObjectiveMarkertVisibilityGaAc = {}


---@class USendEmailGameAction : UGameAction
---@field MailClass TSubclassOf<UGSSMail>
local USendEmailGameAction = {}



---@class USetActorsCollisionGameAction : UGameAction
---@field Actor TSoftObjectPtr<AActor>
---@field bCollisionEnabled boolean
---@field ChildActorClass TSoftClassPtr<AActor>
local USetActorsCollisionGameAction = {}



---@class USetCirucalMenuEnabledGameAction : UGameAction
---@field bEnable boolean
local USetCirucalMenuEnabledGameAction = {}



---@class USetJerryCanFuelGameAction : UGameAction
---@field JerryCanFuel float
local USetJerryCanFuelGameAction = {}



---@class USetUnlockableUIStateGameAction : UGameAction
---@field Tags FGameplayTagContainer
---@field State EUnlockableUIState
local USetUnlockableUIStateGameAction = {}



---@class UShadyStatics : UObject
local UShadyStatics = {}

---@param bEnabled boolean
function UShadyStatics:SetCutscenesEnabled(bEnabled) end
---@param WorldContextObject UObject
---@param InModifierInstance USDShadynessModifierBase
function UShadyStatics:RemoveShadynessModifierInstance(WorldContextObject, InModifierInstance) end
---@return boolean
function UShadyStatics:IsWithEditor() end
---@param Fighter FSDFighterStats
---@return boolean
function UShadyStatics:IsFighterValid(Fighter) end
---@param WorldContextObject UObject
---@return USDShadynessManager
function UShadyStatics:GetShadynessManager(WorldContextObject) end
---@param WorldContextObject UObject
---@return UDLCShadyDealsManager
function UShadyStatics:GetShadyDealsManager(WorldContextObject) end
---@param WorldContextObject UObject
---@return float
function UShadyStatics:GetGangMultiplier(WorldContextObject) end
---@param WorldContextObject UObject
---@return USDGangActivityManager
function UShadyStatics:GetGangActivityManager(WorldContextObject) end
---@param WorldContextObject UObject
---@return USDGameplayEvents
function UShadyStatics:GetGameplayEvents(WorldContextObject) end
---@return TSoftObjectPtr<UDataTable>
function UShadyStatics:GetFightersPoolDataTable() end
---@param Fighter FSDFighterStats
---@return float
function UShadyStatics:GetFighterQuality(Fighter) end
---@param WorldContextObject UObject
---@return USDDirtyMoneyComponent
function UShadyStatics:GetDirtyMoneyComponent(WorldContextObject) end
---@return float
function UShadyStatics:GetDirtyMoneyBagCapacity() end
---@param WorldContextObject UObject
---@return TArray<USDSheriffActionBase>
function UShadyStatics:GetCurrentSheriffCatchActions(WorldContextObject) end
---@param WorldContextObject UObject
---@return FSDSheriffBehaviorSettings
function UShadyStatics:GetCurrentSheriffBehaviorSettings(WorldContextObject) end
---@param InObjectClass UClass
---@param ComponentClass UClass
---@return UActorComponent
function UShadyStatics:GetComponentFromCDO(InObjectClass, ComponentClass) end
---@param InClass UClass
---@return UObject
function UShadyStatics:GetClassDefaultObject(InClass) end
---@param InCharacter AAICharacterBase
---@param Result ETaskResult
function UShadyStatics:FinishCurrentAITask(InCharacter, Result) end
---@param A FSDFighterStats
---@param B FSDFighterStats
---@return boolean
function UShadyStatics:FighterEquals(A, B) end
---@param TaskType EInteractableTaskType
---@return FTaskStruct
function UShadyStatics:CreateAITaskStruct(TaskType) end
---@param A FSDFighterAttributes
---@param B FSDFighterAttributes
---@return FSDFighterAttributes
function UShadyStatics:CompareFighterAttributes(A, B) end
---@return boolean
function UShadyStatics:AreCutscenesEnabled() end
---@param WorldContextObject UObject
---@param InModifierInstance USDShadynessModifierBase
---@return USDShadynessModifierBase
function UShadyStatics:ApplyShadynessModifierInstance(WorldContextObject, InModifierInstance) end
---@param WorldContextObject UObject
---@param ModifierSettings FSDShadynessModifierSettings
---@return USDShadynessModifierBase
function UShadyStatics:ApplyShadynessModifier(WorldContextObject, ModifierSettings) end


---@class USharkHealthBar : UUserWidget
local USharkHealthBar = {}

---@param CurrentHealth float
function USharkHealthBar:RefreshWidget(CurrentHealth) end
function USharkHealthBar:OnSuccess() end
function USharkHealthBar:OnFailed() end


---@class USharkNotification : UUserWidget
---@field OpenNotif UWidgetAnimation
---@field SharkOut UWidgetAnimation
local USharkNotification = {}



---@class UShiftsInfoDataAsset : UDataAsset
local UShiftsInfoDataAsset = {}


---@class UShiftsManager : UWorldSubsystem
---@field OnEmployeFired FShiftsManagerOnEmployeFired
---@field OnEmployeHired FShiftsManagerOnEmployeHired
---@field OwnedEmployees TArray<UEmployeeShift>
---@field CurrentShift EShiftType
---@field EmployeeSchedulingInfo UEmployeeTasksDataAsset
local UShiftsManager = {}

function UShiftsManager:Test_AddOwnedEmployees() end
---@param NewOwnedEmployees TArray<UEmployeeShift>
function UShiftsManager:SetOwnedEmployees(NewOwnedEmployees) end
---@param EmployeeShift UEmployeeShift
---@param Priority int32
---@param TaskToAssign EEmployeeTask
---@param NewTask TSoftClassPtr<UEmployeeTask>
---@param TargetActorClass TSoftClassPtr<AInteractableActor>
---@param bActive boolean
function UShiftsManager:SetNewEmployeeTask(EmployeeShift, Priority, TaskToAssign, NewTask, TargetActorClass, bActive) end
---@param Employee AAICharacterBase
---@param Task EEmployeeTask
---@param Priority int32
function UShiftsManager:SetEmployeeTask(Employee, Task, Priority) end
---@param Employee UEmployeeShift
function UShiftsManager:SetEmployeeBinding(Employee) end
---@param Employee UEmployeeShift
---@param bNewAutopayValue boolean
function UShiftsManager:SetEmployeeAutopay(Employee, bNewAutopayValue) end
---@param EmployeeShift UEmployeeShift
---@param NewShift EShiftType
---@param AlertToShow FText
---@param Duration float
---@return boolean
function UShiftsManager:SetEmployeeAssignedShift(EmployeeShift, NewShift, AlertToShow, Duration) end
---@param EmployeeShift UEmployeeShift
---@param TaskPriority int32
---@param bNewActiveValue boolean
function UShiftsManager:SetAssignedTaskActivationPossibility(EmployeeShift, TaskPriority, bNewActiveValue) end
---@param SavedEmployees TArray<FSavedEmployee>
function UShiftsManager:SaveEmployee(SavedEmployees) end
---@param Shift EShiftType
function UShiftsManager:ResetSpecificShiftEmployeesStamina(Shift) end
---@param Employee UEmployeeShift
---@param ChairTransform FTransform
function UShiftsManager:ResetEmployeeLocation(Employee, ChairTransform) end
---@param EmployeeShift UEmployeeShift
---@param Priority int32
function UShiftsManager:RemoveTask(EmployeeShift, Priority) end
---@param FiredEmployee UEmployeeShift
function UShiftsManager:RemoveFiredEmployeeByRef(FiredEmployee) end
---@param FiredEmployeeIndex int32
function UShiftsManager:RemoveFiredEmployeeByIndex(FiredEmployeeIndex) end
---@param RemovedBuilding AInteractableBuilding
---@param TaskType EEmployeeTask
function UShiftsManager:RemoveAsTargetActor(RemovedBuilding, TaskType) end
function UShiftsManager:OnWorldBeginPlay() end
---@param EmployeeShift TSoftObjectPtr<UEmployeeShift>
---@param MainTaskPriority int32
function UShiftsManager:OnTaskLoaded(EmployeeShift, MainTaskPriority) end
---@param bGameLoaded boolean
function UShiftsManager:OnGameLoaded(bGameLoaded) end
---@param Hour int32
function UShiftsManager:NextShiftStartsCheck(Hour) end
---@param NewShiftType EShiftType
function UShiftsManager:NewShiftStarted(NewShiftType) end
---@param EmployeeShift UEmployeeShift
---@param MainTaskPriority int32
function UShiftsManager:LoadEmployeeTask(EmployeeShift, MainTaskPriority) end
---@param SavedEmployees TArray<FSavedEmployee>
---@param Employees TArray<AAICharacterBase>
function UShiftsManager:LoadEmployees(SavedEmployees, Employees) end
---@param SavedEmployees TArray<FSavedEmployee>
---@param Employee AAICharacterBase
function UShiftsManager:LoadEmployee(SavedEmployees, Employee) end
---@param Employee UEmployeeShift
---@param Priority int32
---@return FText
function UShiftsManager:GetTaskName(Employee, Priority) end
---@return TArray<UEmployeeShift>
function UShiftsManager:GetOwnedEmployees() end
---@param Employee AAICharacterBase
---@return UEmployeeShift
function UShiftsManager:GetOwnedEmployee(Employee) end
---@return EShiftType
function UShiftsManager:GetCurrentShift() end
---@param Employee UEmployeeShift
---@param Priority int32
---@return FAssignedTasksInfo
function UShiftsManager:GetAssignedTaskInfo(Employee, Priority) end
---@param Employee UEmployeeShift
---@return boolean
function UShiftsManager:ForceNextTask(Employee) end
---@param Employee AAICharacterBase
function UShiftsManager:EmployeeHired(Employee) end
---@param FiredEmployee AAICharacterBase
function UShiftsManager:EmployeeFired(FiredEmployee) end
---@param Employee AAICharacterBase
function UShiftsManager:CreateSetEmployeeShift(Employee) end
---@param Hour int32
function UShiftsManager:CheckSetCurrentShift(Hour) end
---@param Employee UEmployeeShift
---@return boolean
function UShiftsManager:CheckIfHasShiftConsent(Employee) end
---@param Employee AAICharacterBase
---@param NewTaskIndex int32
---@param bCurrentTaskConsent boolean
---@return boolean
function UShiftsManager:CheckIfCanMoveToNextTask(Employee, NewTaskIndex, bCurrentTaskConsent) end
---@param EmployeeShift UEmployeeShift
---@param AlertToShow FText
---@param Duration float
---@return boolean
function UShiftsManager:CanAssignEmployeeShift(EmployeeShift, AlertToShow, Duration) end
---@param EmployeeShift UEmployeeShift
---@param Priority int32
---@param TaskToAssign EEmployeeTask
---@param bActive boolean
function UShiftsManager:AssignNewEmployeeTask_byTaskEnum(EmployeeShift, Priority, TaskToAssign, bActive) end
---@param EmployeeShift UEmployeeShift
---@param Priority int32
---@param TaskToAssign TSoftClassPtr<UEmployeeTask>
---@param bActive boolean
function UShiftsManager:AssignNewEmployeeTask_bySPtr(EmployeeShift, Priority, TaskToAssign, bActive) end
---@param EmployeeShift UEmployeeShift
---@param Priority int32
---@param TaskSkillToAssign EEmployeeSkill
---@param bActive boolean
function UShiftsManager:AssignNewEmployeeTask_bySkill(EmployeeShift, Priority, TaskSkillToAssign, bActive) end
---@param NewEmployee UEmployeeShift
function UShiftsManager:AddOwnedEmployee(NewEmployee) end
---@param NewBuilding AInteractableBuilding
---@param TaskType EEmployeeTask
function UShiftsManager:AddAsTargetActor(NewBuilding, TaskType) end


---@class UShootingRangeSettings : URvMinigameBaseSettings
---@field PlayerAmmo int32
---@field ReloadSpeed float
---@field GameTimeSeconds float
---@field InitialTargetSpawnDelay float
---@field ScoreNormalTargets float
---@field ScoreMoveingTargets float
---@field ScoreZigZagTargets float
---@field ScoreUfoTarget float
---@field ScoreCoyotTarget float
---@field CooldownBonusLowDifferenceScore TMap<EGuestServiceDifficulty, float>
---@field CooldownBonusMidDifferenceScore TMap<EGuestServiceDifficulty, float>
---@field CooldownBonusBestDifferenceScore TMap<EGuestServiceDifficulty, float>
---@field LowDifferenceThresholdMin int32
---@field LowDifferenceThresholdMax int32
---@field MidDifferenceThresholdMin int32
---@field MidDifferenceThresholdMax int32
---@field BestDifferenceThresholdMin int32
---@field BestDifferenceThresholdMax int32
---@field CoyotOffset float
---@field CoyotSpeed float
---@field RespawnBlockerTime float
---@field TargetTypeListEasy TArray<FTargetTypeScorePair>
---@field OponentShootingTimeMinEasy float
---@field OponentShootingTimeMaxEasy float
---@field TargetSpeedEasy float
---@field TargetFoldRateMinEasy float
---@field TargetFoldRateMaxEasy float
---@field TargetRespawnRateEasy float
---@field RandomizeRailsTypeEasy boolean
---@field RedTeamSpawnPercentEasy float
---@field BlueTeamSpawnPercentEasy float
---@field NeutralUfoPercentEasy float
---@field TargetTypeListNormal TArray<FTargetTypeScorePair>
---@field OponentShootingTimeMinNormal float
---@field OponentShootingTimeMaxNormal float
---@field TargetSpeedNormal float
---@field TargetFoldRateMinNormal float
---@field TargetFoldRateMaxNormal float
---@field TargetRespawnRateNormal float
---@field RandomizeRailsTypeNormal boolean
---@field RedTeamSpawnPercentNormal float
---@field BlueTeamSpawnPercentNormal float
---@field NeutralUfoPercentNormal float
---@field TargetTypeListHard TArray<FTargetTypeScorePair>
---@field OponentShootingTimeMinHard float
---@field OponentShootingTimeMaxHard float
---@field TargetSpeedHard float
---@field TargetFoldRateMinHard float
---@field TargetFoldRateMaxHard float
---@field TargetRespawnRateHard float
---@field RandomizeRailsTypeHard boolean
---@field RedTeamSpawnPercentHard float
---@field BlueTeamSpawnPercentHard float
---@field NeutralUfoPercentHard float
local UShootingRangeSettings = {}



---@class USideNotification : UGSSBaseWidget
---@field NotificationType ENotificationType
---@field SpecialCharacterType ESpecialCharacterType
---@field NotificationAmount UTextBlock
---@field bShowAmount boolean
---@field Amount int32
local USideNotification = {}

---@param InAmount int32
---@param Condition boolean
---@return int32
function USideNotification:UpdateNotification(InAmount, Condition) end
function USideNotification:OnUpdateNotification() end


---@class USpaSettings : URvMinigameBaseSettings
---@field CooldownBonusPerActionsCompleted TMap<int32, float>
---@field RequiredActionCompletedCount int32
---@field RequiredJacuzziCount int32
---@field JacuzziFillTime float
---@field JacuzziMaxFill float
---@field JacuzziFillTargetBounds FFloatRange
---@field JacuzziFillPerfect float
---@field RequiredCandlesRange FInt32Range
---@field LighterRetryCountRange FInt32Range
---@field LighterHoldTime FFloatRange
---@field RequiredTowelsCount int32
local USpaSettings = {}



---@class USpawnEventGameAction : UGameAction
---@field Event TSoftClassPtr<UGSSEvent>
---@field bEnableEvent boolean
local USpawnEventGameAction = {}



---@class USpawnObjectiveMarkerGameAction : UGameAction
---@field MarkerClass TSoftClassPtr<AObjectiveMarker>
---@field SpawnTransform FTransform
---@field ParentActor TSoftObjectPtr<AActor>
---@field ChildActorClass TSoftClassPtr<AActor>
---@field Outline float
---@field Marker float
---@field DelayActivated float
---@field DestroyMarkerAfterObjectiveIsFinished boolean
---@field OnObjectiveMarkerSpawned FSpawnObjectiveMarkerGameActionOnObjectiveMarkerSpawned
---@field MarkerInstance AObjectiveMarker
---@field ParentObjective UObjectiveBase
---@field QuestSubsystem UQuestSubsystem
local USpawnObjectiveMarkerGameAction = {}

---@param ObjectiveFinished UObjectiveBase
function USpawnObjectiveMarkerGameAction:OnObjectiveFinished(ObjectiveFinished) end
---@param FollowedQuestLine UActiveQuestLine
function USpawnObjectiveMarkerGameAction:OnNewQuestLineFollowed(FollowedQuestLine) end
---@return AObjectiveMarker
function USpawnObjectiveMarkerGameAction:GetMarkerInstance() end


---@class USpawnWidgetGameAction : UGameAction
---@field WidgetToSpawn TSoftClassPtr<UUserWidget>
local USpawnWidgetGameAction = {}

function USpawnWidgetGameAction:OnWidgetLoaded() end


---@class USpecialContract : UContractBase
---@field CustomizationContractType ECustomizationContractType
---@field ContractCode FName
---@field RequiredCarWreckType EJunkyardCarWreckType
---@field RequiredCarWreck TSoftClassPtr<AJunkyardCarWreck>
---@field RequiredCarWreckTier EJunkyardPartRarity
---@field RequiredCarWreckStats FCarPartData
---@field RequiredCarParts TMap<EJunkyardCarPartType, FSavedCarPart>
---@field DifferentColorCarParts TArray<EJunkyardCarPartType>
---@field DecalsOfRequiredCategory TArray<TSoftClassPtr<ADecalToPaint>>
---@field RequiredPaintData FSavedCarPaint
---@field RequiredDecalsNumber int32
---@field RequiredDecalsCategory EDecalUnlockType
---@field MoneyRewardBonus float
---@field PickedCarWreck AJunkyardCarWreck
---@field ContractRequirements TArray<EContractRequirement>
local USpecialContract = {}

---@param InRequiredPaintData FSavedCarPaint
function USpecialContract:SetRequiredPaintData(InRequiredPaintData) end
---@param InRequiredDecalsNumber int32
function USpecialContract:SetRequiredDecalsNumber(InRequiredDecalsNumber) end
---@param InRequiredDecalsCategory EDecalUnlockType
function USpecialContract:SetRequiredDecalsCategory(InRequiredDecalsCategory) end
---@param InRequiredCarWreckType EJunkyardCarWreckType
function USpecialContract:SetRequiredCarWreckType(InRequiredCarWreckType) end
---@param InRequiredCarWreckTier EJunkyardPartRarity
function USpecialContract:SetRequiredCarWreckTier(InRequiredCarWreckTier) end
---@param InRequiredCarWreckStats FCarPartData
function USpecialContract:SetRequiredCarWreckStats(InRequiredCarWreckStats) end
---@param InRequiredCarWreck TSoftClassPtr<AJunkyardCarWreck>
function USpecialContract:SetRequiredCarWreck(InRequiredCarWreck) end
---@param InRequiredCarParts TMap<EJunkyardCarPartType, FSavedCarPart>
function USpecialContract:SetRequiredCarParts(InRequiredCarParts) end
---@param InMoneyRewardBonus float
function USpecialContract:SetMoneyRewardBonus(InMoneyRewardBonus) end
---@param bRequired boolean
function USpecialContract:SetIsTopSpeedStatRequired(bRequired) end
---@param bRequired boolean
function USpecialContract:SetIsStrengthStatRequired(bRequired) end
---@param bRequired boolean
function USpecialContract:SetIsPaintTypeRequired(bRequired) end
---@param bRequired boolean
function USpecialContract:SetIsPaintMaskRequired(bRequired) end
---@param bRequired boolean
function USpecialContract:SetIsPaintColorRequired(bRequired) end
---@param bRequired boolean
function USpecialContract:SetIsHandlingStatRequired(bRequired) end
---@param bRequired boolean
function USpecialContract:SetIsDecalsRequired(bRequired) end
---@param bRequired boolean
function USpecialContract:SetIsCarWreckTierRequired(bRequired) end
---@param bRequired boolean
function USpecialContract:SetIsCarWreckClassRequired(bRequired) end
---@param bRequired boolean
function USpecialContract:SetIsCarPartsTierRequired(bRequired) end
---@param bRequired boolean
function USpecialContract:SetIsCarPartsClassRequired(bRequired) end
---@param bRequired boolean
function USpecialContract:SetIsAccelerationStatRequired(bRequired) end
---@param InDifferentColorCarParts TArray<EJunkyardCarPartType>
function USpecialContract:SetDifferentColorCarParts(InDifferentColorCarParts) end
---@param InDecalsOfRequiredCategory TArray<TSoftClassPtr<ADecalToPaint>>
function USpecialContract:SetDecalsOfRequiredCategory(InDecalsOfRequiredCategory) end
---@param InCustomizationContractType ECustomizationContractType
function USpecialContract:SetCustomizationContractType(InCustomizationContractType) end
---@param InContractRequirements TArray<EContractRequirement>
function USpecialContract:SetContractRequirements(InContractRequirements) end
---@param InContractCode FName
function USpecialContract:SetContractCode(InContractCode) end
---@param Tiers TArray<EJunkyardPartRarity>
---@param OutPartRarity EJunkyardPartRarity
function USpecialContract:RandomTier(Tiers, OutPartRarity) end
---@param RequiredStats TArray<ECarPartStat>
---@param GearsNumber FFloatRange
---@param GearScoreFractionValue float
function USpecialContract:RandomPerformanceStats(RequiredStats, GearsNumber, GearScoreFractionValue) end
---@param bInRequiresPaintType boolean
---@param PossiblePaintTypes TArray<ECustomizationPaintType>
---@param bInRequiresColor boolean
---@param PossibleColors TArray<FName>
---@param bInRequiresPaintFinish boolean
---@param PossiblePaintMasks TArray<EFinishMaskType>
function USpecialContract:RandomPaintData(bInRequiresPaintType, PossiblePaintTypes, bInRequiresColor, PossibleColors, bInRequiresPaintFinish, PossiblePaintMasks) end
---@param GearsNumberRange FFloatRange
---@param GearsFraction float
---@return float
function USpecialContract:RandomGearsNumber(GearsNumberRange, GearsFraction) end
---@param DecalsNumber int32
---@param PossibleDecals TArray<FName>
function USpecialContract:RandomDecals(DecalsNumber, PossibleDecals) end
---@param StateCode FName
function USpecialContract:RandomContractCode(StateCode) end
---@param bDrawTiers boolean
---@param Tiers TArray<EJunkyardPartRarity>
---@param GearsNumberRange FFloatRange
---@param GearsFraction float
function USpecialContract:RandomCarParts(bDrawTiers, Tiers, GearsNumberRange, GearsFraction) end
---@param bDrawTiers boolean
---@param Tiers TArray<EJunkyardPartRarity>
---@param CarPartType EJunkyardCarPartType
---@param CarPart FSavedCarPart
function USpecialContract:RandomCarPart(bDrawTiers, Tiers, CarPartType, CarPart) end
---@param InContractRequirements FCustomizationRequirementsSettings
function USpecialContract:PrepareRequirements(InContractRequirements) end
---@return boolean
function USpecialContract:IsTopSpeedStatRequired() end
---@return boolean
function USpecialContract:IsStrengthStatRequired() end
---@return boolean
function USpecialContract:IsPaintTypeRequired() end
---@return boolean
function USpecialContract:IsPaintMaskRequired() end
---@return boolean
function USpecialContract:IsPaintColorRequired() end
---@return boolean
function USpecialContract:IsHandlingStatRequired() end
---@return boolean
function USpecialContract:IsDecalsRequired() end
---@param TargetDecal TSoftClassPtr<ADecalToPaint>
---@return boolean
function USpecialContract:IsDecalOfCorrectCategory(TargetDecal) end
---@param CarWreck AJunkyardCarWreck
---@return boolean
function USpecialContract:IsCorrectWreckType(CarWreck) end
---@param CarWreck AJunkyardCarWreck
---@return boolean
function USpecialContract:IsCorrectWreckClass(CarWreck) end
---@param CarWreck AJunkyardCarWreck
---@return boolean
function USpecialContract:IsCorrectPartTopSpeed(CarWreck) end
---@param CarWreck AJunkyardCarWreck
---@return boolean
function USpecialContract:IsCorrectPartStrength(CarWreck) end
---@param CarPart UJunkyardCarPartCustomizable
---@return boolean
function USpecialContract:IsCorrectPartRarity(CarPart) end
---@param CarWreck AJunkyardCarWreck
---@return boolean
function USpecialContract:IsCorrectPartHandling(CarWreck) end
---@param CarPart UJunkyardCarPartCustomizable
---@return boolean
function USpecialContract:IsCorrectPartClass(CarPart) end
---@param CarWreck AJunkyardCarWreck
---@return boolean
function USpecialContract:IsCorrectPartAcceleration(CarWreck) end
---@param CarWreck AJunkyardCarWreck
---@return boolean
function USpecialContract:IsCorrectCarWreckTier(CarWreck) end
---@return boolean
function USpecialContract:IsCarWreckTierRequired() end
---@return boolean
function USpecialContract:IsCarWreckClassRequired() end
---@return boolean
function USpecialContract:IsCarPartsTierRequired() end
---@return boolean
function USpecialContract:IsCarPartsClassRequired() end
---@return boolean
function USpecialContract:IsAccelerationStatRequired() end
---@param CarWreck AJunkyardCarWreckCustomizable
---@return boolean
function USpecialContract:HasRequiredPaintType(CarWreck) end
---@param CarWreck AJunkyardCarWreckCustomizable
---@return boolean
function USpecialContract:HasRequiredPaintMask(CarWreck) end
---@param CarWreck AJunkyardCarWreckCustomizable
---@return boolean
function USpecialContract:HasRequiredPaintColor(CarWreck) end
---@param CarWreck AJunkyardCarWreckCustomizable
---@param MatchingDecalsNumber int32
---@return boolean
function USpecialContract:HasRequiredDecals(CarWreck, MatchingDecalsNumber) end
---@param RequiredDecal TSoftClassPtr<ADecalToPaint>
---@param CarWreck AJunkyardCarWreckCustomizable
---@return boolean
function USpecialContract:HasRequiredDecal(RequiredDecal, CarWreck) end
---@return FSavedCarPaint
function USpecialContract:GetRequiredPaintData() end
---@return int32
function USpecialContract:GetRequiredDecalsNumber() end
---@return EDecalUnlockType
function USpecialContract:GetRequiredDecalsCategory() end
---@return EJunkyardCarWreckType
function USpecialContract:GetRequiredCarWreckType() end
---@return EJunkyardPartRarity
function USpecialContract:GetRequiredCarWreckTier() end
---@return FCarPartData
function USpecialContract:GetRequiredCarWreckStats() end
---@return TSoftClassPtr<AJunkyardCarWreck>
function USpecialContract:GetRequiredCarWreck() end
---@return TMap<EJunkyardCarPartType, FSavedCarPart>
function USpecialContract:GetRequiredCarParts() end
---@return float
function USpecialContract:GetMoneyRewardBonus() end
---@param CarWreck AJunkyardCarWreck
---@return float
function USpecialContract:GetFinalCarPrice(CarWreck) end
---@return TArray<EJunkyardCarPartType>
function USpecialContract:GetDifferentColorCarParts() end
---@return TArray<TSoftClassPtr<ADecalToPaint>>
function USpecialContract:GetDecalsOfRequiredCategory() end
---@return ECustomizationContractType
function USpecialContract:GetCustomizationContractType() end
---@return TArray<EContractRequirement>
function USpecialContract:GetContractRequirements() end
---@param CarWreck AJunkyardCarWreck
---@return float
function USpecialContract:GetContractCompletionPercentage(CarWreck) end
---@return FName
function USpecialContract:GetContractCode() end
---@param CarWreck AJunkyardCarWreck
---@return boolean
function USpecialContract:CompleteContract(CarWreck) end
---@param CarPart UJunkyardCarPartCustomizable
---@return boolean
function USpecialContract:CarPartMatchRequirement(CarPart) end
---@param CarWreck AJunkyardCarWreck
---@return boolean
function USpecialContract:CanBeCompleted(CarWreck) end


---@class USpoonAnimInstance : UAnimInstance
---@field PressSpaceBarSpoon float
local USpoonAnimInstance = {}



---@class UStartNewQuestLineGameAction : UGameAction
---@field QuestLineToStart UQuestLineBase
---@field RequiredDlc EDLCName
local UStartNewQuestLineGameAction = {}



---@class UStatEnums : UBlueprintFunctionLibrary
local UStatEnums = {}


---@class UStatKeeper : UActorComponent
---@field OnGSSStatUpdated FStatKeeperOnGSSStatUpdated
---@field Stats TArray<FGSSStatHolder>
local UStatKeeper = {}

function UStatKeeper:SaveStats() end
function UStatKeeper:LoadStats() end
---@param Stat EGSS_Stat
---@return float
function UStatKeeper:GetValue(Stat) end
---@param StatToFind EGSS_Stat
---@return int32
function UStatKeeper:GetStatIndex(StatToFind) end
---@param Stat EGSS_Stat
---@param AddedValue float
function UStatKeeper:AddValue(Stat, AddedValue) end


---@class UStaticMeshUtilitiesBPLibrary : UBlueprintFunctionLibrary
local UStaticMeshUtilitiesBPLibrary = {}

---@param StaticMesh UStaticMesh
function UStaticMeshUtilitiesBPLibrary:DeleteAllSocketsFromStaticMesh(StaticMesh) end
---@param StaticMesh UStaticMesh
---@param NumberOfSockets int32
---@param bDeleteExistingSockets boolean
---@param SocketPrefix FName
---@param SocketOffset FVector
---@param SocketRotation FRotator
function UStaticMeshUtilitiesBPLibrary:CreateMultipleMeshSockets(StaticMesh, NumberOfSockets, bDeleteExistingSockets, SocketPrefix, SocketOffset, SocketRotation) end
---@param CopyFrom UStaticMesh
---@param CopyTo UStaticMesh
---@param bDeleteExistingSockets boolean
function UStaticMeshUtilitiesBPLibrary:CopySocketsFromStaticMesh(CopyFrom, CopyTo, bDeleteExistingSockets) end


---@class UTakeTolietTask : UIteractableActorTask
local UTakeTolietTask = {}


---@class UTapeToolWidget : UUserWidget
---@field OwningTapeTool ATapeTool
local UTapeToolWidget = {}

---@param CurrentTapeLenght float
function UTapeToolWidget:OnOwnerTapeLenghtChanged(CurrentTapeLenght) end
---@param _OwningTapeTool ATapeTool
function UTapeToolWidget:InitializeWidget(_OwningTapeTool) end


---@class UTaskBase : UObject
---@field AICharacterBase AAICharacterBase
---@field Assistant ACharacter
---@field TargetActorClass TSoftClassPtr<AActor>
---@field TaskAreaType ETaskAreaType
---@field TaskResult ETaskResult
---@field OnTaskUpdated FTaskBaseOnTaskUpdated
---@field OnTaskFinished FTaskBaseOnTaskFinished
---@field OnTaskStarted FTaskBaseOnTaskStarted
---@field OnNoCustomerToServe FTaskBaseOnNoCustomerToServe
---@field AcceptableRadious float
---@field WaitTime float
---@field bIsGoHomeTask boolean
---@field LeftTime float
---@field ShouldFinishOnGameLoad boolean
---@field RenownReason ERenown_Reasons
---@field MontagesBasedOnSkeleton TArray<FBaseCharacterSkeletonMontage>
---@field TasksProgress TArray<FTaskProgress>
---@field TimeToAutoFInishTask float
---@field TaskDescription FText
---@field TaskName FText
local UTaskBase = {}

---@param NewTaskProgress FTaskProgress
---@return boolean
function UTaskBase:UpdateTaskProgress(NewTaskProgress) end
---@param DeltaTime float
function UTaskBase:TickObject(DeltaTime) end
function UTaskBase:StopAssistant() end
---@param Character ACharacter
function UTaskBase:StartTask(Character) end
---@param Instaginator ACharacter
function UTaskBase:StartAssistant(Instaginator) end
---@param Enable boolean
function UTaskBase:SetTickEnabled(Enable) end
---@param InActor AActor
function UTaskBase:SetTaskTargetActor(InActor) end
---@param NewValue boolean
function UTaskBase:SetShouldFinishOnGameLoad(NewValue) end
---@param TaskStopReason FTaskStopReason
function UTaskBase:RemoveReasonToStopTask(TaskStopReason) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UTaskBase:InitializeTask(Character, NewTasksProgress) end
---@return boolean
function UTaskBase:HasReasonToStopTask() end
---@return boolean
function UTaskBase:HasAssistant() end
---@return AActor
function UTaskBase:GetTaskTargetActor() end
---@param ObjectiveName FString
---@param CurrentTaskProgress int32
---@param MaxTaskProgress int32
function UTaskBase:GetTaskProgress(ObjectiveName, CurrentTaskProgress, MaxTaskProgress) end
---@return FText
function UTaskBase:GetTaskInfoTransform() end
---@return FTaskStopReason
function UTaskBase:GetReasonToStopTask() end
---@param CharacterBase AAICharacterBase
---@return UAnimMontage
function UTaskBase:GetMontageBasedOnMesh(CharacterBase) end
function UTaskBase:FinishEndTaskEmployeeWithNoAICustomer() end
function UTaskBase:FinishEndTask() end
---@param TaskState ETaskResult
---@param FinishReason FString
function UTaskBase:FinishBeginTask(TaskState, FinishReason) end
---@param Tasks TArray<FTaskStruct>
---@param TaskType ETaskAreaType
---@return int32
function UTaskBase:FindCompatibileTask(Tasks, TaskType) end
function UTaskBase:AutoFinishTask() end
---@param TaskStopReason FTaskStopReason
function UTaskBase:AddReasonToStopTask(TaskStopReason) end


---@class UTaskCash : UIteractableActorTask
local UTaskCash = {}


---@class UThrowBigTrashObjective : UCountableObjectiveBase
---@field bCountOnlyAirStripTrashAndContainers boolean
---@field bCountTrashPickedUpWithTrashBag boolean
---@field OptionalTrashTag FName
---@field MaxTrashSize float
---@field MinTrashSize float
---@field TrashCollisionProfile FName
---@field Containers TArray<FContainerTrash>
---@field DestroyedTrash int32
---@field StartingProgress int32
local UThrowBigTrashObjective = {}

---@param TrashBin ATrashBin
---@param CurrentTrashInside TArray<AActor>
---@param TrashItem AItem
---@param bAdded boolean
function UThrowBigTrashObjective:OnTrashContainerTrashAmountChanged(TrashBin, CurrentTrashInside, TrashItem, bAdded) end
---@param DestroyedActor AActor
function UThrowBigTrashObjective:OnActorDestroyed(DestroyedActor) end


---@class UTicketValidateMinigame : UGSSBaseWidget
local UTicketValidateMinigame = {}


---@class UTopMenuWidget : UUserWidget
---@field keySelected int32
---@field IndexRowSelected int32
local UTopMenuWidget = {}

function UTopMenuWidget:OnRep_IndexRowSelected() end


---@class UTowyAnimInstance : UVehicleAnimInstance
---@field PlatformTurn float
---@field PlatformUpDn float
---@field ArmFwd float
---@field MagnetDn float
---@field SimulateRope float
---@field PlatformTurnMinValue float
---@field PlatformTurnMaxValue float
---@field PlatformTurnStepFactor float
---@field PlatformElevateMinValue float
---@field PlatformElevateMaxValue float
---@field PlatformElevateStepFactor float
---@field ArmExtendMinValue float
---@field ArmExtendMaxValue float
---@field ArmExtendStepFactor float
---@field MagnetDownMinValue float
---@field MagnetDownMaxValue float
---@field MagnetDownStepFactor float
---@field SimulateRopeMinValue float
---@field SimulateRopeMaxValue float
local UTowyAnimInstance = {}

---@param Value float
---@param MinLimitReached boolean
---@param MaxLimitReached boolean
function UTowyAnimInstance:InputAxisMoveArmVertical(Value, MinLimitReached, MaxLimitReached) end
---@param Value float
---@param MinLimitReached boolean
---@param MaxLimitReached boolean
function UTowyAnimInstance:InputAxisMoveArmHorizontal(Value, MinLimitReached, MaxLimitReached) end
---@param Value float
---@param MinLimitReached boolean
---@param MaxLimitReached boolean
function UTowyAnimInstance:InputAxisLowerMagnet(Value, MinLimitReached, MaxLimitReached) end
---@param Value float
---@param MinLimitReached boolean
---@param MaxLimitReached boolean
function UTowyAnimInstance:InputAxisExtendArm(Value, MinLimitReached, MaxLimitReached) end


---@class UTowyWheel : UVehicleWheel
---@field MainMesh UStaticMeshComponent
local UTowyWheel = {}



---@class UTowyWidget : UAdditionalKeyItemWidget
---@field IsMagnetMode boolean
local UTowyWidget = {}

function UTowyWidget:ShowTowyTutorial() end
---@param bIsMagnetMode boolean
function UTowyWidget:ChangeTowyMode(bIsMagnetMode) end


---@class UTradingEnums : UObject
local UTradingEnums = {}


---@class UTradingPlaneInfo : UPrimaryDataAsset
---@field CountryOfOrigin ECountryOfOrigin
---@field CountryShortCut FString
---@field Cargo FCargo
---@field FlagMaterial TSoftObjectPtr<UMaterialInstance>
local UTradingPlaneInfo = {}



---@class UTradingStructs : UObject
local UTradingStructs = {}


---@class UTrafficManagerSubsystem : UWorldSubsystem
---@field OnTrafficImpactUpdated FTrafficManagerSubsystemOnTrafficImpactUpdated
---@field OnTrafficEventsUpdated FTrafficManagerSubsystemOnTrafficEventsUpdated
---@field OnFuelPriceUpdated FTrafficManagerSubsystemOnFuelPriceUpdated
---@field CurrentTrafficEventID int32
---@field CurrentTrafficEventStartTime FTimeStruct
---@field UpcomingTrafficEventID int32
---@field UpcomingTrafficEventStartTime FTimeStruct
---@field CompletedEvents FDeque
---@field FuelSellPrices TArray<FFuelSellPriceData>
---@field SeasonalDecorations TArray<ADecorationBase>
---@field CurrentEventTimeLeftTmp FTimeStruct
---@field UpcomingEventTimeLeftTmp FTimeStruct
---@field CurrentUpdatedTime FTimeStruct
---@field LastUpdatedTime FTimeStruct
---@field LastUpdatedTimeDifference FTimeStruct
local UTrafficManagerSubsystem = {}

function UTrafficManagerSubsystem:ValidateEvents() end
function UTrafficManagerSubsystem:UpdateCurrentTrafficImpact() end
function UTrafficManagerSubsystem:TryScheduleNextTrafficEvent() end
---@param RowName FName
function UTrafficManagerSubsystem:StartSpecificEvent(RowName) end
---@param FuelType EFuelMagazine
---@param NewPrice float
---@param BroadcastUpdate boolean
---@param ActionInstigator UObject
function UTrafficManagerSubsystem:SetFuelSellPrice(FuelType, NewPrice, BroadcastUpdate, ActionInstigator) end
function UTrafficManagerSubsystem:PopulateDefaultFuelSellPrices() end
function UTrafficManagerSubsystem:OnWorldBeginPlay() end
---@param GameplayStuffUnlocked FUnlockableGameplayStuffState
function UTrafficManagerSubsystem:OnNewGameplayStuffUnlockStateChanged(GameplayStuffUnlocked) end
---@param DecorationRemoved ADecorationBase
function UTrafficManagerSubsystem:OnMovableDecorationRemoved(DecorationRemoved) end
---@param DecorationPlaced ADecorationBase
function UTrafficManagerSubsystem:OnMovableDecorationPlaced(DecorationPlaced) end
---@param UpdatedTime FTimeStruct
function UTrafficManagerSubsystem:OnGameTimeUpdated(UpdatedTime) end
---@param GameLoaded boolean
function UTrafficManagerSubsystem:OnGameLoaded(GameLoaded) end
function UTrafficManagerSubsystem:InitTrafficEvents() end
---@return FTimeStruct
function UTrafficManagerSubsystem:GetUpcomingEventTimeLeft() end
---@param CurrentData FTrafficEventData
---@return boolean
function UTrafficManagerSubsystem:GetUpcomingEventData(CurrentData) end
---@param FuelType EFuelMagazine
---@return float
function UTrafficManagerSubsystem:GetFuelSellPrice(FuelType) end
---@return int32
function UTrafficManagerSubsystem:GetCurrentTotalTrafficImpact() end
---@return int32
function UTrafficManagerSubsystem:GetCurrentSeasonalDecorationImpact() end
---@return int32
function UTrafficManagerSubsystem:GetCurrentPopularityTrafficImpact() end
---@return int32
function UTrafficManagerSubsystem:GetCurrentLandmarkTrafficImpact() end
---@return int32
function UTrafficManagerSubsystem:GetCurrentHourTrafficImpact() end
---@return int32
function UTrafficManagerSubsystem:GetCurrentFuelPriceTrafficImpact() end
---@return FTimeStruct
function UTrafficManagerSubsystem:GetCurrentEventTimeLeft() end
---@return int32
function UTrafficManagerSubsystem:GetCurrentEventImpact() end
---@param CurrentData FTrafficEventData
---@return boolean
function UTrafficManagerSubsystem:GetCurrentEventData(CurrentData) end
function UTrafficManagerSubsystem:FinishCurrentEventEarly() end
function UTrafficManagerSubsystem:EndCurrentEvent() end
function UTrafficManagerSubsystem:BeginUpcommingEvent() end


---@class UTrafficSettings : UDataAsset
---@field TrafficImpact2ArrowsTreshold int32
---@field TrafficImpact3ArrowsTreshold int32
---@field FuelPriceDataTable UDataTable
---@field HourImpact UDataTable
---@field PopularityImpact UDataTable
---@field LandmarkImpact UDataTable
---@field SeasonalDecoration TSoftClassPtr<ADecorationBase>
---@field DecorationImpact UDataTable
---@field TrafficEventData UDataTable
---@field MinDaysBetweenEvents int32
---@field MaxDaysBetweenEvents int32
---@field HoursBeforeUpcomingEventIsSeen int32
---@field TrafficImpactToSpawnTime UDataTable
---@field TrafficEventsUnlockTag FGameplayTag
local UTrafficSettings = {}

---@param StartTime FTimeStruct
---@param MinusTime FTimeStruct
---@param ReachedZero boolean
---@return FTimeStruct
function UTrafficSettings:SubtractTime(StartTime, MinusTime, ReachedZero) end
---@param DataTable UDataTable
---@param Value int32
---@param IsLooping boolean
---@return int32
function UTrafficSettings:GetTrafficImpactByIntegerValue(DataTable, Value, IsLooping) end
---@param DataTable UDataTable
---@param MinTafficImpact int32
---@param MaxTafficImpact int32
function UTrafficSettings:GetTafficImpactLimitsInDataTable(DataTable, MinTafficImpact, MaxTafficImpact) end
---@param MinTafficImpact int32
---@param MaxTafficImpact int32
---@param InlcudeEvents boolean
function UTrafficSettings:GetTafficImpactLimits(MinTafficImpact, MaxTafficImpact, InlcudeEvents) end
---@param CurrentTrafficImpact int32
---@param MinSpawnTime float
---@param MaxSpawnTime float
---@param SpawnType EVehicleSpawnType
function UTrafficSettings:GetSpawnTimes(CurrentTrafficImpact, MinSpawnTime, MaxSpawnTime, SpawnType) end
---@param CurrentTrafficImpact int32
---@return FTrafficImpactToSpawnTime
function UTrafficSettings:GetSpawnTimeByTrafficImpact(CurrentTrafficImpact) end
---@param MinTafficImpact int32
---@param MaxTafficImpact int32
function UTrafficSettings:GetFuelTrafficImpactLimitsInDataTable(MinTafficImpact, MaxTafficImpact) end
---@param WorldContextObject UObject
---@param CurrentFuelPrice float
---@return int32
function UTrafficSettings:GetFuelPriceTrafficImpact(WorldContextObject, CurrentFuelPrice) end
---@param MinTafficImpact int32
---@param MaxTafficImpact int32
function UTrafficSettings:GetEventsImpactLimits(MinTafficImpact, MaxTafficImpact) end
---@param EventId int32
---@param EventFound boolean
---@return FTrafficEventData
function UTrafficSettings:GetEventDataByID(EventId, EventFound) end
---@param TrafficImpact int32
---@return int32
function UTrafficSettings:GetDisplayArrowAmount(TrafficImpact) end


---@class UTrashPenaltyDataAsset : UDataAsset
---@field DefaultPenaltyPerTrashSize TMap<int32, int32>
---@field TrashExceptions TArray<TSubclassOf<ATrashItemBase>>
---@field TrashPenaltyPerTrashType TMap<TSubclassOf<ATrashItemBase>, int32>
local UTrashPenaltyDataAsset = {}



---@class UTrendingEvent : UGSSEvent
---@field SelectedMovies TArray<int32>
local UTrendingEvent = {}

function UTrendingEvent:PickMoviesToEvent() end
---@return TArray<int32>
function UTrendingEvent:GetSelectedMovies() end
function UTrendingEvent:CheckIsBonusMoviePlaying() end


---@class UTrustPointsData : UPrimaryDataAsset
---@field WinStreakBonusTreshold int32
---@field WinStreakTrustPointBonus int32
---@field MinigameTrustPointDataBase TArray<FBaseTrustPointPerService>
local UTrustPointsData = {}



---@class UTutorialManager : UObject
---@field Instaginator UObject
---@field HappyAngry_Enabled boolean
local UTutorialManager = {}

---@param bIsEnabled boolean
function UTutorialManager:SetHappyAngryEnabled(bIsEnabled) end
---@return boolean
function UTutorialManager:GetHappyAngryEnabled() end


---@class UTutorialsDataAsset : UDataAsset
---@field Tutorials TArray<FTutorialData>
local UTutorialsDataAsset = {}

---@param TutorialType EGameActivityType
---@return FTutorialData
function UTutorialsDataAsset:GetTutorialInfo(TutorialType) end


---@class UUIStructs : UObject
local UUIStructs = {}


---@class UUI_QuestManager : UGSS_HUD_BaseWidget
---@field CanvasPanel_0 UCanvasPanel
local UUI_QuestManager = {}

---@param UserWidget UUserWidget
---@param TargetActor AActor
function UUI_QuestManager:UpdateMarket(UserWidget, TargetActor) end


---@class UUnLoadLevelGameAction : UGameAction
---@field LevelName FName
local UUnLoadLevelGameAction = {}



---@class UUnlockItemGameAction : UGameAction
---@field ItemClass TSoftClassPtr<AItem>
local UUnlockItemGameAction = {}



---@class UUpgradeBuildingObjective : UObjectiveBase
---@field BuildingType EBuildingType
---@field DesiredBuildingLevel int32
---@field BuildingLevelName FName
local UUpgradeBuildingObjective = {}

---@param _BuildingType EBuildingType
---@param NewBuildingLevel int32
---@param bLoadedFromSave boolean
function UUpgradeBuildingObjective:OnBuildingUpgraded(_BuildingType, NewBuildingLevel, bLoadedFromSave) end


---@class UVIPSubsystem : UGameInstanceSubsystem
---@field CurrentTime float
---@field CurrentVIP AAICharacterBase
---@field bTimeHeldDuringLoading boolean
---@field CurrentVIPState EVIPState
---@field CurrentDestination EDLCName
---@field AvaliableVIPTravelingDestinations TArray<EDLCName>
---@field MapPoints TArray<FVIPDestinationPoints>
---@field bAllowedToTick boolean
local UVIPSubsystem = {}

---@param MapPointsToSet TArray<FVIPDestinationPoints>
function UVIPSubsystem:SetVIPMapPoints(MapPointsToSet) end
---@param Value float
function UVIPSubsystem:SetVIPCurrentTime(Value) end
---@param NewState EVIPState
function UVIPSubsystem:SetVIPCurrentState(NewState) end
function UVIPSubsystem:SetupAvaliableDestinations() end
---@param NewDestination EDLCName
function UVIPSubsystem:SetCurrentDestination(NewDestination) end
---@param bSuccess boolean
function UVIPSubsystem:OnGameplaySettingsApplied(bSuccess) end
function UVIPSubsystem:OnGameLoadingStarted() end
---@param bGameLoaded boolean
function UVIPSubsystem:OnGameLoadingFinished(bGameLoaded) end
---@param DestinationToCheck EDLCName
---@param OutRemaningTime float
---@return boolean
function UVIPSubsystem:IsVIPBonusActive(DestinationToCheck, OutRemaningTime) end
---@return float
function UVIPSubsystem:GetVIPTravelingTime() end
---@return float
function UVIPSubsystem:GetVIPRestingTime() end
---@return TArray<FVIPDestinationPoints>
function UVIPSubsystem:GetVIPMapPoints() end
---@param DLCName EDLCName
---@return FVIPDestinationPoints
function UVIPSubsystem:GetVIPDestinationMapPoints(DLCName) end
---@return float
function UVIPSubsystem:GetVIPCurrentTime() end
---@return EVIPState
function UVIPSubsystem:GetVIPCurrentState() end
---@return float
function UVIPSubsystem:GetVIPAwaitingTime() end
---@return EDLCName
function UVIPSubsystem:GetCurrentMapDLC() end
---@return EDLCName
function UVIPSubsystem:GetCurrentDestination() end
---@param VIPDestination EDLCName
function UVIPSubsystem:AddVIPProgress(VIPDestination) end


---@class UWaitForDialogToFinishObjective : UObjectiveBase
local UWaitForDialogToFinishObjective = {}

---@param RelatedDLC EDLCName
function UWaitForDialogToFinishObjective:OnDialogRequestFinishActiveObjective(RelatedDLC) end


---@class UWaitObjective : UObjectiveBase
---@field WaitingTime float
local UWaitObjective = {}



---@class UWallSlotWidget : UUserWidget
local UWallSlotWidget = {}


---@class UWashRenderTargetData : UDataAsset
---@field PhysicalMaterial UPhysicalMaterial
---@field BrushMaterial UMaterialInterface
---@field BrushMaterial1 UMaterialInterface
---@field BrushMaterial2 UMaterialInterface
---@field BrushMaterial3 UMaterialInterface
---@field BrushMaterial4 UMaterialInterface
---@field BrushMaterial5 UMaterialInterface
---@field BrushMaterial6 UMaterialInterface
---@field BrushMaterial7 UMaterialInterface
---@field BrushMaterial8 UMaterialInterface
---@field BrushMaterial9 UMaterialInterface
---@field WetnessDecayMaterial UMaterialInterface
---@field LowResTextureTarget UTextureRenderTarget2D
---@field WashTextureTarget UTextureRenderTarget2D
---@field WetnessTextureTarget UTextureRenderTarget2D
local UWashRenderTargetData = {}



---@class UWatchSequanceObjective : UObjectiveBase
---@field SequenceToPlay ULevelSequence
---@field bHideUI boolean
---@field bSkipInDebug boolean
---@field bBlockPlayerInputs boolean
---@field bWaitForPlayerActive boolean
---@field SequencePlayer ULevelSequencePlayer
---@field WaitForPlayerTimerHandle FTimerHandle
local UWatchSequanceObjective = {}

---@param World UWorld
function UWatchSequanceObjective:TryStartSequance(World) end


---@class UWaterMovementComponent : UActorComponent
---@field OnFinishMoving FWaterMovementComponentOnFinishMoving
---@field OnBeginGoingHome FWaterMovementComponentOnBeginGoingHome
---@field TurnSpeed float
---@field DefaultSpeedMultiplier float
---@field DelayedTurnSpeedMultiplier float
---@field XRotationLimit float
---@field YRotationLimit float
---@field ZLocationMin float
---@field ZLocationMax float
---@field ZLocationSoftMin float
---@field ZLocationSoftMax float
---@field ZSoftCorrectionForce float
---@field ShouldSlowBeforeDestination boolean
---@field SlowDestinationDistance float
---@field ShouldSpeedUpFarFromDestination boolean
---@field FarSpeedBoostMultiplier float
---@field FarFromDestinationDistance float
---@field MinDestinationSpeed float
---@field AcceptableDistance float
---@field DestinationOffset FVector
---@field TargetPoints TArray<AActor>
---@field TargetLocation FVector
---@field TargetActor AActor
---@field CustomDestination AActor
---@field bUseTargetActor boolean
---@field bMove boolean
---@field LoopedMovementTime float
---@field Home AActor
---@field bGoingHome boolean
---@field HomeTargetPoints TArray<AActor>
---@field bUseSpawnMontage boolean
---@field SpawnMontage TSoftObjectPtr<UAnimMontage>
---@field NPCSpawnMontage TSoftObjectPtr<UAnimMontage>
---@field DeSpawnMontage TSoftObjectPtr<UAnimMontage>
---@field NPCDeSpawnMontage TSoftObjectPtr<UAnimMontage>
---@field StoppingMontage TSoftObjectPtr<UAnimMontage>
---@field NPCStoppingMontage TSoftObjectPtr<UAnimMontage>
---@field ReverseMovementMontage TSoftObjectPtr<UAnimMontage>
---@field NPCReverseMovementMontage TSoftObjectPtr<UAnimMontage>
---@field VehicleDestroyMontage TSoftObjectPtr<UAnimMontage>
---@field NPCDestroyMontage TSoftObjectPtr<UAnimMontage>
---@field VehicleHitReactLeft TSoftObjectPtr<UAnimMontage>
---@field VehicleHitReactRight TSoftObjectPtr<UAnimMontage>
---@field NPCHitReactLeft TSoftObjectPtr<UAnimMontage>
---@field NPCHitReactRight TSoftObjectPtr<UAnimMontage>
---@field bTurn boolean
---@field bUseDespawnSpawnMontage boolean
---@field bSingleMoveTo boolean
---@field bReverseMovement boolean
---@field CurrentPathIndex int32
---@field PathArrayLenght int32
---@field CurrentHomePathIndex int32
---@field HomePointArrayLenght int32
---@field bPlayingStopMontage boolean
---@field bDespawning boolean
---@field CurrentMovementPoint AActor
---@field bIsPositionLocked boolean
---@field bCanBeAttacked boolean
---@field ExplosionScale FVector
---@field ObstacleSide EObstacleSide
local UWaterMovementComponent = {}

function UWaterMovementComponent:StartAttack() end
function UWaterMovementComponent:SharkDestroyed() end
---@param NewValue boolean
function UWaterMovementComponent:SetUseTargetActor(NewValue) end
---@param NewValue boolean
function UWaterMovementComponent:SetUseSpawnMontage(NewValue) end
---@param NewValue boolean
function UWaterMovementComponent:SetUseDeSpawnMontage(NewValue) end
---@param NewValue boolean
function UWaterMovementComponent:SetTurn(NewValue) end
---@param NewValue boolean
function UWaterMovementComponent:SetSingleMoveTo(NewValue) end
---@param NewValue boolean
function UWaterMovementComponent:SetReverseMovement(NewValue) end
---@param NewValue int32
function UWaterMovementComponent:SetPathArrayLenght(NewValue) end
---@param NewTime float
function UWaterMovementComponent:SetLoopedMovementTime(NewTime) end
---@param IsPositionLocked boolean
function UWaterMovementComponent:SetLockLocationAndRotation(IsPositionLocked) end
---@param NewValue int32
function UWaterMovementComponent:SetHomePointArrayLenght(NewValue) end
---@param HomeReference AActor
function UWaterMovementComponent:SetHome(HomeReference) end
---@param NewValue boolean
function UWaterMovementComponent:SetGoingHome(NewValue) end
---@param NewValue int32
function UWaterMovementComponent:SetCurrentPathIndex(NewValue) end
---@param NewPoint AActor
function UWaterMovementComponent:SetCurrentMovementPoint(NewPoint) end
---@param NewValue int32
function UWaterMovementComponent:SetCurrentHomePathIndex(NewValue) end
---@param NewValue boolean
function UWaterMovementComponent:SetCanBeAttacked(NewValue) end
function UWaterMovementComponent:ResetObstacleDetection() end
function UWaterMovementComponent:PlayAttackAnimation() end
---@param NewTurnRate float
function UWaterMovementComponent:OverrideTurnRate(NewTurnRate) end
function UWaterMovementComponent:MoveOnWaterStart() end
function UWaterMovementComponent:MoveOnWaterEnd() end
---@param IsLoadedFromSave boolean
---@param IsGoingHome boolean
---@param CurrentWaterMovementPointIndex int32
function UWaterMovementComponent:InitializeMovement(IsLoadedFromSave, IsGoingHome, CurrentWaterMovementPointIndex) end
function UWaterMovementComponent:GoHomeEvent() end
---@return boolean
function UWaterMovementComponent:GetUseTargetActor() end
---@return boolean
function UWaterMovementComponent:GetUseSpawnMontage() end
---@return boolean
function UWaterMovementComponent:GetUseDeSpawnMontage() end
---@return boolean
function UWaterMovementComponent:GetTurn() end
---@return boolean
function UWaterMovementComponent:GetSingleMoveTo() end
---@return boolean
function UWaterMovementComponent:GetReverseMovement() end
---@return float
function UWaterMovementComponent:GetLoopedMovementTime() end
---@return AActor
function UWaterMovementComponent:GetHome() end
---@return boolean
function UWaterMovementComponent:GetGoingHome() end
---@return AActor
function UWaterMovementComponent:GetCurrentMovementPoint() end
---@return boolean
function UWaterMovementComponent:GetCanBeAttacked() end


---@class UWaterVehicleFuelMiniGame : UUserWidget
---@field Vehicle AWaterVehicle
---@field RandomFuel float
local UWaterVehicleFuelMiniGame = {}



---@class UWheeledVehicleLibrary : UBlueprintFunctionLibrary
local UWheeledVehicleLibrary = {}


---@class UWoodChoppingSettings : URvMinigameBaseSettings
---@field CooldownBonusLowRatioScore TMap<EGuestServiceDifficulty, float>
---@field CooldownBonusMidRatioScore TMap<EGuestServiceDifficulty, float>
---@field CooldownBonusBestRatioScore TMap<EGuestServiceDifficulty, float>
---@field MaxLogsToCute int32
---@field SuccessTolerance int32
---@field SliceRecoilStrength float
---@field EasyMeshes TArray<TSoftObjectPtr<UStaticMesh>>
---@field NormalMeshes TArray<TSoftObjectPtr<UStaticMesh>>
---@field HardMeshes TArray<TSoftObjectPtr<UStaticMesh>>
---@field TutorialMesh TSoftObjectPtr<UStaticMesh>
---@field BestRatioScoreMin float
---@field BestRatioScoreMax float
---@field MidRatioScoreMin float
---@field MidRatioScoreMax float
---@field LowRatioScoreMin float
---@field LowRatioScoreMax float
---@field GamepadMovementSmoothSpeed float
---@field CutDistanceFromCenter float
local UWoodChoppingSettings = {}



---@class UWreckTaskMarker : UUserWidget
local UWreckTaskMarker = {}

---@param NewMarking ECarWreckMarking
function UWreckTaskMarker:SetMarkerIcon(NewMarking) end


---@class UWrecksCollectionContract : UBasicContract
---@field CustomizableWreckChance float
---@field CarWreckRewardSoftClass TSoftClassPtr<AJunkyardCarWreck>
---@field CarPartRewards TArray<FCarPartReward>
---@field IsCheckingForStuckScheduled boolean
local UWrecksCollectionContract = {}

---@param CarPartType EJunkyardCarPartType
---@return boolean
function UWrecksCollectionContract:UnlockCarPartVisibility(CarPartType) end
---@param InRewardCarName FText
function UWrecksCollectionContract:SetRewardCarName(InRewardCarName) end
---@param InCustomizableWreckChance float
function UWrecksCollectionContract:SetCustomizableWreckChance(InCustomizableWreckChance) end
---@param InCarWreckReward TSoftClassPtr<AJunkyardCarWreck>
function UWrecksCollectionContract:SetCarWreckRewardSoftClass(InCarWreckReward) end
---@param InCarPartRewards TArray<FCarPartReward>
function UWrecksCollectionContract:SetCarPartRewards(InCarPartRewards) end
function UWrecksCollectionContract:ScheduleCheckingForStuck() end
---@param CarPartType EJunkyardCarPartType
---@return boolean
function UWrecksCollectionContract:RevealDeliveryCarPart(CarPartType) end
---@return FText
function UWrecksCollectionContract:GetRewardCarName() end
---@return float
function UWrecksCollectionContract:GetCustomizableWreckChance() end
---@return TSoftClassPtr<AJunkyardCarWreck>
function UWrecksCollectionContract:GetCarWreckRewardSoftClass() end
---@return TArray<FCarPartReward>
function UWrecksCollectionContract:GetCarPartRewards() end
function UWrecksCollectionContract:CheckForContractStuck() end


---@class UWrenchMiniGame : UGSSBaseWidget
---@field WrenchMiniGameResult FWrenchMiniGameWrenchMiniGameResult
---@field SlotType EJunkyardCarPartType
---@field CarPart FStorageCarPart
---@field bIsAssembling boolean
local UWrenchMiniGame = {}

function UWrenchMiniGame:InitializeWidget() end


