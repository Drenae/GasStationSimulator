---@meta

---@class ARvCampParkingSpot_BP_C : ARVCampParkingSpot
---@field UberGraphFrame FPointerToUberGraphFrame
local ARvCampParkingSpot_BP_C = {}

---@param Camp_Spot ARVCampSpot
ARvCampParkingSpot_BP_C['Find Camp Spot'] = function(self, Camp_Spot) end
function ARvCampParkingSpot_BP_C:ReceiveBeginPlay() end
---@param Camper URVCamperComponent
ARvCampParkingSpot_BP_C['On Camper Arrived'] = function(self, Camper) end
---@param Camper URVCamperComponent
ARvCampParkingSpot_BP_C['On Camper Left'] = function(self, Camper) end
ARvCampParkingSpot_BP_C['Force Update Camper State'] = function(self, ) end
---@param Camper URVCamperComponent
---@param IsParked boolean
ARvCampParkingSpot_BP_C['On Camper Loaded'] = function(self, Camper, IsParked) end
---@param BuildingType EBuildingType
---@param NewBuildingLevel int32
---@param bLoadedFromSave boolean
ARvCampParkingSpot_BP_C['On Building Upgraded'] = function(self, BuildingType, NewBuildingLevel, bLoadedFromSave) end
---@param GameLoaded boolean
function ARvCampParkingSpot_BP_C:OnFinishGameLoaded_Event_0(GameLoaded) end
---@param EntryPoint int32
function ARvCampParkingSpot_BP_C:ExecuteUbergraph_RvCampParkingSpot_BP(EntryPoint) end


