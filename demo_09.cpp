#include <iostream>
using namespace std;

void showValue(const int &val)
{
    // val = 1000;
    cout << "val =  " << val << endl;
}   
void fun_c(int a  ,int)  //占位
{
    cout << "this is func" << a << endl;
}
//函数重载的满足条件
//1.同一作用域下
//2.函数名称相同
//3.函数参数类型不同，或者个数不同，或者顺序不同
// void func()
// {
//     cout << "func的调用" << endl;
// }

// void func(int a)
// {
//     cout << "func的调用!" << endl;

// }
void func( int &a)
{
    cout << "func (int &a)调用" << endl;
}
void func(const int &a)
{
    cout << "func(const int &a)调用" << endl;
}
int main()
{
    //常量引用
    //使用场景：用来修饰形参，防止误操作
    //加上const 之后，编译器将代码修改 int temp = 10; const & ref =temp;
    //const int & ref = 10; //引用必须引一块合法的内存空间 
    int a = 100;
    showValue(a);
    cout << "a = " << a << endl; 
    return 0;
}