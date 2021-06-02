#include<stdio.h>
void diff(int *n)
{ 
    int c=0,num=0,sum=0;
    while(*n>0)
	{
	    sum=*n%10;
	    num=num*10+sum;
	    *n=*n/10;
		c++;
	}
	printf("%d %d",num,c);
}
int main()
{
	int p,n,x[100];
	
	scanf("%d",&n);
	diff(&n);    
	return 0;
}