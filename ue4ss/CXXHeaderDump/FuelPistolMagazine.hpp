#ifndef UE4SS_SDK_FuelPistolMagazine_HPP
#define UE4SS_SDK_FuelPistolMagazine_HPP

class AFuelPistolMagazine_C : public AFuelPistolMagazineBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* FuelCapSound;                                              // 0x0228 (size: 0x8)
    class UAudioComponent* FuelPourSound;                                             // 0x0230 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)
    FTimerHandle LimpTimerHandle;                                                     // 0x0248 (size: 0x8)

    void EnablePistolLine(bool Enable);
    void UsePistol(class AActor* UserActor);
    void ExecuteUbergraph_FuelPistolMagazine(int32 EntryPoint);
}; // Size: 0x250

#endif
