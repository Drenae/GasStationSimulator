#ifndef UE4SS_SDK_Highlight_Component_HPP
#define UE4SS_SDK_Highlight_Component_HPP

class UHighlight_Component_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class UMaterialInstanceDynamic* HighlightDMI;                                     // 0x00B8 (size: 0x8)
    class UStaticMeshComponent* MeshForHighlighting;                                  // 0x00C0 (size: 0x8)
    bool ControlVisibility?;                                                          // 0x00C8 (size: 0x1)

    void TurnON/OFF_Function(bool TurnOn?, bool SetVisibility);
    void PreppingMaterialsAndMeshes(class UStaticMeshComponent* MeshForHighlighting);
    void OnBeginPlay_Highlight_Component(class UStaticMeshComponent* Mesh);
    void TurnOn_Highlight(bool bShouldHideMesh);
    void TurnOff_Highlight(bool bShouldHideMesh);
    void ExecuteUbergraph_Highlight_Component(int32 EntryPoint);
}; // Size: 0xC9

#endif
