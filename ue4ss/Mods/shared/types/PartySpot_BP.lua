---@meta

---@class APartySpot_BP_C : APartySpot
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PartyWidgetREF UUserWidget
---@field Confirm UWBP_Confirmation_C
---@field AICharacterBase AAICharacterBase
---@field IsMusicMuted boolean
---@field FadeSoundtrack USoundMix
---@field CheckIfDanceTimeTimer FTimerHandle
local APartySpot_BP_C = {}

function APartySpot_BP_C:ReceiveBeginPlay() end
---@param ActorLevel int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function APartySpot_BP_C:UpdateMesh(ActorLevel, bLoadedFromSaveGame, bNewVersion) end
---@param Level int32
---@param bLoadedFromSaveGame boolean
---@param bNewVersion boolean
function APartySpot_BP_C:SetActorLevel(Level, bLoadedFromSaveGame, bNewVersion) end
---@param PartySpotTable APartySpotTable
function APartySpot_BP_C:ShowConfirm(PartySpotTable) end
function APartySpot_BP_C:SpecialOpenCloseEvent() end
---@param Customer AAICharacterBase
function APartySpot_BP_C:SetNPC(Customer) end
---@param DestroyedActor AActor
function APartySpot_BP_C:OnCustomerDestroyed(DestroyedActor) end
function APartySpot_BP_C:FindOtherPartyCustomers() end
---@param EndPlayReason EEndPlayReason::Type
function APartySpot_BP_C:ReceiveEndPlay(EndPlayReason) end
function APartySpot_BP_C:OnPartySpotEnteredEvent() end
function APartySpot_BP_C:OnPartySpotLeftEvent() end
function APartySpot_BP_C:BindPartyVolumeEvents() end
function APartySpot_BP_C:CheckIfDanceTime() end
---@param EntryPoint int32
function APartySpot_BP_C:ExecuteUbergraph_PartySpot_BP(EntryPoint) end


