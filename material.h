#include "Materials/MaterialInstanceDynamic.h"

void AYourActor::ApplyDynamicMaterial(UMaterial* BaseMaterial)
{
    if (BaseMaterial)
    {
        UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(BaseMaterial, this);
        DynamicMaterial->SetScalarParameterValue(FName("YourParameterName"), 1.0f);

        UStaticMeshComponent* MeshComponent = FindComponentByClass<UStaticMeshComponent>();
        if (MeshComponent)
        {
            MeshComponent->SetMaterial(0, DynamicMaterial);
        }
    }
}
