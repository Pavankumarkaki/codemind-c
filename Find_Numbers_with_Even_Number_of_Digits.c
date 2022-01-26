#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int nums[N],i,r,re,count=0,mcount=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&nums[i]);
    }
    for(i=0;i<N;i++)
    {
        while(nums[i]>0)
        {
           r=nums[i]%10;
           count++;
           re=re*10+r;
           nums[i]=nums[i]/10;
        }
        if(count%2==0)
        mcount++;
        count=0;
    }
    printf("%d",mcount);
}