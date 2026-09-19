#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "SDShadynessChangedDelegateDelegate.h"
#include "SDShadynessLevel.h"
#include "SDShadynessLevelChangedDelegateDelegate.h"
#include "SDShadynessLockStateChangedDelegateDelegate.h"
#include "SDShadynessModifierDelegateDelegate.h"
#include "SDShadynessManager.generated.h"

class USDShadynessModifierBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USDShadynessManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDShadynessChangedDelegate ShadynessChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDShadynessModifierDelegate PreModifierAddedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDShadynessModifierDelegate PostModifierAddedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDShadynessModifierDelegate PreModifierRemovedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDShadynessLevelChangedDelegate ShadynessLevelChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDShadynessLockStateChangedDelegate ShadynessLockStateChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadynessMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadynessStaticDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadynessStaticDropRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadynessModifiersTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USDShadynessModifierBase*> ShadynessModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDShadynessLevel> ShadynessLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShadynessLevelsAmount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Shadyness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CachedShadynesLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShadynessDropEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShadynessLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_ShadynessModifiersTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle_ShadynessStaticDropTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDShadynessLevel EMPTY_SHADYNESS_LEVEL;
    
public:
    USDShadynessManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TickShadynessModifiers();
    
    UFUNCTION(BlueprintCallable)
    void ShadynessStaticDropTick();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetShadynessValue(const float InNewValue, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetShadynessPercent(const int32 InNewPercent, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetShadynessLocked(bool bInLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetShadynessDropEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelsAmount(int32 InAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetLevel(int32 InLevel, float InStartPercent, float InEndPercent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShadynessModifier(USDShadynessModifierBase* InModifier);
    
    UFUNCTION(BlueprintCallable)
    void ModifyShadynessValue(const float InNewPercent);
    
    UFUNCTION(BlueprintCallable)
    void ModifyShadynessPercent(const int32 InNewPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShadynessLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShadynessValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShadynessPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USDShadynessModifierBase*> GetShadynessModifiers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDShadynessLevel GetShadynessLevelStruct(int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShadynessLevelsAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSDShadynessLevel> GetShadynessLevels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShadynessLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxShadynessValue() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearLevelsArray();
    
    UFUNCTION(BlueprintCallable)
    bool ApplyShadynessModifier(USDShadynessModifierBase* InModifier);
    
    UFUNCTION(BlueprintCallable)
    void AddLevel(int32 InLevel, float InStartPercent, float InEndPercent);
    
};

