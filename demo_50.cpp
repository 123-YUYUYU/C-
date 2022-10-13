#include <string.h>
#include <iostream>
using namespace std;
int *func()
{
    //在堆区创建整形数据
    //new返回是 该数据类型的指针、
    int * p = new int(10);
    return p;
}

void test1()
{
    int * p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    delete p;
    cout << *p << endl;
    cout << p << endl;


}

void test2()
{
    int * arr  = new int[10];
    for(int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;  //给十个元素赋值    
    }
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    delete[] arr;
    //释放堆栈数组
    //释放数组的时候，要加[]才可以
}

int main()
{
    //test1();
    test2();

}