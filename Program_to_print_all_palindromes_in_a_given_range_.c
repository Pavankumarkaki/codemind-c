#include<stdio.h>
int revrs(int n)
{
    int r,res=0;
    while(n>0)
    {
        r=n%10;
        res=res*10+r;
        n=n/10;
    }
    return res;
}
int main()
{
    int x,y,i;
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        if(i==revrs(i))
        {
            printf("%d ",i);
        }
    }
}