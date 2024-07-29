#include "YourGameMode.h"
#include "Engine/StaticMeshActor.h"

void AYourGameMode::BeginPlay()
{
    Super::BeginPlay();

    if (StaticMeshActorClass)
    {
        AStaticMeshActor* MeshActor = GetWorld()->SpawnActor<AStaticMeshActor>(StaticMeshActorClass, FVector(0, 0, 0), FRotator(0, 0, 0));
    }
}
