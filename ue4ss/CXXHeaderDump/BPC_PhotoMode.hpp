#ifndef UE4SS_SDK_BPC_PhotoMode_HPP
#define UE4SS_SDK_BPC_PhotoMode_HPP

class UBPC_PhotoMode_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class UUI_PhotoMode_C* PhotoModeWidgetRef;                                        // 0x00B8 (size: 0x8)
    class ACharacter* PlayerRef;                                                      // 0x00C0 (size: 0x8)
    class USpringArmComponent* SpringArmRef;                                          // 0x00C8 (size: 0x8)
    class UCameraComponent* CameraRef;                                                // 0x00D0 (size: 0x8)
    bool bIsUsingPhotoMode;                                                           // 0x00D8 (size: 0x1)
    bool bPauseGameInPhotoMode;                                                       // 0x00D9 (size: 0x1)
    bool bApplyMenuColor;                                                             // 0x00DA (size: 0x1)
    FSlateColor MenuColor;                                                            // 0x00E0 (size: 0x28)
    bool bPauseGameInGallery;                                                         // 0x0108 (size: 0x1)
    TEnumAsByte<E_PauseGameMethod::Type> PauseGameMethod;                             // 0x0109 (size: 0x1)
    TEnumAsByte<E_CameraModes::Type> CameraModes;                                     // 0x010A (size: 0x1)
    int32 PhotoModeViewportZOrder;                                                    // 0x010C (size: 0x4)
    bool bShowMouseCursorByDefault;                                                   // 0x0110 (size: 0x1)
    bool bShowPhotoResolutionOption;                                                  // 0x0111 (size: 0x1)
    bool bShowMouseCursorOption;                                                      // 0x0112 (size: 0x1)
    bool bFreeCameraOption;                                                           // 0x0113 (size: 0x1)
    bool bUseMaximumDistanceLimit;                                                    // 0x0114 (size: 0x1)
    float FreeCameraMaximumDistance;                                                  // 0x0118 (size: 0x4)
    bool bIsFirstPersonGame;                                                          // 0x011C (size: 0x1)
    bool bShowTakePictureOption;                                                      // 0x011D (size: 0x1)
    bool bResetControlRotationAfterClosingPM;                                         // 0x011E (size: 0x1)
    float MaxUpDownCameraDistance;                                                    // 0x0120 (size: 0x4)
    float MaxLeftRightCameraDistance;                                                 // 0x0124 (size: 0x4)
    TArray<FS_Logos> GameLogos;                                                       // 0x0128 (size: 0x10)
    TArray<FS_PostProcessFilter> Filters;                                             // 0x0138 (size: 0x10)
    float DefaultFOV;                                                                 // 0x0148 (size: 0x4)
    FRotator DefaultCameraRotation;                                                   // 0x014C (size: 0xC)
    FPostProcessSettings DefaultPostProcess;                                          // 0x0160 (size: 0x560)
    bool bIsUsingGallery;                                                             // 0x06C0 (size: 0x1)
    FPostProcessSettings DefaultPhotoModePostProcess;                                 // 0x06D0 (size: 0x560)
    FPostProcessSettings MenuPhotoModePostProcess;                                    // 0x0C30 (size: 0x560)
    int32 GamepadIconsDTIndex;                                                        // 0x1190 (size: 0x4)
    FS_InputKeys TakeScreenshotKeys;                                                  // 0x1198 (size: 0x30)
    FS_InputKeys OpenGalleryKeys;                                                     // 0x11C8 (size: 0x30)
    FS_InputKeys PauseGameKeys;                                                       // 0x11F8 (size: 0x30)
    FS_InputKeys HideMenuKeys;                                                        // 0x1228 (size: 0x30)
    FS_InputKeys ResetValuesKeys;                                                     // 0x1258 (size: 0x30)
    FS_InputKeys NextTabKeys;                                                         // 0x1288 (size: 0x30)
    FS_InputKeys PrevTabKeys;                                                         // 0x12B8 (size: 0x30)
    FS_InputKeys OpenClosePhotoModeKeys;                                              // 0x12E8 (size: 0x30)
    FS_InputKeys ClosePhotoModeWithAnotherKey;                                        // 0x1318 (size: 0x30)
    FS_InputKeys ShowOrHideMouseCursorKeys;                                           // 0x1348 (size: 0x30)
    FS_InputKeys OpenFreeCameraKeys;                                                  // 0x1378 (size: 0x30)
    FS_InputKeys UpCameraKeys;                                                        // 0x13A8 (size: 0x30)
    FS_InputKeys DownCameraKeys;                                                      // 0x13D8 (size: 0x30)
    FKey LastKey;                                                                     // 0x1408 (size: 0x18)
    float DefaultSpringArmLength;                                                     // 0x1420 (size: 0x4)
    bool bMouseCursor;                                                                // 0x1424 (size: 0x1)
    TArray<FS_PostProcessRendering> PostProcessMaterials;                             // 0x1428 (size: 0x10)
    FVector DefaultSocketOffset;                                                      // 0x1438 (size: 0xC)
    TEnumAsByte<E_ScreenshotMethod::Type> ScreenshotMethod;                           // 0x1444 (size: 0x1)
    bool bUseCustomScreenshotFolder;                                                  // 0x1445 (size: 0x1)
    FString CustomScreenshotFolderPath;                                               // 0x1448 (size: 0x10)
    class APlayerController* PlayerControllerRef;                                     // 0x1458 (size: 0x8)
    bool bEnableGallery;                                                              // 0x1460 (size: 0x1)
    class UUI_Gallery_C* GalleryWidgetRef;                                            // 0x1468 (size: 0x8)
    FS_InputKeys NextPageKeys (Gallery);                                              // 0x1470 (size: 0x30)
    FS_InputKeys PrevPageKeys (Gallery);                                              // 0x14A0 (size: 0x30)
    FS_InputKeys FullscreenKeys (Gallery);                                            // 0x14D0 (size: 0x30)
    FS_InputKeys BackKeys (Gallery);                                                  // 0x1500 (size: 0x30)
    FS_InputKeys ShowMouseKeys (Gallery);                                             // 0x1530 (size: 0x30)
    bool bAutoSizePerTab;                                                             // 0x1560 (size: 0x1)
    bool bFocusWhenHoveringOverSlider;                                                // 0x1561 (size: 0x1)
    FS_PhotoModeIsOnConfis PhotoModeIsOnWarning;                                      // 0x1568 (size: 0x88)
    FRotator DefaultControlRotation;                                                  // 0x15F0 (size: 0xC)
    bool bExistingPostProcess;                                                        // 0x15FC (size: 0x1)
    TSubclassOf<class AActor> PostProcessVolumeClass;                                 // 0x1600 (size: 0x8)
    bool bIsUnbound;                                                                  // 0x1608 (size: 0x1)
    FPostProcessSettings OriginalPostProcess;                                         // 0x1610 (size: 0x560)
    float GlobalTimeDilationBackup;                                                   // 0x1B70 (size: 0x4)
    TEnumAsByte<E_InputMode::Type> InputModeAfterClosingPhotoMode;                    // 0x1B74 (size: 0x1)
    bool bShowAlbumOption;                                                            // 0x1B75 (size: 0x1)
    float CurrentTimeDilation;                                                        // 0x1B78 (size: 0x4)
    FS_InputKeys LeftCameraKeys;                                                      // 0x1B80 (size: 0x30)
    FS_InputKeys RightCameraKeys;                                                     // 0x1BB0 (size: 0x30)
    FS_InputKeys OpenPhotoModeKeys (Gallery);                                         // 0x1BE0 (size: 0x30)
    FBPC_PhotoMode_CPhotoModeOpened PhotoModeOpened;                                  // 0x1C10 (size: 0x10)
    void PhotoModeOpened(float CurrentTimeDilation);
    FBPC_PhotoMode_CPhotoModeClosed PhotoModeClosed;                                  // 0x1C20 (size: 0x10)
    void PhotoModeClosed();
    bool bShowCharacterRotationOption;                                                // 0x1C30 (size: 0x1)
    bool bControllerTickBackup;                                                       // 0x1C31 (size: 0x1)
    bool bDisableControllerInputOnFreeCamera;                                         // 0x1C32 (size: 0x1)
    bool bDisablePawnInputOnFreeCamera;                                               // 0x1C33 (size: 0x1)
    bool bIsYourSpringArmTickableWhenPaused;                                          // 0x1C34 (size: 0x1)
    bool bIsYourCameraTickableWhenPaused;                                             // 0x1C35 (size: 0x1)
    FBPC_PhotoMode_CPhotoTaken PhotoTaken;                                            // 0x1C38 (size: 0x10)
    void PhotoTaken(FString PhotoPath, FString ThumbPath);
    class ABP_CustomPostProcess_C* CustomPostProcessManager;                          // 0x1C48 (size: 0x8)
    TArray<FS_PhotoResolutions> PhotoResolutions;                                     // 0x1C50 (size: 0x10)
    bool bIncludeDefaultScreenResolutionOption;                                       // 0x1C60 (size: 0x1)
    bool bIncludePhotoWithUIOption;                                                   // 0x1C61 (size: 0x1)
    TMap<FString, float> Apertures;                                                   // 0x1C68 (size: 0x50)
    TEnumAsByte<E_ColorGradingMode::Type> ColorGradingMode;                           // 0x1CB8 (size: 0x1)
    float DefaultFocalLength;                                                         // 0x1CBC (size: 0x4)
    FCameraFocusSettings DefaultFocusSettings;                                        // 0x1CC0 (size: 0x58)
    float DefaultAperture;                                                            // 0x1D18 (size: 0x4)
    TArray<FTextTexture2DPair> Borders;                                               // 0x1D20 (size: 0x10)
    TEnumAsByte<E_SaveSort::Type> SavePhotosSort;                                     // 0x1D30 (size: 0x1)
    FBPC_PhotoMode_COnFreeCameraStart OnFreeCameraStart;                              // 0x1D38 (size: 0x10)
    void OnFreeCameraStart(class ABP_FreeCamera_C* FreeCameraReference);
    FBPC_PhotoMode_COnFreenCameraEnd OnFreenCameraEnd;                                // 0x1D48 (size: 0x10)
    void OnFreenCameraEnd();
    TEnumAsByte<ETraceTypeQuery> FocusCollisionType;                                  // 0x1D58 (size: 0x1)
    FS_InputKeys ExtraFunctionDeleteKeys (Gallery);                                   // 0x1D60 (size: 0x30)
    float RotationSensitivity;                                                        // 0x1D90 (size: 0x4)
    float RotationInterpolationSpeed;                                                 // 0x1D94 (size: 0x4)
    float MovementSensitivity;                                                        // 0x1D98 (size: 0x4)
    float MovementInterpolationSpeed;                                                 // 0x1D9C (size: 0x4)
    bool bAllowCustomMotionBlur;                                                      // 0x1DA0 (size: 0x1)
    TMap<UPrimitiveComponent*, bool> CustomDepthComponents;                           // 0x1DA8 (size: 0x50)
    FString Open Case;                                                                // 0x1DF8 (size: 0x10)
    TArray<FPhotoModeCamera> CameraPositions;                                         // 0x1E08 (size: 0x10)

    void getScreenshotPath(FString& FullPath);
    void Calculate Weight by Ref(class APostProcessVolume* PostProcessVolume, float& PropertyTotal, float& PropertyCount, float PropertyValue, float DistanceWeight);
    void UpdateReferences(bool bCheckWidgets);
    void GetCameraManager(class APlayerCameraManager*& PlayerCameraManager);
    void Get Active Camera(class UCameraComponent*& CurrentCamera, class USpringArmComponent*& CurrentSpringArm);
    void UpdateOutputFolder(FString Custom Path);
    void GetCameraLocation(FVector& CameraLocation);
    void GetSliderCameraDistance(float& CameraDistance);
    void GetSliderRoll(float& Roll);
    void GetSliderFOV(float& FOV);
    void Create Post Process();
    void UnpausedGameAxisMovementControl(float AxisValueIn, float& AxisValueOut);
    void IconSelector - Gallery(FKey Key);
    void IconSelector - Photo Mode Menu(FKey Key);
    void Photo Mode(FKey Key, FString OpenCase);
    void OpenGallery(FKey LastKey);
    void ReceiveBeginPlay();
    void TogglePauseGame();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void InitWidgets();
    void ResetPhotoMode();
    void ResetGallery();
    void OnKeybindReset();
    void OnGamepadTypeChanged();
    void AtChangedKey(const FName ActionName);
    void ExecuteUbergraph_BPC_PhotoMode(int32 EntryPoint);
    void OnFreenCameraEnd__DelegateSignature();
    void OnFreeCameraStart__DelegateSignature(class ABP_FreeCamera_C* FreeCameraReference);
    void PhotoTaken__DelegateSignature(FString PhotoPath, FString ThumbPath);
    void PhotoModeClosed__DelegateSignature();
    void PhotoModeOpened__DelegateSignature(float CurrentTimeDilation);
}; // Size: 0x1E18

#endif
