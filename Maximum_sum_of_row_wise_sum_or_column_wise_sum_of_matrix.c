#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],i,j,s=0,max=0;
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            s+=a[i][j];
        }
        if(s>max)
        max=s;
    }
    for(j=0;j<m;j++)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            s+=a[i][j];
        }
        if(s>max)
        max=s;
    }
    printf("%d",max);
}