#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout <<"请输入小猪a的体重: " <<endl;
    cin >> a;
    cout <<"请输入小猪b的体重: " <<endl;
    cin >> b;
    cout <<"请输入小猪c的体重: " <<endl;
    cin >> c;
    if(a > b)
    {
        if(a > c)
        {
            cout << "a最重" << endl;
        }
        if(c > a)
        {
            cout << "c最重" << endl;
        }
    }
    else 
    {
        if(b > c)
        {
            cout << "b最重" << endl;
        }
        if(c > b) 
        {
            cout << "c最重" << endl;
        }
    }
    system("pause");
}
