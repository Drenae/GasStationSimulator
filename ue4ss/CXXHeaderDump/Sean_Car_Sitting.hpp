#ifndef UE4SS_SDK_Sean_Car_Sitting_HPP
#define UE4SS_SDK_Sean_Car_Sitting_HPP

class ASean_Car_Sitting_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x0228 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Plane3;                                               // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Plane2;                                               // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0250 (size: 0x8)
    class UStaticMeshComponent* SM_Mustang_Sean;                                      // 0x0258 (size: 0x8)
    class UStaticMeshComponent* SM_topengine;                                         // 0x0260 (size: 0x8)
    class UStaticMeshComponent* SM_spoiler_03;                                        // 0x0268 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0270 (size: 0x8)
    class UNPSmartObjectComponent* NPSmartObject;                                     // 0x0278 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0280 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0288 (size: 0x8)

    void ReceiveBeginPlay();
    void EnableLights();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Sean_Car_Sitting(int32 EntryPoint);
}; // Size: 0x290

#endif
