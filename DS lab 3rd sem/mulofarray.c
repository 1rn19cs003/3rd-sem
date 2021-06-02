#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void display(int a[],int n)
{
       int i;
    for(i=0;i<n;i++)
            printf("%d ",a[i]);

}
void add(int a[],int n)
{
        int init_start,pos_term,i,pos,elem;
    printf("Enter the position of element to be inserted \n");
    scanf("%d",&pos);
    printf("Enter the element to be inserted\n");
    scanf("%d",&elem);
    if(pos>=0 && pos<n)
    {
        init_start=n;
        pos_term=pos;
        while(1)
        {
            a[init_start]=a[init_start-1];
            init_start--;
            if(init_start==pos)
                break;
        }
        a[pos]=elem;
        n++;
        printf("Your new array is\n");
       display(a,n);
        
    }
    else
    {
        printf("Enter the position whithin range\n");
    }
    

}
void delete(int a[],int n)
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
void accept(int a[],int n)
{
    int i;
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void select(int a[],int n,int p)
{
    switch (p)
    {
    case 1: accept(a,n);
            break;
    case 2: add(a,n);
            break;
    case 3: delete(a,n);
            break;
    //case 4:dispaly(a,n);
        //    break;
    default: printf("Enter the value within range\n");
        break;
    }
}
int main()
{
    int a[100],i,p,n,q;
    printf("Enter the length of array\n");
    scanf("%d",&n);
    printf("Enter the operation to be performed\n 1.Accept the array\n 2.Accept elements in specific position\n 3.Delete elements from specific position\n 4.Sisplay numbers \n");
    scanf("%d",&p);
    select(a,n,p);
    //display(a,n);
    return 0;
}