#ifndef UE4SS_SDK_BP_ScreenshotManager_HPP
#define UE4SS_SDK_BP_ScreenshotManager_HPP

class ABP_ScreenshotManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    FPostProcessSettings CurrentPostProcess;                                          // 0x0230 (size: 0x560)
    float CurrentFOV;                                                                 // 0x0790 (size: 0x4)
    class UTextureRenderTarget2D* RenderTargetTexture;                                // 0x0798 (size: 0x8)
    float CurrentTimeDilation;                                                        // 0x07A0 (size: 0x4)
    class UUI_PhotoMode_C* PhotoModeWidgetRef;                                        // 0x07A8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void TakeScreenshot(FIntPoint Size, FString Path, FString Filename);
    void ExecuteUbergraph_BP_ScreenshotManager(int32 EntryPoint);
}; // Size: 0x7B0

#endif
