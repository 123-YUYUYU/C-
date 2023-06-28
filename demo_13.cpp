#include <iostream>
using namespace std;
class Person
{
    public:
   
    void setName(string name)
    {   //写姓名
        m_Name = name;
    }

    string getName()
    {
        return m_Name;
    }

    int getAge()
{
    // m_Age = 18;  //初始化为18岁
    return m_Age;
}
    //设置年龄
    void setAge(int age)
    {
        m_Age = age;
    }
void setLover(string lover)
{
    m_lover = lover;
}
    
    private:
    //姓名   可读可写
    string m_Name;
    //年龄    只读
    int m_Age;
    //girl firend 只写
    string m_lover;

};

int main()
{
    Person p;
    p.setName("蔡国赐");
    cout << "姓名为： " << p.getName() << endl;
    p.setAge(3);
    cout << "年龄为： " <<p.getAge() << endl;

    p.setLover("想什么呢根本没有");

    system(" pause");
    return 0;

}