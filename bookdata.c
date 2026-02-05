#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        char name[15];
        float price;
        int no_of_pages;

    }a,b,c;

    printf("enter book name and other information");
    fgets(a.name,15,stdin);
    scanf("%f",&a.price);
    scanf("%d",&a.no_of_pages);
    getchar();

    printf("enter book name and other information");
    fgets(b.name,15,stdin);
    scanf("%f",&b.price);
    scanf("%d",&b.no_of_pages);
    getchar();

    printf("enter book name and other information");
    fgets(c.name,15,stdin);
    scanf("%f",&c.price);
    scanf("%d",&c.no_of_pages);
    getchar();


    printf("Book Details");

    printf("\nBook A\n");
    printf("Name: %s", a.name);
    printf("Price: %f\n", a.price);
    printf("Pages: %d\n", a.no_of_pages);

    printf("\nBook B\n");
    printf("Name: %s", b.name);
    printf("Price: %f\n", b.price);
    printf("Pages: %d\n", b.no_of_pages);

    printf("\nBook C\n");
    printf("Name: %s", c.name);
    printf("Price: %f\n", c.price);
    printf("Pages: %d\n", c.no_of_pages);

}