#ifndef UE4SS_SDK_DepartureScreenAPBase2_BP_HPP
#define UE4SS_SDK_DepartureScreenAPBase2_BP_HPP

class ADepartureScreenAPBase2_BP_C : public ADepartureScreen
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_DepartureScreenAPBase2_BP(int32 EntryPoint);
}; // Size: 0x240

#endif
