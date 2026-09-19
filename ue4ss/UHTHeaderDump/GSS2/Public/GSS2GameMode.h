#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "GSS2GameMode.generated.h"

class AActionManager;
class ADLCAirstripManager;
class ADLCDriveInCinemaManager;
class ADialogueManager;
class AGlobalGameEventManager;
class AJunkyardManager;
class APathfindingManager;
class ARVCampManager;
class UDLCShadyDealsManager;
class UGSSGameInstance;
class USDGangActivityManager;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AGSS2GameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APathfindingManager* PathfindingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDLCShadyDealsManager> DLCShadyDealsManagerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADLCAirstripManager> DLCAirstripManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AJunkyardManager> DLCJunkyardManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DLCJunkyardManagerLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADLCDriveInCinemaManager> DLCCinemaManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DLCCinemaManagerLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARVCampManager> DLCRVCampManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DLCRVCampManagerLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGlobalGameEventManager* GGEM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADialogueManager* DialogueManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActionManager* ActionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADLCAirstripManager* DLCAirstripManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJunkyardManager* DLCJunkyardManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADLCDriveInCinemaManager* DLCCinemaManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARVCampManager* DLCRVCampManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDLCShadyDealsManager* DLCShadyDealsManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGSSGameInstance* GSSGameInstance;
    
public:
    AGSS2GameMode(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void InitManagers();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDLCShadyDealsManager* GetShadyDealsDLCManager() const;
    
    UFUNCTION(BlueprintCallable)
    AGlobalGameEventManager* GetGGEM();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    USDGangActivityManager* GetGangActivityManager() const;
    
    UFUNCTION(BlueprintCallable)
    ARVCampManager* GetDLCRVCampManager();
    
    UFUNCTION(BlueprintCallable)
    AJunkyardManager* GetDLCJunkyardManager();
    
    UFUNCTION(BlueprintCallable)
    ADLCDriveInCinemaManager* GetDLCCinemaManager();
    
    UFUNCTION(BlueprintCallable)
    ADLCAirstripManager* GetDLCAirstripManager();
    
    UFUNCTION(BlueprintCallable)
    ADialogueManager* GetDialogueManager();
    
    UFUNCTION(BlueprintCallable)
    AActionManager* GetActionManager();
    
};

