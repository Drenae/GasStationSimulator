---@meta

---@class UBPC_PhotoMode_C : UActorComponent
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PhotoModeWidgetRef UUI_PhotoMode_C
---@field PlayerRef ACharacter
---@field SpringArmRef USpringArmComponent
---@field CameraRef UCameraComponent
---@field bIsUsingPhotoMode boolean
---@field bPauseGameInPhotoMode boolean
---@field bApplyMenuColor boolean
---@field MenuColor FSlateColor
---@field bPauseGameInGallery boolean
---@field PauseGameMethod E_PauseGameMethod::Type
---@field CameraModes E_CameraModes::Type
---@field PhotoModeViewportZOrder int32
---@field bShowMouseCursorByDefault boolean
---@field bShowPhotoResolutionOption boolean
---@field bShowMouseCursorOption boolean
---@field bFreeCameraOption boolean
---@field bUseMaximumDistanceLimit boolean
---@field FreeCameraMaximumDistance float
---@field bIsFirstPersonGame boolean
---@field bShowTakePictureOption boolean
---@field bResetControlRotationAfterClosingPM boolean
---@field MaxUpDownCameraDistance float
---@field MaxLeftRightCameraDistance float
---@field GameLogos TArray<FS_Logos>
---@field Filters TArray<FS_PostProcessFilter>
---@field DefaultFOV float
---@field DefaultCameraRotation FRotator
---@field DefaultPostProcess FPostProcessSettings
---@field bIsUsingGallery boolean
---@field DefaultPhotoModePostProcess FPostProcessSettings
---@field MenuPhotoModePostProcess FPostProcessSettings
---@field GamepadIconsDTIndex int32
---@field TakeScreenshotKeys FS_InputKeys
---@field OpenGalleryKeys FS_InputKeys
---@field PauseGameKeys FS_InputKeys
---@field HideMenuKeys FS_InputKeys
---@field ResetValuesKeys FS_InputKeys
---@field NextTabKeys FS_InputKeys
---@field PrevTabKeys FS_InputKeys
---@field OpenClosePhotoModeKeys FS_InputKeys
---@field ClosePhotoModeWithAnotherKey FS_InputKeys
---@field ShowOrHideMouseCursorKeys FS_InputKeys
---@field OpenFreeCameraKeys FS_InputKeys
---@field UpCameraKeys FS_InputKeys
---@field DownCameraKeys FS_InputKeys
---@field LastKey FKey
---@field DefaultSpringArmLength float
---@field bMouseCursor boolean
---@field PostProcessMaterials TArray<FS_PostProcessRendering>
---@field DefaultSocketOffset FVector
---@field ScreenshotMethod E_ScreenshotMethod::Type
---@field bUseCustomScreenshotFolder boolean
---@field CustomScreenshotFolderPath FString
---@field PlayerControllerRef APlayerController
---@field bEnableGallery boolean
---@field GalleryWidgetRef UUI_Gallery_C
---@field ['NextPageKeys (Gallery)'] FS_InputKeys
---@field ['PrevPageKeys (Gallery)'] FS_InputKeys
---@field ['FullscreenKeys (Gallery)'] FS_InputKeys
---@field ['BackKeys (Gallery)'] FS_InputKeys
---@field ['ShowMouseKeys (Gallery)'] FS_InputKeys
---@field bAutoSizePerTab boolean
---@field bFocusWhenHoveringOverSlider boolean
---@field PhotoModeIsOnWarning FS_PhotoModeIsOnConfis
---@field DefaultControlRotation FRotator
---@field bExistingPostProcess boolean
---@field PostProcessVolumeClass TSubclassOf<AActor>
---@field bIsUnbound boolean
---@field OriginalPostProcess FPostProcessSettings
---@field GlobalTimeDilationBackup float
---@field InputModeAfterClosingPhotoMode E_InputMode::Type
---@field bShowAlbumOption boolean
---@field CurrentTimeDilation float
---@field LeftCameraKeys FS_InputKeys
---@field RightCameraKeys FS_InputKeys
---@field ['OpenPhotoModeKeys (Gallery)'] FS_InputKeys
---@field PhotoModeOpened FBPC_PhotoMode_CPhotoModeOpened
---@field PhotoModeClosed FBPC_PhotoMode_CPhotoModeClosed
---@field bShowCharacterRotationOption boolean
---@field bControllerTickBackup boolean
---@field bDisableControllerInputOnFreeCamera boolean
---@field bDisablePawnInputOnFreeCamera boolean
---@field bIsYourSpringArmTickableWhenPaused boolean
---@field bIsYourCameraTickableWhenPaused boolean
---@field PhotoTaken FBPC_PhotoMode_CPhotoTaken
---@field CustomPostProcessManager ABP_CustomPostProcess_C
---@field PhotoResolutions TArray<FS_PhotoResolutions>
---@field bIncludeDefaultScreenResolutionOption boolean
---@field bIncludePhotoWithUIOption boolean
---@field Apertures TMap<FString, float>
---@field ColorGradingMode E_ColorGradingMode::Type
---@field DefaultFocalLength float
---@field DefaultFocusSettings FCameraFocusSettings
---@field DefaultAperture float
---@field Borders TArray<FTextTexture2DPair>
---@field SavePhotosSort E_SaveSort::Type
---@field OnFreeCameraStart FBPC_PhotoMode_COnFreeCameraStart
---@field OnFreenCameraEnd FBPC_PhotoMode_COnFreenCameraEnd
---@field FocusCollisionType ETraceTypeQuery
---@field ['ExtraFunctionDeleteKeys (Gallery)'] FS_InputKeys
---@field RotationSensitivity float
---@field RotationInterpolationSpeed float
---@field MovementSensitivity float
---@field MovementInterpolationSpeed float
---@field bAllowCustomMotionBlur boolean
---@field CustomDepthComponents TMap<UPrimitiveComponent, boolean>
---@field ['Open Case'] FString
---@field CameraPositions TArray<FPhotoModeCamera>
local UBPC_PhotoMode_C = {}

---@param FullPath FString
function UBPC_PhotoMode_C:getScreenshotPath(FullPath) end
---@param PostProcessVolume APostProcessVolume
---@param PropertyTotal float
---@param PropertyCount float
---@param PropertyValue float
---@param DistanceWeight float
UBPC_PhotoMode_C['Calculate Weight by Ref'] = function(self, PostProcessVolume, PropertyTotal, PropertyCount, PropertyValue, DistanceWeight) end
---@param bCheckWidgets boolean
function UBPC_PhotoMode_C:UpdateReferences(bCheckWidgets) end
---@param PlayerCameraManager APlayerCameraManager
function UBPC_PhotoMode_C:GetCameraManager(PlayerCameraManager) end
---@param CurrentCamera UCameraComponent
---@param CurrentSpringArm USpringArmComponent
UBPC_PhotoMode_C['Get Active Camera'] = function(self, CurrentCamera, CurrentSpringArm) end
---@param Custom_Path FString
function UBPC_PhotoMode_C:UpdateOutputFolder(Custom_Path) end
---@param CameraLocation FVector
function UBPC_PhotoMode_C:GetCameraLocation(CameraLocation) end
---@param CameraDistance float
function UBPC_PhotoMode_C:GetSliderCameraDistance(CameraDistance) end
---@param Roll float
function UBPC_PhotoMode_C:GetSliderRoll(Roll) end
---@param FOV float
function UBPC_PhotoMode_C:GetSliderFOV(FOV) end
UBPC_PhotoMode_C['Create Post Process'] = function(self, ) end
---@param AxisValueIn float
---@param AxisValueOut float
function UBPC_PhotoMode_C:UnpausedGameAxisMovementControl(AxisValueIn, AxisValueOut) end
---@param Key FKey
UBPC_PhotoMode_C['IconSelector - Gallery'] = function(self, Key) end
---@param Key FKey
UBPC_PhotoMode_C['IconSelector - Photo Mode Menu'] = function(self, Key) end
---@param Key FKey
---@param OpenCase FString
UBPC_PhotoMode_C['Photo Mode'] = function(self, Key, OpenCase) end
---@param LastKey FKey
function UBPC_PhotoMode_C:OpenGallery(LastKey) end
function UBPC_PhotoMode_C:ReceiveBeginPlay() end
function UBPC_PhotoMode_C:TogglePauseGame() end
---@param EndPlayReason EEndPlayReason::Type
function UBPC_PhotoMode_C:ReceiveEndPlay(EndPlayReason) end
function UBPC_PhotoMode_C:InitWidgets() end
function UBPC_PhotoMode_C:ResetPhotoMode() end
function UBPC_PhotoMode_C:ResetGallery() end
function UBPC_PhotoMode_C:OnKeybindReset() end
function UBPC_PhotoMode_C:OnGamepadTypeChanged() end
---@param ActionName FName
function UBPC_PhotoMode_C:AtChangedKey(ActionName) end
---@param EntryPoint int32
function UBPC_PhotoMode_C:ExecuteUbergraph_BPC_PhotoMode(EntryPoint) end
function UBPC_PhotoMode_C:OnFreenCameraEnd__DelegateSignature() end
---@param FreeCameraReference ABP_FreeCamera_C
function UBPC_PhotoMode_C:OnFreeCameraStart__DelegateSignature(FreeCameraReference) end
---@param PhotoPath FString
---@param ThumbPath FString
function UBPC_PhotoMode_C:PhotoTaken__DelegateSignature(PhotoPath, ThumbPath) end
function UBPC_PhotoMode_C:PhotoModeClosed__DelegateSignature() end
---@param CurrentTimeDilation float
function UBPC_PhotoMode_C:PhotoModeOpened__DelegateSignature(CurrentTimeDilation) end


