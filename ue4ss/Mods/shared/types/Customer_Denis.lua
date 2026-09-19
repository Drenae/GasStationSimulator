---@meta

---@class ACustomer_Denis_C : AAIHumanBase_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ParticleSystem UParticleSystemComponent
---@field SprayCan UStaticMeshComponent
---@field bIsBoombCooldown boolean
---@field isSpraying boolean
---@field CanSetNextSound boolean
---@field isHitReact boolean
---@field AnimBP UDennis_Animbp_C
---@field GoHomeSound boolean
---@field DennisSoundCanInterrupt boolean
---@field bIsSpawnedFromQuest boolean
local ACustomer_Denis_C = {}

function ACustomer_Denis_C:SetupForRV() end
---@return boolean
function ACustomer_Denis_C:IsDennisClass_Helper() end
function ACustomer_Denis_C:TryThrowBomb() end
---@param NotifyName FName
function ACustomer_Denis_C:OnNotifyEnd_4E6EC59E46689CDC608D7E93DDEACD40(NotifyName) end
---@param NotifyName FName
function ACustomer_Denis_C:OnNotifyBegin_4E6EC59E46689CDC608D7E93DDEACD40(NotifyName) end
---@param NotifyName FName
function ACustomer_Denis_C:OnInterrupted_4E6EC59E46689CDC608D7E93DDEACD40(NotifyName) end
---@param NotifyName FName
function ACustomer_Denis_C:OnBlendOut_4E6EC59E46689CDC608D7E93DDEACD40(NotifyName) end
---@param NotifyName FName
function ACustomer_Denis_C:OnCompleted_4E6EC59E46689CDC608D7E93DDEACD40(NotifyName) end
---@param NotifyName FName
function ACustomer_Denis_C:OnNotifyEnd_96D7BEF540CB0B04A00270B64BF32410(NotifyName) end
---@param NotifyName FName
function ACustomer_Denis_C:OnNotifyBegin_96D7BEF540CB0B04A00270B64BF32410(NotifyName) end
---@param NotifyName FName
function ACustomer_Denis_C:OnInterrupted_96D7BEF540CB0B04A00270B64BF32410(NotifyName) end
---@param NotifyName FName
function ACustomer_Denis_C:OnBlendOut_96D7BEF540CB0B04A00270B64BF32410(NotifyName) end
---@param NotifyName FName
function ACustomer_Denis_C:OnCompleted_96D7BEF540CB0B04A00270B64BF32410(NotifyName) end
function ACustomer_Denis_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ACustomer_Denis_C:ReceiveTick(DeltaSeconds) end
function ACustomer_Denis_C:ThrowBomb() end
function ACustomer_Denis_C:AlllowBombThrow() end
---@param HitDirectionE HitDirectionEnum::Type
function ACustomer_Denis_C:CustomEvent(HitDirectionE) end
---@param NewSound USoundBase
---@param CanInterrupt_ boolean
function ACustomer_Denis_C:DenisSounds(NewSound, CanInterrupt_) end
function ACustomer_Denis_C:SoundDone() end
---@param Damage float
---@param DamageType UDamageType
---@param InstigatedBy AController
---@param DamageCauser AActor
function ACustomer_Denis_C:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser) end
function ACustomer_Denis_C:HitReactSound() end
---@param EntryPoint int32
function ACustomer_Denis_C:ExecuteUbergraph_Customer_Denis(EntryPoint) end


