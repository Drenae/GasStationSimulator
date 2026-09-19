#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "NetState.h"
#include "VehicleGear.h"
#include "VehicleSystemBase.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class VEHICLESYSTEMPLUGIN_API AVehicleSystemBase : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VehicleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SteeringCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SteeringSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVehicleGear> Gears;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReplicateMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SyncLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SyncRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetSendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetTimeBehind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetLerpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetPositionTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetSmoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RestState, meta=(AllowPrivateAccess=true))
    FNetState RestState;
    
    AVehicleSystemBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TeleportWheels();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SyncTrailerRotation(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldSyncWithServer(bool ShouldSync);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ReceiveRestState(FNetState State);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_ReceiveNetState(FNetState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwnerChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RestState();
    
    UFUNCTION(BlueprintCallable)
    void NetStateSend();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_ChangedOwner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteeringFromCurve(float Speed);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void Client_ReceiveNetState(FNetState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintDebugMessage(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AVS_Tick(float DeltaTime);
    
};

