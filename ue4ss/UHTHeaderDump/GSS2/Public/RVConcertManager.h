#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EDLCName.h"
#include "ERVCamperLeftReason.h"
#include "OnConcertStartedDelegate.h"
#include "OnConcertStoppedDelegate.h"
#include "RvConcertData.h"
#include "TimeStruct.h"
#include "RVConcertManager.generated.h"

class ARVCampManager;
class URVConcertSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API URVConcertManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConcertStarted OnConcertStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConcertStopped OnConcertStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRvConcertData ConcertData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipConcertCancelPopup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVCampManager* RVCampManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVConcertSettings* ConcertSettings;
    
public:
    URVConcertManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopConcert(ERVCamperLeftReason CamperLeftReason);
    
    UFUNCTION(BlueprintCallable)
    void StartConcert(FGameplayTag ConcertType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameTimeUpdated(const FTimeStruct GameTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDLCActivationStateChanged(EDLCName DLCName, bool bNewActivated);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConcertActive() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetHighestAmountOfCustomersForAnyMusicTypes(FGameplayTag& MusicType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAmountOfMusicCampersOfType(FGameplayTag MusicType);
    
    UFUNCTION(BlueprintCallable)
    void BindConcertToGameUpdate();
    
};

