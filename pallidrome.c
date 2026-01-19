#include<stdio.h>
int main()
{
    int n,pallidrome;
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

    pallidrome=1;

    for(int i=0;i<n;i++)
    {
        for(int j=n-1-i;j>=n-i-1;j--)
        {
            if(arr[i]!=arr[j])
            {
                pallidrome=0;
                break;
            }
        }
    }
    if(pallidrome==1)
    printf("\narray is pallidrome");
    else
    printf("\narray is not a pallidrome");
    return 0;

}
