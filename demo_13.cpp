#include <iostream>
using namespace std;
class Person
{
    public:
   
    void setName(string name)
    {   //д����
        m_Name = name;
    }

    string getName()
    {
        return m_Name;
    }

    int getAge()
{
    // m_Age = 18;  //��ʼ��Ϊ18��
    return m_Age;
}
    //��������
    void setAge(int age)
    {
        m_Age = age;
    }
void setLover(string lover)
{
    m_lover = lover;
}
    
    private:
    //����   �ɶ���д
    string m_Name;
    //����    ֻ��
    int m_Age;
    //girl firend ֻд
    string m_lover;

};

int main()
{
    Person p;
    p.setName("�̹���");
    cout << "����Ϊ�� " << p.getName() << endl;
    p.setAge(3);
    cout << "����Ϊ�� " <<p.getAge() << endl;

    p.setLover("��ʲô�ظ���û��");

    system(" pause");
    return 0;

}