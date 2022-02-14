#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int i,count=1;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        count++;
    }
    printf("%d",count);
}