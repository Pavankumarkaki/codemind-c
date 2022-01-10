#include<stdio.h>
int main()
{
    int n,r,i,re=0;
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        r=i%10;
        re=(re*10)+r;
        i=i/10;
        
    }
    if(re==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}