---@meta

---@class ALotteryMachine_BP_C : ALotteryMachine
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SFX_LotteryLoop UAudioComponent
---@field money UStaticMeshComponent
---@field SM_NeonLight UStaticMeshComponent
---@field NS_Lottery_Win UNiagaraComponent
---@field RectLight URectLightComponent
---@field SpotLight3 USpotLightComponent
---@field SpotLight2 USpotLightComponent
---@field SM_DeskLamp_03 UStaticMeshComponent
---@field PrizeWidget UWidgetComponent
---@field ArrowComponent2 UArrowComponent
---@field ArrowComponent1 UArrowComponent
---@field Lever UStaticMeshComponent
---@field Widget ULottery_WBP_C
---@field NeonDynamicMaterial UMaterialInstanceDynamic
local ALotteryMachine_BP_C = {}

---@param Loaded UObject
function ALotteryMachine_BP_C:OnLoaded_2EDA2DA34509AE3B5726BB84EA3128C5(Loaded) end
---@param Loaded UObject
function ALotteryMachine_BP_C:OnLoaded_16FABFE243838AC58F8A3194C45E9545(Loaded) end
---@param Loaded UObject
function ALotteryMachine_BP_C:OnLoaded_66FA4E434FCC3FBC2C1E2686CE885959(Loaded) end
---@param Loaded UObject
function ALotteryMachine_BP_C:OnLoaded_4B7A80B74D9A554940AE98BF77A86742(Loaded) end
function ALotteryMachine_BP_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ALotteryMachine_BP_C:ReceiveTick(DeltaSeconds) end
function ALotteryMachine_BP_C:LotteryWin() end
function ALotteryMachine_BP_C:LightOn() end
function ALotteryMachine_BP_C:LightOff() end
function ALotteryMachine_BP_C:SFX_Male() end
function ALotteryMachine_BP_C:SFX_Female() end
---@param EntryPoint int32
function ALotteryMachine_BP_C:ExecuteUbergraph_LotteryMachine_BP(EntryPoint) end


