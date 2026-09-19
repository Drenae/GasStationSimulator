#ifndef UE4SS_SDK_CarTrace_HPP
#define UE4SS_SDK_CarTrace_HPP

class ACarTrace_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0228 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0230 (size: 0x8)
    class ACarTrace_C* NextCarTrace;                                                  // 0x0238 (size: 0x8)
    FCarTrace_CFinished Finished;                                                     // 0x0240 (size: 0x10)
    void Finished(class ACarTrace_C* NewParam);

    void ReceiveBeginPlay();
    void UpdateOutline(bool bUpdate);
    void ExecuteUbergraph_CarTrace(int32 EntryPoint);
    void Finished__DelegateSignature(class ACarTrace_C* NewParam);
}; // Size: 0x250

#endif
