#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for (i=0;i<n;i++)
    {
        if(i%2!=0){
            sum+=a[i];
        }
    }
    printf("%d",sum);
}