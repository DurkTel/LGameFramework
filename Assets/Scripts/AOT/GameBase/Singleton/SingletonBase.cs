

//单例基类，继承该基类可实现单例
public class SingletonBase<T> where T : new()
{
    private static T m_Instance;

    public static T instance
    {
        get
        {
            if (m_Instance == null)
                m_Instance = new T();
            return m_Instance;
        }
    }
}

