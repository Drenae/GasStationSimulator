---@meta

---@class ALight_Base_C : ASignificanceStaticMeshActorBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Enabled boolean
---@field ['Light Position'] FVector
---@field ['Use Default Position'] boolean
---@field ['Max Intensity'] float
---@field ['Min Intensity'] float
---@field ['Light Color'] FLinearColor
---@field ['Switch On Time Offset'] float
---@field ['Heatup Time'] float
---@field ['Switch Off Time Offset'] float
---@field bIsChangingTemperature boolean
---@field IntensityChangeType LightOn_Off::Type
---@field ['Cooldown Time'] float
---@field ['Temp_Timer Change Intensity'] float
---@field ['Light Switch On Sound'] USoundCue
---@field ['Light Switch Off Sound'] USoundCue
---@field ['Idle Sound'] USoundCue
---@field ['Audio Idle Component'] UAudioComponent
---@field ['Audio TurnOn Component'] UAudioComponent
---@field ['Audio TurnOff Component'] UAudioComponent
---@field Light ULightComponent
---@field Temp_Intensity float
---@field ['Flicker Min Interval'] float
---@field ['Flicker Max Interval'] float
---@field ['Temp_Flicker Interval'] float
---@field ['Temp_Flicker Intensity'] float
---@field ['Temp_Timer Flicker'] float
---@field Temp_SwitchOnDuration float
---@field Temp_SwitchOffDuration float
---@field EmissiveScalarParamName FName
---@field EmissiveVectorParamName FName
---@field ['Idle Volume'] float
---@field ['HeatUp Percentage'] float
---@field ILS_Emissive float
---@field ['Temp_Timer Pulse'] float
---@field ['Pulse Duration'] float
---@field ['Light Behavior'] LightModification::Type
---@field ['Phase Shift'] float
---@field ['Modulate Sound Volume During Pulse'] boolean
---@field Temp_HeatUpPercent float
---@field ['Modulate Sound Volume'] boolean
---@field TimerHandleOn FTimerHandle
---@field TimerHandleOff FTimerHandle
---@field MIDs TArray<UMaterialInstanceDynamic>
---@field Temp_MaxIntensity float
---@field ['Use Day Night Cycle'] boolean
---@field Electrocity boolean
---@field IsOilLamp boolean
---@field LampDelay float
---@field DuringActivated boolean
---@field CustomFlickerHandle FTimerHandle
local ALight_Base_C = {}

---@return boolean
function ALight_Base_C:GetElectrocity() end
function ALight_Base_C:InitializeState() end
function ALight_Base_C:RecalculateMaxIntensity() end
function ALight_Base_C:LightsOff() end
function ALight_Base_C:LightsOn() end
---@param Time float
---@param Duration float
---@param Range float
ALight_Base_C['Calculate HeatUp Percentage'] = function(self, Time, Duration, Range) end
function ALight_Base_C:Constructor() end
---@param EmissivePercentage float
ALight_Base_C['Change Emissive Value'] = function(self, EmissivePercentage) end
---@param DeltaTime float
function ALight_Base_C:Pulse(DeltaTime) end
ALight_Base_C['Setup Sound System'] = function(self, ) end
ALight_Base_C['Recalculate Flicker Variables'] = function(self, ) end
---@param Delta_Time float
function ALight_Base_C:Flicker(Delta_Time) end
ALight_Base_C['Play Switch Off Sounds'] = function(self, ) end
ALight_Base_C['Play Swich On Sounds'] = function(self, ) end
---@param ChangeType LightOn_Off::Type
---@param Delta_Time float
ALight_Base_C['Heatup Lamp'] = function(self, ChangeType, Delta_Time) end
function ALight_Base_C:UserConstructionScript() end
ALight_Base_C['Start Flickering'] = function(self, ) end
ALight_Base_C['Stop Flickering'] = function(self, ) end
ALight_Base_C['Start Pulse'] = function(self, ) end
ALight_Base_C['Stop Pulse'] = function(self, ) end
ALight_Base_C['Turn Off'] = function(self, ) end
ALight_Base_C['Turn On'] = function(self, ) end
---@param DeltaSeconds float
function ALight_Base_C:ReceiveTick(DeltaSeconds) end
---@param On boolean
function ALight_Base_C:EnableElectrocity(On) end
---@param EndPlayReason EEndPlayReason::Type
function ALight_Base_C:ReceiveEndPlay(EndPlayReason) end
ALight_Base_C['TurnOn Light'] = function(self, ) end
function ALight_Base_C:GameTimeUpdate() end
function ALight_Base_C:ReceiveBeginPlay() end
function ALight_Base_C:CustomStartFlickering() end
function ALight_Base_C:FlickerStrike() end
function ALight_Base_C:CustomStopFlicker() end
---@param EntryPoint int32
function ALight_Base_C:ExecuteUbergraph_Light_Base(EntryPoint) end


