#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Interaction.h"
#include "OnEquipmentAddedToQueueDelegate.h"
#include "OnEquipmentAddingFinishedDelegate.h"
#include "OnEquipmentRemovedFromQueueDelegate.h"
#include "RentableEquipmentSlot.h"
#include "RentalEquipmentContainer.generated.h"

class APawn;
class ARentableItem;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ARentalEquipmentContainer : public AActor, public IInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentAddedToQueue OnEquipmentAddedToQueue;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentRemovedFromQueue OnEquipmentRemovedFromQueue;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentAddingFinished OnEquipmentAddingFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRentableEquipmentSlot> ReplacementEqQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARentableItem> CompatibleItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentMaxCapacity;
    
public:
    ARentalEquipmentContainer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TryShowRentalTutorial();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SimpleInteraction(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetReplacementEqQueue(TArray<FRentableEquipmentSlot> NewQueue);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMaxCapacity(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEqFromQueue();
    
    UFUNCTION(BlueprintCallable)
    TArray<FRentableEquipmentSlot> GetReplacementEqQueue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentMaxCapacity();
    
    UFUNCTION(BlueprintCallable)
    int32 FillToMax(int32 NumInInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DisplayInteractionInfo(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableInteractionInfo(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    bool AddEqToQueue(int32 ItemQuantity);
    

    // Fix for true pure virtual functions not being implemented
};

