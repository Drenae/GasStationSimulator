---@meta

---@class ABP_TapeTable_C : A00_Stand_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline2 USplineComponent
---@field Spline3 USplineComponent
---@field Spline1 USplineComponent
local ABP_TapeTable_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_TapeTable_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ABP_TapeTable_C:ReFillShelfes() end
---@param EntryPoint int32
function ABP_TapeTable_C:ExecuteUbergraph_BP_TapeTable(EntryPoint) end


