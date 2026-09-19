#ifndef UE4SS_SDK_OpenMagazine_HPP
#define UE4SS_SDK_OpenMagazine_HPP

class AOpenMagazine_C : public AInteractableBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class USkeletalMeshComponent* Lever;                                              // 0x0588 (size: 0x8)
    class AActor* OverlapBox;                                                         // 0x0590 (size: 0x8)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void OnNotifyEnd_94889A63499A609AA294EB8CA4270D38(FName NotifyName);
    void OnNotifyBegin_94889A63499A609AA294EB8CA4270D38(FName NotifyName);
    void OnInterrupted_94889A63499A609AA294EB8CA4270D38(FName NotifyName);
    void OnBlendOut_94889A63499A609AA294EB8CA4270D38(FName NotifyName);
    void OnCompleted_94889A63499A609AA294EB8CA4270D38(FName NotifyName);
    void OnNotifyEnd_941343294885A4C079AF7B92CAD02942(FName NotifyName);
    void OnNotifyBegin_941343294885A4C079AF7B92CAD02942(FName NotifyName);
    void OnInterrupted_941343294885A4C079AF7B92CAD02942(FName NotifyName);
    void OnBlendOut_941343294885A4C079AF7B92CAD02942(FName NotifyName);
    void OnCompleted_941343294885A4C079AF7B92CAD02942(FName NotifyName);
    void OnNotifyEnd_E40374594FBD63F41179F98FA1AF8950(FName NotifyName);
    void OnNotifyBegin_E40374594FBD63F41179F98FA1AF8950(FName NotifyName);
    void OnInterrupted_E40374594FBD63F41179F98FA1AF8950(FName NotifyName);
    void OnBlendOut_E40374594FBD63F41179F98FA1AF8950(FName NotifyName);
    void OnCompleted_E40374594FBD63F41179F98FA1AF8950(FName NotifyName);
    void OnNotifyEnd_6A54F01F41B2D4F881F2248C2D61C93B(FName NotifyName);
    void OnNotifyBegin_6A54F01F41B2D4F881F2248C2D61C93B(FName NotifyName);
    void OnInterrupted_6A54F01F41B2D4F881F2248C2D61C93B(FName NotifyName);
    void OnBlendOut_6A54F01F41B2D4F881F2248C2D61C93B(FName NotifyName);
    void OnCompleted_6A54F01F41B2D4F881F2248C2D61C93B(FName NotifyName);
    void DisableInteractionInfo(class APawn* Pawn);
    void ActiveStation();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_OpenMagazine(int32 EntryPoint);
}; // Size: 0x598

#endif
