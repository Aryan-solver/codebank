#include<stdio.h>
int main()
{
    int i,n,j,temp;
    float median;
    printf("enetr the value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("\nthe sorted array is");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    if(n%2!=0)
    {
        median=arr[n/2];
    }
    else{
        median=(arr[n/2]+arr[(n/2)-1])/2;
    }


    printf("\nthe median is:%f",median);
    return 0;
}