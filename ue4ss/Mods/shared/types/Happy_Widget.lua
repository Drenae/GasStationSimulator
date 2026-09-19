---@meta

---@class UHappy_Widget_C : UGSSInnerWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RedAnimation UWidgetAnimation
---@field GreenAnimation UWidgetAnimation
---@field StartingAnim UWidgetAnimation
---@field AnimationWidget UWBP_Hud_Popularity_Anim_C
---@field HappyPercentTXT UTextBlock
---@field Image_71 UImage
---@field MainOverlay UOverlay
---@field popualrity UTextBlock
---@field ProgressBar UProgressBar
---@field GameState AGSSGameState
---@field DivideProgressBar float
---@field CurrentHappyAmmount float
---@field LocalHappyAmmount int32
---@field LocalHappyMinimal int32
---@field BeforeUpdateAmmount int32
---@field LocalAmount int32
---@field UpdateComingFromLevelUp boolean
local UHappy_Widget_C = {}

---@param CurrentHappy int32
---@param MinHappy int32
---@param HappyMax int32
---@param HappyLevel int32
function UHappy_Widget_C:UpdateHappyAngry(CurrentHappy, MinHappy, HappyMax, HappyLevel) end
function UHappy_Widget_C:Construct() end
---@param HappyAngryPopularityLevel int32
function UHappy_Widget_C:OnHappyAngryPopularityLevelUp(HappyAngryPopularityLevel) end
---@param HappyCount int32
---@param HappyMin int32
---@param HappyMax int32
---@param bIsHappy boolean
---@param CurrentPopularityLevel int32
---@param Instaginator UObject
---@param Reason FString
function UHappy_Widget_C:OnHappyAngryUpdated(HappyCount, HappyMin, HappyMax, bIsHappy, CurrentPopularityLevel, Instaginator, Reason) end
function UHappy_Widget_C:ShowWidget() end
function UHappy_Widget_C:MaxPopularityVizual() end
---@param GameLoaded boolean
function UHappy_Widget_C:OnFinishGameLoaded_Event_0(GameLoaded) end
---@param GSSQuest UGSSQuest
function UHappy_Widget_C:OnQuestSpawned_Event_0(GSSQuest) end
---@param NewUnlockableUIState FUnlockableUIState
function UHappy_Widget_C:CheckNotificationVisibility(NewUnlockableUIState) end
---@param EntryPoint int32
function UHappy_Widget_C:ExecuteUbergraph_Happy_Widget(EntryPoint) end


