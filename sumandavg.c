#include<stdio.h>
int main()
{
    int sum=0;
    float avg;
    int arr[10]={3,6,85,6,45,67,98,4,7,70};
    for(int i=0;i<10;i++)
    {
        sum+=arr[i];
        
    }

    avg=(float)sum/10;

    printf("the sum is:%d \n average is:%f",sum,avg);
    return 0;
}