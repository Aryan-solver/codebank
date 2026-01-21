#include<stdio.h>
int main()
{
    int arr[10]={3,6,7,55,66,8,45,9,78,90};
    int largest,Second_Largest,Smallest,Second_Smallest;
    largest=arr[0];
    Smallest=arr[0];
    Second_Smallest=arr[0];
    for(int i=0;i<10;i++)
    {
        if(largest<arr[i]) largest=arr[i];
    }

    Second_Largest=arr[0];
    for(int i=0;i<10;i++)
    {
        if(Second_Largest<arr[i] && arr[i]<largest) Second_Largest=arr[i];
    }


    Smallest=arr[0];
    for(int i=0;i<10;i++)
    {
        if(Smallest>arr[i]) Smallest=arr[i];
    }

    
    Second_Smallest=arr[0];
    for(int i=0;i<10;i++)
    {
        if(Second_Smallest>arr[i] && arr[i]>Smallest) Second_Smallest=arr[i];
    }

    printf("\n%d\n%d\n%d\n%d",largest,Second_Largest,Smallest,Second_Smallest);
    return 0;

}