#pragma once
#include "CoreMinimal.h"
#include "ECountableObjectiveDisplayType.h"
#include "ObjectiveBase.h"
#include "CountableObjectiveBase.generated.h"

UCLASS(Blueprintable)
class GSS2_API UCountableObjectiveBase : public UObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishObjectiveWhenMaxProgressIsReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECountableObjectiveDisplayType DisplayType;
    
    UCountableObjectiveBase();

    UFUNCTION(BlueprintCallable)
    void SetObjectiveProgress(int32 NewProgress, bool bShowUpdateAnim);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectiveMaxProgress(int32 NewMaxProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveProgressReached();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetObjectiveCompletionPercentage();
    
    UFUNCTION(BlueprintCallable)
    void AddObjectiveProgress(int32 AddedProgress, bool bShowUpdateAnim);
    
};

