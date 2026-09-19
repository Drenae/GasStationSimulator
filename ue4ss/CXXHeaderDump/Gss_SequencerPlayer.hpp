#ifndef UE4SS_SDK_Gss_SequencerPlayer_HPP
#define UE4SS_SDK_Gss_SequencerPlayer_HPP

class AGss_SequencerPlayer_C : public AActor
{
    class USkeletalMeshComponent* Snoop;                                              // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Speed;                                                // 0x0228 (size: 0x8)
    class UStaticMeshComponent* RPM;                                                  // 0x0230 (size: 0x8)
    class USkeletalMeshComponent* Car_Dice01_v01_SK;                                  // 0x0238 (size: 0x8)
    class UPostapoSkeletalMeshComponent* Car_Player;                                  // 0x0240 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0248 (size: 0x8)
    class UPostapoSkeletalMeshComponent* Shoes;                                       // 0x0250 (size: 0x8)
    class UPostapoSkeletalMeshComponent* Legs;                                        // 0x0258 (size: 0x8)
    class UPostapoSkeletalMeshComponent* Hands;                                       // 0x0260 (size: 0x8)
    class UPostapoSkeletalMeshComponent* BaseBodyMesh;                                // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x278

#endif
