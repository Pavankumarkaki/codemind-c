#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=-789)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    arr[i]=arr[j]=-789;
                }
            } 
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=-789){
            printf("%d ",arr[i]);
            c++;
        }
    }
    if(c==0)
    printf("%d",-1);
}