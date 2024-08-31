#include<stdio.h>


void main()
{
    int a=10, b=6, sub,add,mul,div,mod;
    sub=a-b;
    add=a+b;
    mul=a*b;
    div=a/b;
    mod=a%b;

printf("\n%d - %d =%d",a,b,sub);
printf("\n%d - %d =%d",a,b,a+b);
printf("\n%d + %d =%d",a,b,add);
printf("\n%d * %d =%d",a,b,mul);
printf("\n%d * %d =%d",a,b,div);
printf("\n%d %% %d =%d",a,b,mod);
}