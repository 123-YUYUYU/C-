#include <iostream>
using namespace std;

class Person
{
    public:
    Person()
    {
        cout << "Person的默认构造函数调用" << endl;

    }
    Person(int age)
    {
        m_Age = age;
        cout << "Person的有参构造函数调用" << endl;
    }
    Person(const Person &p)
{

}
    ~Person()
    {
        cout << "Person的默认构析构函数调用" << endl;
    }
    int m_Age;
};
void test21()
{
    Person p;
    p.m_Age = 18;

    Person p2(p);
    cout << "P2的年龄为:  " << p2.m_Age << endl;
}
int main()
{
    system("pause");
    return 0;
}