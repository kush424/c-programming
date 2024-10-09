#include <stdio.h>

void cub(int a)
{
    printf("cub %d",a*a*a);
}

void main()
{
    int a;

    printf("enter your value: ");
    scanf("%d",&a);
    cub(a);
    
}