---@meta

---@class UWBP_TutorialQuest_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NextPageAnimation UWidgetAnimation
---@field ConstructAnimation UWidgetAnimation
---@field Image_908 UImage
---@field TextScrollBox UScrollBox
---@field TutorailNextPageText UTextBlock
---@field Tutorial UOverlay
---@field Tutorial_IMG UImage
---@field TutorialDescription_TXT UTextBlock
---@field TutorialTitle_TXT UTextBlock
---@field WBP_PressInTutorial UWBP_PressInTutorial_C
---@field ManyPages boolean
---@field NextPageText FText
---@field Image UTexture2D
---@field Title FText
---@field Description FText
---@field bShowUncleShelfeAnimation boolean
---@field EnteringCharacterMinigameState ECharacterState
local UWBP_TutorialQuest_C = {}

function UWBP_TutorialQuest_C:Finished_81A11AAC452B9ACC05CE75B2D5F7521A() end
function UWBP_TutorialQuest_C:Construct() end
function UWBP_TutorialQuest_C:AtEscClick() end
function UWBP_TutorialQuest_C:ScrollOffsetDown() end
function UWBP_TutorialQuest_C:CustomEvent2() end
function UWBP_TutorialQuest_C:Destruct() end
---@param EntryPoint int32
function UWBP_TutorialQuest_C:ExecuteUbergraph_WBP_TutorialQuest(EntryPoint) end


