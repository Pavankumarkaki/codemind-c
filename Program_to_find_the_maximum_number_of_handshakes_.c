#include<stdio.h>
int main()
{
	int n,i,j,count=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			//printf("%d ",j);
			count++;
		}
	}
	printf("%d",count);
	
}