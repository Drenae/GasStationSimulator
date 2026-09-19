#ifndef UE4SS_SDK_GarageDoor_BP_HPP
#define UE4SS_SDK_GarageDoor_BP_HPP

class AGarageDoor_BP_C : public AGarageDoors_Parents_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class USkeletalMeshComponent* GarageDoor_SK;                                      // 0x0240 (size: 0x8)

    void CachePose();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GarageDoor_BP(int32 EntryPoint);
}; // Size: 0x248

#endif
