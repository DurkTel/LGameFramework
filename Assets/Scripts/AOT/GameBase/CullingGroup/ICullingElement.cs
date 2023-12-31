namespace LGameFramework.GameBase.Culling
{
    public interface ICullingElement
    {
        /// <summary>
        /// Ïà»ú²ÃÇÐ°ë¾¶
        /// </summary>
        float CullingRadius { get; }
        /// <summary>
        /// ²ÃÇÐlod
        /// </summary>
        int CullingLod { get; }

        ObjectCullingGroup OCullingGroup { get; set; }

        void OnCullingVisible(bool value);

        void OnCullingDistance(int lod, int lodMax);

    }
}
