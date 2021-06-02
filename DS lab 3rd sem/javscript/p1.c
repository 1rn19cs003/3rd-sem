#include<stdio.h>
#include<math.h>
void accept_arr1(int m,int n,int a[10][10])
{
    int i,j;
    printf("Enter the array 1 elements\n");
    for(i=0;i<m;i=i+1)
    {
        for(j=0;j<n;j=j+1)
        {
            scanf("%d",&a[i][j]);
        }
    }
    return;
}
void display(int m, int s,int c[10][10])
{
    int i,j;
    printf("multiplication of two array is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<s;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return;
}

void accept_arr2(int r, int s,int b[10][10])
{
    int i,j;
    printf("Enter the array 2 elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<s;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    return;
}
void multiply(int m,int s,int n,int a[10][10],int b[10][10],int c[10][10])
{
    int i,j,k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<s;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    return;
}
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int m,n,r,s,i,j;
    printf("Enter the Row and Coloumn of the array 1\n");
    scanf("%d %d",&m,&n);
    accept_arr1(m,n,a);
    printf("Enter the Row and Coloumn of the array 2\n");
    scanf("%d %d",&r,&s);
    accept_arr2(r,s,b);
    if(n==r)
            {
                multiply(m,s,n,a,b,c);   
            }
    else 
        printf("Multiplication of given matrix is not possible\n");
    display(m,s,c);
    return 0;
}