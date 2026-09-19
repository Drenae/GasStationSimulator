---@meta

---@class IBPI_Data_C : IInterface
local IBPI_Data_C = {}

---@param TabIndex int32
---@param CommonButtonPressed UUI_TabButton_C
function IBPI_Data_C:TabToOpen(TabIndex, CommonButtonPressed) end
---@param PhotoData FS_PhotosData
function IBPI_Data_C:SendPhotoData(PhotoData) end


