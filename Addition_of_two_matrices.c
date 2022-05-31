#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],b[n][n],i,j,r[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);}
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
        scanf("%d",&b[i][j]);}
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
        r[i][j]=a[i][j]+b[i][j];}
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
        printf("%d",r[i][j]);
        if(j<n-1)
        {
            printf(" ");
        }
        }
        printf("
");
    }
}