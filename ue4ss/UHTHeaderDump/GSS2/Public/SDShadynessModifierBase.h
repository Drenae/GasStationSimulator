#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESDShadynessModifierPersistance.h"
#include "SDShadynessModifierSettings.h"
#include "SDShadynessModifierBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API USDShadynessModifierBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDShadynessModifierSettings ModifierSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationLeft;
    
public:
    USDShadynessModifierBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDurationExceeded() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FSDShadynessModifierSettings& InModifierSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShadynessDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDShadynessModifierPersistance GetModifierPersistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurationLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDuration() const;
    
};

