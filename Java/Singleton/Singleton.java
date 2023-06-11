public class Singleton
{
    static private Singleton m_Singleton;
    private int _data;
    static public Singleton GetInstance()
    {
        System.out.println("Singleton GetInstance");
        if (m_Singleton == null)
        {
            m_Singleton = new Singleton();
        }
        return m_Singleton;
    }

    void setdata(int data)
    {
        _data = data;
    }

    int getdata()
    {
        return _data;
    }

    private Singleton()
    {
        System.out.println("Singleton Constructor");
    }
    public static void main(String[] args)
    {
        Singleton singleton1 = Singleton.GetInstance();
        singleton1.setdata(5);
        System.out.println("Set data: 5");

        Singleton singleton2 = Singleton.GetInstance();
        System.out.println("Get data: " +singleton2.getdata());
        return;
    }
}