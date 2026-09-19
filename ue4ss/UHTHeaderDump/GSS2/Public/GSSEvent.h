#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EventDestroyedDelegate.h"
#include "EventProgress.h"
#include "GSSEventTime.h"
#include "TimeStruct.h"
#include "GSSEvent.generated.h"

class APlayerController;
class UWorld;

UCLASS(Blueprintable)
class GSS2_API UGSSEvent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventDestroyed OnEventDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSSEventTime GSSEventTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldPtr;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TickEnabled;
    
public:
    UGSSEvent();

    UFUNCTION(BlueprintCallable)
    bool UpdateEventProgress(FEventProgress NewEventProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickObject(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTickEnabled(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetEventProgress(FEventProgress EventProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrenTime(FTimeStruct CurrentTime, FTimeStruct& OutCurrentTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadGameEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeEventWorld(UWorld* World, bool bEventEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeEvent(APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEventProgress(const FString& ObjectiveName, int32& MaxProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimeStruct GetCurrenTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateEvent(bool bEventEnabled);
    
};

