#include<stdio.h>
void accept(int a[10],int n)
{
    int i;
    printf("enter the values of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
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
    searched(a,n);// sending address of the a,n,b to search the ith location in searched function
    return 0;
}