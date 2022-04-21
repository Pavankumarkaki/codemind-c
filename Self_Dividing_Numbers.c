#include<stdio.h>
int sd(int n)
{
    int temp=n,r;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(r==0)
        return 0;
        else if(temp%r!=0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(i<10)
        printf("%d ",i);
        else if(sd(i))
        printf("%d ",i);
    }
    
}