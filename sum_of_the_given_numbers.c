#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][2],i,j,sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=arr[i][j]+arr[i][j+1];
            break;
        }
        printf("%d
",sum);
        sum==0;
    }
}