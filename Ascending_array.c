#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int arr[n],i;
 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 int c=1;
 for(i=0;i<n-1;i++)
 {
     if(arr[i]<arr[i+1])
     c++;
 }
 if(c==n)
 printf("yes");
 else
 printf("no");
}