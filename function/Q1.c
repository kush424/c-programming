#include<stdio.h>

void div(int num)
{
    if(num%3==0 && num%5==0)
    {
        printf("true ");
    }
    else
    {
        printf("false");
    }
}

void main()
{
    int num;

    printf("enter the num value:");
    scanf("%d",&num);
    div(num);
}

