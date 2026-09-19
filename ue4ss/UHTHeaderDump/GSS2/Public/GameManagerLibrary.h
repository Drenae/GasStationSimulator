#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GameManagerLibrary.generated.h"

class AActionManager;
class ADialogueManager;
class AGlobalGameEventManager;
class UAIManager;
class UGSSQuest;
class UObject;
class UTutorialManager;

UCLASS(Blueprintable)
class GSS2_API UGameManagerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameManagerLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTutorialManager* GetTutorialManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGlobalGameEventManager* GetGGEM(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ADialogueManager* GetDialogueManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAIManager* GetAIManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActionManager* GetActionManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AutoSave(UObject* WorldContextObject, UGSSQuest* Quest, bool ForceSave);
    
};

