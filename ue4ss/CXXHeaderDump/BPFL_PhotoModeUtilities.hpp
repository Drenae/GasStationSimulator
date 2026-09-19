#ifndef UE4SS_SDK_BPFL_PhotoModeUtilities_HPP
#define UE4SS_SDK_BPFL_PhotoModeUtilities_HPP

class UBPFL_PhotoModeUtilities_C : public UBlueprintFunctionLibrary
{

    void isPhotoModeOrGalleryOpened(class UObject* __WorldContext, bool& bIsOpened);
    void isGalleryOpened(class UObject* __WorldContext, bool& bIsOpened, class UUI_Gallery_C*& WidgetReference);
    void isPhotoModeOpened(class UObject* __WorldContext, bool& bIsOpened, class UUI_PhotoMode_C*& WidgetReference);
    void GetAllImersedPostProcess(class APlayerController* PlayerController, class UObject* __WorldContext, FVector& CameraLocation, TMap<APostProcessVolume*, FTransform>& VolumesTransforms, TMap<APostProcessVolume*, FVector>& VolumesExtent);
    void Nearest Distance To Box With Transform(FVector Point, FTransform BoxWorldTransform, FVector BoxExtent, class UObject* __WorldContext, float& Distance);
    void Hide HUD When Using Photo Mode(ESlateVisibility If Not Using Photo Mode Set This Widget As, class UBPC_PhotoMode_C* PhotoModeComponent, class UObject* __WorldContext, ESlateVisibility& Visibility, bool& Using Photo Mode or Gallery?);
    void SaveAllPhotos(TArray<FS_PhotosData>& SaveNewPhoto, class UObject* __WorldContext);
    void MakeThumbnail(class UObject* World Context Object (Self), class APlayerController* Player Controller, FString Screenshot Folder Path, FIntPoint Resolution (X and Y), FString PhotoName, TEnumAsByte<E_ScreenshotMethod::Type> ScreenshotMethod, class ABP_ScreenshotManager_C* ScreenshotManager, class UObject* __WorldContext, FString& Full Thumbnail Path, FString& BaseThumbnailName);
    void LoadPhotos(class UObject* __WorldContext, bool& SaveGameIsValid?, TArray<FS_PhotosData>& PhotosData);
    void SavePhoto(FS_PhotosData SaveNewPhoto, TEnumAsByte<E_SaveSort::Type> Sort, class UObject* __WorldContext);
    void NormalizeScreenshotPath(FString Folder Path, class UObject* __WorldContext, FString& Normalized Path);
    void Get Screenshot File(class UObject* WorldContextObject, FString FullFilePath, class UObject* __WorldContext, bool& IsValid?, class UTexture2D*& 2D Image, FString& Base Filename, FString& Full File Path);
    void Directory Path Correction(bool Use Custom Path?, FString Custom Path, class UObject* __WorldContext, FString& Corrected Path);
    void Get Default Screen Resolution(class UObject* __WorldContext, FIntPoint& Resolution (X and Y));
    void HighResScreenshot (without UI)(class UObject* World Context Object (Self), class APlayerController* Player Controller, FString Screenshot Folder Path, FIntPoint Resolution (X and Y), TEnumAsByte<E_ScreenshotMethod::Type> ScreenshotMethod, class ABP_ScreenshotManager_C* ScreenshotManager, class UObject* __WorldContext, FString& Full Photo Path, FString& Photo Name);
    void Screenshot (with UI)(class UObject* World Context Object (Self), class APlayerController* Player Controller, FString Screenshot Folder Path, class UObject* __WorldContext, FString& Full Screenshot File Path, FString& PhotoName);
}; // Size: 0x28

#endif
