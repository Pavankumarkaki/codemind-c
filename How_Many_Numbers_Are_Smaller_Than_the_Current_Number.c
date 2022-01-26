#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int nums[N],arr[N],i,j,count=0;
	for(i=0;i<N;i++)
	{
		scanf("%d",&nums[i]);
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(nums[j]<nums[i])
			count++;
		}
		arr[i]=count;
		count=0;
		printf("%d ",arr[i]);
	}
	
}