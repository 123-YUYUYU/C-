#include <iostream>
using namespace std;
class Person
{   //���캯��
    public:
    Person()
    {
        cout << "Person���޲ι��캯������" << endl;
    }
    Person(int a)
    {
        cout << "Person���вι��캯������" << endl;
    }
    //�������캯��
    Person(const Person &p)
    {   //������������ϵ��������ԣ�������������
        cout << "Person�Ŀ������캯������" << endl;

        age =p.age;
    }
    ~Person()
    {
        cout << "Person��������������" << endl;
    }
    int  age;
};
void test01()
{
    //1.���ŷ�
    // Person p1; //Ĭ�Ϲ��캯������
    // Person p2(10);//�вι��캯��
    // Person p3(p2);//�������캯��
    //2.��ʾ��
    // Person p1;
    // Person p2 = Person(10); //�вι���
    // Person p3 = Person(p2);  //��������
    // Person(10);  //��������  �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
    // cout << "aaaaa" << endl;
    //3.��ʽת����
    Person p4 = 10;  //�൱�� д�� Person p4 = Person(10);
    Person p5 = p4;
}
int main()
{
    test01();
    system("pause");
    return 0;
}