#include<stdio.h>

int main()
{
    
//up
    for(int i=1 ; i<=3 ; i++)
    {
        for(int j=3 ; j>=i ; j--)
        {
            printf(" ");
        }
        for(int k=1 ; k<=(2*i-1) ; k++)
        {
            printf("*");
        }
        printf("\n");
    }
//low
         for(int i= 2; i>=1 ; i--)
    {
        for(int j=3 ; j>=i ; j--)
        {
            printf(" ");
        }
        for(int k=1 ; k<=(2*i-1); k++)
        {
            printf("*");
        }
        printf("\n");
}
}