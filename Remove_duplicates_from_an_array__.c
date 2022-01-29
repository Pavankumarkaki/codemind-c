#include<stdio.h>
int main()
{   
	int size;
    scanf("%d",&size);
   int a[size],i,j,k,count=0;
   for(i=0;i<size;i++)
   {
      scanf("%d",&a[i]);//1 2 3 4 3 4
   }
   for(i=0;i<size;i++)//2
   {
      for(j=i+1;j<size;j++)//2
	  {
         if(a[i]==a[j])
		 {
            for(k=j;k<size;k++)//4
			{
               a[k]=a[k+1];
            }
            j--;
            size--;
         }
      }
   }
   for(i=0;i<size;i++)
   {
      printf("%d ",a[i]);
   }
}