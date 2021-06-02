#include<stdio.h>
void func(int l,int r,int *a,int t)
{
	int k=1;
	for(int i=0;i<t;i++)
	{
		scanf("%d %d",&l,&r);
		int res=0,c=0;
		
		for(int j=l;j<=r;j++)
		{
			res=res+a[j];
			c++;
		}
		printf("%d\n",res/c);
	}

}
int main()
{
	long long int n,t;
	scanf("%d %d",&n,&t);
	int a[n+1];
	int l,r;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	func(l,r,a,t);
	
	return 0;
}