#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EContractDifficulty.h"
#include "EContractType.h"
#include "EProgressState.h"
#include "EState.h"
#include "OnContractTimeOverDelegate.h"
#include "OnProgressStateChangedDelegate.h"
#include "TimeStruct.h"
#include "ContractBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API UContractBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContractTimeOver OnContractTimeOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProgressStateChanged OnProgressStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContractType ContractType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProgressState CurrentProgressState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct TimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct InitialTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContractPointsReward;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapPositionIndex;
    
public:
    UContractBase();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateContract(FTimeStruct InTime);
    
public:
    UFUNCTION(BlueprintCallable)
    bool StartContract();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeLeft(FTimeStruct InTimeLeft);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetMoneyReward(float InMoneyReward);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSuccess(bool InIsSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialTime(FTimeStruct InInitialTime);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(int32 InDifficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentProgressState(EProgressState InCurrentProgressState);
    
    UFUNCTION(BlueprintCallable)
    void SetContractType(EContractType InContractType);
    
    UFUNCTION(BlueprintCallable)
    void SetContractPointsReward(float InContractPointsReward);
    
    UFUNCTION(BlueprintCallable)
    void OnGameLoaded(bool bGameLoaded);
    
    UFUNCTION(BlueprintCallable)
    void Initialization(EState InState, int32 InDifficulty, EProgressState InProgressState);
    
    UFUNCTION(BlueprintCallable)
    void HandleAfterLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimeStruct GetTimeLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EState GetState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoneyReward();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimeStruct GetInitialTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EContractDifficulty GetDifficultyEnum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefinedPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EProgressState GetCurrentProgressState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EContractType GetContractType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetContractPointsReward();
    
    UFUNCTION(BlueprintCallable)
    void FinishContract();
    
    UFUNCTION(BlueprintCallable)
    void DefinePosition(int32 InIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckIfSuccess();
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelContract();
    
    UFUNCTION(BlueprintCallable)
    bool CanBeStarted();
    
};

