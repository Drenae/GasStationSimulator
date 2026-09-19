#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "SDMinigameParticipantPosition.h"
#include "SDMinigameParticipantsDelegateDelegate.h"
#include "SDParticipantDelegateDelegate.h"
#include "SDMinigameParticipantComponent.generated.h"

class AAICharacterBase;
class AActor;
class AGSSWheeledVehicle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USDMinigameParticipantComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDParticipantDelegate ParticipantPreparedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDMinigameParticipantsDelegate ParticipantsReadyDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, TSoftClassPtr<AGSSWheeledVehicle>> ParticipantPositions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ReservedPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FSDMinigameParticipantPosition> PosParticipantsPairs;
    
public:
    USDMinigameParticipantComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AActor* ReserveParticipantPos(AAICharacterBase* InParticipant, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void PrepareParticipant(AAICharacterBase* InParticipant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<AAICharacterBase*> GetParticipants() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<AActor*, FSDMinigameParticipantPosition> GetParticipantPositions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetFreeParticipantPos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AGSSWheeledVehicle> GetDesiredVehicleForPosition(AActor* InPosition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDesiredParticipantsNum() const;
    
    UFUNCTION(BlueprintCallable)
    void FreeParticipantPoses(bool bOrderToGoHome);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    AActor* FindParticipantPosition(AAICharacterBase* InParticipant) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllParticipantsReady() const;
    
};

