#include<stdio.h>
#include<math.h>

int largest(int *a,int *b,int *c)
{
    int large;
    large=(*a>*b)?((*a>*c)?*a:*c):((*b>*c)?*b:*c);
    return large;
    
}

int main()
{
    int *a,*b,*c,p;
    printf("enter the 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    p=largest(&a,&b,&c);
    printf("the largest number=%d", p);
    return 0;
}