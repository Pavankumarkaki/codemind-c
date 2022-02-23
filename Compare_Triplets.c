#include<stdio.h>
int main()
{
    int a[3],b[3],ali=0,bob=0,i;
    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    for(i=0;i<3;i++)
    scanf("%d",&b[i]);
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        ali++;
        else if (a[i]<b[i])
        bob++;
    }
    printf("%d ",ali);
    printf("%d",bob);
}