#include<stdio.h>
int hcf(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,h=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    h=hcf(a[0],a[1]);
    for(i=2;i<n;i++)
    {
        h=hcf(h,a[i]);
    }
    printf("%d",h);
}