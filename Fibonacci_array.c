#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if(n>3)
    {
        for(i=2;i<n;i++)
        {
            if(arr[i]!=arr[i-1]+arr[i-2])
            {
                printf("no");
                return 0;
            }
        }
    printf("yes");
    }
    else
    printf("no");
    
}