#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int v=0,c=0,d=0,sp=0,i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=65 && s[i]<=122)
        {
            //alpha
            if(s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A' ||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
        else if(s[i]>=48 && s[i]<=58)
        {
            //num
            d++;
        }
        else if(s[i]==32)
        {
            sp++;
        }
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d",sp);
}