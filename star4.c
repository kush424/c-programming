#include<stdio.h>

int main()
{
    int n=5;

    for(int i=1 ; i<=n ; i++)// row
    {
        for(int j=n ; j>i ; j--)// spase
        {
            printf(" ");
        }

        for(int j=1 ; j<=i ; j++)// INC
        {
            printf("%d",j);
        }

         for(int j=i-1 ; j>=1 ; j--)// DEC
        {
            printf("%d",j);
        }

    //    for (int j, k = (2 * i) - 1; j <= (2 * i) - 1; j++, k--) {
    //        printf("%d", k < j ? k : j);
    //    }
        printf("\n");
    }
}