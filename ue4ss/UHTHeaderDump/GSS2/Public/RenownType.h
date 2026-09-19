#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ERenown_Reasons.h"
#include "RenownTypeAmountOverride.h"
#include "RenownType.generated.h"

UCLASS(Blueprintable)
class GSS2_API URenownType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenownProgressUpperCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenownProgressLowerCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERenown_Reasons> AllowedSourcesOfRenown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRenownTypeAmountOverride> PositiveRenownOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRenownTypeAmountOverride> NegativeRenownOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenownProgress;
    
public:
    URenownType();

protected:
    UFUNCTION(BlueprintCallable)
    void TryShowVolcanoTutorial();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartGameRenown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PostRenownChangeEvent(float ValueChanged);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeRenown();
    
    UFUNCTION(BlueprintCallable)
    void ForceSetRenownProgress(int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    int32 AddRenownProgress(int32 Count, UObject* Instiginator, ERenown_Reasons SourceOfRenown, const FString& Reason);
    
};

