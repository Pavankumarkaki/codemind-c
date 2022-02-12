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
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num,j,coun=0;
    scanf("%d",&num);
    for(j=1;j<=num;j++)
    {
        if(num%j==0)
        {
            if(!prime(j))
            {
                coun++;
            }
        }
    }
    printf("%d",coun);
}