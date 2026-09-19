---@meta

---@class UUMG_RadialMenu_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RadialBackground UImage
---@field RadiusDebug UImage
---@field RootOverlay UOverlay
---@field Segments int32
---@field MaterialBase UMaterialInterface
---@field IndexRaw float
---@field Index int32
---@field dynaMat UMaterialInstanceDynamic
---@field Children TArray<UUserWidget>
---@field AllowResizing boolean
---@field ItemOffsetRadius float
---@field SelectionChanged FUMG_RadialMenu_CSelectionChanged
---@field InputController APlayerController
---@field JoystickToUse EJoystickTypes::Type
---@field MouseDeadzone float
---@field bInDeadzone boolean
---@field EnteredDeadzone FUMG_RadialMenu_CEnteredDeadzone
---@field ExitedDeadzone FUMG_RadialMenu_CExitedDeadzone
---@field CurrentInput FVector2D
---@field JoystickDeadzone float
---@field DefaultToMouseIfNoJoystick boolean
---@field DefaultPlayerIndex int32
---@field UseDeadzoneEvents boolean
---@field SelectionChangedSound USoundBase
---@field AutoCenterMouse boolean
---@field AutoRotateForUp boolean
---@field bUseCustomInput boolean
---@field CustomInput FVector2D
---@field UseCustomTexture boolean
---@field RadialTexture UTexture
---@field UseCustomColors boolean
---@field InnterRingColor FLinearColor
---@field OuterRingColor FLinearColor
---@field RingMainColor FLinearColor
---@field UnhighlightColor FLinearColor
---@field OnGamePadCursorVisible FTimerHandle
local UUMG_RadialMenu_C = {}

function UUMG_RadialMenu_C:UpdateMaterialVisuals() end
---@param Input FVector2D
---@param Valid boolean
function UUMG_RadialMenu_C:GetCustomInput(Input, Valid) end
---@param CustomInput FVector2D
function UUMG_RadialMenu_C:SetCustomInput(CustomInput) end
function UUMG_RadialMenu_C:UpdateDirectionWithCustomInput() end
---@param IndexToRemove int32
function UUMG_RadialMenu_C:RemoveChildIndexFromRadialMenu(IndexToRemove) end
---@param ItemToFind UUserWidget
function UUMG_RadialMenu_C:RemoveChildWidgetFromRadialMenu(ItemToFind) end
---@return FText
function UUMG_RadialMenu_C:DebugIndex() end
---@param Input FVector2D
---@return FVector2D
function UUMG_RadialMenu_C:FixInputRotation(Input) end
function UUMG_RadialMenu_C:FixMainRotation() end
function UUMG_RadialMenu_C:AutoRegisterToInput() end
function UUMG_RadialMenu_C:UpdateInput() end
---@param Controller APlayerController
---@param Success boolean
function UUMG_RadialMenu_C:RegisterPlayerInput(Controller, Success) end
function UUMG_RadialMenu_C:UpdateDirectionWithJoystick() end
---@param Index int32
---@param Valid boolean
function UUMG_RadialMenu_C:GetCurrentIndex(Index, Valid) end
---@param Index int32
---@param Output UUserWidget
---@param Success boolean
function UUMG_RadialMenu_C:GetChild(Index, Output, Success) end
---@param Index int32
function UUMG_RadialMenu_C:SetIndex(Index) end
function UUMG_RadialMenu_C:UpdateAllChildrenPositions() end
---@param Index int32
function UUMG_RadialMenu_C:UpdateChildPosition(Index) end
function UUMG_RadialMenu_C:ClearChildren() end
---@param Output UUserWidget
function UUMG_RadialMenu_C:GetSelectedWidget(Output) end
---@param Content UUserWidget
---@param Success boolean
function UUMG_RadialMenu_C:AddChildToRadialMenu(Content, Success) end
function UUMG_RadialMenu_C:UpdateDirectionWithMouseCursor() end
---@return float
function UUMG_RadialMenu_C:GetSectionDegreeSize() end
function UUMG_RadialMenu_C:Construct() end
---@param Segments int32
function UUMG_RadialMenu_C:UpdateSegments(Segments) end
---@param Direction FVector2D
function UUMG_RadialMenu_C:SetInputDirection(Direction) end
---@param InDeadZone boolean
function UUMG_RadialMenu_C:InDeadZone(InDeadZone) end
function UUMG_RadialMenu_C:UpdateMaterials() end
---@param IsDesignTime boolean
function UUMG_RadialMenu_C:PreConstruct(IsDesignTime) end
---@param NewColor FLinearColor
function UUMG_RadialMenu_C:SetBackgroundColor(NewColor) end
---@param bNewGamepadMode boolean
function UUMG_RadialMenu_C:OnDeviceChanged(bNewGamepadMode) end
---@param isConstruct boolean
function UUMG_RadialMenu_C:BindOnDeviceChanged(isConstruct) end
function UUMG_RadialMenu_C:Destruct() end
function UUMG_RadialMenu_C:OnConstructHandleCursorVisibility() end
---@param EntryPoint int32
function UUMG_RadialMenu_C:ExecuteUbergraph_UMG_RadialMenu(EntryPoint) end
function UUMG_RadialMenu_C:ExitedDeadzone__DelegateSignature() end
function UUMG_RadialMenu_C:EnteredDeadzone__DelegateSignature() end
---@param NewSelection int32
---@param OldSelection int32
function UUMG_RadialMenu_C:SelectionChanged__DelegateSignature(NewSelection, OldSelection) end


