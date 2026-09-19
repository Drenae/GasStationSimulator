#pragma once
#include "CoreMinimal.h"
#include "House.h"
#include "SDCasino.generated.h"

UCLASS(Blueprintable)
class GSS2_API ASDCasino : public AHouse {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpened;
    
public:
    ASDCasino(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOpened(bool bInOpened);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpened() const;
    
};

