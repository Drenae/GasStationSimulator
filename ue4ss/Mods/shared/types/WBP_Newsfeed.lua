---@meta

---@class UWBP_Newsfeed_C : UInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverAnim UWidgetAnimation
---@field HoverReadMoreAnim UWidgetAnimation
---@field NewNews UWidgetAnimation
---@field DotBox UHorizontalBox
---@field DotSwitcher_WBP UDotSwitcher_WBP_C
---@field DotSwitcher_WBP_90 UDotSwitcher_WBP_C
---@field DotSwitcher_WBP_178 UDotSwitcher_WBP_C
---@field DotSwitcher_WBP_262 UDotSwitcher_WBP_C
---@field HooverBorder UImage
---@field Image_1 UImage
---@field Image_53 UImage
---@field Image_136 UImage
---@field WBP_SingleNews UWBP_SingleNews_C
---@field WBP_SingleNews_1 UWBP_SingleNews_C
---@field WBP_SingleNews_2 UWBP_SingleNews_C
---@field WBP_SingleNews_3 UWBP_SingleNews_C
---@field WBP_SingleNews_4 UWBP_SingleNews_C
---@field WidgetSwitcher_0 UWidgetSwitcher
---@field ChangelogFile FString
---@field ChangelogTags FString
---@field ChangelogNews TArray<FChangelogNews>
---@field LastNewsDateSettingName FString
---@field ChangelogImages TMap<FString, UTexture2D>
---@field ChangelogImagesUniqueNames TArray<FString>
---@field IsWidgetDataLoaded boolean
---@field TestInteger int32
---@field Timer FTimerHandle
---@field OnNewsfeedEnabled FWBP_Newsfeed_COnNewsfeedEnabled
local UWBP_Newsfeed_C = {}

function UWBP_Newsfeed_C:SetDotsNormal() end
---@param Index int32
function UWBP_Newsfeed_C:SwitchNews(Index) end
---@param bIsWidgetEnabled boolean
function UWBP_Newsfeed_C:SetNewsEnabled(bIsWidgetEnabled) end
---@param bIsHovered boolean
function UWBP_Newsfeed_C:SetFocusEffect(bIsHovered) end
---@param FreshNewsDate FDateTime
function UWBP_Newsfeed_C:AddMarkerOnFreshNews(FreshNewsDate) end
function UWBP_Newsfeed_C:DownloadFiles() end
---@param bWasSuccessfull boolean
---@param ErrorString FString
---@param TagName FString
function UWBP_Newsfeed_C:OnDownloadCompleted(bWasSuccessfull, ErrorString, TagName) end
---@param bWasSuccessful boolean
---@param UserId FString
function UWBP_Newsfeed_C:OnLogin(bWasSuccessful, UserId) end
function UWBP_Newsfeed_C:Construct() end
function UWBP_Newsfeed_C:SetupNewsFeed() end
---@param bWasSuccesfull boolean
---@param Filename FString
---@param FileContent TArray<uint8>
function UWBP_Newsfeed_C:ChangelogRead(bWasSuccesfull, Filename, FileContent) end
---@param News FChangelogNews
function UWBP_Newsfeed_C:GetChangelogImage(News) end
---@param bWasSuccesfull boolean
---@param Filename FString
---@param FileContent TArray<uint8>
function UWBP_Newsfeed_C:OnImageRead(bWasSuccesfull, Filename, FileContent) end
function UWBP_Newsfeed_C:OnNewsRead() end
function UWBP_Newsfeed_C:CheckIfAllImagesAreRead() end
function UWBP_Newsfeed_C:OnWidgetDataLoaded() end
function UWBP_Newsfeed_C:ChangeNews() end
---@param bIsHovered boolean
---@param bPlaySound boolean
function UWBP_Newsfeed_C:OnSetHoverEffect(bIsHovered, bPlaySound) end
function UWBP_Newsfeed_C:OnPressedSelect() end
function UWBP_Newsfeed_C:OnPressedLeft() end
function UWBP_Newsfeed_C:OnPressedRight() end
---@param bIsGamepadBeingUsed boolean
function UWBP_Newsfeed_C:OnChangeInputDevice(bIsGamepadBeingUsed) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UWBP_Newsfeed_C:OnMouseEnter(MyGeometry, MouseEvent) end
---@param MouseEvent FPointerEvent
function UWBP_Newsfeed_C:OnMouseLeave(MouseEvent) end
---@param EntryPoint int32
function UWBP_Newsfeed_C:ExecuteUbergraph_WBP_Newsfeed(EntryPoint) end
---@param IsEnabled boolean
function UWBP_Newsfeed_C:OnNewsfeedEnabled__DelegateSignature(IsEnabled) end


