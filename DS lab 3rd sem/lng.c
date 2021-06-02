#include<stdio.h>
void display(int *a,int n)
{
    int i=0;
    printf("Largest element is = %d\n",a[n-1]);
    printf("Second Largest element is = %d\n",a[n-2]);
    printf("Second Smallest element is = %d\n",a[i+1]);
    printf("Smallest element is = %d \n",a[i]);
    
}
void short_array(int *a,int *n)
{
    int max=0,i,j;
      for(i=0;i<*n;++i) 
        {
            for(j=i+1;j<*n;++j)
            {
                if (a[i]>a[j]) 
                {
                    max=a[i];
                    a[i]=a[j];
                    a[j]=max;
                }
            }
        }
}
void accept(int *a,int *n)
{
    printf("Enter the elements of the array \n");
    int i;
    for(i=0;i<*n;i++)
        scanf("%d",&a[i]);
}
int main()
{
    int a[100],n;
    printf("Enter the length of the array \n");
    scanf("%d",&n);

    accept(a,&n);
    short_array(a,&n);
    display(a,n);
    return 0;
}