#include<iostream>
using namespace std;
#include<string>
//类对象作为类成员
class Phone
{
    public:
    Phone(string pName)
    {
        cout << "Phone的构造函数调用" << endl;
        m_PName = pName;
    }
    //手机品牌名称
    string m_PName;
     
};
class Person  //人类
{   
    public:
    Person(string name, string pName):m_Name(name), m_Phone(pName)  //
    {  
        cout << "Person的构造函数调用" << endl;
    }
    int Phone;
    //性别

    string m_Name;
    //手机
    Phone m_Phone;
};
void test01()
{
    Person p("张三","苹果MAX");

    cout << p.m_Name << "拿着" << p.m_Phone.m_Name;
}
int main()
{
    test01();

    return 0;


}