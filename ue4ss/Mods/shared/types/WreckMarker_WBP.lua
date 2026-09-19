---@meta

---@class UWreckMarker_WBP_C : UWreckTaskMarker
---@field UberGraphFrame FPointerToUberGraphFrame
---@field MarkerIcon UImage
---@field MarkerText UTextBlock
---@field Overlay1 UOverlay
local UWreckMarker_WBP_C = {}

---@param Loaded UObject
function UWreckMarker_WBP_C:OnLoaded_67AB9371470AF0F8300F4EA17B415E2C(Loaded) end
---@param NewMarking ECarWreckMarking
function UWreckMarker_WBP_C:SetMarkerIcon(NewMarking) end
---@param EntryPoint int32
function UWreckMarker_WBP_C:ExecuteUbergraph_WreckMarker_WBP(EntryPoint) end


