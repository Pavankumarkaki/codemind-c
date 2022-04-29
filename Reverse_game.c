#include<stdio.h>
int fib(int n)
{
    int d=n,r,rev=0;
    while(d>0)
    {
        r=d%10;
        rev=rev*10+r;
        d=d/10;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr[i]=fib(arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}