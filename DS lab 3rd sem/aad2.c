#include<stdio.h>
typedef struct emp
{
    char name[200];
    int age;
    float salary;

}E;
 int main()
 {
    E e1;
        scanf("%s%d%f\n",&(e1.name),&(e1.age),&(e1.salary));

        printf("name=%s age=%d salary%f\n",(e1).name,(e1).age,(e1).salary);
 }