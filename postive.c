#include<stdio.h>

int main()
{

    int a;

printf("enter your value: ");
scanf("%d",&a);

    if(a >0)
    {
        printf("num is positive");
    }
    else if(a < 0)
    {
        printf("num is negative");
    }
    else
    {
        printf("num is zero");
    }
}