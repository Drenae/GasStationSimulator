#ifndef UE4SS_SDK_ShadowCaster_BP_HPP
#define UE4SS_SDK_ShadowCaster_BP_HPP

class AShadowCaster_BP_C : public AShadowCasterParent
{
    class UStaticMeshComponent* ShadowCaster;                                         // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM;                                                   // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    int32 CullDistanceOverride;                                                       // 0x0240 (size: 0x4)

    void UserConstructionScript();
}; // Size: 0x244

#endif
