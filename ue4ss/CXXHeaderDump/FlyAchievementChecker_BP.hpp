#ifndef UE4SS_SDK_FlyAchievementChecker_BP_HPP
#define UE4SS_SDK_FlyAchievementChecker_BP_HPP

class AFlyAchievementChecker_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_FlyAchievementChecker_BP(int32 EntryPoint);
}; // Size: 0x230

#endif
