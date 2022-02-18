#include<stdio.h>
int pali(int n)
{
    int r,rev=0,temp;
    temp=n;
    while(temp>0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    if(rev==n)
    return 1;
    else
    return 0;
}
int  main()
{
    int t,i,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&m);
        if(pali(m))
        printf("True
");
        else
        printf("False
");
    }
}