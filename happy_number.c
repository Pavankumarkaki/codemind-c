#include<stdio.h>
#include<math.h>
int ssn(int n)
{
    int r,sum=0;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,2);
        n=n/10;
    }
    return sum;
}
int main()
{
    int n,x;
    scanf("%d",&n);
    while(ssn(n)>9)
    {
        n=ssn(n);
    }
    if(ssn(n)==1 || ssn(n)==7)
    {
        printf("True");
    }
    else
    printf("False");
    
    
}