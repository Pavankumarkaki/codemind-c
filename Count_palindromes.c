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
    if(rev==n)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(fib(arr[i]))
        c++;
    }
    printf("%d",c);
    
}