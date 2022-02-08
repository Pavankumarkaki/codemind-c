#include<stdio.h>
int digits(int num)
{
    int r,res=0;
    while(num>0)
    {
        r=num%10;
        res+=r;
        num=num/10;
    }
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n>9)
    {
        n=digits(n);
    }
    printf("%d",n);
}