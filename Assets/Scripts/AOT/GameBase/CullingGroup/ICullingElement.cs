namespace LGameFramework.GameBase.Culling
{
    public interface ICullingElement
    {
        /// <summary>
        /// ������а뾶
        /// </summary>
        float CullingRadius { get; }
        /// <summary>
        /// ����lod
        /// </summary>
        int CullingLod { get; }

        ObjectCullingGroup OCullingGroup { get; set; }

        void OnCullingVisible(bool value);

        void OnCullingDistance(int lod, int lodMax);

    }
}
