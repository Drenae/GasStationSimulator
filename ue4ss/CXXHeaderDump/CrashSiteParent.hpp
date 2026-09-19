#ifndef UE4SS_SDK_CrashSiteParent_HPP
#define UE4SS_SDK_CrashSiteParent_HPP

class ACrashSiteParent_C : public ACrashSite
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UHierarchicalInstancedStaticMeshComponent* Cactus1;                         // 0x0230 (size: 0x8)
    class UHierarchicalInstancedStaticMeshComponent* Grass2;                          // 0x0238 (size: 0x8)
    class UHierarchicalInstancedStaticMeshComponent* Grass1;                          // 0x0240 (size: 0x8)
    class UHierarchicalInstancedStaticMeshComponent* Rock1;                           // 0x0248 (size: 0x8)
    bool bIsPlaneCrashSite;                                                           // 0x0250 (size: 0x1)
    TSoftClassPtr<AAirplane_TapingMinigame> PlaneClass;                               // 0x0258 (size: 0x28)

    void Set Random Rotation Of Crash Site();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CrashSiteParent(int32 EntryPoint);
}; // Size: 0x280

#endif
