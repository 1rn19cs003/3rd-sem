#include<stdio.h>
void accept(int *a,int *n)
{
   int i;
   printf("enter the elements \n");
   for(i=0;i<*n;i++)
   {
      scanf("%d ",&a[i]);
   }
}
void display(int *a,int *n)
{
   int i;
   printf("elements of the array are\n");
   for(i=0;i<*n;i++)
   {
      printf("%d ",a[i]); 
   }
}

int main()
{
   int *n,a[10];
   printf("enter the length of the array\n");
   scanf("%d",&n);
   accept(a,&n);
   display(a,&n);
}