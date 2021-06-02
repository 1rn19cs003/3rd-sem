
#include<stdio.h>
#include<math.h>
int rev(int *n)
{
    int rem,temp=0;
    while(*n>0)
    {
        rem=*n%10;
        temp=temp*10+rem;
        *n=*n/10;
    }
    return temp;

}
int main()
{
    int n,temp;
    printf("Enter the number\n");
    scanf("%d",&n);
    temp=rev(&n);
    printf("%d",temp);
}