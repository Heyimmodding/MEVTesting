#include "CustomObjectAttackerPositioning.h"

UCustomObjectAttackerPositioning::UCustomObjectAttackerPositioning(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FreePositions.AddDefaulted(32);
    this->FlyingFreePositions.AddDefaulted(32);
    this->Health = NULL;
}


