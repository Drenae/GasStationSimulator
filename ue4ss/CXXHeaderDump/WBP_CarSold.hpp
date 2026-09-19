#ifndef UE4SS_SDK_WBP_CarSold_HPP
#define UE4SS_SDK_WBP_CarSold_HPP

class UWBP_CarSold_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnDestruct;                                               // 0x0268 (size: 0x8)
    class UWidgetAnimation* OnConstruct;                                              // 0x0270 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0278 (size: 0x8)

    void Finished_0446CD804A014025EF6FA08A38343068();
    void Finished_27F2BB064BC9DDA6FAC79FA8C984EB10();
    void Construct();
    void CarSold(const FSaleSlot& SaleSlot, const bool bCarSold);
    void Destruct();
    void ExecuteUbergraph_WBP_CarSold(int32 EntryPoint);
}; // Size: 0x280

#endif
