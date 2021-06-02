#include<stdio.h>
int main()
{
    struct book
    {
        char name;
        int page;
        float price;
    };
    int n;
    printf("Enter the number of book's data you want to store\n");
    scanf("%d",&n);
    
    struct book b[n];
    
    printf("Enter the name ,page and price of your book\n");

    for(int i=1;i<=n;i++)
    {
        scanf("%c %d %f\n",&b[i].name,&b[i].page,&b[i].price);
    }
    printf("your book data is\n");

    for(int i=1;i<=n;i++)
    {
        printf("%c %d %f\n",b[i].name,b[i].page,b[i].price);
    }
    
    return 0;

}