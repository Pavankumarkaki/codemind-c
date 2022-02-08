#include<stdio.h>
int sumdiv (int num)
{
    int sum=0,i;
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n==sumdiv(n))
    printf("True");
    else
    printf("False");
}