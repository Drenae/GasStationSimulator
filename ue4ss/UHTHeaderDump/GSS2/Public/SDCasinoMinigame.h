#pragma once
#include "CoreMinimal.h"
#include "SDMinigameBase.h"
#include "SDCasinoMinigame.generated.h"

UCLASS(Blueprintable)
class GSS2_API ASDCasinoMinigame : public ASDMinigameBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ButtonDigitsNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvailableDigitsRowNumber;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AvailableDigitsRow;
    
public:
    ASDCasinoMinigame(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveCaughtDigit(int32 CaughtAvailableDigitIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegenerateDigitRows();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCriticalFailSymbol(int32 AvailableDigitIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCorrectDigit(int32 KeyDigitIndex, int32 AvailableDigitIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetButtonDigits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAvailableDigitsRow() const;
    
};

