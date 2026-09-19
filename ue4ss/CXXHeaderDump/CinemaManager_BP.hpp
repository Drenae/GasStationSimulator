#ifndef UE4SS_SDK_CinemaManager_BP_HPP
#define UE4SS_SDK_CinemaManager_BP_HPP

class ACinemaManager_BP_C : public ADLCDriveInCinemaManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0500 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0508 (size: 0x8)
    class UMediaPlayer* CustomMediaPlayer;                                            // 0x0510 (size: 0x8)
    bool IsMusicMuted;                                                                // 0x0518 (size: 0x1)
    bool IsInsideMuteVolume;                                                          // 0x0519 (size: 0x1)
    bool ShouldMusicBeMuted;                                                          // 0x051A (size: 0x1)
    FTimerHandle UpdateMusicStateTimer;                                               // 0x0520 (size: 0x8)
    class USoundMix* FadeSoundtrack;                                                  // 0x0528 (size: 0x8)
    bool bMoviePicker;                                                                // 0x0530 (size: 0x1)

    void ShowRenownLevelUpPopup(int32 NewRenownLevel);
    FMovieParameters GetMovieParametersByIndex(int32 MovieIndex);
    int32 CheckForRenownLevelNeeded();
    void ShowCinemaRewardPopup(float MoneyAmount, float RenownAmount, EEconomyDetailedYieldType DetailedYieldType);
    int32 CheckForRenownPointsNeeded();
    bool CheckForRenownLevel();
    void ReceiveBeginPlay();
    void OnRenownPointsAdded(float AddedPoints);
    void RefreshCustomMoviePoster(FString MovieName, bool bForce);
    void OnMoviePosterOpened(FString OpenedUrl);
    void PlaybackResumed();
    void OnMuteMusicVolumeEntered();
    void OnUnmuteMusicVolumeLeft();
    void UpdateMusicState();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_CinemaManager_BP(int32 EntryPoint);
}; // Size: 0x531

#endif
