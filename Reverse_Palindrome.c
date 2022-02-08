#include<stdio.h>
int revs(int n)
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
    int a,i;
    scanf("%d",&a);
    a=a+revs(a);
    while(a!=revs(a))
    {
         a=a+revs(a);
        
    }
    printf("%d",a);
}