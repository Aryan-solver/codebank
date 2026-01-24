#include<stdio.h>
int main()
{
    int arr[5]={4,6,7,6,4};
    for(int i=0;i<5;i++)
    {
        int count=0;
        int alreadycounted=0;
        for(int k=0;k<i;k++)
        {
            if(arr[i]==arr[k])
            {
                alreadycounted=1;
                break;
            }
        }
        if(alreadycounted)continue;
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        printf("%d=%d\n",arr[i],count+1);
    }
}