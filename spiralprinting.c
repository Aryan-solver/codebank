#include<stdio.h>
int main()
{
    int n;
    printf("enter rows and column:");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int maxrow=n-1;
    int minrow=0;
    int maxcolu=n-1;
    int mincolu=0;
    int count=0;
    int terms=n*n;
    while(count<terms)
    {
        for(int j=mincolu;j<=maxcolu;j++)
        {
            printf("%d ",arr[minrow][j]);
            count++;
        }
        minrow++;  
        if(count>=terms) break;
        for(int i=minrow;i<=maxrow;i++)
        {
            printf("%d ",arr[i][maxcolu]);
            count++;
        }
        maxcolu--;  
        if(count>=terms) break;
        for(int j=maxcolu;j>=mincolu;j--)
        {
            printf("%d ",arr[maxrow][j]);
            count++;
        }
        maxrow--;  
        if(count>=terms) break;
        for(int i=maxrow;i>=minrow;i--)
        {
            printf("%d ",arr[i][mincolu]);
            count++;
        }
        mincolu++; 
        if(count>=terms) break;

    }

    return 0; 
} 