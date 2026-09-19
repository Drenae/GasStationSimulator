---@meta

---@class ABP_ThrownOutBox_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
---@field OnCarWreckAmountInsideChanged FBP_ThrownOutBox_COnCarWreckAmountInsideChanged
local ABP_ThrownOutBox_C = {}

---@param NumberOfCarWrecksInside int32
function ABP_ThrownOutBox_C:GetNumberOfCarWrecksInside(NumberOfCarWrecksInside) end
---@param NewParam boolean
function ABP_ThrownOutBox_C:CustomEvent_0(NewParam) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ABP_ThrownOutBox_C:OnBoxBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
function ABP_ThrownOutBox_C:ReceiveBeginPlay() end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function ABP_ThrownOutBox_C:OnComponentEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
---@param EntryPoint int32
function ABP_ThrownOutBox_C:ExecuteUbergraph_BP_ThrownOutBox(EntryPoint) end
function ABP_ThrownOutBox_C:OnCarWreckAmountInsideChanged__DelegateSignature() end


