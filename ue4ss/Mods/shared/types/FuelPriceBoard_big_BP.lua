---@meta

---@class AFuelPriceBoard_big_BP_C : AFuelPriceBoard
---@field UberGraphFrame FPointerToUberGraphFrame
---@field sign_back UStaticMeshComponent
---@field Box UBoxComponent
---@field ObjectiveMarkerArrow UChildActorComponent
---@field WidgetBlocker UBoxComponent
---@field Widget3D UWidgetComponent
---@field StaticMesh UStaticMeshComponent
---@field AllertHandle FTimerHandle
---@field Confirmation UWBP_FuelPriceBoardConfirmation_C
---@field MainPC UMainPC
local AFuelPriceBoard_big_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function AFuelPriceBoard_big_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
function AFuelPriceBoard_big_BP_C:ShowCantInteractPopup() end
---@return boolean
function AFuelPriceBoard_big_BP_C:CanAlterFuelPrice() end
---@param HideCloseStationText boolean
function AFuelPriceBoard_big_BP_C:SetCloseStationVisiblity(HideCloseStationText) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AFuelPriceBoard_big_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function AFuelPriceBoard_big_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@return FName
function AFuelPriceBoard_big_BP_C:GetInteractionName() end
function AFuelPriceBoard_big_BP_C:ReceiveBeginPlay() end
---@param GameLoaded boolean
function AFuelPriceBoard_big_BP_C:GameLoaded(GameLoaded) end
---@param bOnMinigameExit boolean
function AFuelPriceBoard_big_BP_C:ShowConfirmationPopup(bOnMinigameExit) end
---@param bAccepted boolean
function AFuelPriceBoard_big_BP_C:OnPopupExitEvent(bAccepted) end
function AFuelPriceBoard_big_BP_C:ShowResetDefaultPopup() end
---@param Accepted boolean
function AFuelPriceBoard_big_BP_C:OnPopupResetDefaultExitEvent(Accepted) end
function AFuelPriceBoard_big_BP_C:OnEvent() end
---@param bNewActive boolean
function AFuelPriceBoard_big_BP_C:OnSetMinigameActive(bNewActive) end
function AFuelPriceBoard_big_BP_C:SetFocus() end
---@param On boolean
function AFuelPriceBoard_big_BP_C:EnableElectrocity(On) end
---@param FromPC boolean
function AFuelPriceBoard_big_BP_C:SetInteractionType(FromPC) end
---@param EntryPoint int32
function AFuelPriceBoard_big_BP_C:ExecuteUbergraph_FuelPriceBoard_big_BP(EntryPoint) end


