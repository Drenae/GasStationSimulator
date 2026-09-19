#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EFileSDKFileAnchor.h"
#include "FileSDKFileReader.generated.h"

UCLASS(Blueprintable)
class UFileSDKFileReader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BinaryMode;
    
    UFileSDKFileReader();

    UFUNCTION(BlueprintCallable)
    bool SeekFilePosition(EFileSDKFileAnchor Anchor, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    int32 ReadStringToEnd(FString& Content);
    
    UFUNCTION(BlueprintCallable)
    int32 ReadString(int32 Num, FString& Content);
    
    UFUNCTION(BlueprintCallable)
    int32 ReadBytesToEnd(TArray<uint8>& Content);
    
    UFUNCTION(BlueprintCallable)
    int32 ReadBytes(int32 Num, TArray<uint8>& Content);
    
    UFUNCTION(BlueprintCallable)
    bool IsGood();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

