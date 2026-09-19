#ifndef UE4SS_SDK_GSS_NewHUD_BP_HPP
#define UE4SS_SDK_GSS_NewHUD_BP_HPP

class AGSS_NewHUD_BP_C : public AGSS_NewHud
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0510 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0518 (size: 0x8)
    TSubclassOf<class UPC_Decorations_C> NewVar_0;                                    // 0x0520 (size: 0x8)
    TSubclassOf<class UPC_Delivery_C> NewVar_1;                                       // 0x0528 (size: 0x8)
    TSubclassOf<class UPC_Employe_C> NewVar_2;                                        // 0x0530 (size: 0x8)
    TSubclassOf<class UPC_Features_C> NewVar_3;                                       // 0x0538 (size: 0x8)
    TSubclassOf<class UPC_Home_C> NewVar_4;                                           // 0x0540 (size: 0x8)
    TSubclassOf<class UPC_Mail> NewVar_5;                                             // 0x0548 (size: 0x8)
    TSubclassOf<class UPC_Managment_C> NewVar_6;                                      // 0x0550 (size: 0x8)
    TSubclassOf<class UPC_Scores_C> NewVar_7;                                         // 0x0558 (size: 0x8)
    TSubclassOf<class UPC_Services_C> NewVar_8;                                       // 0x0560 (size: 0x8)
    TSubclassOf<class UPC_Tools_C> NewVar_9;                                          // 0x0568 (size: 0x8)
    TSubclassOf<class UPC_VipCustomer_C> NewVar_10;                                   // 0x0570 (size: 0x8)
    TSubclassOf<class UWBP_TestUpgradeTree_2_0_DemoMapka_C> NewVar_11;                // 0x0578 (size: 0x8)
    TSubclassOf<class UWBP_TestUpgradeTree_2_0_TIdalWave_C> NewVar_12;                // 0x0580 (size: 0x8)

    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GSS_NewHUD_BP(int32 EntryPoint);
}; // Size: 0x588

#endif
