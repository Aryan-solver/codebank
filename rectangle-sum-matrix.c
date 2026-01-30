#include<stdio.h>
int main()
{
    int r,c,p,k,u,t,sum=0;
    printf("enter values of r1 and c1:");
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
    printf("enter value of p and k:");
    scanf("%d%d",&p,&k);
    printf("enter value of u and t:");
    scanf("%d%d",&u,&t);
    for(int i=p;i<=u;i++)
    {
        for(int j=k;j<=t;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("the sum is:");
    
        printf("%d",sum);
    return 0;
}