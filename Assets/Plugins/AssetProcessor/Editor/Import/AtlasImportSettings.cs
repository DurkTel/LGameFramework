using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class AtlasImportSettings : AssetPostprocessor
{
    void OnPostprocessTexture(Texture2D texture)
    {
        //TextureImporter import = assetImporter as TextureImporter;
        //if (!import) return;

        //string path = AssetDatabase.GetAssetPath(import);
        //if (!path.Contains(@"Assets/ArtModules"))
        //    return;

        //import.textureType = TextureImporterType.Sprite;

        //TextureImporterSettings ts = new TextureImporterSettings();
        //import.ReadTextureSettings(ts);
        //if (ts.spriteMeshType != SpriteMeshType.FullRect)
        //{
        //    ts.spriteMeshType = SpriteMeshType.FullRect;
        //    import.SetTextureSettings(ts);
        //}

        //import.SaveAndReimport();


    }
}
