#ifndef UE4SS_SDK_Quest_Complited_HPP
#define UE4SS_SDK_Quest_Complited_HPP

class UQuest_Complited_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* WaitingAnim;                                              // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0270 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_Quest_Complited(int32 EntryPoint);
}; // Size: 0x278

#endif
