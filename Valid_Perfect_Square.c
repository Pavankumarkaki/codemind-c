#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=arr[i]/2;j++)
        {
            if(j*j==arr[i])
            {
                count++;
            }
        }
        if(count==0)
        printf("False
");
        else
        printf("True
");
        count=0;
    }
}