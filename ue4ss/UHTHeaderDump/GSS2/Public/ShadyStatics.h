#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EInteractableTaskType.h"
#include "ETaskResult.h"
#include "SDFighterAttributes.h"
#include "SDFighterStats.h"
#include "SDShadynessModifierSettings.h"
#include "SDSheriffBehaviorSettings.h"
#include "TaskStruct.h"
#include "ShadyStatics.generated.h"

class AAICharacterBase;
class UActorComponent;
class UDLCShadyDealsManager;
class UDataTable;
class USDDirtyMoneyComponent;
class USDGameplayEvents;
class USDGangActivityManager;
class USDShadynessManager;
class USDShadynessModifierBase;
class USDSheriffActionBase;

UCLASS(Blueprintable)
class GSS2_API UShadyStatics : public UObject {
    GENERATED_BODY()
public:
    UShadyStatics();

    UFUNCTION(BlueprintCallable)
    static void SetCutscenesEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveShadynessModifierInstance(const UObject* WorldContextObject, USDShadynessModifierBase* InModifierInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWithEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFighterValid(const FSDFighterStats& Fighter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USDShadynessManager* GetShadynessManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDLCShadyDealsManager* GetShadyDealsManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetGangMultiplier(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USDGangActivityManager* GetGangActivityManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USDGameplayEvents* GetGameplayEvents(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UDataTable> GetFightersPoolDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFighterQuality(const FSDFighterStats& Fighter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USDDirtyMoneyComponent* GetDirtyMoneyComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDirtyMoneyBagCapacity();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<USDSheriffActionBase*> GetCurrentSheriffCatchActions(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSDSheriffBehaviorSettings GetCurrentSheriffBehaviorSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* GetComponentFromCDO(const UClass* InObjectClass, const UClass* ComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetClassDefaultObject(UClass* InClass);
    
    UFUNCTION(BlueprintCallable)
    static void FinishCurrentAITask(AAICharacterBase* InCharacter, ETaskResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FighterEquals(const FSDFighterStats& A, const FSDFighterStats& B);
    
    UFUNCTION(BlueprintCallable)
    static FTaskStruct CreateAITaskStruct(const EInteractableTaskType TaskType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSDFighterAttributes CompareFighterAttributes(const FSDFighterAttributes& A, const FSDFighterAttributes& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreCutscenesEnabled();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USDShadynessModifierBase* ApplyShadynessModifierInstance(const UObject* WorldContextObject, USDShadynessModifierBase* InModifierInstance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USDShadynessModifierBase* ApplyShadynessModifier(const UObject* WorldContextObject, const FSDShadynessModifierSettings& ModifierSettings);
    
};

