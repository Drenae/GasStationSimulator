---@enum ENPAIActionState
local ENPAIActionState = {
    Action = 0,
    Move = 1,
    Wait = 2,
    MAX = 3,
}

---@enum ENPAIMovementDirection
local ENPAIMovementDirection = {
    Forward = 0,
    Back = 1,
    Left = 2,
    Right = 3,
    MAX = 4,
}

---@enum ENPAIMovementMode
local ENPAIMovementMode = {
    Walking = 0,
    Swimming = 1,
    Flying = 2,
    Falling = 3,
    MAX = 4,
}

---@enum ENPAIMovementSpeed
local ENPAIMovementSpeed = {
    Walk = 0,
    Jog = 1,
    Run = 2,
    Sprint = 3,
    WalkBack = 4,
    Swimming = 5,
    MAX = 6,
}

---@enum ENPAISound
local ENPAISound = {
    FootStep = 0,
    ThrowItem = 1,
    ENPAISound_MAX = 2,
}

---@enum ENPMapStatusChanged
local ENPMapStatusChanged = {
    Loaded = 0,
    UnLoaded = 1,
    Show = 2,
    Hidden = 3,
    ENPMapStatusChanged_MAX = 4,
}

---@enum ENPTaskFinishReason
local ENPTaskFinishReason = {
    WorkEnd = 0,
    Conversation = 1,
    EndTime = 2,
    ENPTaskFinishReason_MAX = 3,
}

---@enum ENPTaskResult
local ENPTaskResult = {
    TaskSuccess = 0,
    TaskFalse = 1,
    TaskIgnore = 2,
    ENPTaskResult_MAX = 3,
}

