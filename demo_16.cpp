#include <iostream>
using namespace std;
class Person
{
    public:
    Person()
    {
        cout << "Person默认构造函数调用" << endl;
    }
    Person(int age)
    {
        cout << "Person有参构造函数调用" << endl;
        m_Age = age; 
    }
    Person(const Person& p)
    {
        cout << "Person拷贝构造函数调用" << endl;
        m_Age = p.m_Age;
    }
    ~Person()
    {
        cout << "Person析构函数调用" << endl;
    }
    int m_Age;
};
void test01()
{
    Person p1(20);
    Person p2(p1);
    cout << "P2的年龄为:  " << p2.m_Age << endl; 
}
void doWork(Person p)
{

}

void test02()
{
    Person p;
    doWork(p); 
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}