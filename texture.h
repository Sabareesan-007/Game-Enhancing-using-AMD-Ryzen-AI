#include "Engine/Texture2D.h"
#include "Materials/MaterialInstanceDynamic.h"

void AYourGameMode::BeginPlay()
{
    Super::BeginPlay();

    UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(YourMaterial, this);
    DynamicMaterial->SetTextureParameterValue(FName("YourTextureParameter"), YourTexture);

    // Apply material to your mesh
    YourMeshComponent->SetMaterial(0, DynamicMaterial);
}
