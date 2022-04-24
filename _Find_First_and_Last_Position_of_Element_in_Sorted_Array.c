#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,s,j;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            if((arr[i]==s && arr[j]==s))
            {
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    printf("%d %d",-1,-1);
}