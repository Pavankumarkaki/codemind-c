#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
            if(arr[i]%2!=0)
            {
                if(i%2!=0)
                {
                    count++;
                }
                else
                {
                    count=0;
                    break;
                }
            }

    }
    if(count==0)
    printf("False");
    else if (count!=0)
    printf("True");
}