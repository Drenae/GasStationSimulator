#ifndef UE4SS_SDK_CinemaSign_BP_HPP
#define UE4SS_SDK_CinemaSign_BP_HPP

class ACinemaSign_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Static Mesh Closed;                                   // 0x0228 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class UMaterialInterface* Default Material;                                       // 0x0240 (size: 0x8)

    void ReceiveBeginPlay();
    void On DLC Activation State Changed(EDLCName DLCName, bool bActivated);
    void On Game Loaded(const bool GameLoaded);
    void ExecuteUbergraph_CinemaSign_BP(int32 EntryPoint);
}; // Size: 0x248

#endif
