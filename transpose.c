#include<stdio.h>
int main()
{
    int r,c;
    printf("enter values of r and c:");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("enter values for matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter [%d,%d] element:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("the transpose is:\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}