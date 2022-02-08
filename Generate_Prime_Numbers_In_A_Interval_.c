#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    { 
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    return 1;
    else
    return 0;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        if(prime(i))
        printf("%d
",i);
    }
}