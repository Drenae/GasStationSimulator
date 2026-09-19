#ifndef UE4SS_SDK_BP_GrinderStation_HPP
#define UE4SS_SDK_BP_GrinderStation_HPP

class ABP_GrinderStation_C : public AGrinderStation
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    class UBoxComponent* AllowedAreaBox;                                              // 0x0598 (size: 0x8)
    class UStaticMeshComponent* SM_DeskLamp_03;                                       // 0x05A0 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x05A8 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FName GetInteractionName();
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void BndEvt__BP_GrinderStation_AllowedAreaBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_GrinderStation(int32 EntryPoint);
}; // Size: 0x5B0

#endif
