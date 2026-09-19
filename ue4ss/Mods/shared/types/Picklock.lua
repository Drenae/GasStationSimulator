---@meta

---@class APicklock_C : APicklockBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BP_LockPickingComponent UBP_LockPickingComponent_C
---@field Failed UAudioComponent
---@field Opened UAudioComponent
---@field mask A00_MaskBack_C
---@field BlockNotification UNotification_C
local APicklock_C = {}

---@param mask A00_MaskBack_C
---@param BonusDay float
---@param NPC float
---@param SecurityCar float
---@param Tool float
---@param TotalChance float
function APicklock_C:CalcChanceToOpenMask(mask, BonusDay, NPC, SecurityCar, Tool, TotalChance) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function APicklock_C:UseItem(Pawn, Throw, AimingTime) end
---@param Key FKey
function APicklock_C:InpActEvt_LPM_K2Node_InputActionEvent_0(Key) end
function APicklock_C:Finished_D2CE08AF4ED031EDC6CEAD8BA74F17DA() end
function APicklock_C:ReceiveDestroyed() end
function APicklock_C:StartOpeningMask() end
---@param EntryPoint int32
function APicklock_C:ExecuteUbergraph_Picklock(EntryPoint) end


