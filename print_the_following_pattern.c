#include<stdio.h>
int main()
{
    char s[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c ",s[i]);
        }
        printf("
");
    }
}