#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int max=0,i,k;
    scanf("%[^
]s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>max)
        {
            max=s[i];
            k=i;
        }
    }
    printf("%c",s[k]);
}