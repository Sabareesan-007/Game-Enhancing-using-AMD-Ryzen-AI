#include "Engine/Texture2D.h"

void UYourAssetManager::CompressTexture(UTexture2D* Texture)
{
    if (Texture)
    {
        Texture->CompressionSettings = TC_Default;
        Texture->MipGenSettings = TMGS_FromTextureGroup;
        Texture->PostEditChange();
    }
}
