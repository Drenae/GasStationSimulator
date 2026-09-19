#ifndef UE4SS_SDK_Joe_BeerBottle_BP_HPP
#define UE4SS_SDK_Joe_BeerBottle_BP_HPP

class AJoe_BeerBottle_BP_C : public AJoeAccesories_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0258 (size: 0x8)

    void UserConstructionScript();
    void OnNotifyEnd_A6AE8A054AC944AFD0165C9588C598A6(FName NotifyName);
    void OnNotifyBegin_A6AE8A054AC944AFD0165C9588C598A6(FName NotifyName);
    void OnInterrupted_A6AE8A054AC944AFD0165C9588C598A6(FName NotifyName);
    void OnBlendOut_A6AE8A054AC944AFD0165C9588C598A6(FName NotifyName);
    void OnCompleted_A6AE8A054AC944AFD0165C9588C598A6(FName NotifyName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Joe_BeerBottle_BP(int32 EntryPoint);
}; // Size: 0x260

#endif
