#include "AirplaneHoleComponent.h"

UAirplaneHoleComponent::UAirplaneHoleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HoleEdge1 = NULL;
    this->HoleEdge2 = NULL;
    this->HoleEdge3 = NULL;
    this->HoleEdge4 = NULL;
    this->HoleEdge5 = NULL;
    this->HoleEdges = 4;
}


