#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("file.txt","w");
    if(ptr==NULL)
    {
        printf("File cannot be created.");
    }
    else{
        fprintf(ptr,"Hello");
        fclose(ptr);
    }
    ptr=fopen("file.txt","a");
    if(ptr==NULL)
    {
        printf("file cannot be opened.");
    }
    else{
        fprintf(ptr," frineds.");
        fclose(ptr);
    }
    ptr=fopen("file.txt","r");
    if(ptr==NULL)
    {
        printf("file cannot be opened.");
    }
    else{
        char ch;
        while((ch = getc(ptr))!=EOF)
        {
            printf("%c",ch);
        }
        fclose(ptr);
    }
    return 0;
}