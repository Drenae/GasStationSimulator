#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EOSManagers -ObjectName=EUsedPlatform -FallbackName=EUsedPlatform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=JsonUtilities -ObjectName=JsonObjectWrapper -FallbackName=JsonObjectWrapper
#include "AdvertNews.h"
#include "ChangelogNews.h"
#include "DLCNews.h"
#include "NewsfeedFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class GSS2_API UNewsfeedFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNewsfeedFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<FDLCNews> GetDLCNewsFromJson(const FJsonObjectWrapper& JsonObjectWrapper, const EUsedPlatform UsedPlatform);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FChangelogNews> GetChangelogNewsFromJson(const FJsonObjectWrapper& JsonObjectWrapper, const EUsedPlatform UsedPlatform);
    
    UFUNCTION(BlueprintCallable)
    static FAdvertNews GetAdvertNewsFromJson(const FJsonObjectWrapper& JsonObjectWrapper, const EUsedPlatform UsedPlatform);
    
};

