---@meta

---@class AAutomaticCarWash_BP_C : ACarWashAutomaticParts
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NS_CarWash5 UNiagaraComponent
---@field NS_CarWash4 UNiagaraComponent
---@field NS_CarWash3 UNiagaraComponent
---@field NS_CarWash2 UNiagaraComponent
---@field NS_CarWash1 UNiagaraComponent
---@field NS_CarWash UNiagaraComponent
---@field Audio UAudioComponent
---@field CarWash0 UStaticMeshComponent
---@field Sequencer UChildActorComponent
---@field Decal1 UDecalComponent
---@field Frame UStaticMeshComponent
---@field Roto_Brush_R UStaticMeshComponent
---@field Roto_Brush_L UStaticMeshComponent
---@field Arm_R UStaticMeshComponent
---@field Arm_L UStaticMeshComponent
---@field Generator UStaticMeshComponent
---@field ElectricityValue_ValueUpdate_D311CC4942D8E463AAD287BF87E94C24 float
---@field ElectricityValue__Direction_D311CC4942D8E463AAD287BF87E94C24 ETimelineDirection::Type
---@field ElectricityValue UTimelineComponent
---@field SpreadBrushesValue float
---@field CollectionParameterName FName
---@field TurnOn_Brushes boolean
---@field CurrentTime float
local AAutomaticCarWash_BP_C = {}

---@param bNewCollision boolean
---@return boolean
function AAutomaticCarWash_BP_C:SetAutoCarWashPartsCollision(bNewCollision) end
---@return boolean
function AAutomaticCarWash_BP_C:StartAutomaticWashing() end
function AAutomaticCarWash_BP_C:StartAutomaticSequence() end
function AAutomaticCarWash_BP_C:ElectricityValue__FinishedFunc() end
function AAutomaticCarWash_BP_C:ElectricityValue__UpdateFunc() end
---@param DeltaSeconds float
function AAutomaticCarWash_BP_C:ReceiveTick(DeltaSeconds) end
function AAutomaticCarWash_BP_C:StartAutoCarWash() end
function AAutomaticCarWash_BP_C:StopAutoCarWash() end
function AAutomaticCarWash_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AAutomaticCarWash_BP_C:ExecuteUbergraph_AutomaticCarWash_BP(EntryPoint) end


