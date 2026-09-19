#ifndef UE4SS_SDK_ANS_MoveStaticMesh_HPP
#define UE4SS_SDK_ANS_MoveStaticMesh_HPP

class UANS_MoveStaticMesh_C : public UAnimNotifyState
{
    FName Socket Name;                                                                // 0x0030 (size: 0x8)
    bool bRestoreInitialTransform;                                                    // 0x0038 (size: 0x1)
    bool bAttach;                                                                     // 0x0039 (size: 0x1)
    EAttachmentRule Location Rule;                                                    // 0x003A (size: 0x1)
    EAttachmentRule Rotation Rule;                                                    // 0x003B (size: 0x1)
    EAttachmentRule Scale Rule;                                                       // 0x003C (size: 0x1)
    bool bDetach;                                                                     // 0x003D (size: 0x1)
    bool bCacheTransform;                                                             // 0x003E (size: 0x1)

    void HandleDetaching(class UAnimInstance* NewParam, class UActorComponent*& PickedComponent, TArray<UActorComponent*>& PickedComponentsArray, FTransform& MeshInitialTransform);
    void HandleAttaching(class UAnimInstance* NewParam, class UActorComponent*& PickedComponent, TArray<UActorComponent*>& PickedComponentsArray, FTransform& MeshInitialTransform);
    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x3F

#endif
