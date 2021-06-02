#include<stdio.h>
void display(int *a,int n)
{
    printf("Your new array is\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
void accept(int *a,int n)
{
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void duplicate(int *a,int *b,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
    	    {
    		    for(int k=j;k<n;k++)
    		    {
    			    a[k]=a[k+1];
			    }
			    n--;
			    j--;
            }
        }
    }
    display(a,n);
}
int main()
{
    int a[100],b[100],i,j,n;
    printf("Enter the length of the array\n");
    scanf("%d",&n);
    accept(a,n);
    duplicate(a,b,n);
    return 0;
}