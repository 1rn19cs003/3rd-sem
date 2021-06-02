#include<stdio.h>
#include<string.h>
struct first
{
    int ei;
    char ename[20];
    float esal;
};
typedef struct first N;
void swap(N *e1,N *e2)
{
    N res;
    strcpy(res.ename,(*e1).ename);// we can use  -> operator instead of . operator
    res.esal=(*e1).esal;    // example : res.esal=e1->esal
    strcpy((*e1).ename,(*e2).ename);
    (*e1).esal=(*e2).esal;
    strcpy((*e2).ename,res.ename);
    (*e2).esal=res.esal;
}
int main()
{
    N e1={123,"kir",5000}, e2={124,"abhi",7000};
    printf("eid=%d ename=%s esal=%f\n",e1.ei,e1.ename,e1.esal);
    swap(&e1,&e2);
    printf("After swapping the term we got \n");
    printf("eid=%d ename=%s esal=%f\n",e1.ei,e1.ename,e1.esal);
    return 0;
}
