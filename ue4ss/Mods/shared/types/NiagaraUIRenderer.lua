---@meta

---@class ANiagaraUIActor : AActor
local ANiagaraUIActor = {}


---@class UNiagaraSystemWidget : UWidget
---@field NiagaraSystemReference UNiagaraSystem
---@field MaterialRemapList TMap<UMaterialInterface, UMaterialInterface>
---@field AutoActivate boolean
---@field TickWhenPaused boolean
---@field FakeDepthScale boolean
---@field FakeDepthScaleDistance float
---@field ShowDebugSystemInWorld boolean
---@field DisableWarnings boolean
---@field NiagaraActor ANiagaraUIActor
---@field NiagaraComponent UNiagaraUIComponent
local UNiagaraSystemWidget = {}

---@param NewTickWhenPaused boolean
function UNiagaraSystemWidget:UpdateTickWhenPaused(NewTickWhenPaused) end
---@param NewNiagaraSystem UNiagaraSystem
function UNiagaraSystemWidget:UpdateNiagaraSystemReference(NewNiagaraSystem) end
function UNiagaraSystemWidget:RedrawNiagaraUI() end
---@return UNiagaraUIComponent
function UNiagaraSystemWidget:GetNiagaraComponent() end
function UNiagaraSystemWidget:DeactivateSystem() end
---@param Reset boolean
function UNiagaraSystemWidget:ActivateSystem(Reset) end


---@class UNiagaraUIComponent : UNiagaraComponent
local UNiagaraUIComponent = {}


