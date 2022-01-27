#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int c[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}	
	int count = 0;
	    for(i=0; i<n; i++)
		{
	        if(c[i]!=0)
			{
	             for(j=i+1; j<n; j++)
				 {
	                if(c[i]==c[j])
						{
		                    count++;
		                    c[j]=0;
		                    break;
	                    }
	             }           
	        }
	    }
	    printf("%d", count);
}