#include <iostream>
#include <string.h>
using namespace std;
const double PI = 3.1415926;

class Circle
{
    //����Ȩ�� 
    public:     //����Ȩ��
    //����
    string M_name;  
    int M_Id;    //ѧ��

    //�뾶
    int m_r; 

    //��Ϊ
    //��ȡԲ���ܳ�
    void showStudent()
    {
        cout << "������ " << M_name << M_Id << endl;
    }

    double CALCULATEzc()
    {
        return 2 * PI *m_r;    }
};  
int main()
{
    //����һ�������ѧ�� ʵ��������
 
    //ͨ��Բ�� ���������Բ������ 
    //ʵ������ͨ��һ���࣬ ����һ������Ĺ��̣�
    Circle cl;
    //�oԲ���� �����Խ��и�ֵ
    cl.m_r = 10;
    //2 * PI *10 = 62.8
    cout << "Բ���ܳ�Ϊ�� " << cl.CALCULATEzc() << endl; 

    system("pause");
    return 0;
}