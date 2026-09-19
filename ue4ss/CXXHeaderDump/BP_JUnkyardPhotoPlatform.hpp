#ifndef UE4SS_SDK_BP_JUnkyardPhotoPlatform_HPP
#define UE4SS_SDK_BP_JUnkyardPhotoPlatform_HPP

class ABP_JUnkyardPhotoPlatform_C : public ACarWreckPlaceableArea
{
    float Direction;                                                                  // 0x0308 (size: 0x4)
    float RotationSpeed;                                                              // 0x030C (size: 0x4)
    bool Rotate;                                                                      // 0x0310 (size: 0x1)

    void RotateActor(float DeltaTime, class AActor* Target);
    void Rotate Platform(float DeltaTime);
    void SetRotate(bool bRotate, float Direction);
}; // Size: 0x311

#endif
