#include<stdio.h>
int linearSearch(int n,int arr[n],int number)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==number){
            return i;
        }
    }
    return -1;


}
int main(){
    int n,number,ans;
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
        printf(" %d",arr[i]);
    }

    printf("\nnumber to search:");
    scanf("%d",&number);


    ans=linearSearch(n,arr,number);
    if(ans!= -1)
    printf("\nfound at %d",ans);
    else printf("not found");
    return 0;

}