#include<stdio.h>
int sum=0;
void digi(int n)
{
    int d=n,r;
    while(d>0)
    {
        r=d%10;
        sum+=r;
        d=d/10;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        digi(arr[i]);
    }
    printf("%d",sum);
    
}