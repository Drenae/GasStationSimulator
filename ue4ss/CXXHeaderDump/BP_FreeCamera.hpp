#ifndef UE4SS_SDK_BP_FreeCamera_HPP
#define UE4SS_SDK_BP_FreeCamera_HPP

class ABP_FreeCamera_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0228 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0230 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0238 (size: 0x8)
    float MovementInterpolationSpeed;                                                 // 0x0240 (size: 0x4)
    float RotationInterpolationSpeed;                                                 // 0x0244 (size: 0x4)
    float MovementSensitivity;                                                        // 0x0248 (size: 0x4)
    float RotationSensitivity;                                                        // 0x024C (size: 0x4)
    bool bUseMaximumDistance;                                                         // 0x0250 (size: 0x1)
    float MaximumDistance;                                                            // 0x0254 (size: 0x4)
    FBP_FreeCamera_CIsMovingCamera isMovingCamera;                                    // 0x0258 (size: 0x10)
    void isMovingCamera();
    FBP_FreeCamera_CIsNotMovingCamera isNotMovingCamera;                              // 0x0268 (size: 0x10)
    void isNotMovingCamera();
    float StartingFOV;                                                                // 0x0278 (size: 0x4)
    float StartingRoll;                                                               // 0x027C (size: 0x4)
    class UBPC_PhotoMode_C* PhotoModeComponentReference;                              // 0x0280 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FreeCamera(int32 EntryPoint);
    void isNotMovingCamera__DelegateSignature();
    void isMovingCamera__DelegateSignature();
}; // Size: 0x288

#endif
