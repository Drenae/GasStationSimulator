#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "SceneComponent.h"
#include "VolumetricCloudComponent.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVolumetricCloudComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float LayerBottomAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float LayerHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TracingStartMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TracingMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PlanetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FColor GroundAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePerSampleAtmosphericLightTransmittance: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkyLightCloudBottomOcclusion;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewSampleCountScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReflectionSampleCountScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowViewSampleCountScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowReflectionSampleCountScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowTracingDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopTracingTransmittanceThreshold;
    
    UVolumetricCloudComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetViewSampleCountScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTracingStartMaxDistance(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTracingMaxDistance(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStopTracingTransmittanceThreshold(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyLightCloudBottomOcclusion(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowViewSampleCountScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowTracingDistance(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowReflectionSampleCountScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetReflectionSampleCountScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPlanetRadius(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterial(UMaterialInterface* NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLayerHeight(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLayerBottomAltitude(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGroundAlbedo(FColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetbUsePerSampleAtmosphericLightTransmittance(bool NewValue);
    
};

