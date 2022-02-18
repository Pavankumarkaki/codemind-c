#include<stdio.h>
int main()
{
    int l,b,w,c,p,a,t;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    l=l-(w);
    b=b-(w);
    p=2*(l+b);
    a=p*w;
    t=a*c;
    if(l>(w) && b>(w))
    printf("%d",t);
    else
    printf("Impossible");
}