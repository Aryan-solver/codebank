#include<stdio.h>
int main()
{
    int arr[5]={1,3,2,1,4};
    int i,j,m;
    int found=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                found=1;
                m=i;
                break;

            }
        }
    }
    if(found==1)
    printf("%d",arr[m]);
    else
    printf("not found");
    return 0;
}