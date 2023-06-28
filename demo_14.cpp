#include <iostream>
using namespace std;
class Person
{
    public:
        //构造函数
        Person()  
        {
            cout << "Person构造函数的调用" << endl;
        }
        //析构函数
        ~Person()
        {
            cout << "Person的析构函数调用" << endl;
        }
};

void test01()
{
    Person p;
}
int main()
{ 
    test01();
    system("pause");
}