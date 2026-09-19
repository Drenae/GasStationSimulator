#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EHoldButton.h"
#include "Electrocity.h"
#include "Interaction.h"
#include "InteractionInfo.h"
#include "ItemStruct.h"
#include "OnMeshLoadedDelegate.h"
#include "TaskInformation.h"
#include "Item.generated.h"

class AGSSCharacterBase;
class AGSSWheeledVehicle;
class AInteractableActor;
class APathPoint;
class APawn;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AItem : public AActor, public ITaskInformation, public IInteraction, public IElectrocity, public IInteractionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGhost;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshLoaded OnMeshLoadedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemStruct ItemStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MainMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMeshLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPublic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBeEditable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldToEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHoldButton ButtonToPerformHoldingInteractions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EditHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPermanentOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGSSCharacterBase* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PlayerHandlPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLockedFromQuest;
    
    AItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UseItem(APawn* Pawn, bool Throw, float AimingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnEventFinished(bool AsGhost);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SimpleInteraction(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetItemPhysic(const bool bIsSimulatedPhysic);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOnverlapedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void LockItemFromQuest(bool bLock);
    
    UFUNCTION(BlueprintCallable)
    bool IsUnLocked(AInteractableActor* Instaginator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APathPoint* GetPathPoint(AGSSWheeledVehicle* GSSWheeledVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetInteractiveTransform(AActor* Actor, bool& RotateToTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetElectrocity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableElectrocity(const bool On);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EditItemHandled(UPrimitiveComponent* EditedComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DisplayInteractionInfo(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableInteractionInfo(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeInteractable(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AlternativeInteraction(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    

    // Fix for true pure virtual functions not being implemented
};

