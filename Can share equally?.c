#include<stdio.h>
int main()
{
    int X,Y,a;
    scanf("%d%d",&X,&Y);
    a=X+(2*Y);
    if(a%2==0)
    {
        if(X%2==0 && Y%2==0)
        {
        printf("YES");
        }
        else if(X==0 && Y%2!=0)
        {
        	printf("NO");
		}
        else if(X%2==0 && 2*Y%2==0)
        {
        	printf("YES");
		}
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
}