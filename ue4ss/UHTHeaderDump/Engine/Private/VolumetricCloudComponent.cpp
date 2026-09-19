#include "VolumetricCloudComponent.h"

UVolumetricCloudComponent::UVolumetricCloudComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LayerBottomAltitude = 5.00f;
    this->LayerHeight = 10.00f;
    this->TracingStartMaxDistance = 350.00f;
    this->TracingMaxDistance = 50.00f;
    this->PlanetRadius = 6360.00f;
    this->bUsePerSampleAtmosphericLightTransmittance = false;
    this->SkyLightCloudBottomOcclusion = 0.50f;
    this->ViewSampleCountScale = 1.00f;
    this->ReflectionSampleCountScale = 1.00f;
    this->ShadowViewSampleCountScale = 1.00f;
    this->ShadowReflectionSampleCountScale = 1.00f;
    this->ShadowTracingDistance = 15.00f;
    this->StopTracingTransmittanceThreshold = 0.00f;
}

void UVolumetricCloudComponent::SetViewSampleCountScale(float NewValue) {
}

void UVolumetricCloudComponent::SetTracingStartMaxDistance(float NewValue) {
}

void UVolumetricCloudComponent::SetTracingMaxDistance(float NewValue) {
}

void UVolumetricCloudComponent::SetStopTracingTransmittanceThreshold(float NewValue) {
}

void UVolumetricCloudComponent::SetSkyLightCloudBottomOcclusion(float NewValue) {
}

void UVolumetricCloudComponent::SetShadowViewSampleCountScale(float NewValue) {
}

void UVolumetricCloudComponent::SetShadowTracingDistance(float NewValue) {
}

void UVolumetricCloudComponent::SetShadowReflectionSampleCountScale(float NewValue) {
}

void UVolumetricCloudComponent::SetReflectionSampleCountScale(float NewValue) {
}

void UVolumetricCloudComponent::SetPlanetRadius(float NewValue) {
}

void UVolumetricCloudComponent::SetMaterial(UMaterialInterface* NewValue) {
}

void UVolumetricCloudComponent::SetLayerHeight(float NewValue) {
}

void UVolumetricCloudComponent::SetLayerBottomAltitude(float NewValue) {
}

void UVolumetricCloudComponent::SetGroundAlbedo(FColor NewValue) {
}

void UVolumetricCloudComponent::SetbUsePerSampleAtmosphericLightTransmittance(bool NewValue) {
}


