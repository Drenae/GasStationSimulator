#ifndef UE4SS_SDK_ShredderButton_BP_HPP
#define UE4SS_SDK_ShredderButton_BP_HPP

class AShredderButton_BP_C : public AGameButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)

    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void OnButtonPress();
    void ExecuteUbergraph_ShredderButton_BP(int32 EntryPoint);
}; // Size: 0x598

#endif
