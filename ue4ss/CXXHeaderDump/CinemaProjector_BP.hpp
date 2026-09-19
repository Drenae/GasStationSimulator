#ifndef UE4SS_SDK_CinemaProjector_BP_HPP
#define UE4SS_SDK_CinemaProjector_BP_HPP

class ACinemaProjector_BP_C : public ACinemaProjector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0610 (size: 0x8)
    class UAudioComponent* AudioFilmLoop;                                             // 0x0618 (size: 0x8)
    class UStaticMeshComponent* Wheel2;                                               // 0x0620 (size: 0x8)
    class UStaticMeshComponent* Wheel1;                                               // 0x0628 (size: 0x8)
    class UChildActorComponent* BP_LGodRay_ProjectorCinema;                           // 0x0630 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0638 (size: 0x8)
    bool bCountdown;                                                                  // 0x0640 (size: 0x1)
    class UMediaSource* CountdownMovie;                                               // 0x0648 (size: 0x8)
    FString CustomMovieName;                                                          // 0x0650 (size: 0x10)
    class UFileMediaSource* CustomMoviePlayer;                                        // 0x0660 (size: 0x8)
    class UMaterialInstanceDynamic* Wheel1DynamicMaterial;                            // 0x0668 (size: 0x8)
    class UMaterialInstanceDynamic* Wheel2DynamicMaterial;                            // 0x0670 (size: 0x8)

    FName GetInteractionName();
    void ToggleCinemaLights(bool bOn, bool bInstant);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void ReceiveBeginPlay();
    void RegisterCinemaProjector();
    void UpdateProjectorAfterLoad(bool GameLoaded);
    void OnPauseGameChanged(bool PauseEnabled);
    void DEBUG_PlayMovie();
    void StartPlayMovie();
    void OnEndMovie();
    void StartCountdown(float StartTime);
    void ResetCountdown();
    void DisableInteractionInfo(class APawn* Pawn);
    void OnLoopChange();
    void TurnLightsOff(bool bInstant);
    void OnUpdated(const int32 UpdatedTime);
    void ExecuteUbergraph_CinemaProjector_BP(int32 EntryPoint);
}; // Size: 0x678

#endif
