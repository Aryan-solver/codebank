#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the row and column:");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //transpose
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //rotate
    for(int i=0;i<n;i++)
    {
        int j=0;
        int k=n-1;
        for(int j=0;j<k;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            k--;
        }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}