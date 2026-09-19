---@meta

---@class UGOGLoginCallbackProxy : UOnlineBlueprintCallProxyBase
---@field OnSuccess FGOGLoginCallbackProxyOnSuccess
---@field OnFailure FGOGLoginCallbackProxyOnFailure
local UGOGLoginCallbackProxy = {}

---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param AuthType FString
---@param UserId FString
---@param UserToken FString
---@return UGOGLoginCallbackProxy
function UGOGLoginCallbackProxy:Login(WorldContextObject, PlayerController, AuthType, UserId, UserToken) end


---@class UNetConnectionGOG : UNetConnection
local UNetConnectionGOG = {}


---@class UNetDriverGOG : UNetDriver
local UNetDriverGOG = {}


