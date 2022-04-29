#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int fib[n]={0},i;
    fib[0]=0,fib[1]=1;
    for(i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(i=0;fib[i]<=n;i++)
    {
        if(fib[i]==n)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}