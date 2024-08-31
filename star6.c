#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++) // row
    {
        for (int j = n-i; j >= 1; j--) // spc

        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++) // inc
        {
            printf(" %d", k);
        }
        for (int q = i - 1; q >= 1; q--) // dec
        {
            printf(" %d", q);
        }
        printf("\n");
    }
}