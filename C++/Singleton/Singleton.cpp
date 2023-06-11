#include <iostream>
using namespace std;

class Singleton
{
    public:
    static Singleton & GetInstance()
    {
        cout << "Singleton GetInstance" << endl;
        if (m_pSingelton == nullptr)
        {
            m_pSingelton = new Singleton();
        }
        return *m_pSingelton;
    }
    static void DeleteInstance()
    {
        cout << "Singleton DeleteInstance" << endl;
        delete m_pSingelton;
        m_pSingelton = nullptr;
    }
    ~Singleton()
    {
        cout << "Singleton : Destructor" << endl;
    }

    // deleting copy constructor
    Singleton(const Singleton& obj)= delete;

    //Singletons should not be assignable.
    void operator=(const Singleton &) = delete;
    
    private:
    // private constructor so that no one can initialize the object outside directly
    Singleton()
    {
        cout << "Singelton : Constructor" << endl;
    }

    static Singleton * m_pSingelton;
    protected:
};

Singleton * Singleton::m_pSingelton = nullptr;

int main()
{
    Singleton &pSingelton = Singleton::GetInstance();
    Singleton::DeleteInstance();
    
    return 0;
}
