#ifndef UE4SS_SDK_AN_SpawnSound_HPP
#define UE4SS_SDK_AN_SpawnSound_HPP

class UAN_SpawnSound_C : public UAnimNotify
{
    FName In Socket Name;                                                             // 0x0038 (size: 0x8)
    class USoundBase* SoundAttached;                                                  // 0x0040 (size: 0x8)
    class USoundBase* SoundAtLocation;                                                // 0x0048 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x50

#endif
