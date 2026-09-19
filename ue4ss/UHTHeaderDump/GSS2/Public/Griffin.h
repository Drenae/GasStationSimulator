#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DumbbellGriffinWeightChangedDelegate.h"
#include "Griffin.generated.h"

class ADumbbellsContainer;
class ARvMinigameInWorld_Dumbbells;
class UChildActorComponent;
class USceneComponent;

UCLASS(Blueprintable)
class GSS2_API AGriffin : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDumbbellGriffinWeightChanged OnWeightChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildActorGriffinLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildActorGriffinRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADumbbellsContainer* GriffinLeftContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADumbbellsContainer* GriffinRightContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARvMinigameInWorld_Dumbbells* DumbbellsMinigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
public:
    AGriffin(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWeight(ADumbbellsContainer* Container, float ContainerWeight);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init(ARvMinigameInWorld_Dumbbells* minigame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartingWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADumbbellsContainer* GetGriffinRightContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ADumbbellsContainer* GetGriffinLeftContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARvMinigameInWorld_Dumbbells* GetDumbbellsMinigame() const;
    
};

