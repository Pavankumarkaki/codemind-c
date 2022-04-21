#include<stdio.h>
#include<math.h>
int main()
{
    double p, t,r,a;
    scanf("%lf%lf%lf",&p,&r,&t);
    a=p*(pow((1+r/100.0),t));
    printf("%.2lf",a);
    
}