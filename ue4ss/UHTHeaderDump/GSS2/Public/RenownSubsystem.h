#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "ERenown_Reasons.h"
#include "OnInitializeRenownsDelegate.h"
#include "SavedRenownEntity.h"
#include "Templates/SubclassOf.h"
#include "RenownSubsystem.generated.h"

class UObject;
class URenownPopularity;
class URenownType;

UCLASS(Blueprintable)
class GSS2_API URenownSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitializeRenowns InitializeRenowns;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URenownType*> ApplicableRenowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URenownPopularity* RenownPopularity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AreRenownsInitialized;
    
public:
    URenownSubsystem();

    UFUNCTION(BlueprintCallable)
    void TryInitRenowns();
    
    UFUNCTION(BlueprintCallable)
    void StartGame();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSavedRenownEntity> SaveRenowns();
    
    UFUNCTION(BlueprintCallable)
    void OnWorldBeginPlay();
    
    UFUNCTION(BlueprintCallable)
    void LoadRenowns(TArray<FSavedRenownEntity> RenownsToLoad);
    
    UFUNCTION(BlueprintCallable)
    int32 HandleRenownChange(int32 Amount, UObject* Instiginator, ERenown_Reasons SourceOfRenown, const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    void HandlePopularityRenownSaveConversion(int32 Progress, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    URenownPopularity* GetRenownPopularity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URenownType* GetRenownByClass(TSubclassOf<URenownType> RenownClass);
    
    UFUNCTION(BlueprintCallable)
    TArray<URenownType*> GetApplicableRenowns();
    
    UFUNCTION(BlueprintCallable)
    void ForceSetMaxRenown();
    
};

