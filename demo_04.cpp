#include <iostream>
using namespace std;
//英雄的结构体
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
            //如果b下标的元素年龄 大于 b+1下标的元素的年龄，交换两个元素
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
        cout << "英雄： " << heroArray[i].name << "  年龄： " << heroArray[i].age << " 姓名： " << heroArray[i].sex << endl;
    }
}
int main()
{
    struct HERO heroArray[5] = 
    {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"},
    };
    int len = sizeof(heroArray) / sizeof(heroArray[0]);
    bubleSort(heroArray , len);
    printHero(heroArray, len);
    system("pause");
    return 0;
}