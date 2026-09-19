#ifndef UE4SS_SDK_MagazineShelf_HPP
#define UE4SS_SDK_MagazineShelf_HPP

class AMagazineShelf_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class UInventoryComponent* Inventory;                                             // 0x0230 (size: 0x8)

    FName GetInteractionName();
    void ReceiveBeginPlay();
    void RefreshShelvs();
    void OnInventoryUpdated_Event_0(const class UInventoryComponent* Inventory);
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void ExecuteUbergraph_MagazineShelf(int32 EntryPoint);
}; // Size: 0x238

#endif
