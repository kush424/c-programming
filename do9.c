#include <stdio.h>

int main()
{
    int a, i = 1;

    printf("enter value");
    scanf("%d", &a);

    do
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("\n %d", i);
           
        }
        i++;
    } 
    while (i<=a);
}