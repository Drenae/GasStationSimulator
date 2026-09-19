#ifndef UE4SS_SDK_WBP_ReportTool_HPP
#define UE4SS_SDK_WBP_ReportTool_HPP

class UWBP_ReportTool_C : public UBugReportUploaderWidgetBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UWidgetAnimation* CheckReportType;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* Failed;                                                   // 0x02D8 (size: 0x8)
    class UWidgetAnimation* Success;                                                  // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Loading;                                                  // 0x02E8 (size: 0x8)
    class UWBP_ReportTool_Checkbox_C* Audio;                                          // 0x02F0 (size: 0x8)
    class UWBP_ReportTool_Checkbox_C* Crash;                                          // 0x02F8 (size: 0x8)
    class UMultiLineEditableText* DescriptionTextBox;                                 // 0x0300 (size: 0x8)
    class UTextBlock* ErrorMsg;                                                       // 0x0308 (size: 0x8)
    class UWBP_ReportTool_Checkbox_C* framework;                                      // 0x0310 (size: 0x8)
    class UWBP_ReportTool_Checkbox_C* gameplay;                                       // 0x0318 (size: 0x8)
    class UTextBlock* IDText_1;                                                       // 0x0320 (size: 0x8)
    class UEditableTextBox* MailTextBox;                                              // 0x0328 (size: 0x8)
    class UWBP_ReportTool_Checkbox_C* Other;                                          // 0x0330 (size: 0x8)
    class UPC_ExitButton_WBP_C* PC_ExitButton_WBP;                                    // 0x0338 (size: 0x8)
    class UWidgetSwitcher* ReportSwitcher;                                            // 0x0340 (size: 0x8)
    class UHorizontalBox* ReportTools_HorizontalBox;                                  // 0x0348 (size: 0x8)
    class UGSSButton* SubmitButton;                                                   // 0x0350 (size: 0x8)
    class UGSSButton* TryAgain_Button;                                                // 0x0358 (size: 0x8)
    class UWBP_ReportTool_Checkbox_C* Visual;                                         // 0x0360 (size: 0x8)
    TArray<UWBP_ReportTool_Checkbox_C*> ReportTools;                                  // 0x0368 (size: 0x10)
    bool NewVar_0;                                                                    // 0x0378 (size: 0x1)

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void DeleteSaves();
    void PrepareSaves(TArray<FFileInfoData>& Saves);
    void GetMail(FString& Mail);
    void GetDescription(FString& Description);
    void GetReportType(EReportCategory& Type);
    void Prepare Report(FReportRequest& Report);
    void Construct();
    void BndEvt__WBP_ReportTool_PC_ExitButton_WBP_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature();
    void BndEvt__WBP_ReportTool_SubmitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void OnReportCompleted(bool bCompletedSuccessfully, FString ReportId, FString ErrorMessage);
    void BndEvt__WBP_ReportTool_TryAgain_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Destruct();
    void GamePadClickExit();
    void ExecuteUbergraph_WBP_ReportTool(int32 EntryPoint);
}; // Size: 0x379

#endif
