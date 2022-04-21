#include<stdio.h>
int add_digits(int n)
{
    int sum=0,r;
    if(n<10)
        return n;
    else{
        while(n>0)
        {
            r=n%10;
            sum+=r;
            n=n/10;
        }
        return add_digits(sum);
    }    
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=add_digits(n);
    printf("%d",k);
}