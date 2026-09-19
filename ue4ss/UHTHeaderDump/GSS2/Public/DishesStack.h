#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DishPlaceFailedDelegate.h"
#include "DishPlacedDelegate.h"
#include "EDishPlacementResult.h"
#include "EDishType.h"
#include "DishesStack.generated.h"

class ADishItem;
class ADishesStack;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ADishesStack : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDishPlaced OnDishPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDishPlaceFailed OnDishPlaceFailed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EDishType> DishTypesFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADishItem*> Dishes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForDirtyDishes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpaceLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChoosingPriority;
    
public:
    ADishesStack(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static ADishItem* TakeFromTopFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    ADishItem* TakeFromTop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHighlight(bool bNewHighlight);
    
    UFUNCTION(BlueprintCallable)
    bool Place(ADishItem* Dish, bool bInitialPlacemenet, bool bIgnoreSpaceLimit, EDishPlacementResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForDirtyDishes() const;
    
    UFUNCTION(BlueprintCallable)
    static ADishItem* GetTopDishFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    ADishItem* GetTopDish();
    
    UFUNCTION(BlueprintCallable)
    static ADishesStack* GetDishStackFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChoosingPriority() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckFilterPass(ADishItem* DishItem);
    
};

