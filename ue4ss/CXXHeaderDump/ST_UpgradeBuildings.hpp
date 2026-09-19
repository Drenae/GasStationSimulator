#ifndef UE4SS_SDK_ST_UpgradeBuildings_HPP
#define UE4SS_SDK_ST_UpgradeBuildings_HPP

struct FST_UpgradeBuildings
{
    int32 StationLevel_2_79476F1B4B4520D27977F9B6F91487A4;                            // 0x0000 (size: 0x4)
    float UpgradeCoast_7_CF0E5B074F5C237C896F4DABB719BDE9;                            // 0x0004 (size: 0x4)
    TSubclassOf<class UGSSQuest> QuestComplited_8_A668DB174E14A3DF7B7E33BD43C8C203;   // 0x0008 (size: 0x8)
    FGameplayTag RequiredTag_15_2CF23D5047035FFCDB45A5A8D0E571F5;                     // 0x0010 (size: 0x8)
    TArray<FRequiredItems> ItemsRequired_12_7A4644954D81B6919CB22A9A2FB7E123;         // 0x0018 (size: 0x10)
    EDLCName DLCRequired_18_BAF85F6342770D0E1BECC99C49CD96F0;                         // 0x0028 (size: 0x1)

}; // Size: 0x29

#endif
