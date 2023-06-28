#include "iostream"
using namespace std;

class Person
{
public:
    static int m_b;
private:

    static int m_a; 
};
int Person::m_a = 100;  
int Person::m_b = 100;  

void test01()
{
    Person p;
    cout << p.m_a << end1;
    Person p;
    cout << p.m_b << endl;
}
int main()
{
    test01();
    system("pause");    
    return 0;
}