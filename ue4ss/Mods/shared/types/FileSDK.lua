---@meta

---@class FFileSDKDelegatePreInfo
local FFileSDKDelegatePreInfo = {}


---@class FFileSDKFileInfo
---@field AbsolutePath FString
---@field Filename FString
---@field CreationTime FDateTime
---@field AccessTime FDateTime
---@field ModificationTime FDateTime
---@field FileSize int64
---@field bIsDirectory boolean
---@field bIsReadOnly boolean
---@field bIsValid boolean
local FFileSDKFileInfo = {}



---@class UFileSDKBPLibrary : UBlueprintFunctionLibrary
local UFileSDKBPLibrary = {}

---@param Filename FString
---@param Content FString
---@param Append boolean
---@param Encoding EFileSDKEncodingOptions
---@return boolean
function UFileSDKBPLibrary:WriteStringToFile(Filename, Content, Append, Encoding) end
---@param Filename FString
---@param Content TArray<uint8>
---@return boolean
function UFileSDKBPLibrary:WriteBytesToFile(Filename, Content) end
---@param Source FString
---@param Destination FString
---@return boolean
function UFileSDKBPLibrary:RenameFileOrDirectory(Source, Destination) end
---@param Filename FString
---@param Content FString
---@return boolean
function UFileSDKBPLibrary:ReadStringFromFile(Filename, Content) end
---@param Filename FString
---@param Content TArray<uint8>
---@return boolean
function UFileSDKBPLibrary:ReadBytesFromFile(Filename, Content) end
---@param Filename FString
---@param OpenInBinaryMode boolean
---@return UFileSDKFileReader
function UFileSDKBPLibrary:OpenFileReader(Filename, OpenInBinaryMode) end
---@param DirectoryToSearch FString
---@param FilterFilesWithExtension FString
---@param SearchSubfolders boolean
---@param FileType EFileSDKFileType
---@return TArray<FString>
function UFileSDKBPLibrary:GetFilesFromDirectory(DirectoryToSearch, FilterFilesWithExtension, SearchSubfolders, FileType) end
---@param Path FString
---@param Info FFileSDKFileInfo
function UFileSDKBPLibrary:GetFileOrDirectoryInfo(Path, Info) end
---@param VariableName FString
---@return FString
function UFileSDKBPLibrary:GetEnvironmentVariable(VariableName) end
---@param Directory FString
---@param SearchSubfolders boolean
---@return TArray<FFileSDKFileInfo>
function UFileSDKBPLibrary:GetDirectoryContentsWithFileInfo(Directory, SearchSubfolders) end
---@return FString
function UFileSDKBPLibrary:GetCurrentUsername() end
---@return FString
function UFileSDKBPLibrary:GetCurrentUserHomeDirectory() end
---@param Filename FString
---@return boolean
function UFileSDKBPLibrary:DeleteFile(Filename) end
---@param DirectoryName FString
---@param Recursive boolean
---@return boolean
function UFileSDKBPLibrary:DeleteDirectory(DirectoryName, Recursive) end
---@param Filename FString
---@param ClearContentsIfExists boolean
---@param CreateDirectoryTree boolean
function UFileSDKBPLibrary:CreateFile(Filename, ClearContentsIfExists, CreateDirectoryTree) end
---@param DirectoryName FString
---@param CreateDirectoryTree boolean
---@return boolean
function UFileSDKBPLibrary:CreateDirectory(DirectoryName, CreateDirectoryTree) end
---@param Source FString
---@param Destination FString
---@param ProgressCallback FCopyFileAsyncProgressCallback
---@param PreInfo FFileSDKDelegatePreInfo
---@param ChunkSizeInKilobytes int32
function UFileSDKBPLibrary:CopyFileAsync(Source, Destination, ProgressCallback, PreInfo, ChunkSizeInKilobytes) end
---@param Source FString
---@param Destination FString
---@param ProgressCallback FCopyFileProgressCallback
---@param PreInfo FFileSDKDelegatePreInfo
---@param ChunkSizeInKilobytes int32
---@return boolean
function UFileSDKBPLibrary:CopyFile(Source, Destination, ProgressCallback, PreInfo, ChunkSizeInKilobytes) end
---@param Source FString
---@param Destination FString
---@param ProgressCallback FCopyDirectoryAsyncProgressCallback
---@param OverwriteDestination boolean
---@param ChunkSizeInKilobytes int32
function UFileSDKBPLibrary:CopyDirectoryAsync(Source, Destination, ProgressCallback, OverwriteDestination, ChunkSizeInKilobytes) end
---@param Source FString
---@param Destination FString
---@param ProgressCallback FCopyDirectoryProgressCallback
---@param OverwriteDestination boolean
---@param ChunkSizeInKilobytes int32
---@return boolean
function UFileSDKBPLibrary:CopyDirectory(Source, Destination, ProgressCallback, OverwriteDestination, ChunkSizeInKilobytes) end


---@class UFileSDKFileReader : UObject
---@field Filename FString
---@field BinaryMode boolean
local UFileSDKFileReader = {}

---@param Anchor EFileSDKFileAnchor
---@param Offset int32
---@return boolean
function UFileSDKFileReader:SeekFilePosition(Anchor, Offset) end
---@param Content FString
---@return int32
function UFileSDKFileReader:ReadStringToEnd(Content) end
---@param Num int32
---@param Content FString
---@return int32
function UFileSDKFileReader:ReadString(Num, Content) end
---@param Content TArray<uint8>
---@return int32
function UFileSDKFileReader:ReadBytesToEnd(Content) end
---@param Num int32
---@param Content TArray<uint8>
---@return int32
function UFileSDKFileReader:ReadBytes(Num, Content) end
---@return boolean
function UFileSDKFileReader:IsGood() end
function UFileSDKFileReader:Close() end


