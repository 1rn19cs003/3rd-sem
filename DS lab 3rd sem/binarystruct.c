/*#include<stdio.h>
void searched(int a[10],int n)
{
    int f,l,m,elem;
    f=0;
    l=n;
    printf("Enter element to be searched\n");
    scanf("%d",&elem);
    while(1)
    {
        m=(f+l)/2;
        if(a[m]==elem)
        {
            printf("Element is found pos in %d",m);
            return;
        }
        else if(f>=l)
        {
            printf("Item not found\n");
            return;
        }
        else if(elem>a[m])
        {
            f=m+1;
            return;
        }
        else 
            l=m-1;
    }
}
int main()
{
    int a[10],i,b,n;
    printf("enter the length of the array\n");
    scanf("%d",&n);
    accept(a,n);// sending address of the a and n to take the array in accept function
    searched(a,n);// sending address of the a,n to search the ith location in searched function
    return 0;
}*/
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
void binary(N*e,int n)
{
    printf("Enter the first and last term of array\n");
    int f,l,m;
    scanf("%d %d",&)
    m=(f+l)/22
}

int main()
{
    N e[10];
    int n;
    printf("Enter the number employe\n");
    scanf("%d",&n);
    accept(e,n);
    binary(e,n);    
    display(e,n);
}
