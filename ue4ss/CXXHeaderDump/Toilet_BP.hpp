#ifndef UE4SS_SDK_Toilet_BP_HPP
#define UE4SS_SDK_Toilet_BP_HPP

class AToilet_BP_C : public AToilet
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UBoxComponent* ToiletStallBox;                                              // 0x0588 (size: 0x8)
    class AActor* dddd;                                                               // 0x0590 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void CanBeSpawned(const bool bCompatibile, const TArray<AActor*>& OverlapedElements, const FName& Reason);
    void CurrentCustomer();
    void LoadGameBeginPlay(bool bLoadedFromSaveGame, bool NewVersion);
    void OnLoadGameProgressUpdated_Event_0(const float CurrentProgress, const float MaxProgress, const FName LoadedMap, const bool LoadGameCompleted);
    void ExecuteUbergraph_Toilet_BP(int32 EntryPoint);
}; // Size: 0x598

#endif
