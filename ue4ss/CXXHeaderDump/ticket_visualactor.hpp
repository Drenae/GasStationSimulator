#ifndef UE4SS_SDK_ticket_visualactor_HPP
#define UE4SS_SDK_ticket_visualactor_HPP

class Aticket_visualactor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0228 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0230 (size: 0x8)
    class UPostapoSkeletalMeshComponent* PostapoSkeletalMesh;                         // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ticket_visualactor(int32 EntryPoint);
}; // Size: 0x248

#endif
