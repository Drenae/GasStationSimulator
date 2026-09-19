#ifndef UE4SS_SDK_GSS_Minigolf_StartButton_BP_HPP
#define UE4SS_SDK_GSS_Minigolf_StartButton_BP_HPP

class AGSS_Minigolf_StartButton_BP_C : public AMinigolfCourseStartButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0258 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0260 (size: 0x8)

    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void DisableInteractionInfo(class APawn* Pawn);
    void ExecuteUbergraph_GSS_Minigolf_StartButton_BP(int32 EntryPoint);
}; // Size: 0x268

#endif
