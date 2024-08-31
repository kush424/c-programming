#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter your a value:");
    scanf("%d", &a);
    printf("enter your b value:");
    scanf("%d", &b);
    printf("enter your c value:");
scanf("%d",&c);
    if (a >= b)
    {
        if (a >= c)
        {
            printf("a is max");
        }
        else
        {
            printf("c is max");
        }
    }

else
{
    if (b >= c)
    {
        printf("b is max");
    }
    else
    {
        printf("c is max");
    }
}
}