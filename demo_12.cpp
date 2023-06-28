#include <iostream>
using namespace std;    


class Person
{   
    public:
    string m_Name;   //姓名
    //公共权限
    protected:
    string m_car;  //汽车
    //保护权限
    private:
    int m_Password;   //银行卡密码
    public:
    void func()
    {
        m_Name = "张三";
        m_car = "拖拉机";
        m_Password = 123456;
    }
};

int main()
{
    //实例化具体对象
    Person pl;
    pl.m_Name = "蔡国赐";
    // pl.m_car = "奔驰"; //不可以访问哦
    pl.func();
    system("pause");
    return 0;
}