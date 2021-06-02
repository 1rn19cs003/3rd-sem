
#include <stdio.h>
void find(int a[],int n)
{
	int i,m;
	int f,l;
	l =7;
    f=0;
		for(int i=1;i<=n;i++)
		{
			m=(l+f)/2;			
			if(a[i]<=m)
			{
				printf("A\n");
				f=a[i];
			}
			else if(a[i]>m) 
			{
				printf("B\n");
				l=a[i];
			}
		}

}
int main(){
	int n;
	int a[100000];
	scanf("%d", &n); 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	find(a,n);
}
