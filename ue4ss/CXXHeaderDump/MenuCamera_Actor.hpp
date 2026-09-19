#ifndef UE4SS_SDK_MenuCamera_Actor_HPP
#define UE4SS_SDK_MenuCamera_Actor_HPP

class AMenuCamera_Actor_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0220 (size: 0x8)
    class ACineCameraActor* OptionsScreenCamera;                                      // 0x0228 (size: 0x8)
    class ACineCameraActor* MainMenuScreenCamera;                                     // 0x0230 (size: 0x8)
    class ACineCameraActor* NewGameScreenCamera;                                      // 0x0238 (size: 0x8)

    void NewGameTransition();
    void MainMenuTransition();
    void OptionsCameraTransition();
}; // Size: 0x240

#endif
