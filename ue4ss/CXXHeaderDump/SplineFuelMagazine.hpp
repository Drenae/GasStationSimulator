#ifndef UE4SS_SDK_SplineFuelMagazine_HPP
#define UE4SS_SDK_SplineFuelMagazine_HPP

class ASplineFuelMagazine_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint14;                           // 0x0228 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint13;                           // 0x0230 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint12;                           // 0x0238 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint11;                           // 0x0240 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint10;                           // 0x0248 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint9;                            // 0x0250 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint8;                            // 0x0258 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint7;                            // 0x0260 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint6;                            // 0x0268 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint5;                            // 0x0270 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint4;                            // 0x0278 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint3;                            // 0x0280 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint2;                            // 0x0288 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint1;                            // 0x0290 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0298 (size: 0x8)
    class UStaticMeshComponent* a15;                                                  // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* a14;                                                  // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* a13;                                                  // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* a12;                                                  // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* a11;                                                  // 0x02C0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* a10;                                                  // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* a9;                                                   // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* a8;                                                   // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* a7;                                                   // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* a6;                                                   // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* a5;                                                   // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* a4;                                                   // 0x0300 (size: 0x8)
    class UStaticMeshComponent* a3;                                                   // 0x0308 (size: 0x8)
    class UStaticMeshComponent* a2;                                                   // 0x0310 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0318 (size: 0x8)
    class UStaticMeshComponent* a1;                                                   // 0x0320 (size: 0x8)
    class USplineMeshComponent* NewVar_0;                                             // 0x0328 (size: 0x8)
    TArray<UStaticMeshComponent*> StaticMeshes;                                       // 0x0330 (size: 0x10)
    TArray<USplineMeshComponent*> SplineMeshes;                                       // 0x0340 (size: 0x10)
    class AActor* FuelMagazine;                                                       // 0x0350 (size: 0x8)
    class ABoatFuelDeliveryWheel* BoatFuelWheel;                                      // 0x0358 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SplineFuelMagazine(int32 EntryPoint);
}; // Size: 0x360

#endif
