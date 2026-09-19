#ifndef UE4SS_SDK_WBP_3D_Dialog_HPP
#define UE4SS_SDK_WBP_3D_Dialog_HPP

class UWBP_3D_Dialog_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0268 (size: 0x8)
    class UTextBlock* Dialogue_TXT;                                                   // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_111;                                                          // 0x0280 (size: 0x8)
    class UTextBlock* Information_TXT;                                                // 0x0288 (size: 0x8)
    class UOverlay* Overlay_Dialog;                                                   // 0x0290 (size: 0x8)
    class UOverlay* Overlay_Information;                                              // 0x0298 (size: 0x8)
    class AAICharacterBase* OwnerCharacter;                                           // 0x02A0 (size: 0x8)
    bool NewVar_0;                                                                    // 0x02A8 (size: 0x1)
    FTimerHandle ShowInformationHandle;                                               // 0x02B0 (size: 0x8)
    float CurrentDuration;                                                            // 0x02B8 (size: 0x4)
    int32 CurrentID;                                                                  // 0x02BC (size: 0x4)

    void OnLoaded_31B39714454775F0C12F748E5FC0B28A(class UObject* Loaded);
    void OnLoaded_C39B7D4E4EC1956F86325EB436179328(class UObject* Loaded);
    void Construct();
    void OnCharacterDialogStart(const int32 DialogID, const class AAICharacterBase* AICharacterBase);
    void EnableByEvent(bool Enable);
    void PlayDialogue(class UAudioComponent* AudioComponent, ECharacterGender Gender, int32 DialogueID);
    void OnAudioFinished();
    void OnInformationStart(const int32 InformationID);
    void ShowInformation(int32 InformationID);
    void HideInformations();
    void SetHideTimer();
    void Destruct();
    void ExecuteUbergraph_WBP_3D_Dialog(int32 EntryPoint);
}; // Size: 0x2C0

#endif
