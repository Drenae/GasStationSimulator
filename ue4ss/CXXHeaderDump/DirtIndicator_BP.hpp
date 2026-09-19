#ifndef UE4SS_SDK_DirtIndicator_BP_HPP
#define UE4SS_SDK_DirtIndicator_BP_HPP

class ADirtIndicator_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UWidgetComponent* WidgetText;                                               // 0x0228 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicArrowMaterial;                             // 0x0248 (size: 0x8)

    void GetRenownValue(float& RenownValue);
    void ReceiveBeginPlay();
    void RegisterManagerEvent(bool bLoaded);
    void OnDirtyUpdated(float NewDirty);
    void ReceiveDestroyed();
    void OnQueueUpdated();
    void ExecuteUbergraph_DirtIndicator_BP(int32 EntryPoint);
}; // Size: 0x250

#endif
