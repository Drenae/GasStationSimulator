enum class EDlFm_DialogEventType {
    Click_Close = 0,
    Click_Cancel = 1,
    Click_OK = 2,
    Click_Yes = 3,
    Click_YesForAll = 4,
    Click_No = 5,
    Click_NoForAll = 6,
    Click_SelectNewerModified = 50,
    Click_SelectNewerModified_ForAll = 51,
    Click_SelectLarger = 52,
    Click_SelectLarger_ForAll = 53,
    Click_MAX = 54,
};

enum class EDlFm_SysPath {
    Custom = 0,
    UE_RootDir = 1,
    UE_ProjectDir = 2,
    UE_ProjectUserDir = 3,
    UE_ProjectContentDir = 4,
    UE_ProjectConfigDir = 5,
    UE_ProjectSavedDir = 6,
    UE_ProjectIntermediateDir = 7,
    UE_ShaderWorkingDir = 8,
    UE_ProjectPluginsDir = 9,
    UE_ProjectModsDir = 10,
    Desktop = 11,
    Downloads = 12,
    EDlFm_MAX = 13,
};

enum class EDlUI_FileExplorer_ListSegment {
    Directory = 0,
    File = 1,
    All_Num = 2,
    EDlUI_FileExplorer_MAX = 3,
};

