#ifndef UE4SS_SDK_AN_PlaySoundInSocketLocation_HPP
#define UE4SS_SDK_AN_PlaySoundInSocketLocation_HPP

class UAN_PlaySoundInSocketLocation_C : public UAnimNotify
{
    class USoundBase* SoundToPlay;                                                    // 0x0038 (size: 0x8)
    FName Socket Name;                                                                // 0x0040 (size: 0x8)
    class USoundAttenuation* Attenuation Settings;                                    // 0x0048 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x50

#endif
