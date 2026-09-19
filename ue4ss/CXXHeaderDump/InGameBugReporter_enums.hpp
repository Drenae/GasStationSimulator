enum class EFileType {
    SAVE = 0,
    SCREENSHOT = 1,
    BUGFILE = 2,
    MAX = 3,
};

enum class EInputType {
    Keyboard = 0,
    Gamepad = 1,
    EInputType_MAX = 2,
};

enum class EReportCategory {
    None = 0,
    Crash_Freeze = 1,
    Performance = 2,
    GameplayDefects = 3,
    Visual = 4,
    Audio = 5,
    Other = 6,
    MAX = 7,
};

enum class EReportEmotion {
    VERY_DISSATISFIED = 0,
    DISSATISFIED = 1,
    NEUTRAL = 2,
    SATISFIED = 3,
    VERY_SATISFIED = 4,
    MAX = 5,
};

enum class EReportType {
    Issue = 0,
    Idea = 1,
    Question = 2,
    Feedback = 3,
    Other = 4,
    EReportType_MAX = 5,
};

