#ifndef UE4SS_SDK_EmployeeHUD_Icon_WBP_HPP
#define UE4SS_SDK_EmployeeHUD_Icon_WBP_HPP

class UEmployeeHUD_Icon_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Employee_Icon;                                                      // 0x0268 (size: 0x8)
    class UImage* EnergyRadialProgress;                                               // 0x0270 (size: 0x8)
    class UTextBlock* FirstEmployeAcitivityTXT;                                       // 0x0278 (size: 0x8)
    class AAICharacterBase* CurrentEmployee;                                          // 0x0280 (size: 0x8)
    class UEmployees_hud_WBP_C* EmployeesHUD;                                         // 0x0288 (size: 0x8)
    int32 EmployeeNumber;                                                             // 0x0290 (size: 0x4)
    class UMaterialInstanceDynamic* Radial;                                           // 0x0298 (size: 0x8)

    void SetIcon(class UTexture* Icon);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnInitializeTaskCharacter_Event_0(class UTaskBase* StartedTask);
    void ExecuteUbergraph_EmployeeHUD_Icon_WBP(int32 EntryPoint);
}; // Size: 0x2A0

#endif
