#include<stdio.h>
void pretty(int a,int b)
{
    int i,count=0,r;
    for(i=a;i<=b;i++)
    {
            r=i%10;
            if((r==2 || r==3 )|| r==9)
            count++;
            r==0;
    }
    printf("%d
",count);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][2],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
             pretty(arr[i][j],arr[i][j+1]);
            break;
        }
            
    }
}