---@meta

---@class AGSS_NewHUD_BP_C : AGSS_NewHud
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field NewVar_0 TSubclassOf<UPC_Decorations_C>
---@field NewVar_1 TSubclassOf<UPC_Delivery_C>
---@field NewVar_2 TSubclassOf<UPC_Employe_C>
---@field NewVar_3 TSubclassOf<UPC_Features_C>
---@field NewVar_4 TSubclassOf<UPC_Home_C>
---@field NewVar_5 TSubclassOf<UPC_Mail>
---@field NewVar_6 TSubclassOf<UPC_Managment_C>
---@field NewVar_7 TSubclassOf<UPC_Scores_C>
---@field NewVar_8 TSubclassOf<UPC_Services_C>
---@field NewVar_9 TSubclassOf<UPC_Tools_C>
---@field NewVar_10 TSubclassOf<UPC_VipCustomer_C>
---@field NewVar_11 TSubclassOf<UWBP_TestUpgradeTree_2_0_DemoMapka_C>
---@field NewVar_12 TSubclassOf<UWBP_TestUpgradeTree_2_0_TIdalWave_C>
local AGSS_NewHUD_BP_C = {}

---@param SizeX int32
---@param SizeY int32
function AGSS_NewHUD_BP_C:ReceiveDrawHUD(SizeX, SizeY) end
function AGSS_NewHUD_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AGSS_NewHUD_BP_C:ExecuteUbergraph_GSS_NewHUD_BP(EntryPoint) end


