#ifndef UE4SS_SDK_PathManager_BP_HPP
#define UE4SS_SDK_PathManager_BP_HPP

class APathManager_BP_C : public APathfindingManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    TArray<FLinearColor> NewVar_2;                                                    // 0x0250 (size: 0x10)

    void FindSmartPoint(FVector StartLocation, class APathPoint*& StartPoint);
    class USplineComponent* FindAndGeneratePath(class APathPoint* StartPoint, class APathPoint* EndPoint, class AGSSWheeledVehicle* GSSVehicle, TArray<APathPoint*>& PathPoints);
    void GenerateNav();
    void ShowConnections();
    void ExecuteUbergraph_PathManager_BP(int32 EntryPoint);
}; // Size: 0x260

#endif
