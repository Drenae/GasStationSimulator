#ifndef UE4SS_SDK_WBP_DepartureScreensTutorial_HPP
#define UE4SS_SDK_WBP_DepartureScreensTutorial_HPP

class UWBP_DepartureScreensTutorial_C : public UDepartureScreensTutorial
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0268 (size: 0x8)

    void ForceShowTutorial();
    void ExecuteUbergraph_WBP_DepartureScreensTutorial(int32 EntryPoint);
}; // Size: 0x270

#endif
