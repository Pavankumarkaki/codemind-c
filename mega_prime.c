#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,count=0;
    if(n!=1)
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            count++;
        }
    }
    else
    return 0;
    if(count==0)
    return 1;
    else
    return 0;
}
int main()
{
    int num,r;
    scanf("%d",&num);
    if(prime(num))
    {
        while(num>0)
        {
            r=num%10;
             num=num/10;
        
          if(!prime(r))
            {
                printf("Not Mega Prime");
                return 0;
            }
        }
            printf("Mega Prime");
    }
    else
    printf("Not Mega Prime");
    
}