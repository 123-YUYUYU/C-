#include <iostream>
#include <string>
using namespace std;
int main()
{
    //引用基础语法
    //数据类型 &别名 = 原名

    int a = 10;
    //创建别名
    int &b = a;
    cout << "a =  " << a << endl;
    cout << "b =  " << b << endl;

    b = 100;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    system("pause");
    return 0;
}
