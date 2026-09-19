#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "BPNodeOutputPinDelegate.h"
#include "BPAsyncActionLibrary.generated.h"

class UBPAsyncActionLibrary;
class UObject;

UCLASS(Blueprintable)
class GSS2_API UBPAsyncActionLibrary : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPNodeOutputPin Tick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPNodeOutputPin Completed;
    
    UBPAsyncActionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    void InternalTick();
    
    UFUNCTION(BlueprintCallable)
    void InternalCompleted();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObj"))
    static UBPAsyncActionLibrary* BPAsyncNode(const UObject* WorldContextObj, int32 Num);
    
};

