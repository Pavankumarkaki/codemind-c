#include<stdio.h>
int divcount(int x)
{
    int i,count=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,i,total=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(divcount(i)==9)
        {
            total++;
            printf("%d ",i);
        }
    }
    printf("
Total=%d",total);
}