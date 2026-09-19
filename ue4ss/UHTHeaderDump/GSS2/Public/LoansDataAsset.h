#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Loan.h"
#include "LoansDataAsset.generated.h"

UCLASS(Blueprintable)
class GSS2_API ULoansDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoan> Loans;
    
    ULoansDataAsset();

    UFUNCTION(BlueprintCallable)
    bool GetLoan(const FString& LoanToFind, FLoan& OUT_Loan);
    
};

