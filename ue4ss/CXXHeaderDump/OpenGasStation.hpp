#ifndef UE4SS_SDK_OpenGasStation_HPP
#define UE4SS_SDK_OpenGasStation_HPP

class AOpenGasStation_C : public AInteractableBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class USkeletalMeshComponent* Lever;                                              // 0x0588 (size: 0x8)
    class AOpenGasStation_Logo_C* OpenLogo;                                           // 0x0590 (size: 0x8)
    class AOpenGasStation_Logo_Chunchumanchu_Island_C* ChunchumanchuOpenLogo;         // 0x0598 (size: 0x8)
    bool bBlockOutline;                                                               // 0x05A0 (size: 0x1)

    FName GetInteractionName();
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void OnNotifyEnd_E2F7106F494D00B828C00AB58CC01EB5(FName NotifyName);
    void OnNotifyBegin_E2F7106F494D00B828C00AB58CC01EB5(FName NotifyName);
    void OnInterrupted_E2F7106F494D00B828C00AB58CC01EB5(FName NotifyName);
    void OnBlendOut_E2F7106F494D00B828C00AB58CC01EB5(FName NotifyName);
    void OnCompleted_E2F7106F494D00B828C00AB58CC01EB5(FName NotifyName);
    void OnNotifyEnd_6E0122734304B750A47DEBA060D79D38(FName NotifyName);
    void OnNotifyBegin_6E0122734304B750A47DEBA060D79D38(FName NotifyName);
    void OnInterrupted_6E0122734304B750A47DEBA060D79D38(FName NotifyName);
    void OnBlendOut_6E0122734304B750A47DEBA060D79D38(FName NotifyName);
    void OnCompleted_6E0122734304B750A47DEBA060D79D38(FName NotifyName);
    void ReceiveBeginPlay();
    void DisableInteractionInfo(class APawn* Pawn);
    void EnableElectrocity(const bool On);
    void OnGastStationOpened(const bool bIsOpen);
    void SpecialOpenCloseEvent();
    void ExecuteUbergraph_OpenGasStation(int32 EntryPoint);
}; // Size: 0x5A1

#endif
