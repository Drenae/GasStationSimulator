---@meta

---@class UWBP_3D_NPC_Info_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AtWork UWidgetAnimation
---@field EmployeeEnergyBar_1 UProgressBar
---@field Image_322 UImage
---@field MainCanvas UCanvasPanel
---@field MainOverlay UOverlay
---@field MoneyIcon UImage
---@field MoneyToPayTXT UTextBlock
---@field TextBlock_66 UTextBlock
---@field Character AAICharacterBase
---@field RangeMedium float
---@field RangeClose float
---@field EmployeeBase AEmployee_Base_C
---@field RangeFar float
---@field LastKnown float
local UWBP_3D_NPC_Info_C = {}

function UWBP_3D_NPC_Info_C:Construct() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_3D_NPC_Info_C:Tick(MyGeometry, InDeltaTime) end
function UWBP_3D_NPC_Info_C:RestartAnim() end
---@param EntryPoint int32
function UWBP_3D_NPC_Info_C:ExecuteUbergraph_WBP_3D_NPC_Info(EntryPoint) end


