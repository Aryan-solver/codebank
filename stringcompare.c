#include<stdio.h>
int main()
{
    int n=0;
    char a[10],b[10];
    printf("enter first string:");
    fgets(a,10,stdin);
    printf("enter second string:");
    fgets(b,10,stdin);
    for(int i=0;a[i]!='\0';i++)
    {
        n++;
    }

    for(int i=0;i<n-1;i++)
    {
        if(a[i]>b[i])
        {
            printf("The first string is greater");
            return 0;
        }
        else if (a[i]<b[i])
        {
            printf("The second string is greater");
            return 0;
        }
        
    }
    printf("The string are equal");
    return 0;

}