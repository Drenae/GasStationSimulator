#ifndef UE4SS_SDK_AchievementManager_BP_HPP
#define UE4SS_SDK_AchievementManager_BP_HPP

class AAchievementManager_BP_C : public AGSSAchievementManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UAudioComponent* AchiSoundMaker;                                            // 0x0270 (size: 0x8)

    void WriteAchievementToOnlineSubsystem(FName AchievementStub);
    void OnAchievementWritten(bool bWasSuccessfull);
    void ExecuteUbergraph_AchievementManager_BP(int32 EntryPoint);
}; // Size: 0x278

#endif
