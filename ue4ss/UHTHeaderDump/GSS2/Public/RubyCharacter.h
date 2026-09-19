#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GSSNPAICharacterBase.h"
#include "OnRubyResetDelegate.h"
#include "RubyCharacter.generated.h"

class AActor;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ARubyCharacter : public AGSSNPAICharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ResetPosition;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRubyReset OnRubyReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoShotGunIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSleeping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMegaphoneEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Megaphone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MegaphoneInitialLoaction;
    
    ARubyCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchRubyShotGunState(bool bShotGunInHand);
    
    UFUNCTION(BlueprintCallable)
    void ResetRuby();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayShotGunMontage();
    
};

