#include<stdio.h>
#include<math.h>
long bin(int *a)//call by reference
{
    long long r1,r2=0,r3=1;
    // calculating decimal to binary
    while(*a!=0)
    {
        r1=*a%2;
        *a=*a/2;
        r2=r2+r3*r1;
        r3=r3*10;
    }
    printf("%lld",r2);

}
int main()
{
    //used long variable to store large value
    long long int *a;
    printf("enter the number \n");
    scanf("%lld",&a);
    bin(&a);//passing address
    return 0;
}
