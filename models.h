#include "Engine/StaticMesh.h"
#include "Engine/StaticMeshComponent.h"

void AYourActor::SetLODs(UStaticMesh* Mesh)
{
    if (Mesh)
    {
        UStaticMeshComponent* MeshComponent = FindComponentByClass<UStaticMeshComponent>();
        if (MeshComponent)
        {
            MeshComponent->SetStaticMesh(Mesh);
            // Set LODs programmatically if needed
        }
    }
}
