#ifndef UE4SS_SDK_PaintWallControlPoint_HPP
#define UE4SS_SDK_PaintWallControlPoint_HPP

class APaintWallControlPoint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UWidgetComponent* Painting_Progress;                                        // 0x0228 (size: 0x8)
    class ACameraSnapPoint_C* CameraSnapPoint;                                        // 0x0230 (size: 0x8)
    float Time;                                                                       // 0x0238 (size: 0x4)
    bool Active;                                                                      // 0x023C (size: 0x1)
    float MaxTime;                                                                    // 0x0240 (size: 0x4)
    float ActivateTime;                                                               // 0x0244 (size: 0x4)

    bool hasRange(class ACameraSnapPoint_C* CameraSnapPoint);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ActivePoint(bool Active);
    void ExecuteUbergraph_PaintWallControlPoint(int32 EntryPoint);
}; // Size: 0x248

#endif
