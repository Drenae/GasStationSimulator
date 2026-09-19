#pragma once
#include "CoreMinimal.h"
#include "SDMinigameBase.h"
#include "SDMinigameGeneralDelegateDelegate.h"
#include "SDToiledClogLevelDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "SDToiletMinigame.generated.h"

class ADirtyDecal;
class USplineComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ASDToiletMinigame : public ASDMinigameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDMinigameGeneralDelegate ToiletCloggedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDMinigameGeneralDelegate ToiletUnCloggedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDToiledClogLevelDelegate ToiletClogLevelChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PlungerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ClogMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* PlungerPathSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxToiletClogLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlungerMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlungerTriggerDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ToiletClogLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClogged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPlungerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADirtyDecal> VirtualDirtDecalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUnclogTriggerGate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADirtyDecal*> VirtualDirtDecals;
    
public:
    ASDToiletMinigame(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetToiletClogLevel(int32 InAmount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MouseMovedUp(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToiletClogged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetToiletClogPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentClogLevel() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DestroyVirtualDecal(ADirtyDecal* DecaltoDestroy);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeToiletClogLevel(int32 Delta);
    
};

