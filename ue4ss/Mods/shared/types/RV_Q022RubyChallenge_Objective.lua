---@meta

---@class URV_Q022RubyChallenge_Objective_C : UCountableObjectiveBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field QuestTimer FTimerHandle
---@field CinematicTimer FTimerHandle
---@field ['Was Loaded from Save'] boolean
local URV_Q022RubyChallenge_Objective_C = {}

---@param World UWorld
---@param bWasLoadedFromSave boolean
function URV_Q022RubyChallenge_Objective_C:StartObjective(World, bWasLoadedFromSave) end
---@param ServiceTag FGameplayTag
---@param bAutocompleted boolean
function URV_Q022RubyChallenge_Objective_C:Progress(ServiceTag, bAutocompleted) end
---@param Camper URVCamperComponent
function URV_Q022RubyChallenge_Objective_C:CustomEvent_0(Camper) end
function URV_Q022RubyChallenge_Objective_C:CheckIfUpgradeFinished() end
---@param CurrentTrustPoints int32
---@param Difference int32
function URV_Q022RubyChallenge_Objective_C:OnTrustPointsUpdated(CurrentTrustPoints, Difference) end
---@param EntryPoint int32
function URV_Q022RubyChallenge_Objective_C:ExecuteUbergraph_RV_Q022RubyChallenge_Objective(EntryPoint) end


