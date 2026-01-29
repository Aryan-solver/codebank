#include<stdio.h>
int main()
{
    int n,count;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count=1;
            }
        }
        if(count==0)
        {
            printf("\n%d is unique",arr[i]);
            break;
        }
    }

    return 0;
}