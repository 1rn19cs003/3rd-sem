#include<stdio.h>
void display(int *c,int n )
{
    int i;
    printf("Elements of the array\n");
	for(i=0;i<n;i++)
		printf("%d\n",c[i]);
}

void accept(int *b,int *n)
{
	int i;
	printf("enter the number of elemnts\n");
	scanf("%d",n);
	printf("Enter the elements\n");
	for(i=0;i<*n;i++)
		scanf("%d",&b[i]);
}
int inser_position(int *a,int n)
{
int pos,elem;
printf("enter the poistion and the element to be inserted\n");
scanf("%d%d",&pos,&elem);
int init_start=n,pos_term=pos;

if( pos >=0 && pos<n)
{
while(1)
	{
		a[init_start]=a[init_start-1];// a[3]=a[2]
		init_start--; // inti_start=2
		if(init_start==pos_term)
			break;
	}
	a[pos]=elem;
	n++;
}
else
	printf("enter the position within the range\n");
return n;
}
int delete_position(int *a,int n)
{
int pos,elem;
printf("enter the poistion\n");
scanf("%d",&pos);
int init_start=pos,pos_term=n;
if( pos >=0 && pos<n)
{
   	 elem=a[pos];
    	while(1)
	{
		a[init_start]=a[init_start+1];// a[2]=a[3]
		init_start++; // inti_start=3
		if(init_start==pos_term-1)
			break;
	}
	n--;
	printf("elelment deleted is %d ",elem);
}
else
	printf("enter the position within the range\n");
return n;
}
int main()
{
    int a[20],n=0,c=0;
    while(1)
    {
        printf("Enter the choice \n1:initialize the array elemnts\n 2:insert elemnts in predefined position \n 3:delete elelmnt for the specific position\n 4:display the array ellemnts\n 5:exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1: accept(a,&n);
                    break;
            case 2: if(n!=0)
                        n=inser_position(a,n);
                    else
                        printf("Insert the elemnts first\n");
                    break;
                    
            case 3: if(n!=0)
                        n=delete_position(a,n);
                    else
                        printf("Insert the elemnts first\n");
                    break;
            case 4: display(a,n);
                    break;
            default: return 0;
        }
    }
}