#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("enter value of r:");
    scanf("%d",&r);
    printf("enter value of c:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter %d,%d element:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

     for(int i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
    

}