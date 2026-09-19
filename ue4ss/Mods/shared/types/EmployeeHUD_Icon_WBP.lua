---@meta

---@class UEmployeeHUD_Icon_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Employee_Icon UImage
---@field EnergyRadialProgress UImage
---@field FirstEmployeAcitivityTXT UTextBlock
---@field CurrentEmployee AAICharacterBase
---@field EmployeesHUD UEmployees_hud_WBP_C
---@field EmployeeNumber int32
---@field Radial UMaterialInstanceDynamic
local UEmployeeHUD_Icon_WBP_C = {}

---@param Icon UTexture
function UEmployeeHUD_Icon_WBP_C:SetIcon(Icon) end
function UEmployeeHUD_Icon_WBP_C:Construct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UEmployeeHUD_Icon_WBP_C:Tick(MyGeometry, InDeltaTime) end
---@param StartedTask UTaskBase
function UEmployeeHUD_Icon_WBP_C:OnInitializeTaskCharacter_Event_0(StartedTask) end
---@param EntryPoint int32
function UEmployeeHUD_Icon_WBP_C:ExecuteUbergraph_EmployeeHUD_Icon_WBP(EntryPoint) end


