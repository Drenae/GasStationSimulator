#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "ObjectiveMarker.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class GSS2_API AObjectiveMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> MarkerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorMarked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayActivated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* MarkerIconWidget;
    
public:
    AObjectiveMarker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateOutline(bool Show, float Distance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMarker(bool Show, float Distance);
    
    UFUNCTION(BlueprintCallable)
    void ShowHideMarker(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerState(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void EnableMarker();
    
    UFUNCTION(BlueprintCallable)
    void DisableMarker();
    
    UFUNCTION(BlueprintCallable)
    void DestroyMarker(AActor* Actor);
    
};

