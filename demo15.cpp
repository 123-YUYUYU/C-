#include <iostream>
using namespace std;
class Person
{   //构造函数
    public:
    Person()
    {
        cout << "Person的无参构造函数调用" << endl;
    }
    Person(int a)
    {
        cout << "Person的有参构造函数调用" << endl;
    }
    //拷贝构造函数
    Person(const Person &p)
    {   //将传入的人身上的所有属性，拷贝到我身上
        cout << "Person的拷贝构造函数调用" << endl;

        age =p.age;
    }
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }
    int  age;
};
void test01()
{
    //1.括号法
    // Person p1; //默认构造函数调用
    // Person p2(10);//有参构造函数
    // Person p3(p2);//拷贝构造函数
    //2.显示法
    // Person p1;
    // Person p2 = Person(10); //有参构造
    // Person p3 = Person(p2);  //拷贝构造
    // Person(10);  //匿名对象  特点：当前行执行结束后，系统会立即回收掉匿名对象
    // cout << "aaaaa" << endl;
    //3.隐式转换法
    Person p4 = 10;  //相当于 写了 Person p4 = Person(10);
    Person p5 = p4;
}
int main()
{
    test01();
    system("pause");
    return 0;
}