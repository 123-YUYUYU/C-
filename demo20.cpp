#include <iostream>
using namespace std;

class Calculator 
{
public:
    int getResult(string oper)
    {
        if(oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if(oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if(oper == "*")
        {
            return m_Num1 * m_Num2;
        }
    }
    int m_Num1;
    int m_Num2;
};

void test01()
{
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 5;

    cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
    cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
    cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}

class AbstactCalculator 
{
public:
    virtual int getResult()
    {
        return 0;
    }
    int m_Num1;
    int m_Num2;

};
class AddCalculator : public AbstactCalculator
{
public:
    int getResult()
    {
        return m_Num1 + m_Num2;
    }     

};
class Subculator : public AbstactCalculator
{
public:
    int getResult()
    {
        return m_Num1 - m_Num2;
    }     

};
class MulCalculator : public AbstactCalculator
{
public:
    int getResult()
    {
        return m_Num1 * m_Num2;
    }     

};
void test02()   
{
    //多态的使用条件
    //父类指针或者引用指向子类对象

    //加法运算
    AbstactCalculator *abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;

    cout << abc->m_Num1 << "+" << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;

    abc = new Subculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1 << "-" << abc->m_Num2 << " = " << abc->getResult() << endl;
    
    delete abc; 
    abc = new MulCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1 << "*" << abc->m_Num2 << " = " << abc->getResult() << endl;
}
int main()
{
    test02();
    system("pause");
    return 0;
}