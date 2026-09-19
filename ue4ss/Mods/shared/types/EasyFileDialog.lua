---@meta

---@class UEFDFunctionLibrary : UBlueprintFunctionLibrary
local UEFDFunctionLibrary = {}

---@param DialogTitle FString
---@param DefaultPath FString
---@param DefaultFile FString
---@param FileTypeDescription FString
---@param FileType FString
---@param Flags EEasyFileDialogFlags
---@param OutFilenames TArray<FString>
---@return boolean
function UEFDFunctionLibrary:SaveFileDialog(DialogTitle, DefaultPath, DefaultFile, FileTypeDescription, FileType, Flags, OutFilenames) end
---@param DialogTitle FString
---@param DefaultPath FString
---@param OutFolderName FString
---@return boolean
function UEFDFunctionLibrary:OpenFolderDialog(DialogTitle, DefaultPath, OutFolderName) end
---@param DialogTitle FString
---@param DefaultPath FString
---@param DefaultFile FString
---@param FileTypes FString
---@param Flags EEasyFileDialogFlags
---@param OutFilenames TArray<FString>
---@return boolean
function UEFDFunctionLibrary:OpenFileDialog(DialogTitle, DefaultPath, DefaultFile, FileTypes, Flags, OutFilenames) end


---@class UEasyFileDialogBPLibrary : UBlueprintFunctionLibrary
local UEasyFileDialogBPLibrary = {}

---@param Param float
---@return float
function UEasyFileDialogBPLibrary:EasyFileDialogSampleFunction(Param) end


