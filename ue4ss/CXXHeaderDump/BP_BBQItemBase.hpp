#ifndef UE4SS_SDK_BP_BBQItemBase_HPP
#define UE4SS_SDK_BP_BBQItemBase_HPP

class ABP_BBQItemBase_C : public ABBQItem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetComponent* Info Widget;                                              // 0x0438 (size: 0x8)
    class UParticleSystemComponent* Burned Particle System;                           // 0x0440 (size: 0x8)
    FVector Timeline_Cooked_Scale_D92B87F54806A2BA2F7DCA956028F51B;                   // 0x0448 (size: 0xC)
    float Timeline_Cooked_Rotation_D92B87F54806A2BA2F7DCA956028F51B;                  // 0x0454 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Cooked__Direction_D92B87F54806A2BA2F7DCA956028F51B; // 0x0458 (size: 0x1)
    class UTimelineComponent* Timeline Cooked;                                        // 0x0460 (size: 0x8)
    float Timeline_Flip_Rotation_DAD2C3F74C9EA94CB013C48D2A015903;                    // 0x0468 (size: 0x4)
    float Timeline_Flip_Height_DAD2C3F74C9EA94CB013C48D2A015903;                      // 0x046C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Flip__Direction_DAD2C3F74C9EA94CB013C48D2A015903; // 0x0470 (size: 0x1)
    class UTimelineComponent* Timeline Flip;                                          // 0x0478 (size: 0x8)
    FTransform Cached Transform On Front Flip;                                        // 0x0480 (size: 0x30)
    float Pivot Mesh Offset;                                                          // 0x04B0 (size: 0x4)
    FVector Default Scale;                                                            // 0x04B4 (size: 0xC)
    class UMaterialInterface* Burned Material;                                        // 0x04C0 (size: 0x8)
    class UMaterialInterface* Medium Material;                                        // 0x04C8 (size: 0x8)
    class UMaterialInterface* Perfect Material;                                       // 0x04D0 (size: 0x8)
    class UWBP_BBQTip_C* Tutorial Tip;                                                // 0x04D8 (size: 0x8)
    bool Tutorial Lock;                                                               // 0x04E0 (size: 0x1)

    void Get Movement Duration(float& Value);
    void On Perfect(bool bReverseSide);
    void On Medium(bool bReverseSide);
    void On Burned(bool bReverseSide);
    void Get Actor Transform With Default Scale(FTransform& Transform);
    void Cache And Restore Transform if Needed();
    void Timeline Flip__FinishedFunc();
    void Timeline Flip__UpdateFunc();
    void Timeline Cooked__FinishedFunc();
    void Timeline Cooked__UpdateFunc();
    void ReceiveBeginPlay();
    void Flip();
    void On Cooking Progress Updated(class ABBQItem* Item, float CookingProgress, float CurrentStateProgress);
    void Play Cooked Animation();
    void ReceiveTick(float DeltaSeconds);
    void On Slot Changed(class UBBQSlotComponent* NewSlot);
    void On State Changed(class ABBQItem* Item, EBBQItemState State);
    void On Item Rated();
    void Try To Create Tutorial Tip();
    void ExecuteUbergraph_BP_BBQItemBase(int32 EntryPoint);
}; // Size: 0x4E1

#endif
