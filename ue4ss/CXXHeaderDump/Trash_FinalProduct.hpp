#ifndef UE4SS_SDK_Trash_FinalProduct_HPP
#define UE4SS_SDK_Trash_FinalProduct_HPP

class ATrash_FinalProduct_C : public A00_TrashItem_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Trash_FinalProduct_MainMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_Trash_FinalProduct(int32 EntryPoint);
}; // Size: 0x408

#endif
