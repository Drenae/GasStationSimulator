#include "WashableCarMesh.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AWashableCarMesh::AWashableCarMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CarWashMesh"));
    this->RandomCoatVal = 0.00f;
    this->RenderTargetData = NULL;
    this->CarWashMesh = (UStaticMeshComponent*)RootComponent;
    this->LowResDirtMapCaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("LowResSceneCapture"));
    this->LowResDirtMapPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LowResPlane"));
    this->CheckWashProgressResolution = 20;
    this->CarWashPercentTarget = 0.60f;
    this->WashProgressCheckSecondsInterval = 1.00f;
    this->bUseCachedMainMaterialOnStartWashing = false;
    this->CachedMainMaterial = NULL;
    this->DynamicMaterialForWashing = NULL;
    this->DynamicMaterialForCalculating = NULL;
    this->DynamicBrushMaterialInstance = NULL;
    this->DynamicBrushMaterialInstance1 = NULL;
    this->DynamicBrushMaterialInstance2 = NULL;
    this->DynamicBrushMaterialInstance3 = NULL;
    this->DynamicBrushMaterialInstance4 = NULL;
    this->DynamicBrushMaterialInstance5 = NULL;
    this->DynamicBrushMaterialInstance6 = NULL;
    this->DynamicBrushMaterialInstance7 = NULL;
    this->DynamicBrushMaterialInstance8 = NULL;
    this->DynamicBrushMaterialInstance9 = NULL;
    this->MainMaterialIndex = 0;
    this->DynamicBrushMaterialTemp = NULL;
    this->TimeSinceCheck = 0.00f;
    this->LowResDirtMapCaptureComponent->SetupAttachment(RootComponent);
    this->LowResDirtMapPlane->SetupAttachment(RootComponent);
}

float AWashableCarMesh::GetWashProgress() const {
    return 0.0f;
}

UMaterialInstanceDynamic* AWashableCarMesh::GetWashedMaterial() {
    return NULL;
}

int32 AWashableCarMesh::GetMainMaterialIndex() const {
    return 0;
}

UMaterialInterface* AWashableCarMesh::GetMainMaterial() {
    return NULL;
}

UStaticMeshComponent* AWashableCarMesh::GetCarWashMesh() {
    return NULL;
}

UMaterialInterface* AWashableCarMesh::GetCachedMainMaterial() {
    return NULL;
}

void AWashableCarMesh::CalculateWashProgress() {
}

void AWashableCarMesh::ApplyBrushWashes(const TArray<FVector2D>& WashUvs) {
}


