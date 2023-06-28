#include <iostream>
#include <string.h>
using namespace std;
const double PI = 3.1415926;

class Circle
{
    //访问权限 
    public:     //公共权限
    //属性
    string M_name;  
    int M_Id;    //学号

    //半径
    int m_r; 

    //行为
    //获取圆的周长
    void showStudent()
    {
        cout << "姓名： " << M_name << M_Id << endl;
    }

    double CALCULATEzc()
    {
        return 2 * PI *m_r;    }
};  
int main()
{
    //创建一个具体的学生 实例化对象
 
    //通过圆类 创建具体的圆（对象） 
    //实例化（通过一个类， 创建一个对象的过程）
    Circle cl;
    //給圆对象 的属性进行赋值
    cl.m_r = 10;
    //2 * PI *10 = 62.8
    cout << "圆的周长为： " << cl.CALCULATEzc() << endl; 

    system("pause");
    return 0;
}