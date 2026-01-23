#include<stdio.h>
int main()
{
    int i,j;
    int arr[4][2]={{1,4},{2,5},{3,6},{4,7}};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}