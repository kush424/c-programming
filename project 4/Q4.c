#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++)
    {
        for (int k=6-i;k<=4;k++)
        {
            printf(" ");
        }
        for(int j=6-i;j>=1;j--)
        {
            if(j%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}