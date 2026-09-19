---@meta

---@class ULoadingScreenWidgetBP_C : UGlobalInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field JUNKYARD_Overlay1 UOverlay
---@field JUNKYARD_Overlay2 UOverlay
---@field JUNKYARD_Overlay3 UOverlay
---@field LoadingText UTextBlock
---@field LoadingText_1 UTextBlock
---@field LoadingText_2 UTextBlock
---@field LoadingText_3 UTextBlock
---@field LoadingText_4 UTextBlock
---@field Overlay_0 UOverlay
---@field Overlay_1 UOverlay
---@field Overlay_2 UOverlay
---@field Overlay_3 UOverlay
---@field RV_Camp_Overlay1 UOverlay
---@field TextBlock_64 UTextBlock
---@field TIDAL_Overlay1 UOverlay
---@field TIDAL_Overlay2 UOverlay
---@field TIDAL_Overlay3 UOverlay
---@field NewVar_0 float
---@field MapName FName
---@field LoadingScreen TArray<int32>
local ULoadingScreenWidgetBP_C = {}

---@param RandomItem int32
ULoadingScreenWidgetBP_C['Select Loading Screen'] = function(self, RandomItem) end
function ULoadingScreenWidgetBP_C:SetGlobalSettings() end
function ULoadingScreenWidgetBP_C:OnGlobalSettingsApply() end
function ULoadingScreenWidgetBP_C:Construct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function ULoadingScreenWidgetBP_C:Tick(MyGeometry, InDeltaTime) end
function ULoadingScreenWidgetBP_C:CheckLoadingMap() end
---@param EntryPoint int32
function ULoadingScreenWidgetBP_C:ExecuteUbergraph_LoadingScreenWidgetBP(EntryPoint) end


