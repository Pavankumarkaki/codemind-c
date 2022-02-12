#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,max=0,ec;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&ec);
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]+ec>=max)
        {
            printf("True ");
        }
        else
        printf("False ");
    }
}