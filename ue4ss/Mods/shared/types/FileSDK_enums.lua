---@enum EFileSDKEncodingOptions
local EFileSDKEncodingOptions = {
    AutoDetect = 0,
    ForceAnsi = 1,
    ForceUnicode = 2,
    ForceUTF8 = 3,
    ForceUTF8WithoutBOM = 4,
    EFileSDKEncodingOptions_MAX = 5,
}

---@enum EFileSDKFileAnchor
local EFileSDKFileAnchor = {
    Beginning = 0,
    Current = 1,
    End = 2,
    EFileSDKFileAnchor_MAX = 3,
}

---@enum EFileSDKFileType
local EFileSDKFileType = {
    File = 0,
    Directory = 1,
    EFileSDKFileType_MAX = 2,
}

