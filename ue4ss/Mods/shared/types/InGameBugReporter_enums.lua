---@enum EFileType
local EFileType = {
    SAVE = 0,
    SCREENSHOT = 1,
    BUGFILE = 2,
    MAX = 3,
}

---@enum EInputType
local EInputType = {
    Keyboard = 0,
    Gamepad = 1,
    EInputType_MAX = 2,
}

---@enum EReportCategory
local EReportCategory = {
    None = 0,
    Crash_Freeze = 1,
    Performance = 2,
    GameplayDefects = 3,
    Visual = 4,
    Audio = 5,
    Other = 6,
    MAX = 7,
}

---@enum EReportEmotion
local EReportEmotion = {
    VERY_DISSATISFIED = 0,
    DISSATISFIED = 1,
    NEUTRAL = 2,
    SATISFIED = 3,
    VERY_SATISFIED = 4,
    MAX = 5,
}

---@enum EReportType
local EReportType = {
    Issue = 0,
    Idea = 1,
    Question = 2,
    Feedback = 3,
    Other = 4,
    EReportType_MAX = 5,
}

