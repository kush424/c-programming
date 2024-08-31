#include<stdio.h>

int main()
{
int n=3;
//up
for(int i=n ; i>=1 ; i--)// row/colun
{
    for(int j=i ; j<=n ; j++)//space
    {
        printf(" ");
    }
    for(int k=1 ; k<=2*i-1 ; k++)//print *
    {
        printf("*");
    }
    printf("\n");
    //down
    
}

for(int i=2 ; i<=n ; i++)
{
    for(int j=i ; j<=n ; j++)
    {
        printf(" ");
    }
    for(int k=1 ; k<=2*i-1 ; k++)
    {
        printf("*");
    }
    printf("\n");

}
}