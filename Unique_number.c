#include<stdio.h>
int digits(int n,int *arr)
{
    int r=0,i=0,s=0;
    while(n>0)
    {
        s++;
        r=n%10;
        arr[i]=r;
        i++;
        n=n/10;
    }
    return s;
}
int main()
{
    int n,*arr,s;
    scanf("%d",&n);
    s=digits(n,arr);
    for(int i=0;i<s-1;i++)
    {
        for(int j=1;j<s;j++)
        {
            if(arr[i]==arr[j] && i!=j){
            printf("Not Unique Number");
            return 0;
            }
        }
    }
    printf("Unique Number");
}