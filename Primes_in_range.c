#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int i,j,c1=0,c2=0;
    for(i=m;i<=n;i++)
    {
        if(i!=1)
        {
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    c1=1;
                    break;
                }
            }
            if(c1==0)
            c2++;
            c1=0;
            
        }
    }
    printf("%d",c2);
    
}