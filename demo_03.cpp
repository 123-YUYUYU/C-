#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    for(int i = 0; i <= 9; i++)
    {
        cout << i << endl;
        for(int j = 0; j <= i;j++)
        {
            // int a;
            // a = i * j ;
            cout << j << "*" << i << "=" << i * j << "    ";
        }
    }
    srand((unsigned int)time(NULL));
    system("pause");
}