#include<stdio.h>
void display(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
void accept(int a[100],int n)
{
    int i;
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int inser_elem(int a[100],int n)
{
    int init_start,pos_term,elem,pos;
    printf("enter the elemnt and the position where it should be inserted\n");
    scanf("%d%d",&elem,&pos);
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
        printf("your array is:\n");
        display(a,n);
    }
    else
    {
        printf("enetr the position within the range\n");
    }
    return n;
}
int delet_term(int a[100], int n)
{
    int pos_term,init_start,pos,elem;
    printf("enter the position to be eliminated\n");
    scanf("%d",&pos);
    if(pos>=0 && pos<n)
    {
        init_start=pos;
        pos_term=n;
        while(1)
        {
            a[init_start]=a[init_start+1];
            init_start++;
            if(init_start==pos-1)
                break;
        }
        elem=a[pos];
        n--;
        printf("the array is:\n");
        display(a,n);
    }
    else
        printf("enter pposition within the range\n");
    return n;
}
int main()
{
    int a[100],n=0,c=0;
    while(1)
    {
        printf("enter the choice:\n1:Initialize the array elements\n2:Insert elements in predefined position\n3:Delete element from specific position\n4:display the array elements\n5:exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
                accept(a,n);
                break;
            case 2:
                if(n!=0)
                    n=inser_elem(a,n);
                else
                    printf("insert the elements first\n");
                break;
            case 3:
                if(n!=0)
                    n=delet_term(a,n);
                else
                    printf("insert elements first\n");
                break;
            case 4:
                display(a,n);
                break;
            default:
                return 0;
        }
        
    }
    
}