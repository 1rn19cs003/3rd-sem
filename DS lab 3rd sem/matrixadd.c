#include<stdio.h>
#include<math.h>
#include <stdlib.h>

void mat1(int a[10][10],int b[10][10],int n,int m)
{
    int i,j;
    printf("Enter the matrix 1\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter matrix 2\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
}
void add(int sum[10][10],int a[10][10],int b[10][10],int n,int m)
{
    int i,j;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum[i][j]=(b[i][j])+(a[i][j]);
        }
    }
    printf("addition of matrix is\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
         printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    

}
int main()
{
    int a[10][10],b[10][10],sum[10][10];
    int m,n,r,c,p;
    printf("Enter the rows and coloum of the matrix 1 respectively\n");
    scanf("%d %d",&n,&m);
    printf("Enter the rows and coloum of the matrix 2 respectively\n");
    scanf("%d %d",&r,&c);
    if(m!=c || n!=r)
    {
        printf("Matrix addition can not be performed\n");
        exit(0);
    }
    mat1(a,b,n,m);
    add(sum,a,b,n,m);
    return 0;
}