---@meta

---@class UDLC_Widget_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BackButton UNavigationKeyButton_C
---@field CanvasPanel_0 UCanvasPanel
---@field Image_24 UImage
---@field Image_71 UImage
---@field WrapBox_62 UWrapBox
---@field ChangelogTag FString
---@field ChangelogFile FString
---@field ChangelogDLCs TArray<FDLCNews>
---@field CreatedDLCs TArray<FString>
---@field GamePadWidgetIndex int32
local UDLC_Widget_C = {}

function UDLC_Widget_C:SetReferences() end
function UDLC_Widget_C:Construct() end
function UDLC_Widget_C:BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature() end
function UDLC_Widget_C:OnPressedBack() end
function UDLC_Widget_C:DownloadFiles() end
---@param bWasSuccessful boolean
---@param UserId FString
function UDLC_Widget_C:OnLogin(bWasSuccessful, UserId) end
---@param bWasSuccessfull boolean
---@param ErrorString FString
---@param TagName FString
function UDLC_Widget_C:OnDownloadCompleted(bWasSuccessfull, ErrorString, TagName) end
function UDLC_Widget_C:SetupDLCNews() end
---@param bWasSuccesfull boolean
---@param Filename FString
---@param FileContent TArray<uint8>
function UDLC_Widget_C:ChangelogRead(bWasSuccesfull, Filename, FileContent) end
function UDLC_Widget_C:FAKEADD() end
function UDLC_Widget_C:OnPressedDown() end
function UDLC_Widget_C:OnPressedUp() end
function UDLC_Widget_C:OnPressedLeft() end
function UDLC_Widget_C:OnPressedRight() end
function UDLC_Widget_C:OnPressedSelect() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UDLC_Widget_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UDLC_Widget_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
---@param IsDesignTime boolean
function UDLC_Widget_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UDLC_Widget_C:ExecuteUbergraph_DLC_Widget(EntryPoint) end


