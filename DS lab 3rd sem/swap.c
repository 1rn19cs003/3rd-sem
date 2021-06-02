#include <stdio.h>
typedef struct emp
{
        char name[20];int age;float salary;
} E;

void accept(E *e1,E *e2)
{
    scanf("%s%d%f",(e1)->name,&(e1->age),&(e1->salary));
    scanf("%s%d%f",(e2)->name,&(e2->age),&(e2->salary));
}
void swap(E *e1,E *e2)
{
    E e3;
    *e1=e3;
    *e1=*e2;
    *e2=e3;
}
void display(E *e1,E *e2)
{
    printf("name=%s age=%d salary=%f\n",e1->name,e1->age,e1->salary);
    printf("name=%s age=%d salary=%f\n",e2->name,e2->age,e2->salary);
}

int main()
{
   E e1,e2;
   accept(&e1,&e2);
   swap(&e1,&e2);
   display(&e1,&e2);
}