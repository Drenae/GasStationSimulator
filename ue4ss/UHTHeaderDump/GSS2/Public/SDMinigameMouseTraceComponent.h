#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "SDMouseTraceHoverCompDelegateDelegate.h"
#include "SDMinigameMouseTraceComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USDMinigameMouseTraceComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult MouseCursorTraceResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDMouseTraceHoverCompDelegate ComponentHoveredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDMouseTraceHoverCompDelegate ComponentUnhoveredDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceOnlyOwnerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TraceDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoveredComponentCustomDepthStencil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> MouseTraceComponentsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MouseTraceActorsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* LastTracedComponent;
    
public:
    USDMinigameMouseTraceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHoverDepthStencil(int32 InStencilValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoreComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoreActor(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnComponentUnhovered(UPrimitiveComponent* UnhoveredComp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnComponentHovered(UPrimitiveComponent* HoveredComp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetLastTracedComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreActor(AActor* Actor);
    
};

