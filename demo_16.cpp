#include <iostream>
using namespace std;
class Person
{
    public:
    Person()
    {
        cout << "PersonĬ�Ϲ��캯������" << endl;
    }
    Person(int age)
    {
        cout << "Person�вι��캯������" << endl;
        m_Age = age; 
    }
    Person(const Person& p)
    {
        cout << "Person�������캯������" << endl;
        m_Age = p.m_Age;
    }
    ~Person()
    {
        cout << "Person������������" << endl;
    }
    int m_Age;
};
void test01()
{
    Person p1(20);
    Person p2(p1);
    cout << "P2������Ϊ:  " << p2.m_Age << endl; 
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