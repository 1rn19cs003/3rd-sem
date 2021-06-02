#include<stdio.h>
void accept(int *a,int *n)
{
    int i;
    printf("enter the values of the array\n");
    for(i=0;i<*n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void searched(int *a,int *n,int *b)
{
    int i;
    for(int i=0;i<*n;i++)
    {
        if(a[i]==*b)
        {
            printf("element is found at %d\n",i);
            return;
        }       
    }
    printf("element not found\n");
}
int main()
{
    int a[100],i,b,n;
    printf("enter the length of the array\n");
    scanf("%d",&n);
    accept(a,&n);// sending address of the a and n to take the array in accept function
    printf("elements to be searched\n");
    scanf("%d",&b);
    searched(a,&n,&b);// sending address of the a,n,b to search the ith location in searched function
    return 0;
}