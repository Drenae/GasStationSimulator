#pragma once
#include "CoreMinimal.h"
#include "ESDMinigameEndReason.h"
#include "SDGangActivityObjBase.h"
#include "Templates/SubclassOf.h"
#include "SDMinigameBasedGangActivity.generated.h"

class AActor;
class AGSSWheeledVehicle;
class ASDMinigameBase;
class ASDShadyDealsMinigameBase;

UCLASS(Blueprintable)
class GSS2_API USDMinigameBasedGangActivity : public USDGangActivityObjBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGSSWheeledVehicle>> AvailableVehiclesClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDShadyDealsMinigameBase* ActivityMinigameObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DesiredMinigameClass;
    
public:
    USDMinigameBasedGangActivity();

private:
    UFUNCTION(BlueprintCallable)
    void OnVehicleClassLoaded(TSoftClassPtr<AGSSWheeledVehicle> LoadedActivityClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActivityMinigameEnded(ASDMinigameBase* minigame, ESDMinigameEndReason EndReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDShadyDealsMinigameBase* GetActivityMinigame() const;
    
};

