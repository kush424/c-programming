#include <stdio.h>

int main()
{
    int i,j;
    for(i=41;j<=45;i++)
    {
        for(j=41;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}