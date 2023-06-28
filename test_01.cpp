#include <iostream>
using namespace std;
class Cube
{
    protected:
        int m_L;
        int m_H;
        int m_W;
    
    public:
    int set_m_L(int L)
    {
        m_L = L;
    }
    int set_m_H(int H)
    {
        m_H = H;
    }
    int set_m_W(int W)
    {
        m_W = W;
    }
    int get_S()
    {
        return (m_L *m_H +m_H * m_W+m_W*m_L)*2 ;
    }
    int get_V()
    {
        return m_L *m_H *m_W ;
    }
            


};

int main()
{
    Cube c;
    c.set_m_H(5);
    c.set_m_W(5);
    c.set_m_L(5);
    int temp = c.get_S() ;
    cout << "立方体的面积为： " << c.get_S() << endl;
    cout << "立方体的体积为： " << c.get_V() << endl;

    system("pause");
    return 0;
}