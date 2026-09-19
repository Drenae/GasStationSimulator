#ifndef UE4SS_SDK_Trash_Impact_Sean_HPP
#define UE4SS_SDK_Trash_Impact_Sean_HPP

class ATrash_Impact_Sean_C : public ATrashItem_PrologueTrash_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)

    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void DisableSound();
    void ExecuteUbergraph_Trash_Impact_Sean(int32 EntryPoint);
}; // Size: 0x410

#endif
