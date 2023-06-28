#include <iostream>
using namespace std;

int & test_01()
{
    int a = 10;   //局部变量存放在四区中 栈区
    return a;
}

int & test_02()
{
    static int b = 10;    //静态变量，存放在全局区，全局区上的数据在程序结束后系统释放掉
    return b ;

}
int main()
{
    //int&ref = test_01();
    //cout << "ref =  " << ref << endl;  因为a的内存已经释放

    int &ref = test_02();
    cout << "ref  " << ref << endl;
    system("pause");
    return 0;
}