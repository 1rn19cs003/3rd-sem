#include<stdio.h>
#include<string.h>
struct first
{
    int eid ;
    char ename[20];
    int eage;
    float esalary;
};
typedef struct first N;
void accept(N*e1,int n)
{
    printf("Enter the data of employe as ID ,Name ,Age ,Salary \n");
    for(int i=0;i<n;i++)
        scanf("%d%s%d%f",&e1[i].eid,e1[i].ename,&e1[i].eage,&e1[i].esalary);
}
void display(N*e1,int n)
{
    printf("\n---------details you enterd ------------\n\n");

    for(int i=0;i<n;i++)
        printf("ID = %d Name = %s Age = %d salary = %f\n",e1[i].eid,e1[i].ename,e1[i].eage,e1[i].esalary);
}
int main()
{
    N e1[10];
    int n;
    printf("Enter the number employe\n");
    scanf("%d",&n);
    accept(e1,n);
    display(e1,n);
}
