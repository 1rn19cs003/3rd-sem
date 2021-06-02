#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct first
{
    int eid;
    char ename[20];
    int eage;
    float esalary;
};
typedef struct first N;
void accept(N *e,int n)
{
    printf("Enter the data of employe as ID ,Name ,Age ,Salary \n");
    for(int i=0;i<n;i++)
        scanf("%d%s%d%f",&e[i].eid,e[i].ename,&e[i].eage,&e[i].esalary);
}
void display(N*e,int n)
{
    printf("\n---------details you enterd ------------\n\n");
    for(int i=0;i<n;i++)
        printf("ID = %d Name = %s Age = %d salary = %f\n",e[i].eid,e[i].ename,e[i].eage,e[i].esalary);
}

/*void bubble(N*e,int n)
{
    int i,j;
    N temp;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if(e[j].eid>e[j+1].eid)
            {
                temp=e[j+1];
                e[j+1]=e[j];
                e[j]=temp;
            }
        }
    }
}*/
int main()
{
    N e[10];
    int n;
    printf("Enter the number employe\n");
    scanf("%d",&n);
    accept(e,n);
    linear(e,n);
    //bubble(e,n);
    display(e,n);
}
