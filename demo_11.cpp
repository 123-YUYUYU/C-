#include <iostream>
using namespace std;    
class Student
{
    public :  //����Ȩ��
    //���е����Ժ���Ϊ ����ͳһ��Ϊ ��Ա
    //����  ��Ա���� ��Ա����
    //��Ϊ  ��Ա���� ��Ա����
    

    //����
    string m_name;   //����
    int m_id;        //ѧ��

    //��Ϊ
    //��ʾ������ѧ��
    void showStudent()
    {
        cout << "������ " << m_name << "ѧ�ţ� " << m_id << endl;
    }
    //��������ֵ
    void setName(string name)
    {
        m_name = name;
    }
    //��ѧ�Ÿ�ֵ
    void setId(int id)
    {
        m_id = id;
    }
};
int main()
{ 
    //����һ������ѧ��   ʵ��������
    Student s1;
    //��s1���� �������Ը�ֵ����
    s1.m_name = "����"; 
    s1.m_id = 1;
    //��ʾѧ����Ϣ
    s1.showStudent();

    Student s2;
    s2.m_name = "����";
    s2.m_id = 2;
    s2.showStudent();
    system("pause");
    return 0;
}