#ifndef UE4SS_SDK_UncleShelvesAnim_WBP_HPP
#define UE4SS_SDK_UncleShelvesAnim_WBP_HPP

class UUncleShelvesAnim_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Animation_Uncle;                                          // 0x0268 (size: 0x8)
    class UImage* anim_bg;                                                            // 0x0270 (size: 0x8)
    class UImage* hand1;                                                              // 0x0278 (size: 0x8)
    class UImage* hand2;                                                              // 0x0280 (size: 0x8)
    class UImage* Products;                                                           // 0x0288 (size: 0x8)
    class UImage* Shelf;                                                              // 0x0290 (size: 0x8)
    class UImage* smoke;                                                              // 0x0298 (size: 0x8)
    class UImage* smoke2;                                                             // 0x02A0 (size: 0x8)
    class UImage* smoke3;                                                             // 0x02A8 (size: 0x8)
    class UImage* snap_bg;                                                            // 0x02B0 (size: 0x8)
    class UImage* snap_text;                                                          // 0x02B8 (size: 0x8)
    class UImage* Uncle;                                                              // 0x02C0 (size: 0x8)
    class UImage* Uncle_1;                                                            // 0x02C8 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_UncleShelvesAnim_WBP(int32 EntryPoint);
}; // Size: 0x2D0

#endif
