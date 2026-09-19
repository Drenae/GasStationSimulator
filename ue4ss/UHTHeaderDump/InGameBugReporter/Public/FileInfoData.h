#pragma once
#include "CoreMinimal.h"
#include "EFileType.h"
#include "FileInfoData.generated.h"

USTRUCT(BlueprintType)
struct FFileInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFileType FileType;
    
    INGAMEBUGREPORTER_API FFileInfoData();
};

