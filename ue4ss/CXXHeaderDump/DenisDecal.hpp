#ifndef UE4SS_SDK_DenisDecal_HPP
#define UE4SS_SDK_DenisDecal_HPP

class ADenisDecal_C : public ADirtyDecal
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    bool Fake;                                                                        // 0x0270 (size: 0x1)
    TArray<TSoftObjectPtr<class UMaterialInterface>> MaterialToSpawn;                 // 0x0278 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> MaterialToSpawnStreamerMode;     // 0x0288 (size: 0x10)
    class UMaterialInstanceDynamic* DenisDecal;                                       // 0x0298 (size: 0x8)

    void OnLoaded_9A6EB2FC4999F72242D153940538DDC3(class UObject* Loaded);
    void ReceiveBeginPlay();
    void DestroySelf();
    void ExecuteUbergraph_DenisDecal(int32 EntryPoint);
}; // Size: 0x2A0

#endif
