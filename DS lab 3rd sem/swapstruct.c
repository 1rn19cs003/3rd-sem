#include<stdio.h>
typedef struct first
{
    int num1;
    int num2;
}N;
typedef struct two
{
    int num3;
    int num4;
}N2;
void display(N*e1,N2*e2)
{
    printf("num1=%d num2=%d\n",(e1->num1),(e1->num2));
    printf("num3=%d num4=%d\n",(e2->num3),(e2->num4));
}
void swap(N*e1,N2*e2)
{
    int res;
    res=e1->num1;
    e1->num1=e1->num2;
    e1->num2=res;
}
int main()
{
    N e1;
    N2 e2;
    printf("Enter the two number for struct 1\n");
    scanf("%d%d",&e1.num1,&e1.num2);

    printf("Enter the two number for struct 2\n");
    scanf("%d%d",&e2.num3,&e2.num4);
    swap(&e1,&e2);
    display(&e1,&e2);
}
