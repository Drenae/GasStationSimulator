---@meta

---@class UBPFL_PhotoModeUtilities_C : UBlueprintFunctionLibrary
local UBPFL_PhotoModeUtilities_C = {}

---@param __WorldContext UObject
---@param bIsOpened boolean
function UBPFL_PhotoModeUtilities_C:isPhotoModeOrGalleryOpened(__WorldContext, bIsOpened) end
---@param __WorldContext UObject
---@param bIsOpened boolean
---@param WidgetReference UUI_Gallery_C
function UBPFL_PhotoModeUtilities_C:isGalleryOpened(__WorldContext, bIsOpened, WidgetReference) end
---@param __WorldContext UObject
---@param bIsOpened boolean
---@param WidgetReference UUI_PhotoMode_C
function UBPFL_PhotoModeUtilities_C:isPhotoModeOpened(__WorldContext, bIsOpened, WidgetReference) end
---@param PlayerController APlayerController
---@param __WorldContext UObject
---@param CameraLocation FVector
---@param VolumesTransforms TMap<APostProcessVolume, FTransform>
---@param VolumesExtent TMap<APostProcessVolume, FVector>
function UBPFL_PhotoModeUtilities_C:GetAllImersedPostProcess(PlayerController, __WorldContext, CameraLocation, VolumesTransforms, VolumesExtent) end
---@param Point FVector
---@param BoxWorldTransform FTransform
---@param BoxExtent FVector
---@param __WorldContext UObject
---@param Distance float
UBPFL_PhotoModeUtilities_C['Nearest Distance To Box With Transform'] = function(self, Point, BoxWorldTransform, BoxExtent, __WorldContext, Distance) end
---@param If_Not_Using_Photo_Mode_Set_This_Widget_As ESlateVisibility
---@param PhotoModeComponent UBPC_PhotoMode_C
---@param __WorldContext UObject
---@param Visibility ESlateVisibility
---@param Using_Photo_Mode_or_Gallery_ boolean
UBPFL_PhotoModeUtilities_C['Hide HUD When Using Photo Mode'] = function(self, If_Not_Using_Photo_Mode_Set_This_Widget_As, PhotoModeComponent, __WorldContext, Visibility, Using_Photo_Mode_or_Gallery_) end
---@param SaveNewPhoto TArray<FS_PhotosData>
---@param __WorldContext UObject
function UBPFL_PhotoModeUtilities_C:SaveAllPhotos(SaveNewPhoto, __WorldContext) end
---@param World_Context_Object__Self_ UObject
---@param Player_Controller APlayerController
---@param Screenshot_Folder_Path FString
---@param Resolution__X_and_Y_ FIntPoint
---@param PhotoName FString
---@param ScreenshotMethod E_ScreenshotMethod::Type
---@param ScreenshotManager ABP_ScreenshotManager_C
---@param __WorldContext UObject
---@param Full_Thumbnail_Path FString
---@param BaseThumbnailName FString
function UBPFL_PhotoModeUtilities_C:MakeThumbnail(World_Context_Object__Self_, Player_Controller, Screenshot_Folder_Path, Resolution__X_and_Y_, PhotoName, ScreenshotMethod, ScreenshotManager, __WorldContext, Full_Thumbnail_Path, BaseThumbnailName) end
---@param __WorldContext UObject
---@param SaveGameIsValid_ boolean
---@param PhotosData TArray<FS_PhotosData>
function UBPFL_PhotoModeUtilities_C:LoadPhotos(__WorldContext, SaveGameIsValid_, PhotosData) end
---@param SaveNewPhoto FS_PhotosData
---@param Sort E_SaveSort::Type
---@param __WorldContext UObject
function UBPFL_PhotoModeUtilities_C:SavePhoto(SaveNewPhoto, Sort, __WorldContext) end
---@param Folder_Path FString
---@param __WorldContext UObject
---@param Normalized_Path FString
function UBPFL_PhotoModeUtilities_C:NormalizeScreenshotPath(Folder_Path, __WorldContext, Normalized_Path) end
---@param WorldContextObject UObject
---@param FullFilePath FString
---@param __WorldContext UObject
---@param IsValid_ boolean
---@param _2D_Image UTexture2D
---@param Base_Filename FString
---@param Full_File_Path FString
UBPFL_PhotoModeUtilities_C['Get Screenshot File'] = function(self, WorldContextObject, FullFilePath, __WorldContext, IsValid_, _2D_Image, Base_Filename, Full_File_Path) end
---@param Use_Custom_Path_ boolean
---@param Custom_Path FString
---@param __WorldContext UObject
---@param Corrected_Path FString
UBPFL_PhotoModeUtilities_C['Directory Path Correction'] = function(self, Use_Custom_Path_, Custom_Path, __WorldContext, Corrected_Path) end
---@param __WorldContext UObject
---@param Resolution__X_and_Y_ FIntPoint
UBPFL_PhotoModeUtilities_C['Get Default Screen Resolution'] = function(self, __WorldContext, Resolution__X_and_Y_) end
---@param World_Context_Object__Self_ UObject
---@param Player_Controller APlayerController
---@param Screenshot_Folder_Path FString
---@param Resolution__X_and_Y_ FIntPoint
---@param ScreenshotMethod E_ScreenshotMethod::Type
---@param ScreenshotManager ABP_ScreenshotManager_C
---@param __WorldContext UObject
---@param Full_Photo_Path FString
---@param Photo_Name FString
UBPFL_PhotoModeUtilities_C['HighResScreenshot (without UI)'] = function(self, World_Context_Object__Self_, Player_Controller, Screenshot_Folder_Path, Resolution__X_and_Y_, ScreenshotMethod, ScreenshotManager, __WorldContext, Full_Photo_Path, Photo_Name) end
---@param World_Context_Object__Self_ UObject
---@param Player_Controller APlayerController
---@param Screenshot_Folder_Path FString
---@param __WorldContext UObject
---@param Full_Screenshot_File_Path FString
---@param PhotoName FString
UBPFL_PhotoModeUtilities_C['Screenshot (with UI)'] = function(self, World_Context_Object__Self_, Player_Controller, Screenshot_Folder_Path, __WorldContext, Full_Screenshot_File_Path, PhotoName) end


