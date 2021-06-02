#include<stdio.h>
void display(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
            printf("%d ",a[i]);
}
void accept(int a[100],int n)
{
    int i;
    printf("Enter the values of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
}
void delete_array_pos(int a[100],int n)
{
    int init_start,pos_term,i,pos,elem;
    printf("Enter the position of element to be deleted \n");
    scanf("%d",&pos);

    if(pos>=0 && pos<n)
    {
        init_start=pos;
        pos_term=n;
        while(1)
        {
            a[init_start]=a[init_start+1];
            init_start++;
            if(init_start==pos_term-1)
                break;
        }
        elem=a[pos];
        n--;
        printf("Your new array is\n");
        display(a,n);
        
    }
    else
    {
        printf("Enter the position whithin range\n");
    }
    
}
int main()
{
    int a[100],i,b,n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    accept(a,n);
    delete_array_pos(a,n);
}
