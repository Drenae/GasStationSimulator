#ifndef UE4SS_SDK_Customer_NBM_Lucjan_HPP
#define UE4SS_SDK_Customer_NBM_Lucjan_HPP

class ACustomer_NBM_Lucjan_C : public AAIHuman_NBM_Male_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A20 (size: 0x8)
    TSoftObjectPtr<class USkeletalMesh> SaunaHead;                                    // 0x0A28 (size: 0x28)
    TSoftObjectPtr<class USkeletalMesh> SaunaHair;                                    // 0x0A50 (size: 0x28)
    TSoftObjectPtr<class USkeletalMesh> SaunaUpperBody;                               // 0x0A78 (size: 0x28)
    TSoftObjectPtr<class USkeletalMesh> SaunaLowerBody;                               // 0x0AA0 (size: 0x28)

    void OnLoaded_85A656454ABA51E88D681C972DB2C12B(class UObject* Loaded);
    void OnLoaded_5A7A16634590E13B8E02F1BE88189F29(class UObject* Loaded);
    void OnLoaded_83D19EA4455DECA7FCC1E5B6A324C93A(class UObject* Loaded);
    void OnLoaded_3CD9F4114324DAC0767265A2C4848F5B(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Customer_NBM_Lucjan(int32 EntryPoint);
}; // Size: 0xAC8

#endif
