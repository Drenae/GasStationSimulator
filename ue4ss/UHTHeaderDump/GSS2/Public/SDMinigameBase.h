#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ECharacterState.h"
#include "ESDMinigameEndReason.h"
#include "PlaceableActor.h"
#include "SDMinigameEndDelegateDelegate.h"
#include "SDMinigameGeneralDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "SDMinigameBase.generated.h"

class AActor;
class UCameraComponent;
class UPrimitiveComponent;
class USDMinigameWidget;
class USDStandaloneSheriffTrigger;

UCLASS(Blueprintable)
class GSS2_API ASDMinigameBase : public APlaceableActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDMinigameGeneralDelegate MinigameStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDMinigameEndDelegate MinigameEndedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDStandaloneSheriffTrigger* MinigameTrigger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* MinigameCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerCanLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMinigameStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterState ChararcterMinigameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USDMinigameWidget> MinigameUIWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMouseCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDisablePlayerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTransferInputToMinigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameAndUIInputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USDMinigameWidget* CreatedMinigameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MinigameCrucialActors;
    
public:
    ASDMinigameBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartMiniGame();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayerInputEnabled(bool bEnabled, bool bInTransferInputToMinigame, bool bInSetGameAndUIInputMode);
    
    UFUNCTION(BlueprintCallable)
    void RestorePlayerCamera(float BlendTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveCrucialActor(AActor* CrucialActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWidgetAddedToViewport();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStart();
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMinigameStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDMinigameWidget* GetMinigameWidgetInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<USDMinigameWidget> GetMinigameWidgetClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetCrucialActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndMinigame(ESDMinigameEndReason EndReason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CleanUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStartMinigame();
    
    UFUNCTION(BlueprintCallable)
    void CancelMinigame(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void BlendViewTargetToCameraComponent(UCameraComponent* CameraToBlendTo, float BlendSpeed);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddCrucialActor(AActor* InActor);
    
};

