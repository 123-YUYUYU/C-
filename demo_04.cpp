#include <iostream>
using namespace std;
//Ӣ�۵Ľṹ��
struct HERO
{
    string name;
    int age;
    string sex;

};

void bubleSort(struct HERO heroArray[], int len )
{
    for(int a = 0; a < len - 1; a++)
    {
        for(int b = 0; b < len - 1 - a; b++)
        {
            //���b�±��Ԫ������ ���� b+1�±��Ԫ�ص����䣬��������Ԫ��
            if(heroArray[b].age > heroArray[b+1].age)
            {
                struct HERO temp = heroArray[b];
                heroArray[b] = heroArray[b + 1];
                heroArray[b + 1] =  temp ;

                
            }
        }
    }
}
void printHero(struct HERO heroArray[], int len)
{
     for(int i=0; i<len; i++)
    {
        cout << "Ӣ�ۣ� " << heroArray[i].name << "  ���䣺 " << heroArray[i].age << " ������ " << heroArray[i].sex << endl;
    }
}
int main()
{
    struct HERO heroArray[5] = 
    {
        {"����",23,"��"},
        {"����",22,"��"},
        {"�ŷ�",20,"��"},
        {"����",21,"��"},
        {"����",19,"Ů"},
    };
    int len = sizeof(heroArray) / sizeof(heroArray[0]);
    bubleSort(heroArray , len);
    printHero(heroArray, len);
    system("pause");
    return 0;
}