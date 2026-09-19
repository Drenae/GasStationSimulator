---@meta

---@class FCommonInputKeyBrushConfiguration
---@field Key FKey
---@field KeyBrush FSlateBrush
local FCommonInputKeyBrushConfiguration = {}



---@class FCommonInputKeySetBrushConfiguration
---@field Keys TArray<FKey>
---@field KeyBrush FSlateBrush
local FCommonInputKeySetBrushConfiguration = {}



---@class FCommonInputPlatformBaseData
---@field bSupported boolean
---@field DefaultInputType ECommonInputType
---@field bSupportsMouseAndKeyboard boolean
---@field bSupportsGamepad boolean
---@field DefaultGamepadName FName
---@field bCanChangeGamepadType boolean
---@field bSupportsTouch boolean
---@field ControllerData TArray<TSoftClassPtr<UCommonInputBaseControllerData>>
---@field ControllerDataClasses TArray<TSubclassOf<UCommonInputBaseControllerData>>
local FCommonInputPlatformBaseData = {}



---@class UCommonInputBaseControllerData : UObject
---@field InputType ECommonInputType
---@field GamepadName FName
---@field ControllerTexture TSoftObjectPtr<UTexture2D>
---@field ControllerButtonMaskTexture TSoftObjectPtr<UTexture2D>
---@field InputBrushDataMap TArray<FCommonInputKeyBrushConfiguration>
---@field InputBrushKeySets TArray<FCommonInputKeySetBrushConfiguration>
local UCommonInputBaseControllerData = {}

---@return TArray<FName>
function UCommonInputBaseControllerData:GetRegisteredGamepads() end


---@class UCommonInputSettings : UObject
---@field InputData TSoftClassPtr<UCommonUIInputData>
---@field CommonInputPlatformData TMap<FName, FCommonInputPlatformBaseData>
---@field bEnableInputMethodThrashingProtection boolean
---@field InputMethodThrashingLimit int32
---@field InputMethodThrashingWindowInSeconds double
---@field InputMethodThrashingCooldownInSeconds double
---@field bAllowOutOfFocusDeviceInput boolean
---@field InputDataClass TSubclassOf<UCommonUIInputData>
---@field CurrentPlatform FCommonInputPlatformBaseData
local UCommonInputSettings = {}

---@return TArray<FName>
function UCommonInputSettings:GetRegisteredPlatforms() end


---@class UCommonInputSubsystem : ULocalPlayerSubsystem
---@field OnInputMethodChanged FCommonInputSubsystemOnInputMethodChanged
---@field NumberOfInputMethodChangesRecently int32
---@field LastInputMethodChangeTime double
---@field LastTimeInputMethodThrashingBegan double
---@field LastInputType ECommonInputType
---@field CurrentInputType ECommonInputType
---@field GamepadInputType FName
---@field CurrentInputLocks TMap<FName, ECommonInputType>
---@field bIsGamepadSimulatedClick boolean
local UCommonInputSubsystem = {}

---@return boolean
function UCommonInputSubsystem:ShouldShowInputKeys() end
---@param InGamepadInputType FName
function UCommonInputSubsystem:SetGamepadInputType(InGamepadInputType) end
---@param NewInputType ECommonInputType
function UCommonInputSubsystem:SetCurrentInputType(NewInputType) end
---@return boolean
function UCommonInputSubsystem:IsUsingPointerInput() end
---@param InputMethod ECommonInputType
---@return boolean
function UCommonInputSubsystem:IsInputMethodActive(InputMethod) end
---@return ECommonInputType
function UCommonInputSubsystem:GetDefaultInputType() end
---@return ECommonInputType
function UCommonInputSubsystem:GetCurrentInputType() end
---@return FName
function UCommonInputSubsystem:GetCurrentGamepadName() end


---@class UCommonUIInputData : UObject
---@field DefaultClickAction FDataTableRowHandle
---@field DefaultBackAction FDataTableRowHandle
local UCommonUIInputData = {}



