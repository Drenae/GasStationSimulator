#ifndef UE4SS_SDK_BP_PhotoMode_Junkyard_HPP
#define UE4SS_SDK_BP_PhotoMode_Junkyard_HPP

class ABP_PhotoMode_Junkyard_C : public AInteractableActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0408 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0410 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_PhotoMode_Junkyard(int32 EntryPoint);
}; // Size: 0x418

#endif
