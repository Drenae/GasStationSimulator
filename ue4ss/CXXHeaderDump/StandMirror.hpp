#ifndef UE4SS_SDK_StandMirror_HPP
#define UE4SS_SDK_StandMirror_HPP

class AStandMirror_C : public A00_Stand_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class USplineComponent* Spline3;                                                  // 0x06E8 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x06F0 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x06F8 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0700 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf19;                                 // 0x0708 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf18;                                 // 0x0710 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf17;                                 // 0x0718 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf16;                                 // 0x0720 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf15;                                 // 0x0728 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf14;                                 // 0x0730 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf13;                                 // 0x0738 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf12;                                 // 0x0740 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf11;                                 // 0x0748 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf10;                                 // 0x0750 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf9;                                  // 0x0758 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf8;                                  // 0x0760 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf7;                                  // 0x0768 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf6;                                  // 0x0770 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf5;                                  // 0x0778 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf4;                                  // 0x0780 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf3;                                  // 0x0788 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf2;                                  // 0x0790 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf1;                                  // 0x0798 (size: 0x8)
    class UStaticMeshComponent* Mirror_Shelv_Shelf;                                   // 0x07A0 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_StandMirror(int32 EntryPoint);
}; // Size: 0x7A8

#endif
