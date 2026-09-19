#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "StaticMeshUtilitiesBPLibrary.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class UStaticMeshUtilitiesBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStaticMeshUtilitiesBPLibrary();

    UFUNCTION(BlueprintCallable)
    static void DeleteAllSocketsFromStaticMesh(UStaticMesh* StaticMesh);
    
    UFUNCTION(BlueprintCallable)
    static void CreateMultipleMeshSockets(UStaticMesh* StaticMesh, int32 NumberOfSockets, bool bDeleteExistingSockets, FName SocketPrefix, FVector SocketOffset, FRotator SocketRotation);
    
    UFUNCTION(BlueprintCallable)
    static void CopySocketsFromStaticMesh(UStaticMesh* CopyFrom, UStaticMesh* CopyTo, bool bDeleteExistingSockets);
    
};

