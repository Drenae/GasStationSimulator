#ifndef UE4SS_SDK_CameraSnapPoint_HPP
#define UE4SS_SDK_CameraSnapPoint_HPP

class ACameraSnapPoint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float StartDelay;                                                                 // 0x0238 (size: 0x4)
    class ACustomizationHousePart_BP_C* TargetCustomizationPart;                      // 0x0240 (size: 0x8)
    float CurrentDurability;                                                          // 0x0248 (size: 0x4)
    float MaxDurability;                                                              // 0x024C (size: 0x4)
    EWallSide Direction;                                                              // 0x0250 (size: 0x1)
    class APaintBrush* UserPaintBroom;                                                // 0x0258 (size: 0x8)
    class UWBP_WallPaint_C* Widget;                                                   // 0x0260 (size: 0x8)
    float Speed;                                                                      // 0x0268 (size: 0x4)
    float AxisTurn;                                                                   // 0x026C (size: 0x4)
    float AxisLookUp;                                                                 // 0x0270 (size: 0x4)
    float FinishSpeed;                                                                // 0x0274 (size: 0x4)
    int32 indexPaintPoint;                                                            // 0x0278 (size: 0x4)
    float TargetDurability;                                                           // 0x027C (size: 0x4)
    float LerpSpeed;                                                                  // 0x0280 (size: 0x4)
    float PaintPower;                                                                 // 0x0284 (size: 0x4)
    bool LPMHold;                                                                     // 0x0288 (size: 0x1)
    TArray<APaintWallControlPoint_C*> SpawnedPoints;                                  // 0x0290 (size: 0x10)
    FLinearColor NewColor;                                                            // 0x02A0 (size: 0x10)
    EColorType PaintColorType;                                                        // 0x02B0 (size: 0x1)
    float ExitMinigameDurability;                                                     // 0x02B4 (size: 0x4)

    void OnPaintingFInish(class UObject* Object);
    void Press(bool Hold);
    bool PointInRange();
    void GetCurrentActivePoint(class APaintWallControlPoint_C*& ActivePoint);
    void ActivePoints();
    void CalcDurability();
    void SpawnPoints();
    void GetPaintBrush(class UArrowComponent*& BackArrowBrush);
    void InpActEvt_LPM_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_LPM_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Interaction_F_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_1(float AxisValue);
    void ReceiveTick(float DeltaSeconds);
    void CustomEvent_0(class AActor* DestroyedActor);
    void AssingPaintWall();
    void ExecuteUbergraph_CameraSnapPoint(int32 EntryPoint);
}; // Size: 0x2B8

#endif
