#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    char ch;
    char str[20];
    ptr=fopen("data.txt","w");
    if(ptr==NULL)
    {
        printf("The file does not created.");
        return 0;
    }
    else{
        putc('H',ptr);
        putc('i',ptr);
        fprintf(ptr," dosto");
        fclose(ptr);
    }
    ptr=fopen("data.txt","r");
    if(ptr==NULL)
    {
        printf("The file does not opened.");
        return 0;
    }
    else{
        ch=getc(ptr);
        printf("%c",ch);
        ch=getc(ptr);
        printf("%c",ch);
        fscanf(ptr,"%s",str);
        printf(" %s",str);
        fclose(ptr);
    }
    return 0;
}