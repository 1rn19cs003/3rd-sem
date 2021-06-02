#include<stdio.h>
#include<string.h>
struct first
{
    char name[20];
    int age;
    float salary;
};
typedef struct first N;
int main()
{
    N e1[10];
    int n=3;
    for(int i=0;i<n;i++)
        scanf("%s%d%f",e1[i].name,&e1[i].age,&e1[i].salary);

        printf("\n---------details you enterd ------------\n");

    for(int i=0;i<n;i++)
        printf("%s %d %f\n",e1[i].name,e1[i].age,e1[i].salary);
}
