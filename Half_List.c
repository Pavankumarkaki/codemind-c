#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],ar[n/2],i,j,k,flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0,j=n-1,k=0;i<n/2,j>=n/2,k<n/2;i++,j--,k++)
    {
        
            flag=arr[i];
            arr[i]=arr[j];
            ar[k]=flag;
            flag=0;
    }
    for(i=n/2,k=0;i<n,k<n/2;i++,k++)
    {
        arr[i]=ar[k];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}