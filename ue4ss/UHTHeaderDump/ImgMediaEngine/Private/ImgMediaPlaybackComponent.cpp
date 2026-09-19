#include "ImgMediaPlaybackComponent.h"

UImgMediaPlaybackComponent::UImgMediaPlaybackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Width = -1.00f;
    this->LODBias = 0.00f;
}


