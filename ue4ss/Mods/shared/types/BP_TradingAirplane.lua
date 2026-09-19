---@meta

---@class ABP_TradingAirplane_C : ATradingAirplane
---@field UberGraphFrame FPointerToUberGraphFrame
---@field P_EngineSmoke_Dir1 UParticleSystemComponent
---@field P_WheelsSmokeScrach UParticleSystemComponent
---@field P_EngineSmoke_Dir UParticleSystemComponent
---@field DMI_1_TradePlane UMaterialInstanceDynamic
---@field DMI_2_TradePlane UMaterialInstanceDynamic
---@field DMI_1_Index int32
---@field DMI_2_Index int32
---@field ColorBoardLinear1 TArray<FLinearColor>
---@field ['Procedural Colorig In Editor'] boolean
---@field TradeWidgetClass TSoftClassPtr<UAirstripTradeWidget>
local ABP_TradingAirplane_C = {}

---@return FName
function ABP_TradingAirplane_C:GetInteractionName() end
ABP_TradingAirplane_C['Colors Update'] = function(self, ) end
function ABP_TradingAirplane_C:SettingVariablesWithRandomColors() end
---@param Output FLinearColor
function ABP_TradingAirplane_C:RandomColorsFromBoard(Output) end
function ABP_TradingAirplane_C:PreppingMaterials() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_TradingAirplane_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ABP_TradingAirplane_C:UserConstructionScript() end
---@param Loaded UClass
function ABP_TradingAirplane_C:OnLoaded_EA73D84044948D6F1C885B920EDB0F4E(Loaded) end
function ABP_TradingAirplane_C:ReceiveBeginPlay() end
function ABP_TradingAirplane_C:UpdateColors() end
function ABP_TradingAirplane_C:RandomColors() end
function ABP_TradingAirplane_C:StartTrading() end
---@param EntryPoint int32
function ABP_TradingAirplane_C:ExecuteUbergraph_BP_TradingAirplane(EntryPoint) end


