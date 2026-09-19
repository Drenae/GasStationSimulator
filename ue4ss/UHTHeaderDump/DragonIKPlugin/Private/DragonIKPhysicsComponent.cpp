#include "DragonIKPhysicsComponent.h"

UDragonIKPhysicsComponent::UDragonIKPhysicsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->individual_bone_selection.AddDefaulted(6);
    this->Influence_Stopping_Bones.AddDefaulted(1);
    this->Linear_Strength = 1000;
    this->Angular_Strength = 1000;
    this->Linear_Damp = 5;
    this->Angular_Damp = 5;
    this->use_auto_blending_logic = true;
    this->modify_physics_states = false;
    this->Hit_Enable_Speed = 5;
    this->Hit_Disable_Speed = 1;
    this->hit_delay_time = 1.00f;
}

void UDragonIKPhysicsComponent::ReleaseAllHandles() {
}

void UDragonIKPhysicsComponent::ReGrabAllHandles() {
}

void UDragonIKPhysicsComponent::OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UDragonIKPhysicsComponent::ModifyAllHandleTransforms() {
}

void UDragonIKPhysicsComponent::FirstTimeInitialization(USkeletalMeshComponent* skeleton_input) {
}

void UDragonIKPhysicsComponent::CacheSimulationStates() {
}


