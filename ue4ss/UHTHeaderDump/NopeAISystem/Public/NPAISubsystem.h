#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "NPAICharacterSpawnDelegate.h"
#include "NPGameLogicStartDelegate.h"
#include "NPGameTimeUpdateDelegate.h"
#include "Templates/SubclassOf.h"
#include "NPAISubsystem.generated.h"

class ANPAICharacterBase;
class ANPAIManager;
class ANPAISpawner;
class UNPSmartObjectComponent;

UCLASS(Blueprintable, Transient)
class NOPEAISYSTEM_API UNPAISubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANPAIManager* NPAIManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNPAICharacterSpawn OnAICharacterSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNPGameTimeUpdate OnGameTimeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNPGameLogicStart OnGameLogicStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANPAISpawner*> AISpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANPAICharacterBase*> AICharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNPSmartObjectComponent*> SmartObjectComponents;
    
public:
    UNPAISubsystem();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TimeToSpawnCharacter(ANPAISpawner* InitSpawner, ANPAISpawner* TargetSpawner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UNPSmartObjectComponent*> GetSmartObjectComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAICharacters(TArray<ANPAICharacterBase*>& OutAICharacters, TSubclassOf<ANPAICharacterBase> FindClass);
    
};

