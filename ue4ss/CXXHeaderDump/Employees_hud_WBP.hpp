#ifndef UE4SS_SDK_Employees_hud_WBP_HPP
#define UE4SS_SDK_Employees_hud_WBP_HPP

class UEmployees_hud_WBP_C : public UEmployess_hud
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0290 (size: 0x8)
    class UHorizontalBox* HorizontalBox_employees;                                    // 0x0298 (size: 0x8)

    void Construct();
    void OnEmployeHired_Event_0(class AAICharacterBase* CharacterRef);
    void OnEmployeFired_Event_0(class AAICharacterBase* CharacterRef);
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void ExecuteUbergraph_Employees_hud_WBP(int32 EntryPoint);
}; // Size: 0x2A0

#endif
