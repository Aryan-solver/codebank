#include<stdio.h>
void rotate(int arr[],int a,int b)
{
    for(int i=a,j=b;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }
    return;
}
int main()
{
    int n,k,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    printf("enter the element of array %d:",i+1);
    scanf("%d",&arr[i]);}

    printf("enter value of k:");
    scanf("%d",&k);
    k=k%n;
    rotate(arr,0,n-1);
    rotate(arr,0,k-1);
    rotate(arr,k,n-1);
    for(int i=0;i<n;i++){printf("%d",arr[i]);}
    

    return 0;

}